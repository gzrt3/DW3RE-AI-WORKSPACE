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

// Function: entry_001b4e28
// Address: 0x1b4e28 - 0x1b4e90
void entry_001b4e28_0x1b4e28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b4e28_0x1b4e28");
#endif

    switch (ctx->pc) {
        case 0x1b4e30u: goto label_1b4e30;
        default: break;
    }

    ctx->pc = 0x1b4e28u;

    // 0x1b4e28: 0xc06d448  jal         func_1B5120
    ctx->pc = 0x1B4E28u;
    SET_GPR_U32(ctx, 31, 0x1B4E30u);
    ctx->pc = 0x1B5120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B5120u, 0x1B4E28u, 0x1B4E30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4E30u;
label_1b4e30:
    // 0x1b4e30: 0x3c023f97  lui         $v0, 0x3F97
    ctx->pc = 0x1b4e30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16279 << 16));
    // 0x1b4e34: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1b4e34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1b4e38: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x1b4e38u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x1b4e3c: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x1B4E3Cu;
    {
        const bool branch_taken_0x1b4e3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B4E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4E3Cu;
        // 0x1b4e40: 0x46000346  mov.s       $f13, $f0 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4e3c) {
            ctx->pc = 0x1B4EB8u;
            return;
        }
    }
    ctx->pc = 0x1B4E44u;
    // 0x1b4e44: 0x3c023f2f  lui         $v0, 0x3F2F
    ctx->pc = 0x1b4e44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16175 << 16));
    // 0x1b4e48: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1b4e48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1b4e4c: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x1b4e4cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x1b4e50: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1B4E50u;
    {
        const bool branch_taken_0x1b4e50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b4e50) {
            ctx->pc = 0x1B4E90u;
            return;
        }
    }
    ctx->pc = 0x1B4E58u;
    // 0x1b4e58: 0x460d6800  add.s       $f0, $f13, $f13
    ctx->pc = 0x1b4e58u;
    ctx->f[0] = FPU_ADD_S(ctx->f[13], ctx->f[13]);
    // 0x1b4e5c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1b4e5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1b4e60: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1b4e60u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1b4e64: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x1b4e64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x1b4e68: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1b4e68u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b4e6c: 0x0  nop
    ctx->pc = 0x1b4e6cu;
    // NOP
    // 0x1b4e70: 0x46016840  add.s       $f1, $f13, $f1
    ctx->pc = 0x1b4e70u;
    ctx->f[1] = FPU_ADD_S(ctx->f[13], ctx->f[1]);
    // 0x1b4e74: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x1b4e74u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x1b4e78: 0x0  nop
    ctx->pc = 0x1b4e78u;
    // NOP
    // 0x1b4e7c: 0x0  nop
    ctx->pc = 0x1b4e7cu;
    // NOP
    // 0x1b4e80: 0x46010343  div.s       $f13, $f0, $f1
    ctx->pc = 0x1b4e80u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[13] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[13] = ctx->f[0] / ctx->f[1];
    // 0x1b4e84: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x1B4E84u;
    {
        const bool branch_taken_0x1b4e84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4E84u;
        // 0x1b4e88: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4e84) {
            ctx->pc = 0x1B4F14u;
            return;
        }
    }
    ctx->pc = 0x1B4E8Cu;
    // 0x1b4e8c: 0x0  nop
    ctx->pc = 0x1b4e8cu;
    // NOP
    ctx->pc = 0x1b4e90u;
}
