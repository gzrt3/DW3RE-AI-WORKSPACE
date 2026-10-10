// SPDX-License-Identifier: GPL-3.0-or-later
#include "session.h"
#include <algorithm>
#include <fstream>
#include <iomanip>
#include <set>
#include <sstream>
#include <stdexcept>
#define NOMINMAX
#include <windows.h>
#include <bcrypt.h>

namespace dw3::host {
namespace {
constexpr size_t maximum=1024*1024;
struct Handle {
    HANDLE value=INVALID_HANDLE_VALUE;
    ~Handle(){if(value!=INVALID_HANDLE_VALUE)CloseHandle(value);}
    Handle(const Handle&)=delete;
    explicit Handle(HANDLE input):value(input) {
        if(value==INVALID_HANDLE_VALUE)throw std::runtime_error("Native profile file unavailable or locked");
    }
};
using Bytes=std::vector<std::byte>;
void number(Bytes& out,uint64_t value,unsigned width) {
    for(unsigned i=0;i<width;i++)out.push_back(std::byte((value>>(8*i))&255));
}
void text(Bytes& out,const std::string& value) {
    if(value.size()>240)throw std::invalid_argument("Profile string exceeds bound");
    number(out,value.size(),4);
    for(unsigned char c:value)out.push_back(std::byte(c));
}
struct Reader {
    std::span<const std::byte> data;size_t offset{};
    uint64_t number(unsigned width) {
        if(width>data.size()-offset)throw std::runtime_error("Truncated profile");
        uint64_t value{};
        for(unsigned i=0;i<width;i++)value|=uint64_t(std::to_integer<uint8_t>(data[offset++]))<<(8*i);
        return value;
    }
    std::string text() {
        const auto size=number(4);
        if(size>240 || size>data.size()-offset)throw std::runtime_error("Profile string exceeds bound");
        std::string result(reinterpret_cast<const char*>(data.data()+offset),size_t(size));
        offset+=size_t(size);return result;
    }
};
void valid_digest(const std::string& digest) {
    if(digest.size()!=64 || digest.find_first_not_of("0123456789abcdef")!=std::string::npos)
        throw std::invalid_argument("Invalid profile digest");
}
void validate(const ReferenceProfile& profile) {
    valid_digest(profile.installation);
    if(!profile.revision || profile.assets.size()>4096)throw std::invalid_argument("Profile count or revision invalid");
    std::set<std::string> keys;
    for(const auto& ref:profile.assets) {
        if(ref.version!=fate::dual::GameVersion::base && ref.version!=fate::dual::GameVersion::xl)
            throw std::invalid_argument("Invalid asset version");
        if(ref.kind==AssetKind::resource) {
            if(!ref.path.empty() || ref.file_bytes || !ref.file_sha256.empty())throw std::invalid_argument("Invalid RID metadata");
        } else if(ref.kind==AssetKind::file) {
            valid_digest(ref.file_sha256);
            if(ref.rid || ref.path.empty() || ref.path.size()>240 || ref.path.find('\0')!=std::string::npos)
                throw std::invalid_argument("Invalid file reference");
        } else throw std::invalid_argument("Invalid asset kind");
        const auto key=std::to_string(int(ref.version))+":"+std::to_string(int(ref.kind))+":"+
            (ref.kind==AssetKind::file ? ref.path : std::to_string(ref.rid));
        if(!keys.insert(key).second)throw std::invalid_argument("Duplicate profile reference");
    }
}
Bytes encode(const ReferenceProfile& profile) {
    validate(profile);Bytes out;
    for(char c:std::string_view("DW3PCREF"))out.push_back(std::byte(c));
    number(out,1,4);number(out,profile.revision,8);text(out,profile.installation);number(out,profile.assets.size(),4);
    for(const auto& ref:profile.assets) {
        number(out,ref.version==fate::dual::GameVersion::base ? 0 : 1,1);number(out,uint8_t(ref.kind),1);
        number(out,ref.rid,4);text(out,ref.path);number(out,ref.file_bytes,8);text(out,ref.file_sha256);
    }
    const auto checksum=sha256(out);
    for(char c:checksum)out.push_back(std::byte(c));
    if(out.size()>maximum)throw std::invalid_argument("Profile exceeds bound");
    return out;
}
ReferenceProfile decode(const Bytes& bytes) {
    if(bytes.size()<88 || bytes.size()>maximum)throw std::runtime_error("Invalid profile size");
    const auto payload=std::span(bytes).first(bytes.size()-64);
    const std::string expected(reinterpret_cast<const char*>(bytes.data()+payload.size()),64);
    if(sha256(payload)!=expected)throw std::runtime_error("Profile checksum mismatch");
    Reader in{payload};
    for(char c:std::string_view("DW3PCREF"))if(in.number(1)!=uint8_t(c))throw std::runtime_error("Invalid profile magic");
    if(in.number(4)!=1)throw std::runtime_error("Unsupported profile schema");
    ReferenceProfile result{in.number(8),in.text(),{}};
    const auto count=in.number(4);if(count>4096)throw std::runtime_error("Profile count exceeds bound");
    for(uint64_t i=0;i<count;i++) {
        const auto version=in.number(1);if(version>1)throw std::runtime_error("Unknown profile edition");
        AssetRef ref{version==0 ? fate::dual::GameVersion::base : fate::dual::GameVersion::xl,
            AssetKind(in.number(1)),uint32_t(in.number(4)),in.text(),in.number(8),in.text()};
        result.assets.push_back(std::move(ref));
    }
    if(in.offset!=payload.size())throw std::runtime_error("Profile trailing data");
    validate(result);return result;
}
std::filesystem::path checked_root(const std::filesystem::path& root) {
    const auto actual=std::filesystem::canonical(root);
    if(!std::filesystem::is_directory(actual))throw std::invalid_argument("Profile root must be a directory");
    return actual;
}
void reject_reparse(const std::filesystem::path& path) {
    const auto attributes=GetFileAttributesW(path.c_str());
    if(attributes!=INVALID_FILE_ATTRIBUTES && (attributes&FILE_ATTRIBUTE_REPARSE_POINT))
        throw std::runtime_error("Profile file must not be a link");
}
}
std::string sha256(std::span<const std::byte> bytes) {
    if(bytes.size()>ULONG_MAX)throw std::invalid_argument("Hash input exceeds bound");
    std::array<unsigned char,32> output{};
    if(!BCRYPT_SUCCESS(BCryptHash(BCRYPT_SHA256_ALG_HANDLE,nullptr,0,
        reinterpret_cast<PUCHAR>(const_cast<std::byte*>(bytes.data())),ULONG(bytes.size()),output.data(),32)))
        throw std::runtime_error("Profile SHA256 failed");
    std::ostringstream digest;digest<<std::hex<<std::setfill('0');
    for(auto value:output)digest<<std::setw(2)<<unsigned(value);
    return digest.str();
}
ReferenceProfile load_profile(const std::filesystem::path& root) {
    const auto path=checked_root(root)/"session.state";reject_reparse(path);
    Handle file(CreateFileW(path.c_str(),GENERIC_READ,FILE_SHARE_READ,nullptr,OPEN_EXISTING,FILE_ATTRIBUTE_NORMAL,nullptr));
    LARGE_INTEGER size{};
    if(!GetFileSizeEx(file.value,&size) || size.QuadPart<0 || size.QuadPart>maximum)
        throw std::runtime_error("Profile exceeds bound");
    Bytes bytes(size_t(size.QuadPart));DWORD actual{};
    if(!ReadFile(file.value,bytes.data(),DWORD(bytes.size()),&actual,nullptr) || actual!=bytes.size())
        throw std::runtime_error("Short profile read");
    return decode(bytes);
}
void store_profile(const std::filesystem::path& root,const ReferenceProfile& profile,uint64_t expected) {
    const auto bytes=encode(profile);const auto folder=checked_root(root);
    const auto lock_path=folder/"session.lock";reject_reparse(lock_path);
    Handle lock(CreateFileW(lock_path.c_str(),GENERIC_WRITE,0,nullptr,OPEN_ALWAYS,FILE_ATTRIBUTE_NORMAL,nullptr));
    const auto final=folder/"session.state";reject_reparse(final);
    const bool existed=std::filesystem::exists(final);
    if((existed ? load_profile(folder).revision : 0)!=expected || expected==UINT64_MAX || profile.revision!=expected+1)
        throw std::runtime_error("Profile revision conflict");
    if(existed && load_profile(folder).installation!=profile.installation)
        throw std::runtime_error("Profile installation conflict");
    std::array<std::byte,16> random{};
    if(!BCRYPT_SUCCESS(BCryptGenRandom(nullptr,reinterpret_cast<PUCHAR>(random.data()),16,BCRYPT_USE_SYSTEM_PREFERRED_RNG)))
        throw std::runtime_error("Profile temporary identity failed");
    const auto temporary=folder/("session-"+sha256(random)+".tmp");
    bool created=false;
    try {
        {
            Handle file(CreateFileW(temporary.c_str(),GENERIC_WRITE,0,nullptr,CREATE_NEW,
                FILE_ATTRIBUTE_NORMAL|FILE_FLAG_WRITE_THROUGH,nullptr));
            created=true;
            DWORD written{};
            if(!WriteFile(file.value,bytes.data(),DWORD(bytes.size()),&written,nullptr) || written!=bytes.size() || !FlushFileBuffers(file.value))
                throw std::runtime_error("Profile write/flush failed");
        }
        if(!MoveFileExW(temporary.c_str(),final.c_str(),MOVEFILE_REPLACE_EXISTING|MOVEFILE_WRITE_THROUGH))
            throw std::runtime_error("Profile replacement failed");
    } catch(...) { if(created)DeleteFileW(temporary.c_str());throw; }
}
}
