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

// Function: FUN_00227c70
// Address: 0x227c70 - 0x227cf0
void FUN_00227c70_0x227c70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00227c70_0x227c70");
#endif

    switch (ctx->pc) {
        case 0x227c84u: goto label_227c84;
        case 0x227c98u: goto label_227c98;
        case 0x227cb4u: goto label_227cb4;
        case 0x227cbcu: goto label_227cbc;
        case 0x227cd4u: goto label_227cd4;
        default: break;
    }

    ctx->pc = 0x227c70u;

    // 0x227c70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x227c70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x227c74: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x227c74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x227c78: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x227c78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x227c7c: 0xc05b63c  jal         func_16D8F0
    ctx->pc = 0x227C7Cu;
    SET_GPR_U32(ctx, 31, 0x227C84u);
    ctx->pc = 0x227C80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227C7Cu;
    // 0x227c80: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D8F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D8F0u, 0x227C7Cu, 0x227C84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227C84u;
label_227c84:
    // 0x227c84: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x227c84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x227c88: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x227c88u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x227c8c: 0x8e070008  lw          $a3, 0x8($s0)
    ctx->pc = 0x227c8cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x227c90: 0xc05d988  jal         func_176620
    ctx->pc = 0x227C90u;
    SET_GPR_U32(ctx, 31, 0x227C98u);
    ctx->pc = 0x227C94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227C90u;
    // 0x227c94: 0x8e040014  lw          $a0, 0x14($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x176620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176620u, 0x227C90u, 0x227C98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227C98u;
label_227c98:
    // 0x227c98: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x227c98u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x227c9c: 0x3c040059  lui         $a0, 0x59
    ctx->pc = 0x227c9cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)89 << 16));
    // 0x227ca0: 0x8e070004  lw          $a3, 0x4($s0)
    ctx->pc = 0x227ca0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x227ca4: 0x248499b0  addiu       $a0, $a0, -0x6650
    ctx->pc = 0x227ca4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941104));
    // 0x227ca8: 0x8e080008  lw          $t0, 0x8($s0)
    ctx->pc = 0x227ca8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x227cac: 0xc05d9d8  jal         func_176760
    ctx->pc = 0x227CACu;
    SET_GPR_U32(ctx, 31, 0x227CB4u);
    ctx->pc = 0x227CB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227CACu;
    // 0x227cb0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x176760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176760u, 0x227CACu, 0x227CB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227CB4u;
label_227cb4:
    // 0x227cb4: 0xc05b63c  jal         func_16D8F0
    ctx->pc = 0x227CB4u;
    SET_GPR_U32(ctx, 31, 0x227CBCu);
    ctx->pc = 0x227CB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227CB4u;
    // 0x227cb8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D8F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D8F0u, 0x227CB4u, 0x227CBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227CBCu;
label_227cbc:
    // 0x227cbc: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x227cbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x227cc0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x227cc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227cc4: 0x2406007f  addiu       $a2, $zero, 0x7F
    ctx->pc = 0x227cc4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x227cc8: 0x24070040  addiu       $a3, $zero, 0x40
    ctx->pc = 0x227cc8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x227ccc: 0xc05b4d4  jal         func_16D350
    ctx->pc = 0x227CCCu;
    SET_GPR_U32(ctx, 31, 0x227CD4u);
    ctx->pc = 0x227CD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227CCCu;
    // 0x227cd0: 0x2408003c  addiu       $t0, $zero, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D350u, 0x227CCCu, 0x227CD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227CD4u;
label_227cd4:
    // 0x227cd4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x227cd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x227cd8: 0x3c080059  lui         $t0, 0x59
    ctx->pc = 0x227cd8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)89 << 16));
    // 0x227cdc: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x227cdcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227ce0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x227ce0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227ce4: 0x250899b0  addiu       $t0, $t0, -0x6650
    ctx->pc = 0x227ce4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294941104));
    // 0x227ce8: 0xc070430  jal         func_1C10C0
    ctx->pc = 0x227CE8u;
    SET_GPR_U32(ctx, 31, 0x227CF0u);
    ctx->pc = 0x227CECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227CE8u;
    // 0x227cec: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C10C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C10C0u, 0x227CE8u, 0x227CF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227CF0u;
}
