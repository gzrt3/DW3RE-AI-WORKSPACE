#include "iop_compat_test_support.h"
#include "emulator/iop_emulator.h"

namespace {
using namespace iop_test;
using ps2x::iop::detail::IopEmulator;
constexpr uint32_t jal(uint32_t at) { return 0x0C000000u | (at >> 2u); }
uint32_t word(const IopEmulator &iop, uint32_t at) {
    uint32_t value = 0; require(iop.readMemory(at, &value, 4u), "read RAM"); return value;
}
Irx provider(uint32_t count) {
    Irx irx(0x10000u,0x500u);
    irx.words(0u,{0x03E00008u,0u});
    irx.words(0x80u,{0x41C00000u,0u,0x0103u,0x63737973u,0x0062696Cu});
    for(uint32_t n=0;n<count;++n)irx.words(0x94u+n*4u,{0x10000u});
    return irx;
}
Irx client(bool linked,uint32_t delay) {
    Irx irx(0x11000u,0x500u);
    irx.words(0u,{0x27BDFFE0u,0xAFBF001Cu});
    if(linked)irx.words(8u,{0x3C040001u,0x34841300u,0x24050024u,jal(0x11214u),0u});
    irx.words(0x20u,{0x24040061u,jal(0x11314u),0u,
        0x3C080001u,0xAD1F1400u,0x8FBF001Cu,0x27BD0020u,0x03E00008u,0u});
    irx.words(0x200u,{0x41E00000u,0u,0x0103u,0x64616F6Cu,0x65726F63u,
        0x03E00008u,0x24000008u,0u,0u});
    irx.words(0x300u,{0x41E00000u,0u,0x0103u,0x63737973u,0x0062696Cu,
        0x03E00008u,delay,0u,0u});
    irx.words(0x400u,{0xABCDEF01u});
    return irx;
}
void delayArgument(bool linked) {
    Host host;IopEmulator iop(host);require(iop.initializeLoaderState(),"loader state");
    if(linked)require(iop.installHleLibraryImage("test:sysclib",provider(7u).bytes).startResult==0,"provider");
    const auto result=iop.loadOwnedModule("test:client",client(linked,0x24840006u).bytes);
    require(result.startResult=='G',"ADDIU argument delay skipped or repeated");
    require(word(iop,0x11400u)==0x1102Cu,"caller RA changed");
    if(linked)require((word(iop,0x11314u)>>26u)==2u,"client was not linked");
}
void delayReturnAddress() {
    Host host;IopEmulator iop(host);
    auto result=iop.loadOwnedModule("test:ra",client(false,0x27FF0006u).bytes);
    require(result.startResult=='A' && word(iop,0x11400u)==0x11032u,
            "JR did not capture RA before the original ADDIU delay");
}
void absentLinkedOrdinal() {
    Host host;IopEmulator iop(host);require(iop.initializeLoaderState(),"loader state");
    require(iop.installHleLibraryImage("test:short",provider(4u).bytes).startResult==0,"short provider");
    auto result=iop.loadOwnedModule("test:absent",client(true,0x24000006u).bytes);
    require(result.startResult==-1 && word(iop,0x11400u)==0xABCDEF01u,"missing linked ordinal completed");
    require((word(iop,0x11308u)>>16u & 2u)!=0,"fixture not linked");
}
void unsupportedHleOrdinal() {
    Host host;IopEmulator iop(host);require(iop.initializeLoaderState(),"loader state");
    require(iop.installHleLibraryImage("test:unsupported",provider(65u).bytes).startResult==0,"provider");
    auto result=iop.loadOwnedModule("test:unsupported-call",client(true,0x24000040u).bytes);
    require(result.startResult==-1 && word(iop,0x11400u)==0xABCDEF01u,"unimplemented HLE target looped or succeeded");
}
void moduleArguments() {
    Host host;IopEmulator iop(host);require(iop.initializeLoaderState(),"loader state");
    Irx irx(0x11000u,0x500u);
    irx.words(0u,{0x3C080001u,0xAD041400u,0x8CA90000u,0x8CAA0004u,0x8CAB0008u,
        0x8CAC000Cu,0xAD0C1410u,0xAD071414u,0x912D0000u,0x914E0000u,0x916F0000u,
        0xAD0D1404u,0xAD0E1408u,0xAD0F140Cu,0x03E00008u,0x00001021u});
    host.file=irx.bytes;
    const char packed[]{'o','n','e',0,'t','w','o',0};
    const auto result = iop.loadModule("test:argv",packed,sizeof(packed));
    if (result.startResult != 0)
        for (const auto &line : host.logs) std::cerr << line << '\n';
    require(result.startResult==0,"entry failed");
    require(word(iop,0x11400u)==3u && word(iop,0x11404u)=='t' &&
            word(iop,0x11408u)=='o' && word(iop,0x1140Cu)=='t' &&
            word(iop,0x11410u)==0u && word(iop,0x11414u)!=0u,"argc/argv/ModuleInfo ABI differs");
}
}
int main() {
    const Test tests[]{
        {"Unlinked import executes argument delay once",[]{delayArgument(false);}},
        {"Linked HLE import executes argument delay once",[]{delayArgument(true);}},
        {"Unlinked JR retains target before RA delay",delayReturnAddress},
        {"Missing linked ordinal remains a hard barrier",absentLinkedOrdinal},
        {"Unsupported bound HLE ordinal cannot fall back to itself",unsupportedHleOrdinal},
        {"Native module entry receives filename and packed arguments",moduleArguments},
    };
    return run(tests);
}
