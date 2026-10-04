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

// Function: entry_001b2d40
// Address: 0x1b2d40 - 0x1b2dac
void entry_001b2d40_0x1b2d40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b2d40_0x1b2d40");
#endif

    ctx->pc = 0x1b2d40u;

    // 0x1b2d40: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x1b2d40u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1b2d44: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1b2d44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1b2d48: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1b2d48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b2d4c: 0x621826  xor         $v1, $v1, $v0
    ctx->pc = 0x1b2d4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x1b2d50: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1b2d50u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1b2d54: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x1B2D54u;
    {
        const bool branch_taken_0x1b2d54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2D54u;
        // 0x1b2d58: 0x46001006  mov.s       $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2d54) {
            ctx->pc = 0x1B2DACu;
            return;
        }
    }
    ctx->pc = 0x1B2D5Cu;
    // 0x1b2d5c: 0x0  nop
    ctx->pc = 0x1b2d5cu;
    // NOP
    // 0x1b2d60: 0x3c013422  lui         $at, 0x3422
    ctx->pc = 0x1b2d60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)13346 << 16));
    // 0x1b2d64: 0x34212168  ori         $at, $at, 0x2168
    ctx->pc = 0x1b2d64u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)8552);
    // 0x1b2d68: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b2d68u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b2d6c: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x1b2d6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x1b2d70: 0x34210fda  ori         $at, $at, 0xFDA
    ctx->pc = 0x1b2d70u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4058);
    // 0x1b2d74: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1b2d74u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b2d78: 0x0  nop
    ctx->pc = 0x1b2d78u;
    // NOP
    // 0x1b2d7c: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x1b2d7cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x1b2d80: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1B2D80u;
    {
        const bool branch_taken_0x1b2d80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2D80u;
        // 0x1b2d84: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2d80) {
            ctx->pc = 0x1B2DACu;
            return;
        }
    }
    ctx->pc = 0x1B2D88u;
    // 0x1b2d88: 0x3c013422  lui         $at, 0x3422
    ctx->pc = 0x1b2d88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)13346 << 16));
    // 0x1b2d8c: 0x34212168  ori         $at, $at, 0x2168
    ctx->pc = 0x1b2d8cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)8552);
    // 0x1b2d90: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b2d90u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b2d94: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x1b2d94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x1b2d98: 0x34210fda  ori         $at, $at, 0xFDA
    ctx->pc = 0x1b2d98u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4058);
    // 0x1b2d9c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1b2d9cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b2da0: 0x0  nop
    ctx->pc = 0x1b2da0u;
    // NOP
    // 0x1b2da4: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x1b2da4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x1b2da8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1b2da8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    ctx->pc = 0x1b2dacu;
}
