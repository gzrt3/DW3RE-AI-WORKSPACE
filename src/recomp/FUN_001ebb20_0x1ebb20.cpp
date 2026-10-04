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

// Function: FUN_001ebb20
// Address: 0x1ebb20 - 0x1ebbcc
void FUN_001ebb20_0x1ebb20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001ebb20_0x1ebb20");
#endif

    switch (ctx->pc) {
        case 0x1ebb94u: goto label_1ebb94;
        default: break;
    }

    ctx->pc = 0x1ebb20u;

    // 0x1ebb20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1ebb20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1ebb24: 0x3c01004c  lui         $at, 0x4C
    ctx->pc = 0x1ebb24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)76 << 16));
    // 0x1ebb28: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ebb28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ebb2c: 0x8c23d71c  lw          $v1, -0x28E4($at)
    ctx->pc = 0x1ebb2cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x4BD71Cu));
    // 0x1ebb30: 0x1460001a  bnez        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x1EBB30u;
    {
        const bool branch_taken_0x1ebb30 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EBB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBB30u;
        // 0x1ebb34: 0x3c01004c  lui         $at, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)76 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ebb30) {
            ctx->pc = 0x1EBB9Cu;
            goto label_1ebb9c;
        }
    }
    ctx->pc = 0x1EBB38u;
    // 0x1ebb38: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x1ebb38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
    // 0x1ebb3c: 0x3c060029  lui         $a2, 0x29
    ctx->pc = 0x1ebb3cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)41 << 16));
    // 0x1ebb40: 0x2442be40  addiu       $v0, $v0, -0x41C0
    ctx->pc = 0x1ebb40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950464));
    // 0x1ebb44: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1ebb44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1ebb48: 0x78470000  lq          $a3, 0x0($v0)
    ctx->pc = 0x1ebb48u;
    SET_GPR_VEC(ctx, 7, FAST_READ128(0x28BE40u));
    // 0x1ebb4c: 0x24c6be50  addiu       $a2, $a2, -0x41B0
    ctx->pc = 0x1ebb4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294950480));
    // 0x1ebb50: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x1ebb50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1ebb54: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1ebb54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ebb58: 0x3c01004c  lui         $at, 0x4C
    ctx->pc = 0x1ebb58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)76 << 16));
    // 0x1ebb5c: 0x7c870000  sq          $a3, 0x0($a0)
    ctx->pc = 0x1ebb5cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 7));
    // 0x1ebb60: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ebb60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ebb64: 0x78c60000  lq          $a2, 0x0($a2)
    ctx->pc = 0x1ebb64u;
    SET_GPR_VEC(ctx, 6, FAST_READ128(0x28BE50u));
    // 0x1ebb68: 0x7ca60000  sq          $a2, 0x0($a1)
    ctx->pc = 0x1ebb68u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 6));
    // 0x1ebb6c: 0xac23d710  sw          $v1, -0x28F0($at)
    ctx->pc = 0x1ebb6cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x4BD710u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4BD710u, _value); } while (0);
    // 0x1ebb70: 0x3c01004c  lui         $at, 0x4C
    ctx->pc = 0x1ebb70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)76 << 16));
    // 0x1ebb74: 0xac22d71c  sw          $v0, -0x28E4($at)
    ctx->pc = 0x1ebb74u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x4BD71Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4BD71Cu, _value); } while (0);
    // 0x1ebb78: 0x3c01004c  lui         $at, 0x4C
    ctx->pc = 0x1ebb78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)76 << 16));
    // 0x1ebb7c: 0xac20d718  sw          $zero, -0x28E8($at)
    ctx->pc = 0x1ebb7cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x4BD718u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4BD718u, _value); } while (0);
    // 0x1ebb80: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1ebb80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x1ebb84: 0x8c224900  lw          $v0, 0x4900($at)
    ctx->pc = 0x1ebb84u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x334900u));
    // 0x1ebb88: 0x3c01004c  lui         $at, 0x4C
    ctx->pc = 0x1ebb88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)76 << 16));
    // 0x1ebb8c: 0xc047868  jal         func_11E1A0
    ctx->pc = 0x1EBB8Cu;
    SET_GPR_U32(ctx, 31, 0x1EBB94u);
    ctx->pc = 0x1EBB90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EBB8Cu;
    // 0x1ebb90: 0xac22d714  sw          $v0, -0x28EC($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294956820), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E1A0u, 0x1EBB8Cu, 0x1EBB94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EBB94u;
label_1ebb94:
    // 0x1ebb94: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1EBB94u;
    {
        const bool branch_taken_0x1ebb94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EBB98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBB94u;
        // 0x1ebb98: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ebb94) {
            ctx->pc = 0x1EBBCCu;
            return;
        }
    }
    ctx->pc = 0x1EBB9Cu;
label_1ebb9c:
    // 0x1ebb9c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1ebb9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ebba0: 0x8c24d710  lw          $a0, -0x28F0($at)
    ctx->pc = 0x1ebba0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956816)));
    // 0x1ebba4: 0x14830006  bne         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1EBBA4u;
    {
        const bool branch_taken_0x1ebba4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x1EBBA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBBA4u;
        // 0x1ebba8: 0x2483f1f0  addiu       $v1, $a0, -0xE10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963696));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ebba4) {
            ctx->pc = 0x1EBBC0u;
            goto label_1ebbc0;
        }
    }
    ctx->pc = 0x1EBBACu;
    // 0x1ebbac: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1ebbacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x1ebbb0: 0x8c234900  lw          $v1, 0x4900($at)
    ctx->pc = 0x1ebbb0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x334900u));
    // 0x1ebbb4: 0x3c01004c  lui         $at, 0x4C
    ctx->pc = 0x1ebbb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)76 << 16));
    // 0x1ebbb8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1EBBB8u;
    {
        const bool branch_taken_0x1ebbb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EBBBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBBB8u;
        // 0x1ebbbc: 0xac23d710  sw          $v1, -0x28F0($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294956816), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ebbb8) {
            ctx->pc = 0x1EBBC8u;
            goto label_1ebbc8;
        }
    }
    ctx->pc = 0x1EBBC0u;
label_1ebbc0:
    // 0x1ebbc0: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1ebbc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x1ebbc4: 0xac234900  sw          $v1, 0x4900($at)
    ctx->pc = 0x1ebbc4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x334900u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x334900u, _value); } while (0);
label_1ebbc8:
    // 0x1ebbc8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ebbc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x1ebbccu;
}
