#include "iop_compat_test_support.h"
#include "emulator/iop_emulator.h"

namespace
{
    using namespace iop_test;
    using ps2x::iop::detail::IopEmulator;
    constexpr uint32_t base = 0x10000u;
    constexpr uint32_t marker = 0x13579BDFu;
    constexpr uint32_t jal(uint32_t address) { return 0x0C000000u | (address >> 2u); }

    enum class Stop { Yield, Budget, OutsideRam };

    uint32_t word(const IopEmulator &iop, uint32_t address)
    {
        uint32_t result = 0u;
        require(iop.readMemory(address, &result, sizeof(result)), "unreadable test RAM");
        return result;
    }

    size_t incompleteCalls(const Host &host)
    {
        return static_cast<size_t>(std::count_if(host.logs.begin(), host.logs.end(),
            [](const auto &line) { return line.find("incomplete guest call") != std::string::npos; }));
    }

    void incompleteBody(Irx &image, uint32_t offset, Stop stop)
    {
        // All three paths leave a plausible v0=0 without returning to the caller.
        if (stop == Stop::Yield)
        {
            image.words(offset, {0x27BDFFF0u, 0xAFBF000Cu, jal(base + 0x194u), 0u,
                0x3C080001u, 0xAD000480u, 0x8FBF000Cu, 0x27BD0010u,
                0x03E00008u, 0x00001021u});
            image.words(0x180u, {0x41E00000u, 0u, 0x0101u, 0x61626874u, 0x00006573u,
                0x03E00008u, 0x24000010u, 0u, 0u}); // thbase16: yield
        }
        else if (stop == Stop::Budget)
            image.words(offset, {0x00001021u, 0x1000FFFFu, 0u});
        else
            image.words(offset, {0x00001021u, 0x3C081FFFu, 0x01000008u, 0u});
        image.words(0x480u, {marker, marker, marker});
    }

    void startup(Stop stop)
    {
        Host host;
        IopEmulator iop(host);
        Irx image;
        incompleteBody(image, 0u, stop);
        const auto result = iop.loadOwnedModule("test:incomplete-entry", image.bytes);
        require(result.handled && result.startResult == -1, "incomplete entry reported success");
        require(word(iop, base + 0x480u) == marker, "incomplete entry continued");
        require(incompleteCalls(host) == 1u, "incomplete entry lost diagnostic");
        // RAII must release active CPU/call depth even for non-import failures.
        Irx good(0x11000u);
        good.words(0u, {0x03E00008u, 0x2402002Au});
        require(iop.loadOwnedModule("test:after-failure", good.bytes).startResult == 42,
                "independent entry or its return delay slot failed");
        require(iop.beginBootCallbacks(1u) && iop.finishBootCallbacks(), "call ownership leaked");
    }

    Irx nestedImage()
    {
        Irx image;
        incompleteBody(image, 0x300u, Stop::Yield);
        // LOADCORE20 calls the yielding guest callback before publishing its v0.
        image.words(0u, {0x27BDFFF0u, 0xAFBF000Cu,
            0x3C040001u, 0x34840300u, 0x00002821u,
            0x3C060001u, 0x34C60484u, jal(base + 0x1D4u), 0u,
            0x3C080001u, 0xAD000488u,
            0x8FBF000Cu, 0x27BD0010u, 0x03E00008u, 0x00001021u});
        image.words(0x1C0u, {0x41E00000u, 0u, 0x0101u, 0x64616F6Cu, 0x65726F63u,
            0x03E00008u, 0x24000014u, 0u, 0u});
        return image;
    }

    void nestedYield()
    {
        Host host;
        IopEmulator iop(host);
        const auto result = iop.loadOwnedModule("test:nested-yield", nestedImage().bytes);
        for (uint32_t offset : {0x480u, 0x484u, 0x488u})
            require(word(iop, base + offset) == marker, "yielding callback published output or resumed caller");
        require(result.startResult == -1 && incompleteCalls(host) == 1u, "nested yield not propagated");
    }

    void scheduledYield()
    {
        Host host;
        IopEmulator iop(host);
        Irx image = nestedImage();
        std::copy_n(image.bytes.begin() + 0x100u, 15u * 4u, image.bytes.begin() + 0x300u);
        image.words(0u, {0x27BDFFF0u, 0xAFBF000Cu,
            0x3C040001u, 0x34840400u, jal(base + 0x254u), 0u,
            0x00402021u, 0x00002821u, jal(base + 0x25Cu), 0u,
            0x8FBF000Cu, 0x27BD0010u, 0x03E00008u, 0x00001021u});
        image.words(0x240u, {0x41E00000u, 0u, 0x0101u, 0x61626874u, 0x00006573u,
            0x03E00008u, 0x24000004u, 0x03E00008u, 0x24000006u, 0u, 0u});
        image.words(0x400u, {0u, 0u, base + 0x200u, 0x400u, 10u});
        require(iop.loadOwnedModule("test:scheduled-yield", image.bytes).startResult == 0, "thread setup failed");
        iop.runEeCycles(8000u);
        for (uint32_t offset : {0x480u, 0x484u, 0x488u})
            require(word(iop, base + offset) == marker, "scheduler continued an incomplete nested call");
        require(incompleteCalls(host) == 1u, "scheduled incomplete call not reported");
        const auto instructions = iop.instructions();
        iop.runEeCycles(8000u);
        require(iop.instructions() == instructions, "failed nested call resumed automatically");
        require(iop.beginBootCallbacks(1u) && iop.finishBootCallbacks(), "scheduler ownership leaked");
    }

