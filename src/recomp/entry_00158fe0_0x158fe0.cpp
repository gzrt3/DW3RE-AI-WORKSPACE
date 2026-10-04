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

// Function: entry_00158fe0
// Address: 0x158fe0 - 0x159030
void entry_00158fe0_0x158fe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00158fe0_0x158fe0");
#endif

    ctx->pc = 0x158fe0u;

    // 0x158fe0: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x158fe0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x158fe4: 0x2903000a  slti        $v1, $t0, 0xA
    ctx->pc = 0x158fe4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x158fe8: 0x1460fff2  bnez        $v1, . + 4 + (-0xE << 2)
    ctx->pc = 0x158FE8u;
    {
        const bool branch_taken_0x158fe8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x158FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158FE8u;
        // 0x158fec: 0x254a0240  addiu       $t2, $t2, 0x240 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 576));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158fe8) {
            ctx->pc = 0x158FB4u;
            return;
        }
    }
    ctx->pc = 0x158FF0u;
    // 0x158ff0: 0x85a40000  lh          $a0, 0x0($t5)
    ctx->pc = 0x158ff0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x158ff4: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x158ff4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x158ff8: 0x28e30002  slti        $v1, $a3, 0x2
    ctx->pc = 0x158ff8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x158ffc: 0x256b0002  addiu       $t3, $t3, 0x2
    ctx->pc = 0x158ffcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 2));
    // 0x159000: 0x258c1b00  addiu       $t4, $t4, 0x1B00
    ctx->pc = 0x159000u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 6912));
    // 0x159004: 0x89001a  div         $zero, $a0, $t1
    ctx->pc = 0x159004u;
    { int32_t divisor = GPR_S32(ctx, 9);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x159008: 0x0  nop
    ctx->pc = 0x159008u;
    // NOP
    // 0x15900c: 0x0  nop
    ctx->pc = 0x15900cu;
    // NOP
    // 0x159010: 0x2012  mflo        $a0
    ctx->pc = 0x159010u;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x159014: 0x1460ffdf  bnez        $v1, . + 4 + (-0x21 << 2)
    ctx->pc = 0x159014u;
    {
        const bool branch_taken_0x159014 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x159018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159014u;
        // 0x159018: 0xa5a40000  sh          $a0, 0x0($t5) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 13), 0), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159014) {
            ctx->pc = 0x158F94u;
            return;
        }
    }
    ctx->pc = 0x15901Cu;
    // 0x15901c: 0x3e00008  jr          $ra
    ctx->pc = 0x15901Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15901Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x159024u;
    // 0x159024: 0x0  nop
    ctx->pc = 0x159024u;
    // NOP
    // 0x159028: 0x0  nop
    ctx->pc = 0x159028u;
    // NOP
    // 0x15902c: 0x0  nop
    ctx->pc = 0x15902cu;
    // NOP
    ctx->pc = 0x159030u;
}
