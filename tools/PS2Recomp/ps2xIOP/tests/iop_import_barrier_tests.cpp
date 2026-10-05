#include "iop_compat_test_support.h"
#include "emulator/iop_emulator.h"

namespace
{
    using namespace iop_test;
    using ps2x::iop::detail::IopEmulator;

    constexpr uint32_t base = 0x10000u;
    constexpr uint32_t sentinel = 0x13579BDFu;
    constexpr uint32_t jal(uint32_t address) { return 0x0C000000u | (address >> 2u); }

    uint32_t word(const IopEmulator &iop, uint32_t address)
    {
        uint32_t value = 0u;
        require(iop.readMemory(address, &value, sizeof(value)), "unreadable IOP test word");
        return value;
    }

    size_t failures(const Host &host)
    {
        return static_cast<size_t>(std::count_if(host.logs.begin(), host.logs.end(),
            [](const auto &line) { return line.find("unhandled import") != std::string::npos; }));
    }

    void missingTable(Irx &image, bool known = false)
    {
        // MODLOAD7 is still unsupported. Also exercise an unsupported ordinal
        // of a partially implemented library, previously missed by diagnostics.
        image.words(0x180u, {0x41E00000u, 0u, 0x0106u,
            known ? 0x61626874u : 0x6C646F6Du, known ? 0x00006573u : 0x0064616Fu,
            0x03E00008u, known ? 0x24007FFFu : 0x24000007u, 0u, 0u});
    }

    Irx missingEntry(bool known = false)
    {
        Irx image;
        image.words(0u, {0x27BDFFF0u, 0xAFBF000Cu,
            jal(base + 0x194u), 0u,
            0x3C080001u, 0xAD000400u, // forbidden post-import store
            0x8FBF000Cu, 0x00001021u, 0x27BD0010u, 0x03E00008u, 0u});
        image.words(0x400u, {sentinel});
        missingTable(image, known);
        return image;
    }

    void missingStartup()
    {
        Host host;
        IopEmulator iop(host);
        const auto result = iop.loadOwnedModule("test:missing", missingEntry().bytes);
        require(word(iop, base + 0x400u) == sentinel, "continued after missing import");
        require(result.handled && result.startResult == -1, "missing startup reported success");
        require(failures(host) == 1u, "missing import not reported once");
        require(std::any_of(host.logs.begin(), host.logs.end(), [](const auto &line) {
            return line.find("modload:7 version=0x106 pc=0x10194") != std::string::npos;
        }), "missing import lost original PC/version");
    }

    void partiallyImplementedLibrary()
    {
        Host host;
        IopEmulator iop(host);
        const auto result = iop.loadOwnedModule("test:known-library", missingEntry(true).bytes);
        require(word(iop, base + 0x400u) == sentinel, "partial library continued after missing ordinal");
        require(result.startResult == -1 && failures(host) == 1u, "partial library fault not counted");
    }

    Irx nestedImage()
    {
        Irx image;
        image.words(0u, {0x27BDFFF0u, 0xAFBF000Cu,
            0x3C040001u, 0x34840100u, 0x00002821u,
            0x3C060001u, 0x34C60404u, jal(base + 0x1D4u), 0u,
            0x3C080001u, 0xAD000400u,
            0x8FBF000Cu, 0x00001021u, 0x27BD0010u, 0x03E00008u, 0u});
        image.words(0x100u, {jal(base + 0x194u), 0u,
            0x3C080001u, 0xAD000408u, 0x03E00008u, 0u});
        missingTable(image);
        image.words(0x1C0u, {0x41E00000u, 0u, 0x0101u, 0x64616F6Cu, 0x65726F63u,
            0x03E00008u, 0x24000014u, 0u, 0u});
        image.words(0x400u, {sentinel, sentinel, sentinel});
        return image;
    }

    void nestedCallback()
    {
        Host host;
        IopEmulator iop(host);
        const auto result = iop.loadOwnedModule("test:nested", nestedImage().bytes);
        for (uint32_t offset : {0x400u, 0x404u, 0x408u})
            require(word(iop, base + offset) == sentinel, "failed callback changed caller output or continued");
        require(result.startResult == -1 && failures(host) == 1u, "nested fault not propagated");
        // The unwound callback must not leave a dangling active CPU. A new,
        // unrelated module and a fresh callback collection remain usable.
        Irx good(0x11000u);
        good.words(0u, {0x03E00008u, 0x00001021u});
        require(iop.loadOwnedModule("test:good", good.bytes).startResult == 0, "unrelated startup blocked");
        require(iop.beginBootCallbacks(1u) && iop.finishBootCallbacks(), "active CPU leaked after fault");
    }

