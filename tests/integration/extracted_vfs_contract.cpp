#include "fate/vfs/extracted.hpp"
#include "fate/vfs/extracted_sectors.hpp"
#include "fate/provenance.hpp"
#include <fstream>
#include <iostream>
#include <stdexcept>
#include <cstdint>
#include <chrono>
#define NOMINMAX
#include <windows.h>
#include <bcrypt.h>
#include <array>
#include <iomanip>
#include <sstream>

namespace {
class PayloadHasher {
public:
    PayloadHasher() {
        if(!BCRYPT_SUCCESS(BCryptOpenAlgorithmProvider(&algorithm_,BCRYPT_SHA256_ALGORITHM,nullptr,0)))
            throw std::runtime_error("SHA256 provider unavailable");
    }
    ~PayloadHasher(){if(algorithm_)BCryptCloseAlgorithmProvider(algorithm_,0);}
    PayloadHasher(const PayloadHasher&)=delete;
    PayloadHasher& operator=(const PayloadHasher&)=delete;
    std::string digest(std::span<const std::byte> bytes) const {
        BCRYPT_HASH_HANDLE hash{};
        if(!BCRYPT_SUCCESS(BCryptCreateHash(algorithm_,&hash,nullptr,0,nullptr,0,0)))
            throw std::runtime_error("SHA256 hash allocation failed");
        try {
            std::size_t position=0;
            while(position<bytes.size()) {
                const auto count=static_cast<ULONG>(std::min<std::size_t>(bytes.size()-position,1048576u));
                if(!BCRYPT_SUCCESS(BCryptHashData(hash,reinterpret_cast<PUCHAR>(const_cast<std::byte*>(bytes.data()+position)),count,0)))
                    throw std::runtime_error("SHA256 input failed");
                position+=count;
            }
            std::array<unsigned char,32> result{};
            if(!BCRYPT_SUCCESS(BCryptFinishHash(hash,result.data(),static_cast<ULONG>(result.size()),0)))
                throw std::runtime_error("SHA256 finish failed");
            BCryptDestroyHash(hash);hash=nullptr;
            std::ostringstream text;text<<std::hex<<std::setfill('0');
            for(const auto value:result)text<<std::setw(2)<<static_cast<unsigned>(value);
            return text.str();
        } catch(...) {if(hash)BCryptDestroyHash(hash);throw;}
    }
private:
    BCRYPT_ALG_HANDLE algorithm_{};
};
void require(bool value, const char* message) { if (!value) throw std::runtime_error(message); }
template<class F> void rejects(F action, const char* message) {
    bool threw = false;
    try { action(); } catch (const std::exception&) { threw = true; }
    require(threw, message);
}
void put(std::vector<std::byte>& bytes, std::size_t offset, std::uint32_t value, unsigned count = 4) {
    for (unsigned i = 0; i < count; ++i) bytes.at(offset + i) = static_cast<std::byte>(value >> (8u*i));
}
void write(const std::filesystem::path& path, const std::vector<std::byte>& bytes) {
    std::ofstream file(path, std::ios::binary);
    file.write(reinterpret_cast<const char*>(bytes.data()), static_cast<std::streamsize>(bytes.size()));
    require(static_cast<bool>(file), "fixture write");
}
fate::vfs::ExtractedReleaseSpec fixture(const std::filesystem::path& data,
    fate::dual::GameVersion version, const char* name, std::byte value) {
    const auto root = data/name;
    std::filesystem::create_directories(root);
    std::vector<std::byte> elf(0x300);
    elf[0]=std::byte{0x7f};elf[1]=std::byte{'E'};elf[2]=std::byte{'L'};elf[3]=std::byte{'F'};
    elf[4]=elf[5]=elf[6]=std::byte{1};
    put(elf,16,2,2);put(elf,18,8,2);put(elf,20,1);put(elf,24,0x100008);put(elf,28,52);
    put(elf,40,52,2);put(elf,42,32,2);put(elf,44,1,2);
    put(elf,52,1);put(elf,56,0x100);put(elf,60,0x100000);put(elf,64,0x100000);
    put(elf,68,0x200);put(elf,72,0x200);put(elf,76,7);put(elf,80,16);
    put(elf,0x120,0);put(elf,0x124,1);put(elf,0x128,16);
    write(root/"game.elf",elf);
    write(root/"archive.bns",std::vector<std::byte>(2048,value));
    const auto elf_id=fate::provenance::fingerprint(root/"game.elf");
    const auto archive_id=fate::provenance::fingerprint(root/"archive.bns");
    return {version,name,"game.elf","archive.bns",elf_id.file_size,elf_id.sha256,
        archive_id.file_size,archive_id.sha256,0x100020,1};
}
}

