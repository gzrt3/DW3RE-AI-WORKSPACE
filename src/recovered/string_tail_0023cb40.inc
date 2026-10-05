// Original XL ELF d26695fa7769cabbddbd89168924279cd1035eeb0bdd3744aec95257f7cfa731.
// The canonical 23CA38 translation ends before this BNEL; preserve its live
// byte-test result rather than restarting the prologue or reloading the byte.
constexpr std::array<uint32_t, 9> original_string_tail_words{
    0x5440fffau, 0x24840001u, 0x0c08f390u, 0x00000000u,
    0x0200102du, 0x7bbf0010u, 0x7bb00000u, 0x03e00008u, 0x27bd0020u};

void original_string_tail(uint8_t* rdram, R5900Context* ctx, PS2Runtime* runtime) {
    if (ctx->pc == 0x23cb40u) {
        const bool taken = GPR_U64(ctx, 2) != GPR_U64(ctx, 0);
        if (taken) {
            ctx->pc = 0x23cb44u;
            ctx->branch_pc = 0x23cb40u;
            ctx->in_delay_slot = true;
            SET_GPR_S32(ctx, 4, static_cast<int32_t>(ADD32(GPR_U32(ctx, 4), 1u)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23cb2cu;
            return;
        }
        // Not-taken BNEL annuls ADDIU a0, a0, 1.
        ctx->pc = 0x23cb48u;
    }
    if (ctx->pc == 0x23cb48u) {
        SET_GPR_U32(ctx, 31, 0x23cb50u);
        ctx->pc = 0x23cb4cu;
        ctx->branch_pc = 0x23cb48u;
        ctx->in_delay_slot = true; // Original JAL delay instruction is NOP.
        ctx->in_delay_slot = false;
        ctx->pc = 0x23ce40u;
        return; // Scheduler invokes the original copy routine.
    }
    if (ctx->pc != 0x23cb50u)
        throw std::runtime_error("Unexpected original string continuation PC");
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) + GPR_U64(ctx, 0));
    ctx->pc = 0x23cb54u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16u)));
    ctx->pc = 0x23cb58u;
    SET_GPR_VEC(ctx, 16, READ128(GPR_U32(ctx, 29)));
    const uint32_t target = GPR_U32(ctx, 31);
    ctx->pc = 0x23cb60u;
    ctx->branch_pc = 0x23cb5cu;
    ctx->in_delay_slot = true;
    SET_GPR_S32(ctx, 29, static_cast<int32_t>(ADD32(GPR_U32(ctx, 29), 32u)));
    ctx->in_delay_slot = false;
    ctx->pc = target;
}
