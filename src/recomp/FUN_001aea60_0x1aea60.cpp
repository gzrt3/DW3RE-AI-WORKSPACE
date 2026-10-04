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

// Function: FUN_001aea60
// Address: 0x1aea60 - 0x1aeaec
void FUN_001aea60_0x1aea60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001aea60_0x1aea60");
#endif

    switch (ctx->pc) {
        case 0x1aeaa0u: goto label_1aeaa0;
        default: break;
    }

    ctx->pc = 0x1aea60u;

    // 0x1aea60: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1aea60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1aea64: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x1aea64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
    // 0x1aea68: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1aea68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x1aea6c: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x1aea6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1aea70: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x1aea70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x1aea74: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1aea74u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aea78: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1aea78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1aea7c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1aea7cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aea80: 0x24705ec0  addiu       $s0, $v1, 0x5EC0
    ctx->pc = 0x1aea80u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 24256));
    // 0x1aea84: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1aea84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1aea88: 0xac625ec0  sw          $v0, 0x5EC0($v1)
    ctx->pc = 0x1aea88u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x375EC0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x375EC0u, _value); } while (0);
    // 0x1aea8c: 0x2607000c  addiu       $a3, $s0, 0xC
    ctx->pc = 0x1aea8cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x1aea90: 0xae120004  sw          $s2, 0x4($s0)
    ctx->pc = 0x1aea90u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x375EC4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x375EC4u, _value); } while (0);
    // 0x1aea94: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1aea94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aea98: 0xae110008  sw          $s1, 0x8($s0)
    ctx->pc = 0x1aea98u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 17)); ps2TraceGuestWrite(rdram, 0x375EC8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x375EC8u, _value); } while (0);
    // 0x1aea9c: 0x0  nop
    ctx->pc = 0x1aea9cu;
    // NOP
label_1aeaa0:
    // 0x1aeaa0: 0xc51021  addu        $v0, $a2, $a1
    ctx->pc = 0x1aeaa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x1aeaa4: 0xe52021  addu        $a0, $a3, $a1
    ctx->pc = 0x1aeaa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x1aeaa8: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x1aeaa8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1aeaac: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1aeaacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1aeab0: 0x28a20006  slti        $v0, $a1, 0x6
    ctx->pc = 0x1aeab0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x1aeab4: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x1aeab4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1aeab8: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1AEAB8u;
    {
        const bool branch_taken_0x1aeab8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1aeab8) {
            ctx->pc = 0x1AEAA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1aeaa0;
        }
    }
    ctx->pc = 0x1AEAC0u;
    // 0x1aeac0: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x1aeac0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x1aeac4: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1aeac4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1aeac8: 0x24845c80  addiu       $a0, $a0, 0x5C80
    ctx->pc = 0x1aeac8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23680));
    // 0x1aeacc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1aeaccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1aead0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1aead0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aead4: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1aead4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aead8: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x1aead8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1aeadc: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1aeadcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aeae0: 0x240a0080  addiu       $t2, $zero, 0x80
    ctx->pc = 0x1aeae0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1aeae4: 0xc069e2a  jal         func_1A78A8
    ctx->pc = 0x1AEAE4u;
    SET_GPR_U32(ctx, 31, 0x1AEAECu);
    ctx->pc = 0x1AEAE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AEAE4u;
    // 0x1aeae8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A78A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A78A8u, 0x1AEAE4u, 0x1AEAECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AEAECu;
}