    void scheduledThread()
    {
        Host host;
        IopEmulator iop(host);
        Irx image = nestedImage();
        // Move the original entry (nested callback) to a scheduler-owned thread.
        std::copy_n(image.bytes.begin() + 0x100u, 17u * 4u, image.bytes.begin() + 0x300u);
        image.words(0u, {0x27BDFFF0u, 0xAFBF000Cu,
            0x3C040001u, 0x34840300u, jal(base + 0x254u), 0u,
            0x00402021u, 0x00002821u, jal(base + 0x25Cu), 0u,
            0x8FBF000Cu, 0x00001021u, 0x27BD0010u, 0x03E00008u, 0u});
        image.words(0x240u, {0x41E00000u, 0u, 0x0101u, 0x61626874u, 0x00006573u,
            0x03E00008u, 0x24000004u, 0x03E00008u, 0x24000006u, 0u, 0u});
        image.words(0x300u, {0u, 0u, base + 0x200u, 0x400u, 10u});
        require(iop.loadOwnedModule("test:thread", image.bytes).startResult == 0, "thread setup failed");
        iop.runEeCycles(8000u);
        require(failures(host) == 1u, "scheduled fault missing or retried in same slice");
        for (uint32_t offset : {0x400u, 0x404u, 0x408u})
            require(word(iop, base + offset) == sentinel, "scheduled callback continued after fault");
        const uint64_t stoppedAt = iop.instructions();
        iop.runEeCycles(8000u);
        require(iop.instructions() == stoppedAt && failures(host) == 1u, "failed thread resumed automatically");
        require(iop.beginBootCallbacks(1u) && iop.finishBootCallbacks(), "scheduler left an active CPU");
    }

    void rpcDoesNotSignalSuccess()
    {
        Host host;
        IopEmulator iop(host);
        auto server = rpcServer(0x77889900u, sentinel);
        // The shared historical helper has no owned RPC queue. Supply one so
        // this regression reaches the server callback under the strict ABI.
        server.words(0u, {0x27BDFFE0u, 0xAFBF001Cu,
            0x3C040001u, 0x34840200u, 0x3C057788u, 0x34A59900u,
            0x3C060001u, 0x34C60300u, 0x3C070001u, 0x34E70400u,
            0xAFA00010u, 0xAFA00014u, 0x3C080001u, 0x35080440u, 0xAFA80018u,
            jal(base + 0x74u), 0u,
            0x8FBF001Cu, 0x00001021u, 0x27BD0020u, 0x03E00008u, 0u});
        server.words(0x300u, {jal(base + 0x194u), 0u,
            0x3C020001u, 0x34420400u, 0x03E00008u, 0u});
        missingTable(server);
        const auto startup = iop.loadOwnedModule("test:rpc", server.bytes);
        if (startup.startResult != 0)
            for (const auto &line : host.logs) std::cerr << line << '\n';
        require(startup.startResult == 0, "RPC setup failed");
        const auto result = iop.handleRpc(request(0x77889900u, 0u));
        require(result.handled && !result.signalCompletion && !result.signalNowaitCompletion,
                "failed RPC signalled success or allowed fallback");
        require(result.callbackPolicy == CallbackPolicy::Suppress &&
                result.serverDispatchPolicy == ServerDispatchPolicy::Suppress,
                "failed RPC allowed default callback/server dispatch");
        require(host.word(0x800u) == 0xCCCCCCCCu, "failed RPC copied an invented reply");
        require(failures(host) == 1u, "RPC fault was lost");
    }

    void knownLibraryGuestFallback()
    {
        Host host;
        IopEmulator iop(host);
        Irx provider;
        provider.words(0u, {0x27BDFFF0u, 0xAFBF000Cu,
            0x3C040001u, 0x34840200u, jal(base + 0x194u), 0u,
            0x8FBF000Cu, 0x00001021u, 0x27BD0010u, 0x03E00008u, 0u});
        provider.words(0x180u, {0x41E00000u, 0u, 0x0101u, 0x64616F6Cu, 0x65726F63u,
            0x03E00008u, 0x24000006u, 0u, 0u});
        provider.words(0x200u, {0x41C00000u, 0u, 0x0101u, 0x61626874u, 0x00006573u,
            base, base, base, base + 0x300u, 0u});
        provider.words(0x300u, {0x03E00008u, 0x2402002Au});
        require(iop.loadOwnedModule("test:provider", provider.bytes).startResult == 0, "provider failed");
        Irx client(0x11000u);
        client.words(0u, {0x27BDFFF0u, 0xAFBF000Cu, jal(0x11194u), 0u,
            0x8FBF000Cu, 0x27BD0010u, 0x03E00008u, 0u});
        client.words(0x180u, {0x41E00000u, 0u, 0x0101u, 0x61626874u, 0x00006573u,
            0x03E00008u, 0x24000003u, 0u, 0u});
        require(iop.loadOwnedModule("test:consumer", client.bytes).startResult == 42,
                "valid guest export of a partial library was blocked");
        require(failures(host) == 0u, "valid guest export logged a missing import");
    }
}

int main()
{
    const Test tests[] = {
        {"Missing module import stops before post-call store", missingStartup},
        {"Unsupported ordinal in a known library is a failure", partiallyImplementedLibrary},
        {"Nested callback failure preserves outputs and unwinds ownership", nestedCallback},
        {"Scheduler does not resume a thread with a missing import", scheduledThread},
        {"Failed RPC does not copy a reply or signal completion", rpcDoesNotSignalSuccess},
        {"Partial HLE library still uses a registered guest export", knownLibraryGuestFallback},
    };
    return run(tests);
}
