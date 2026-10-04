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

// Function: entry_00150c48
// Address: 0x150c48 - 0x150c80
void entry_00150c48_0x150c48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00150c48_0x150c48");
#endif

    ctx->pc = 0x150c48u;

    // 0x150c48: 0xe4800050  swc1        $f0, 0x50($a0)
    ctx->pc = 0x150c48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 80), bits); }
    // 0x150c4c: 0xe4820058  swc1        $f2, 0x58($a0)
    ctx->pc = 0x150c4cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 88), bits); }
    // 0x150c50: 0x8483003e  lh          $v1, 0x3E($a0)
    ctx->pc = 0x150c50u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 62)));
    // 0x150c54: 0x286101ff  slti        $at, $v1, 0x1FF
    ctx->pc = 0x150c54u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)511) ? 1 : 0);
    // 0x150c58: 0x10200019  beqz        $at, . + 4 + (0x19 << 2)
    ctx->pc = 0x150C58u;
    {
        const bool branch_taken_0x150c58 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x150C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150C58u;
        // 0x150c5c: 0x32900  sll         $a1, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150c58) {
            ctx->pc = 0x150CC0u;
            return;
        }
    }
    ctx->pc = 0x150C60u;
    // 0x150c60: 0x8c830020  lw          $v1, 0x20($a0)
    ctx->pc = 0x150c60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x150c64: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x150c64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x150c68: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x150c68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x150c6c: 0x30630400  andi        $v1, $v1, 0x400
    ctx->pc = 0x150c6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1024);
    // 0x150c70: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x150C70u;
    {
        const bool branch_taken_0x150c70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x150c70) {
            ctx->pc = 0x150CC0u;
            return;
        }
    }
    ctx->pc = 0x150C78u;
    // 0x150c78: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x150C78u;
    {
        const bool branch_taken_0x150c78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x150C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150C78u;
        // 0x150c7c: 0xe4810054  swc1        $f1, 0x54($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 84), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x150c78) {
            ctx->pc = 0x150CC0u;
            return;
        }
    }
    ctx->pc = 0x150C80u;
}
