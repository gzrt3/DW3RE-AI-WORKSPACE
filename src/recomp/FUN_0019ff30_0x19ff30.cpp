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

// Function: FUN_0019ff30
// Address: 0x19ff30 - 0x19ffd0
void FUN_0019ff30_0x19ff30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0019ff30_0x19ff30");
#endif

    switch (ctx->pc) {
        case 0x19ff60u: goto label_19ff60;
        case 0x19ff6cu: goto label_19ff6c;
        case 0x19ff78u: goto label_19ff78;
        case 0x19ff84u: goto label_19ff84;
        case 0x19ff90u: goto label_19ff90;
        case 0x19ff9cu: goto label_19ff9c;
        case 0x19ffa8u: goto label_19ffa8;
        case 0x19ffb8u: goto label_19ffb8;
        default: break;
    }

    ctx->pc = 0x19ff30u;

    // 0x19ff30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x19ff30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19ff34: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19ff34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19ff38: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x19ff38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19ff3c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x19ff3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19ff40: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x19ff40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x19ff44: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19ff44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ff48: 0xae0000e8  sw          $zero, 0xE8($s0)
    ctx->pc = 0x19ff48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 0));
    // 0x19ff4c: 0x8e020850  lw          $v0, 0x850($s0)
    ctx->pc = 0x19ff4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2128)));
    // 0x19ff50: 0xae030854  sw          $v1, 0x854($s0)
    ctx->pc = 0x19ff50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2132), GPR_U32(ctx, 3));
    // 0x19ff54: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x19ff54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x19ff58: 0xc067dd2  jal         func_19F748
    ctx->pc = 0x19FF58u;
    SET_GPR_U32(ctx, 31, 0x19FF60u);
    ctx->pc = 0x19FF5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19FF58u;
    // 0x19ff5c: 0xae02084c  sw          $v0, 0x84C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 2124), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F748u, 0x19FF58u, 0x19FF60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19FF60u;
label_19ff60:
    // 0x19ff60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19ff60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ff64: 0xc067dd2  jal         func_19F748
    ctx->pc = 0x19FF64u;
    SET_GPR_U32(ctx, 31, 0x19FF6Cu);
    ctx->pc = 0x19FF68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19FF64u;
    // 0x19ff68: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F748u, 0x19FF64u, 0x19FF6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19FF6Cu;
label_19ff6c:
    // 0x19ff6c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19ff6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ff70: 0xc067dd2  jal         func_19F748
    ctx->pc = 0x19FF70u;
    SET_GPR_U32(ctx, 31, 0x19FF78u);
    ctx->pc = 0x19FF74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19FF70u;
    // 0x19ff74: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F748u, 0x19FF70u, 0x19FF78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19FF78u;
label_19ff78:
    // 0x19ff78: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19ff78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ff7c: 0xc067dd2  jal         func_19F748
    ctx->pc = 0x19FF7Cu;
    SET_GPR_U32(ctx, 31, 0x19FF84u);
    ctx->pc = 0x19FF80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19FF7Cu;
    // 0x19ff80: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F748u, 0x19FF7Cu, 0x19FF84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19FF84u;
label_19ff84:
    // 0x19ff84: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19ff84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ff88: 0xc067dd2  jal         func_19F748
    ctx->pc = 0x19FF88u;
    SET_GPR_U32(ctx, 31, 0x19FF90u);
    ctx->pc = 0x19FF8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19FF88u;
    // 0x19ff8c: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F748u, 0x19FF88u, 0x19FF90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19FF90u;
label_19ff90:
    // 0x19ff90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19ff90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ff94: 0xc067dd2  jal         func_19F748
    ctx->pc = 0x19FF94u;
    SET_GPR_U32(ctx, 31, 0x19FF9Cu);
    ctx->pc = 0x19FF98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19FF94u;
    // 0x19ff98: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F748u, 0x19FF94u, 0x19FF9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19FF9Cu;
label_19ff9c:
    // 0x19ff9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19ff9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ffa0: 0xc067dd2  jal         func_19F748
    ctx->pc = 0x19FFA0u;
    SET_GPR_U32(ctx, 31, 0x19FFA8u);
    ctx->pc = 0x19FFA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19FFA0u;
    // 0x19ffa4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F748u, 0x19FFA0u, 0x19FFA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19FFA8u;
label_19ffa8:
    // 0x19ffa8: 0xae0201a4  sw          $v0, 0x1A4($s0)
    ctx->pc = 0x19ffa8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 420), GPR_U32(ctx, 2));
    // 0x19ffac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19ffacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ffb0: 0xc067dd2  jal         func_19F748
    ctx->pc = 0x19FFB0u;
    SET_GPR_U32(ctx, 31, 0x19FFB8u);
    ctx->pc = 0x19FFB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19FFB0u;
    // 0x19ffb4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F748u, 0x19FFB0u, 0x19FFB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19FFB8u;
label_19ffb8:
    // 0x19ffb8: 0xae0201a8  sw          $v0, 0x1A8($s0)
    ctx->pc = 0x19ffb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 424), GPR_U32(ctx, 2));
    // 0x19ffbc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19ffbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ffc0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x19ffc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19ffc4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19ffc4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19ffc8: 0x8067ed6  j           func_19FB58
    ctx->pc = 0x19FFC8u;
    ctx->pc = 0x19FFCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19FFC8u;
    // 0x19ffcc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FB58u;
    FUN_0019fb58_0x19fb58(rdram, ctx, runtime); return;
    ctx->pc = 0x19FFD0u;
}
