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

// Function: entry_002223c4
// Address: 0x2223c4 - 0x222410
void entry_002223c4_0x2223c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002223c4_0x2223c4");
#endif

    switch (ctx->pc) {
        case 0x2223f8u: goto label_2223f8;
        default: break;
    }

    ctx->pc = 0x2223c4u;

    // 0x2223c4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2223c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2223c8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2223c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2223cc: 0x9463000a  lhu         $v1, 0xA($v1)
    ctx->pc = 0x2223ccu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 10)));
    // 0x2223d0: 0x1462004f  bne         $v1, $v0, . + 4 + (0x4F << 2)
    ctx->pc = 0x2223D0u;
    {
        const bool branch_taken_0x2223d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2223D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2223D0u;
        // 0x2223d4: 0x3c01002f  lui         $at, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)47 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2223d0) {
            ctx->pc = 0x222510u;
            return;
        }
    }
    ctx->pc = 0x2223D8u;
    // 0x2223d8: 0x3c04002f  lui         $a0, 0x2F
    ctx->pc = 0x2223d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)47 << 16));
    // 0x2223dc: 0x8c232570  lw          $v1, 0x2570($at)
    ctx->pc = 0x2223dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9584)));
    // 0x2223e0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2223e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2223e4: 0x9463000a  lhu         $v1, 0xA($v1)
    ctx->pc = 0x2223e4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 10)));
    // 0x2223e8: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2223E8u;
    {
        const bool branch_taken_0x2223e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2223ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2223E8u;
        // 0x2223ec: 0x24842570  addiu       $a0, $a0, 0x2570 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9584));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2223e8) {
            ctx->pc = 0x222410u;
            return;
        }
    }
    ctx->pc = 0x2223F0u;
    // 0x2223f0: 0xc0448bc  jal         func_1122F0
    ctx->pc = 0x2223F0u;
    SET_GPR_U32(ctx, 31, 0x2223F8u);
    ctx->pc = 0x1122F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1122F0u, 0x2223F0u, 0x2223F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2223F8u;
label_2223f8:
    // 0x2223f8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2223F8u;
    {
        const bool branch_taken_0x2223f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2223f8) {
            ctx->pc = 0x222410u;
            return;
        }
    }
    ctx->pc = 0x222400u;
    // 0x222400: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x222400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x222404: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x222404u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x222408: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x222408u;
    {
        const bool branch_taken_0x222408 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22240Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222408u;
        // 0x22240c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222408) {
            ctx->pc = 0x222510u;
            return;
        }
    }
    ctx->pc = 0x222410u;
}
