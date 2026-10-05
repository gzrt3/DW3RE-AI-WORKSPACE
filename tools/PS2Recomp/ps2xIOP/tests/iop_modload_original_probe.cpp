#include "iop_compat_test_support.h"
#include "emulator/iop_emulator.h"

#include <filesystem>
#include <fstream>
#include <iterator>

namespace {
using namespace iop_test;
using ps2x::iop::detail::IopEmulator;
constexpr uint32_t Base = 0x100000u;
constexpr uint32_t jal(uint32_t address) { return 0x0C000000u | (address >> 2u); }
std::vector<uint8_t> readFile(const std::filesystem::path &path) {
    std::ifstream stream(path, std::ios::binary);
    require(stream.good(), "original input unavailable");
    return {std::istreambuf_iterator<char>(stream), {}};
}
class ProbeHost : public Host {
public:
    bool missingFile = false;
    size_t fileOpens = 0u;
    uint64_t openHostFile(std::string_view path) override {
        require(path == "cdrom0:\\MODULES\\SIO2MAN.IRX;1", "unexpected original module filename");
        ++fileOpens;
        return missingFile ? 0u : Host::openHostFile(path);
    }
    void log(LogLevel level, std::string_view line) override {
        Host::log(level, line); std::cout << line << std::endl;
    }
};
uint32_t word(const IopEmulator &iop, uint32_t at) {
    uint32_t value = 0; require(iop.readMemory(at, &value, 4u), "RAM read"); return value;
}
Irx caller() {
    Irx image(Base, 0x600u);
    image.words(0u, {0x27BDFFE0u,0xAFBF001Cu,0x3C040010u,0x34840200u,
        jal(Base+0x294u),0u,0x00402021u,0x00002821u,jal(Base+0x29Cu),0u,
        0x8FBF001Cu,0x27BD0020u,0x03E00008u,0x00001021u});
    image.words(0x100u,{0x27BDFFE0u,0xAFBF001Cu,0x3C040010u,0x34840300u,
        0x00002821u,0x00003021u,0x3C070010u,0x34E70404u,
        jal(Base+0x2D4u),0u,0x3C080010u,0xAD020400u,0x24191234u,0xAD190408u,
        0x8FBF001Cu,0x27BD0020u,0x03E00008u,0u});
    image.words(0x200u,{0x02000000u,0u,Base+0x100u,0x4000u,16u});
    image.words(0x280u,{0x41E00000u,0u,0x0101u,0x61626874u,0x00006573u,
        0x03E00008u,0x24000004u,0x03E00008u,0x24000006u,0u,0u});
    image.words(0x2C0u,{0x41E00000u,0u,0x0106u,0x6C646F6Du,0x0064616Fu,
        0x03E00008u,0x24000007u,0u,0u});
    constexpr char path[] = "cdrom0:\\MODULES\\SIO2MAN.IRX;1";
    std::memcpy(image.bytes.data()+0x400u,path,sizeof(path));
    image.words(0x400u,{0xABADBABEu,0xABADBABEu,0u});
    return image;
}
}

