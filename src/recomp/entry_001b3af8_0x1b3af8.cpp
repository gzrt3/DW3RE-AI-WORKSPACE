#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_001b3af8
// Address: 0x1b3af8 - 0x1b3b30
void entry_001b3af8_0x1b3af8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b3af8_0x1b3af8");
#endif

    ctx->pc = 0x1b3af8u;

    // 0x1b3af8: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x1b3af8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
    // 0x1b3afc: 0x34210f80  ori         $at, $at, 0xF80
    ctx->pc = 0x1b3afcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)3968);
    // 0x1b3b00: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b3b00u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b3b04: 0x3c023fc9  lui         $v0, 0x3FC9
    ctx->pc = 0x1b3b04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
    // 0x1b3b08: 0x2031824  and         $v1, $s0, $v1
    ctx->pc = 0x1b3b08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & GPR_U64(ctx, 3));
    // 0x1b3b0c: 0x34420fd0  ori         $v0, $v0, 0xFD0
    ctx->pc = 0x1b3b0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4048);
    // 0x1b3b10: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B3B10u;
    {
        const bool branch_taken_0x1b3b10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1B3B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3B10u;
        // 0x1b3b14: 0x46000b00  add.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3b10) {
            ctx->pc = 0x1B3B30u;
            return;
        }
    }
    ctx->pc = 0x1B3B18u;
    // 0x1b3b18: 0x3c013735  lui         $at, 0x3735
    ctx->pc = 0x1b3b18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14133 << 16));
    // 0x1b3b1c: 0x34214443  ori         $at, $at, 0x4443
    ctx->pc = 0x1b3b1cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)17475);
    // 0x1b3b20: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1b3b20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1b3b24: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1B3B24u;
    {
        const bool branch_taken_0x1b3b24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B3B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3B24u;
        // 0x1b3b28: 0x46026040  add.s       $f1, $f12, $f2 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[12], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3b24) {
            ctx->pc = 0x1B3B50u;
            return;
        }
    }
    ctx->pc = 0x1B3B2Cu;
    // 0x1b3b2c: 0x0  nop
    ctx->pc = 0x1b3b2cu;
    // NOP
    ctx->pc = 0x1b3b30u;
}