int main(int argc,char** argv) {
    try {
        if(argc!=3) return 2;
        const std::filesystem::path data=argv[2];
        fate::vfs::DualExtractedVfs vfs;
        if(std::string_view(argv[1])=="retail-sectors") {
            const auto specs=fate::vfs::original_us_extracted_releases();
            vfs.mount(data,specs);
            fate::vfs::ExtractedSectorView sectors(vfs);
            const auto base=sectors.search(fate::dual::GameVersion::base,"\\LINKDATA.BNS;1");
            const auto xl=sectors.search(fate::dual::GameVersion::xl,"cdrom0:\\LINKDAT2.BNS;1");
            require(base.lsn!=xl.lsn,"original archive extents separated");
            require(sectors.read(base.lsn,1)==vfs.read_file_range(fate::dual::GameVersion::base,"LINKDATA.BNS",0,2048),"original Base sector bytes");
            require(sectors.read(xl.lsn,1)==vfs.read_file_range(fate::dual::GameVersion::xl,"LINKDAT2.BNS",0,2048),"original XL sector bytes");
            const auto bgm_base=sectors.search(fate::dual::GameVersion::base,"\\BGM.BNS;1");
            const auto bgm_xl=sectors.search(fate::dual::GameVersion::xl,"\\BGM.BNS;1");
            require(bgm_base.lsn!=bgm_xl.lsn,"same filename preserves version");
            const PayloadHasher hasher;
            std::ofstream observations("sector_sha256.tsv",std::ios::binary);
            require(static_cast<bool>(observations),"open sector observations");
            for(const auto& extent:std::array{base,xl,bgm_base,bgm_xl}) {
                for(const auto block:std::array<std::uint32_t,2>{0u,extent.bytes/2048u-1u}) {
                    const auto bytes=sectors.read(extent.lsn+block,1);
                    observations<<(extent.version==fate::dual::GameVersion::base?"dw3":"dw3xl")
                                <<'\t'<<extent.relative_path<<'\t'<<block<<'\t'<<hasher.digest(bytes)<<'\n';
                }
            }
            observations.close();require(static_cast<bool>(observations),"flush sector observations");
            require(sectors.search(fate::dual::GameVersion::base,"LINKDATA.BNS").lsn==base.lsn,"cached Base identity survives XL lookup");
            rejects([&]{(void)sectors.search(fate::dual::GameVersion::xl,"LINKDATA.BNS");},"no cross-version archive fallback");
            std::cout<<"PASS original extracted sector view Base/XL archives and BGM identities; no disc-flow gameplay parity\n";
            return 0;
        }
        if(std::string_view(argv[1])=="retail") {
            const auto specs=fate::vfs::original_us_extracted_releases();
            vfs.mount(data,specs);
            require(vfs.resource_count(fate::dual::GameVersion::base)==2123,"Base resource count");
            require(vfs.resource_count(fate::dual::GameVersion::xl)==3015,"XL resource count");
            // Observe actual payloads, not gameplay or logical RID equivalence.
            const auto base=vfs.read_resource(fate::dual::GameVersion::base,0);
            const auto xl=vfs.read_resource(fate::dual::GameVersion::xl,0);
            require(!base.empty()&&!xl.empty(),"read original first resources");
            require(vfs.read_file(fate::dual::GameVersion::base,"SYSTEM.CNF").size()==57,"Base boot config");
            require(vfs.read_file(fate::dual::GameVersion::xl,"SYSTEM.CNF").size()==57,"XL boot config");
            rejects([&]{(void)vfs.read_resource(fate::dual::GameVersion::base,2123);},"no Base RID fallback to XL");
            std::cout<<"PASS original extracted VFS mount2123/3015 resources; first payload sizes "<<base.size()<<'/'<<xl.size()<<"; no gameplay parity\n";
            return 0;
        }
        if(std::string_view(argv[1])=="retail-all" || std::string_view(argv[1])=="retail-sha256") {
            const bool use_sha=std::string_view(argv[1])=="retail-sha256";
            const PayloadHasher hasher;
            require(hasher.digest({})=="e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855","SHA256 empty known vector");
            const std::array known{std::byte{'a'},std::byte{'b'},std::byte{'c'}};
            require(hasher.digest(known)=="ba7816bf8f01cfea414140de5dae2223b00361a396177a9cb410ff61f20015ad","SHA256 abc known vector");
            const auto specs=fate::vfs::original_us_extracted_releases();
            vfs.mount(data,specs);
            const std::filesystem::path output=use_sha?"resource_sha256.tsv":"resource_payloads.tsv";
            require(!std::filesystem::exists(output),"exclusive all-resource evidence required");
            std::ofstream manifest(output);
            std::size_t count=0;
            for(const auto version:{fate::dual::GameVersion::base,fate::dual::GameVersion::xl}) {
                std::uint64_t aggregate=14695981039346656037ULL;
                std::uint64_t bytes=0;
                for(std::uint32_t rid=0;rid<vfs.resource_count(version);++rid) {
                    const auto payload=vfs.read_resource(version,rid);
                    std::uint64_t hash=14695981039346656037ULL;
                    for(const auto value:payload) {
                        hash^=std::to_integer<std::uint8_t>(value);hash*=1099511628211ULL;
                        aggregate^=std::to_integer<std::uint8_t>(value);aggregate*=1099511628211ULL;
                    }
                    manifest<<(version==fate::dual::GameVersion::base?"dw3":"dw3xl")<<'\t'<<rid<<'\t'<<payload.size()<<'\t';
                    if(use_sha)manifest<<hasher.digest(payload);else manifest<<std::hex<<hash<<std::dec;
                    manifest<<'\n';
                    bytes+=payload.size();++count;
                }
                std::cout<<"version="<<(version==fate::dual::GameVersion::base?"dw3":"dw3xl")<<" payloadbytes="<<bytes<<" fnv64="<<std::hex<<aggregate<<std::dec<<'\n';
            }
            require(static_cast<bool>(manifest),"all-resource manifest write");
            require(count==5138,"all original descriptors read");
            std::cout<<"PASS read5138 version-specific resources through native extracted VFS; byte comparison pending; no gameplay parity\n";
            return 0;
        }
        require(!std::filesystem::exists(data),"exclusive fixture output required");
        const std::array specs{fixture(data,fate::dual::GameVersion::base,"base",std::byte{0x11}),
                               fixture(data,fate::dual::GameVersion::xl,"xl",std::byte{0x22})};
        vfs.mount(data,specs);
        require(vfs.mounted(),"publish both mounts");
        require(vfs.read_resource(fate::dual::GameVersion::base,0)==std::vector<std::byte>(16,std::byte{0x11}),"Base source identity");
        require(vfs.read_resource(fate::dual::GameVersion::xl,0)==std::vector<std::byte>(16,std::byte{0x22}),"XL source identity");
        rejects([&]{(void)vfs.read_resource(fate::dual::GameVersion::base,1);},"missing RID rejection");
        rejects([&]{(void)vfs.read_resource(fate::dual::GameVersion::base,0,15);},"bounded payload read");
        for(const char* path:{"../xl/archive.bns","/archive.bns","archive.bns/","x//y","host0:archive.bns","x\\y"})
            rejects([&]{(void)vfs.read_file(fate::dual::GameVersion::base,path);},"unsafe file path rejected");
        auto duplicate=specs;duplicate[1].version=fate::dual::GameVersion::base;
        rejects([&]{vfs.mount(data,duplicate);},"duplicate release rejection");
        require(vfs.read_resource(fate::dual::GameVersion::xl,0).front()==std::byte{0x22},"failed remount retains old state");
        auto bad=specs;bad[1].archive_sha256=std::string(64,'0');
        fate::vfs::DualExtractedVfs unmounted;
        rejects([&]{unmounted.mount(data,bad);},"wrong source hash rejected");
        require(!unmounted.mounted(),"no partial publication");
        auto gap=specs;
        gap[1].table_address=0x100400;
        rejects([&]{unmounted.mount(data,gap);},"unbacked table rejected");
        fate::vfs::ExtractedSectorView sectors(vfs);
        const auto base_extent=sectors.search(fate::dual::GameVersion::base,"cdrom0:\\archive.bns;1");
        const auto xl_extent=sectors.search(fate::dual::GameVersion::xl,"\\archive.bns;1");
        require(base_extent.lsn!=xl_extent.lsn,"same-name sector extents retain source");
        require(sectors.search(fate::dual::GameVersion::base,"archive.bns").lsn==base_extent.lsn,"repeat lookup stable");
        require(sectors.read(base_extent.lsn,1)==std::vector<std::byte>(2048,std::byte{0x11}),"cached Base sector after XL lookup");
        require(sectors.read(xl_extent.lsn,1)==std::vector<std::byte>(2048,std::byte{0x22}),"XL sector bytes");
        rejects([&]{(void)sectors.read(base_extent.lsn,2);},"no cross-file sector reads");
        rejects([&]{(void)sectors.read(base_extent.lsn,0);},"empty sector read rejected");
        rejects([&]{(void)sectors.read(0,1);},"unknown LSN rejected");
        rejects([&]{(void)sectors.read(base_extent.lsn,1,2047);},"bounded sector read");
        for(const char* name:{"../xl/archive.bns","cdrom1:archive.bns","archive.bns;2","x//y"})
            rejects([&]{(void)sectors.search(fate::dual::GameVersion::base,name);},"unsafe CD path rejected");
        write(data/"base/partial.bin",std::vector<std::byte>(2049,std::byte{0x44}));
        const auto partial=sectors.search(fate::dual::GameVersion::base,"partial.bin");
        require(sectors.read(partial.lsn,1).size()==2048,"complete backed partial-file sector");
        rejects([&]{(void)sectors.read(partial.lsn+1,1);},"missing sector padding rejected");
        const auto previous_time=std::filesystem::last_write_time(data/"base/archive.bns");
        write(data/"base/archive.bns",std::vector<std::byte>(2048,std::byte{0x33}));
        std::filesystem::last_write_time(data/"base/archive.bns",previous_time+std::chrono::seconds(1));
        rejects([&]{(void)vfs.read_resource(fate::dual::GameVersion::base,0);},"same-size modified archive rejected");
        rejects([&]{(void)sectors.read(base_extent.lsn,1);},"same-size modified sector archive rejected");
        write(data/"base/archive.bns",std::vector<std::byte>(8));
        rejects([&]{(void)vfs.read_resource(fate::dual::GameVersion::base,0);},"truncated mounted source rejected");
        std::cout<<"PASS extracted VFS version separation/atomic mount/source hash/path and bounds contracts; synthetic\n";
    } catch(const std::exception& error) {
        std::cerr<<error.what()<<'\n';return 1;
    }
    return 0;
}