int main(int argc, char **argv) {
    if (argc != 4 && argc != 5) { std::cerr << "boot-module-directory SIO2MAN.IRX output-ram.bin [missing-file]\n"; return 2; }
    try {
        ProbeHost host; IopEmulator iop(host);
        if (argc == 5) {
            require(std::string_view(argv[4]) == "missing-file", "unknown probe mode");
            host.missingFile = true;
        }
        const std::array<uint32_t,1> bootModes{0x00040003u};
        require(iop.initializeLoaderState(bootModes), "selected UDNL loader state");
        for (const char *name : {"SYSMEM","LOADCORE","INTRMANP","DMACMAN","SYSCLIB","THREADMAN","IOMAN","STDIO"}) {
            const auto bytes=readFile(std::filesystem::path(argv[1])/(std::string(name)+".IRX"));
            const bool original=std::string_view(name)=="SYSCLIB" || std::string_view(name)=="DMACMAN";
            auto result=original ? iop.loadOwnedModule(name,bytes) : iop.installHleLibraryImage(name,bytes);
            std::cout << (original?"Original provider ":"HLE provider ") << name << " id=" << result.moduleId << " result=" << result.startResult << std::endl;
            require(result.moduleId>0 && result.startResult==0,"HLE provider setup");
        }
        auto result=iop.loadOwnedModule("MODLOAD",readFile(std::filesystem::path(argv[1])/"MODLOAD.IRX"));
        require(result.moduleId>0 && result.startResult==0,"original MODLOAD entry");
        host.file=readFile(argv[2]);
        require(iop.loadOwnedModule("probe:caller",caller().bytes).startResult==0,"caller setup");
        for(unsigned n=0;n<4000u && word(iop,Base+0x408u)==0u;++n) iop.runEeCycles(8000u);
        std::vector<uint8_t> ram(0x200000u); require(iop.readMemory(0u,ram.data(),ram.size()),"snapshot");
        require(!std::filesystem::exists(argv[3]), "refusing to overwrite probe evidence");
        std::ofstream output(argv[3],std::ios::binary);output.write(reinterpret_cast<const char*>(ram.data()),ram.size());
        require(output.good(), "could not preserve RAM evidence");
        std::cout << "completion=" << std::hex << word(iop,Base+0x408u) << " module=" << word(iop,Base+0x400u)
                  << " entry_result=" << word(iop,Base+0x404u) << " instructions=" << std::dec << iop.instructions() << std::endl;
        const uint32_t data=word(iop,0x3F0u)-0x20u;
        std::cout << "module_count=" << word(iop,data+0x14u) << std::endl;
        for(uint32_t node=word(iop,data+0x10u),n=0;node && n<64u;node=word(iop,node),++n)
            std::cout << "moduleinfo=" << std::hex << node << " id=" << word(iop,node+12u) << " state="
                      << (word(iop,node+8u)>>16u) << " entry=" << word(iop,node+16u) << std::endl;
        require(word(iop,Base+0x408u)==0x1234u,"MODLOAD caller did not finish");
        require(host.fileOpens == 1u, "original worker did not open the requested file exactly once");
        if (host.missingFile) {
            require(static_cast<int32_t>(word(iop,Base+0x400u)) < 0 &&
                    word(iop,Base+0x404u) == 0xABADBABEu, "missing module was reported started");
            require(word(iop,data+0x14u) == 10u, "missing module changed resident module count");
            for (const auto &line : host.logs)
                require(line.find("[IOP:module-entry]") == std::string::npos, "missing module entered guest code");
            std::cout << "PASS original MODLOAD7 missing-file completion without module entry\n";
            return 0;
        }
        const uint32_t moduleId = word(iop,Base+0x400u);
        require(moduleId == 11u && word(iop,Base+0x404u)==0u,"SIO2MAN start failed");
        require(word(iop,data+0x14u)==11u,"resident module count differs");
        uint32_t descriptor = 0u;
        for (uint32_t node=word(iop,data+0x10u),n=0;node && n<64u;node=word(iop,node),++n)
            if (word(iop,node+12u)==moduleId) descriptor=node;
        require(descriptor != 0u && (word(iop,descriptor+8u)>>16u)==3u,"SIO2MAN not resident");
        char name[8]{};
        require(iop.readMemory(word(iop,descriptor+4u),name,sizeof(name)) &&
                std::string_view(name,sizeof(name)) == std::string_view("sio2man\0",8u), "resident name differs");
        const auto hasLog = [&](std::string_view text) {
            return std::any_of(host.logs.begin(),host.logs.end(),[&](const auto &line){return line.find(text)!=std::string::npos;});
        };
        require(hasLog("[IOP:module-entry] id=11 thread=1 argc=1") &&
                hasLog("[IOP:module-return] id=11 thread=1 result=0") &&
                hasLog("[IOP:module-resident] id=11 flags=3"), "MODLOAD worker entry/return/residency was not observed");
        std::cout << "PASS selected original MODLOAD7/SIO2MAN scoped probe\n";
        return 0;
    } catch(const std::exception &error) { std::cerr << "FAIL " << error.what() << '\n'; return 1; }
}
