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

// Function: entry_001b2c7c
// Address: 0x1b2c7c - 0x1b2cb8
void entry_001b2c7c_0x1b2c7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b2c7c_0x1b2c7c");
#endif

    ctx->pc = 0x1b2c7cu;

    // 0x1b2c7c: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x1b2c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x1b2c80: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1b2c80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1b2c84: 0x48102a  slt         $v0, $v0, $t0
    ctx->pc = 0x1b2c84u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x1b2c88: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1B2C88u;
    {
        const bool branch_taken_0x1b2c88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B2C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2C88u;
        // 0x1b2c8c: 0xe81823  subu        $v1, $a3, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2c88) {
            ctx->pc = 0x1B2CB8u;
            return;
        }
    }
    ctx->pc = 0x1B2C90u;
    // 0x1b2c90: 0x3c01bfc9  lui         $at, 0xBFC9
    ctx->pc = 0x1b2c90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49097 << 16));
    // 0x1b2c94: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x1b2c94u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x1b2c98: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b2c98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b2c9c: 0x4a00043  bltz        $a1, . + 4 + (0x43 << 2)
    ctx->pc = 0x1B2C9Cu;
    {
        const bool branch_taken_0x1b2c9c = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x1B2CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2C9Cu;
        // 0x1b2ca0: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2c9c) {
            ctx->pc = 0x1B2DACu;
            return;
        }
    }
    ctx->pc = 0x1B2CA4u;
    // 0x1b2ca4: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x1b2ca4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
    // 0x1b2ca8: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x1b2ca8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x1b2cac: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b2cacu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b2cb0: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x1B2CB0u;
    {
        const bool branch_taken_0x1b2cb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2CB0u;
        // 0x1b2cb4: 0xdfbf0018  ld          $ra, 0x18($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2cb0) {
            ctx->pc = 0x1B2DB4u;
            return;
        }
    }
    ctx->pc = 0x1B2CB8u;
}
