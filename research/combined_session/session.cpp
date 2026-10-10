// SPDX-License-Identifier: GPL-3.0-or-later
#include "session.h"
#include "fate/provenance.hpp"
#include <limits>
#include <set>
#include <sstream>
#include <stdexcept>
#define NOMINMAX
#include <windows.h>

namespace dw3::host {
namespace {
void validate_version(fate::dual::GameVersion version) {
    if(version!=fate::dual::GameVersion::base && version!=fate::dual::GameVersion::xl)
        throw std::invalid_argument("Unknown resource version");
}
}
void CombinedSession::mount(const std::filesystem::path& root,
    std::span<const fate::vfs::ExtractedReleaseSpec> specs) {
    if(generation_==std::numeric_limits<uint64_t>::max())throw std::overflow_error("Mount generation exhausted");
    auto candidate=std::make_shared<Mount>();
    candidate->root=std::filesystem::canonical(root);
    candidate->files.mount(candidate->root,specs);
    std::ostringstream identity;
    identity<<"dw3-native-extracted-references-v1\n";
    for(const auto& spec:specs) {
        const size_t index=spec.version==fate::dual::GameVersion::base ? 0 : 1;
        candidate->specs[index]=spec;
        candidate->release_roots[index]=std::filesystem::canonical(candidate->root/spec.directory);
    }
    for(const auto& spec:candidate->specs) {
        // Include resolver metadata too: identical bytes with different indexing
        // parameters must never restore the same reference profile.
        for(const auto& text:{spec.directory,spec.elf_name,spec.archive_name,spec.elf_sha256,spec.archive_sha256})
            identity<<text.size()<<':'<<text<<'\n';
        identity<<spec.elf_bytes<<' '<<spec.archive_bytes<<' '<<spec.table_address<<' '<<spec.resource_count<<'\n';
    }
    const std::string encoded=identity.str();
    candidate->identity=sha256(std::as_bytes(std::span(encoded)));
    mount_=std::move(candidate);++generation_;
}
const std::string& CombinedSession::identity() const {
    if(!mount_)throw std::logic_error("Combined content not installed");
    return mount_->identity;
}
ReadHandle CombinedSession::open(AssetRef asset) const {
    (void)identity();validate_version(asset.version);
    if(asset.kind==AssetKind::resource) {
        if(!asset.path.empty() || asset.file_bytes || !asset.file_sha256.empty())
            throw std::invalid_argument("Resource reference has file metadata");
        if(asset.rid>=mount_->files.resource_count(asset.version))throw std::out_of_range("RID absent in requested edition");
    } else if(asset.kind==AssetKind::file) {
        if(asset.rid)throw std::invalid_argument("File reference has a RID");
        const auto size=mount_->files.file_size(asset.version,asset.path);
        const auto& spec=mount_->specs[asset.version==fate::dual::GameVersion::base ? 0 : 1];
        const auto file=mount_->root/spec.directory/asset.path;
        const auto fingerprint=fate::provenance::fingerprint(file);
        if(fingerprint.file_size!=size)throw std::runtime_error("File changed while pinning reference");
        if(!asset.file_sha256.empty() && (asset.file_sha256!=fingerprint.sha256 || asset.file_bytes!=size))
            throw std::runtime_error("Persisted file identity mismatch");
        asset.file_bytes=size;asset.file_sha256=fingerprint.sha256;
    } else throw std::invalid_argument("Unknown resource kind");
    return {mount_,std::move(asset)};
}
std::vector<std::byte> CombinedSession::read(const ReadHandle& handle,uint64_t limit) const {
    if(!mount_ || handle.mount.lock()!=mount_)throw std::invalid_argument("Stale or foreign mount handle");
    const auto& asset=handle.asset;
    const auto verified=open(asset);
    if(verified.asset!=asset)throw std::invalid_argument("Unpinned or malformed asset handle");
    if(asset.kind==AssetKind::resource)return mount_->files.read_resource(asset.version,asset.rid,limit);
    auto result=mount_->files.read_file(asset.version,asset.path,limit);
    if(result.size()!=verified.asset.file_bytes || sha256(result)!=verified.asset.file_sha256)
        throw std::runtime_error("File changed during read");
    return result;
}
SectorHandle CombinedSession::search(fate::dual::GameVersion version,std::string_view name) {
    (void)identity();validate_version(version);
    SectorHandle handle;
    handle.mount=mount_;
    handle.extent=mount_->sectors.search(version,name);
    handle.generation=generation_;
    handle.issued_extent_=handle.extent;
    return handle;
}
std::vector<std::byte> CombinedSession::read_sectors(const SectorHandle& handle,uint32_t relative,uint32_t count) const {
    (void)identity();
    if(handle.generation!=generation_ || handle.mount.lock()!=mount_)
        throw std::invalid_argument("Stale or foreign sector handle");
    if(!handle.issued_extent_ || handle.extent.version!=handle.issued_extent_->version ||
        handle.extent.relative_path!=handle.issued_extent_->relative_path ||
        handle.extent.lsn!=handle.issued_extent_->lsn || handle.extent.bytes!=handle.issued_extent_->bytes)
        throw std::invalid_argument("Altered or unissued sector handle");
    const uint64_t lsn=uint64_t(handle.extent.lsn)+relative;
    if(lsn>UINT32_MAX || uint64_t(relative)*2048>handle.extent.bytes ||
        uint64_t(count)*2048>uint64_t(handle.extent.bytes)-uint64_t(relative)*2048)
        throw std::out_of_range("Sector read crosses pinned extent");
    return mount_->sectors.read(uint32_t(lsn),count);
}
ReferenceProfile CombinedSession::restore(const std::filesystem::path& root) const {
    verify_save_root(root);
    auto result=load_profile(root);
    if(result.installation!=identity())throw std::runtime_error("Profile installation mismatch");
    for(const auto& ref:result.assets) {
        const auto pinned=open(ref);
        if(pinned.asset!=ref)throw std::runtime_error("Profile reference lacks pinned identity");
    }
    return result;
}
ReferenceProfile CombinedSession::commit(const std::filesystem::path& root,
    std::span<const AssetRef> refs,uint64_t expected) const {
    if(expected==std::numeric_limits<uint64_t>::max())throw std::overflow_error("Profile revision exhausted");
    if(refs.size()>4096)throw std::invalid_argument("Profile count exceeds bound");
    verify_save_root(root);
    ReferenceProfile next{expected+1,identity(),{}};
    for(const auto& ref:refs)next.assets.push_back(open(ref).asset);
    store_profile(root,next,expected);return next;
}
void CombinedSession::verify_save_root(const std::filesystem::path& root) const {
    (void)identity();
    const auto actual=std::filesystem::canonical(root);
    for(const auto& input:mount_->release_roots) {
        auto part=actual.begin();bool inside=true;
        for(auto parent=input.begin();parent!=input.end();++parent,++part) {
            if(part==actual.end()) {inside=false;break;}
            const auto left=part->wstring(),right=parent->wstring();
            if(CompareStringOrdinal(left.data(),int(left.size()),right.data(),int(right.size()),TRUE)!=CSTR_EQUAL) {
                inside=false;break;
            }
        }
        if(inside)throw std::invalid_argument("Native profiles must be outside original release directories");
    }
}
}
