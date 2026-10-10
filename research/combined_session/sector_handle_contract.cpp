// SPDX-License-Identifier: GPL-3.0-or-later
// Expected file identities come from the existing independent VFS fixture.
#define main upstream_vfs_contract_main
#include "extracted_vfs_contract.cpp"
#undef main
#include "session.h"

int main(int argc,char** argv) try {
    using namespace dw3::host;
    using Version=fate::dual::GameVersion;
    if(argc!=3)return 2;
    const std::filesystem::path root=argv[1];
    require(!std::filesystem::exists(root),"Exclusive fixture required");
    const std::array specs{fixture(root,Version::base,"base",std::byte{0x11}),
        fixture(root,Version::xl,"xl",std::byte{0x22})};
    CombinedSession session;session.mount(root,specs);
    const auto base=session.search(Version::base,"archive.bns");
    const auto xl=session.search(Version::xl,"archive.bns");
    require(session.read_sectors(base,0,1).front()==std::byte{0x11},"Base identity");
    require(session.read_sectors(xl,0,1).front()==std::byte{0x22},"XL identity");
    auto altered=base;
    uint32_t relative=0;
    const std::string scenario=argv[2];
    if(scenario=="lsn")altered.extent.lsn=xl.extent.lsn;
    else if(scenario=="bytes") {altered.extent.bytes+=2048;relative=1;}
    else if(scenario=="edition")altered.extent.version=Version::xl;
    else if(scenario=="path")altered.extent.relative_path="other.bns";
    else if(scenario=="forged") {
        altered=SectorHandle{};altered.mount=base.mount;
        altered.generation=base.generation;altered.extent=base.extent;
    } else throw std::invalid_argument("Unknown scenario");
    rejects([&]{(void)session.read_sectors(altered,relative,1);},"Altered sector handle accepted");
    require(session.read_sectors(base,0,1).front()==std::byte{0x11},"Rejected read preserved Base");
    std::cout<<"sector_handle_contract=PASS scenario="<<scenario<<'\n';
    return 0;
} catch(const std::exception& error) {std::cerr<<error.what()<<'\n';return 1;}
