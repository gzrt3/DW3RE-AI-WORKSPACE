// Identified XL ELF d26695fa7769cabbddbd89168924279cd1035eeb0bdd3744aec95257f7cfa731.
// CACHE 0x18 is data-cache hit writeback + invalidate (PCSX2 Cache.cpp).
// This runtime stores EE and DMA bytes in the same coherent RDRAM allocation:
// no private dirty cache line exists to copy or invalidate. SYNC uses a host
// fence. This bounded lowering supports direct RDRAM mappings only; it does
// not claim cache tags, TLB exceptions, timing, or instruction-cache parity.
constexpr std::array<uint32_t, 20> original_cache_tail_words{
    0x254affffu, 0x0000000fu, 0xbd180000u, 0x0000000fu,
    0xbd180040u, 0x0000000fu, 0xbd180080u, 0x0000000fu,
    0xbd1800c0u, 0x0000000fu, 0xbd180100u, 0x0000000fu,
    0xbd180140u, 0x0000000fu, 0xbd180180u, 0x0000000fu,
    0xbd1801c0u, 0x0000000fu, 0x1d40ffedu, 0x25080200u};

void original_cache_tail(uint8_t*, R5900Context* ctx, PS2Runtime*) {
    if (ctx->pc == 0x1a700cu) {
        SET_GPR_S32(ctx, 10, static_cast<int32_t>(ADD32(GPR_U32(ctx, 10), 0xffffffffu)));
        ctx->pc = 0x1a7010u;
        std::atomic_thread_fence(std::memory_order_seq_cst);
        ctx->pc = 0x1a7014u;
    }
    if (ctx->pc != 0x1a7014u)
        throw std::runtime_error("Unexpected original cache continuation PC");
    // Also orders stores preceding the SYNC in the existing generated prefix.
    std::atomic_thread_fence(std::memory_order_seq_cst);
    for (uint32_t line = 0; line < 8u; ++line) {
        ctx->pc = 0x1a7014u + line * 8u;
        const uint32_t address = ADD32(GPR_U32(ctx, 8), line * 64u);
        uint32_t physical = address;
        if (address >= 0x20000000u && address < 0x40000000u)
            physical = address - 0x20000000u;
        else if (address >= 0x80000000u && address < 0xc0000000u)
            physical = address & 0x1fffffffu;
        if (physical >= PS2_RAM_SIZE)
            throw std::runtime_error("Original CACHE 0x18 requires a direct RDRAM mapping");
        // Coherent RDRAM already contains the latest stores; no MMIO read or
        // write is substituted for a cache hit operation.
        ctx->pc += 4u; // SYNC following this cache line.
        std::atomic_thread_fence(std::memory_order_seq_cst);
    }
    const bool taken = GPR_S64(ctx, 10) > 0;
    ctx->pc = 0x1a7058u;
    ctx->branch_pc = 0x1a7054u;
    ctx->in_delay_slot = true;
    SET_GPR_S32(ctx, 8, static_cast<int32_t>(ADD32(GPR_U32(ctx, 8), 0x200u)));
    ctx->in_delay_slot = false;
    // Return at each backward edge so the scheduler remains in control.
    // 1A700C repeats the decrement, NOT the preceding BEQ at 1A7008.
    ctx->pc = taken ? 0x1a700cu : 0x1a705cu;
}
