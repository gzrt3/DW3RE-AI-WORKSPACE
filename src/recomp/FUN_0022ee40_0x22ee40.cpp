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

// Function: FUN_0022ee40
// Address: 0x22ee40 - 0x22ee88
void FUN_0022ee40_0x22ee40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0022ee40_0x22ee40");
#endif

    switch (ctx->pc) {
        case 0x22ee60u: goto label_22ee60;
        case 0x22ee70u: goto label_22ee70;
        case 0x22ee80u: goto label_22ee80;
        default: break;
    }

    ctx->pc = 0x22ee40u;

    // 0x22ee40: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x22ee40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x22ee44: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x22ee44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x22ee48: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x22ee48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x22ee4c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x22ee4cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x22ee50: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x22ee50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ee54: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x22ee54u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x22ee58: 0xc066e44  jal         func_19B910
    ctx->pc = 0x22EE58u;
    SET_GPR_U32(ctx, 31, 0x22EE60u);
    ctx->pc = 0x22EE5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22EE58u;
    // 0x22ee5c: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B910u, 0x22EE58u, 0x22EE60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22EE60u;
label_22ee60:
    // 0x22ee60: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x22ee60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x22ee64: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x22ee64u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x22ee68: 0xc066ec0  jal         func_19BB00
    ctx->pc = 0x22EE68u;
    SET_GPR_U32(ctx, 31, 0x22EE70u);
    ctx->pc = 0x22EE6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22EE68u;
    // 0x22ee6c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BB00u, 0x22EE68u, 0x22EE70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22EE70u;
label_22ee70:
    // 0x22ee70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22ee70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ee74: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x22ee74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ee78: 0xc066d7a  jal         func_19B5E8
    ctx->pc = 0x22EE78u;
    SET_GPR_U32(ctx, 31, 0x22EE80u);
    ctx->pc = 0x22EE7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22EE78u;
    // 0x22ee7c: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B5E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B5E8u, 0x22EE78u, 0x22EE80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22EE80u;
label_22ee80:
    // 0x22ee80: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x22ee80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22ee84: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x22ee84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    ctx->pc = 0x22ee88u;
}