    void rpcIncomplete(Stop stop)
    {
        Host host;
        IopEmulator iop(host);
        auto image = rpcServer(0x77889900u, marker);
        image.words(0u, {0x27BDFFE0u, 0xAFBF001Cu,
            0x3C040001u, 0x34840200u, 0x3C057788u, 0x34A59900u,
            0x3C060001u, 0x34C60300u, 0x3C070001u, 0x34E70400u,
            0xAFA00010u, 0xAFA00014u, 0x3C080001u, 0x35080440u, 0xAFA80018u,
            jal(base + 0x74u), 0u,
            0x8FBF001Cu, 0x27BD0020u, 0x03E00008u, 0x00001021u});
        incompleteBody(image, 0x300u, stop);
        require(iop.loadOwnedModule("test:rpc-incomplete", image.bytes).startResult == 0, "RPC setup failed");
        const auto result = iop.handleRpc(request(0x77889900u, 0u));
        require(result.handled && !result.signalCompletion && !result.signalNowaitCompletion &&
                result.callbackPolicy == CallbackPolicy::Suppress &&
                result.serverDispatchPolicy == ServerDispatchPolicy::Suppress,
                "incomplete RPC signalled completion or allowed fallback");
        require(host.word(0x800u) == 0xCCCCCCCCu, "incomplete RPC copied a reply");
        require(incompleteCalls(host) == 1u, "incomplete RPC lost diagnostic");
    }

    void returnedEntry()
    {
        Host host;
        IopEmulator iop(host);
        Irx image;
        image.words(0u, {0x03E00008u, 0x2402FFFFu});
        require(iop.loadOwnedModule("test:returned-error", image.bytes).startResult == -1,
                "guest negative return changed");
        require(incompleteCalls(host) == 0u, "real guest error return marked incomplete");
    }

    void collectedCallback()
    {
        Host host;
        IopEmulator iop(host);
        require(iop.beginBootCallbacks(1u), "callback collection setup failed");
        require(iop.loadOwnedModule("test:collected-yield", nestedImage().bytes).startResult == 0,
                "callback registration should complete without executing it");
        require(!iop.finishBootCallbacks(), "yielding boot callback completed the collection");
        require(word(iop, base + 0x480u) == marker && incompleteCalls(host) == 1u,
                "collected callback continued or lost its diagnostic");
        iop.reset();
        require(iop.beginBootCallbacks(1u) && iop.finishBootCallbacks(), "reset did not release failed collection");
    }

    void deferredReboot()
    {
        Host host;
        IopEmulator iop(host);
        Irx image;
        image.words(0u, {0x00002021u, 0x24051234u, jal(base + 0x194u), 0u,
            0x3C080001u, 0xAD000480u, 0x03E00008u, 0x00001021u});
        image.words(0x180u, {0x41E00000u, 0u, 0x0106u, 0x6C646F6Du, 0x0064616Fu,
            0x03E00008u, 0x24000004u, 0u, 0u});
        image.words(0x480u, {marker});
        require(iop.loadOwnedModule("test:reboot", image.bytes).startResult == -1,
                "nonreturning reboot reported completed startup");
        require(word(iop, base + 0x480u) == marker && incompleteCalls(host) == 1u,
                "reboot continued old code or lost its diagnostic");
        const auto request = iop.takeRebootRequest();
        require(request && request->command.empty() && request->flags == 0x1234u,
                "unwinding lost the owned reboot request");
        require(!iop.takeRebootRequest(), "reboot request consumed twice");
    }
}

int main()
{
    const Test tests[] = {
        {"Yielded entry cannot return fabricated success", [] { startup(Stop::Yield); }},
        {"Instruction budget is not a module return", [] { startup(Stop::Budget); }},
        {"Execution outside RAM is not a module return", [] { startup(Stop::OutsideRam); }},
        {"Nested yield preserves callback result and caller stores", nestedYield},
        {"Scheduled nested yield is not resumed after losing its stack", scheduledYield},
        {"Yielded RPC cannot publish completion", [] { rpcIncomplete(Stop::Yield); }},
        {"Budget-exhausted RPC cannot publish completion", [] { rpcIncomplete(Stop::Budget); }},
        {"Stopped RPC cannot publish completion", [] { rpcIncomplete(Stop::OutsideRam); }},
        {"Completed negative guest return retains its value", returnedEntry},
        {"Collected boot callbacks must actually return", collectedCallback},
        {"Nonreturning reboot retains its deferred request", deferredReboot},
    };
    return run(tests);
}
