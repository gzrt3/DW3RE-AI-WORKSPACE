// SPDX-License-Identifier: GPL-3.0-or-later
// Reuse upstream host-only synthetic fixture construction; no retail inputs.
#define main upstream_vfs_contract_main
#include "extracted_vfs_contract.cpp"
#undef main
#include "session.h"

int main(int argc,char** argv) try {
    using namespace dw3::host;
    using Version=fate::dual::GameVersion;
    require(sha256({})=="e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855","Empty SHA256 vector");
    const std::array abc{std::byte{'a'},std::byte{'b'},std::byte{'c'}};
    require(sha256(abc)=="ba7816bf8f01cfea414140de5dae2223b00361a396177a9cb410ff61f20015ad","ABC SHA256 vector");
    if(argc!=2)return 2;
    const std::filesystem::path data=argv[1];
    require(!std::filesystem::exists(data),"Exclusive fixture required");
    const std::array specs{fixture(data,Version::base,"base",std::byte{0x11}),
        fixture(data,Version::xl,"xl",std::byte{0x22})};
    const auto saves=data/"saves";std::filesystem::create_directory(saves);
    CombinedSession first;first.mount(data,specs);
    const auto base=first.open({Version::base,AssetKind::resource,0});
    const auto xl=first.open({Version::xl,AssetKind::resource,0});
    const auto base_sector=first.search(Version::base,"archive.bns");
    require(first.read(base)!=first.read(xl),"Both editions retain distinct bytes");
    auto invalid=specs;invalid[1].archive_sha256=std::string(64,'0');
    const auto generation=first.generation();
    rejects([&]{first.mount(data,invalid);},"Invalid remount rejected");
    require(first.generation()==generation && first.read(base).front()==std::byte{0x11},"Failed remount preserved live mount");
    rejects([&]{(void)first.open({Version::base,AssetKind::resource,1});},"Missing RID has no fallback");
    rejects([&]{(void)first.open({Version::base,AssetKind::file,0,"../xl/archive.bns"});},"Path escape rejected");
    const auto base_file=first.open({Version::base,AssetKind::file,0,"archive.bns"});
    ReadHandle forged{base_file.mount,{Version::base,AssetKind::file,0,"archive.bns"}};
    rejects([&]{(void)first.read(forged);},"Unpinned file handle rejected");
    const std::array refs{base.asset,xl.asset,base_file.asset};
    rejects([&]{(void)first.commit(data/"base",refs,0);},"Original input cannot become profile output");
    const auto saved=first.commit(saves,refs,0);require(saved.revision==1,"First revision published");
    rejects([&]{(void)first.commit(saves,refs,0);},"Stale writer rejected");
    require(first.restore(saves).revision==1,"Conflict preserved prior revision");
    const std::array duplicates{base.asset,base.asset};
    rejects([&]{(void)first.commit(saves,duplicates,1);},"Duplicate references rejected");
    CombinedSession second;auto reversed=specs;std::swap(reversed[0],reversed[1]);second.mount(data,reversed);
    const auto xl_sector=second.search(Version::xl,"archive.bns");
    require(base_sector.extent.lsn==xl_sector.extent.lsn,"LSNs alias across cold sessions by design");
    rejects([&]{(void)second.read_sectors(base_sector,0,1);},"Foreign sector token rejected despite matching generation/LSN");
    (void)second.search(Version::base,"archive.bns");
    const auto restored=second.restore(saves);
    require(restored.assets==saved.assets && second.identity()==first.identity(),"Restart reopens explicit resource identities");
    require(second.read(second.open(restored.assets[0]))==first.read(base),"Cold restored Base payload");
    rejects([&]{(void)second.read(base);},"Foreign session handle rejected");
    first.mount(data,specs);
    rejects([&]{(void)first.read(base);},"Stale mount handle rejected");
    rejects([&]{(void)first.read_sectors(base_sector,0,1);},"Stale LSN generation rejected");
    const auto current=first.restore(saves);
    const auto next=first.commit(saves,current.assets,1);require(next.revision==2,"Second revision published");
    const auto state=saves/"session.state";
    std::ifstream input(state,std::ios::binary);std::vector<char> original((std::istreambuf_iterator<char>(input)),{});input.close();
    auto corrupt=original;corrupt[12]^=1;
    {std::ofstream file(state,std::ios::binary|std::ios::trunc);file.write(corrupt.data(),std::streamsize(corrupt.size()));}
    rejects([&]{(void)first.restore(saves);},"Corrupt profile rejected");
    {std::ofstream file(state,std::ios::binary|std::ios::trunc);file.write(original.data(),std::streamsize(original.size()));}
    require(first.restore(saves).revision==2,"Restored evidence remains readable");
    const auto locked=CreateFileW(state.c_str(),GENERIC_READ,FILE_SHARE_READ,nullptr,OPEN_EXISTING,FILE_ATTRIBUTE_NORMAL,nullptr);
    require(locked!=INVALID_HANDLE_VALUE,"Replacement failure fixture");
    rejects([&]{(void)first.commit(saves,current.assets,2);},"Locked profile rejects write");CloseHandle(locked);
    require(first.restore(saves).revision==2,"Failed write preserved prior state");
    write(data/"base/archive.bns",std::vector<std::byte>(2048,std::byte{0x33}));
    rejects([&]{(void)first.read(first.open(base_file.asset));},"Changed file identity rejected");
    std::cout<<"combined_session=PASS installed_editions=2 cold_restore_refs=3 stale_handles_rejected=1 atomic_remount=1 revision_conflict_rejected=1 corruption_rejected=1 write_failure_preserved=1 guest_unlocks=UNIMPLEMENTED\n";
    return 0;
} catch(const std::exception& error) {std::cerr<<error.what()<<'\n';return 1;}
