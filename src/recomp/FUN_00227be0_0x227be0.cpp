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

// Function: FUN_00227be0
// Address: 0x227be0 - 0x227c5c
void FUN_00227be0_0x227be0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00227be0_0x227be0");
#endif

    switch (ctx->pc) {
        case 0x227c04u: goto label_227c04;
        case 0x227c20u: goto label_227c20;
        case 0x227c28u: goto label_227c28;
        case 0x227c40u: goto label_227c40;
        default: break;
    }

    ctx->pc = 0x227be0u;

    // 0x227be0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x227be0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x227be4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x227be4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x227be8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x227be8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x227bec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x227becu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227bf0: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x227bf0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x227bf4: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x227bf4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x227bf8: 0x8e070008  lw          $a3, 0x8($s0)
    ctx->pc = 0x227bf8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x227bfc: 0xc05d988  jal         func_176620
    ctx->pc = 0x227BFCu;
    SET_GPR_U32(ctx, 31, 0x227C04u);
    ctx->pc = 0x227C00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227BFCu;
    // 0x227c00: 0x8c840014  lw          $a0, 0x14($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x176620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176620u, 0x227BFCu, 0x227C04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227C04u;
label_227c04:
    // 0x227c04: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x227c04u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x227c08: 0x3c040059  lui         $a0, 0x59
    ctx->pc = 0x227c08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)89 << 16));
    // 0x227c0c: 0x8e070004  lw          $a3, 0x4($s0)
    ctx->pc = 0x227c0cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x227c10: 0x248499b0  addiu       $a0, $a0, -0x6650
    ctx->pc = 0x227c10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941104));
    // 0x227c14: 0x8e080008  lw          $t0, 0x8($s0)
    ctx->pc = 0x227c14u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x227c18: 0xc05d9d8  jal         func_176760
    ctx->pc = 0x227C18u;
    SET_GPR_U32(ctx, 31, 0x227C20u);
    ctx->pc = 0x227C1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227C18u;
    // 0x227c1c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x176760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176760u, 0x227C18u, 0x227C20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227C20u;
label_227c20:
    // 0x227c20: 0xc05b63c  jal         func_16D8F0
    ctx->pc = 0x227C20u;
    SET_GPR_U32(ctx, 31, 0x227C28u);
    ctx->pc = 0x227C24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227C20u;
    // 0x227c24: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D8F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D8F0u, 0x227C20u, 0x227C28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227C28u;
label_227c28:
    // 0x227c28: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x227c28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x227c2c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x227c2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227c30: 0x2406007f  addiu       $a2, $zero, 0x7F
    ctx->pc = 0x227c30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x227c34: 0x24070040  addiu       $a3, $zero, 0x40
    ctx->pc = 0x227c34u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x227c38: 0xc05b4d4  jal         func_16D350
    ctx->pc = 0x227C38u;
    SET_GPR_U32(ctx, 31, 0x227C40u);
    ctx->pc = 0x227C3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227C38u;
    // 0x227c3c: 0x2408003c  addiu       $t0, $zero, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D350u, 0x227C38u, 0x227C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227C40u;
label_227c40:
    // 0x227c40: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x227c40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x227c44: 0x3c080059  lui         $t0, 0x59
    ctx->pc = 0x227c44u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)89 << 16));
    // 0x227c48: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x227c48u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227c4c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x227c4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227c50: 0x250899b0  addiu       $t0, $t0, -0x6650
    ctx->pc = 0x227c50u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294941104));
    // 0x227c54: 0xc070430  jal         func_1C10C0
    ctx->pc = 0x227C54u;
    SET_GPR_U32(ctx, 31, 0x227C5Cu);
    ctx->pc = 0x227C58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227C54u;
    // 0x227c58: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C10C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C10C0u, 0x227C54u, 0x227C5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227C5Cu;
}
