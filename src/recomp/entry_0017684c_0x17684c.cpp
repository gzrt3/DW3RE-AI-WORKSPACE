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

// Function: entry_0017684c
// Address: 0x17684c - 0x1768b0
void entry_0017684c_0x17684c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017684c_0x17684c");
#endif

    switch (ctx->pc) {
        case 0x17689cu: goto label_17689c;
        default: break;
    }

    ctx->pc = 0x17684cu;

    // 0x17684c: 0x278281d0  addiu       $v0, $gp, -0x7E30
    ctx->pc = 0x17684cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934992));
    // 0x176850: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x176850u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x176854: 0x3c080025  lui         $t0, 0x25
    ctx->pc = 0x176854u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)37 << 16));
    // 0x176858: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x176858u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x17685c: 0x71100  sll         $v0, $a3, 4
    ctx->pc = 0x17685cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x176860: 0x478023  subu        $s0, $v0, $a3
    ctx->pc = 0x176860u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x176864: 0x25082930  addiu       $t0, $t0, 0x2930
    ctx->pc = 0x176864u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 10544));
    // 0x176868: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x176868u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x17686c: 0x24423b80  addiu       $v0, $v0, 0x3B80
    ctx->pc = 0x17686cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15232));
    // 0x176870: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x176870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x176874: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x176874u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x176878: 0x90460000  lbu         $a2, 0x0($v0)
    ctx->pc = 0x176878u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17687c: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x17687cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x176880: 0x24424970  addiu       $v0, $v0, 0x4970
    ctx->pc = 0x176880u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18800));
    // 0x176884: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x176884u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x176888: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x176888u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17688c: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x17688cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x176890: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x176890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x176894: 0xc08f20e  jal         func_23C838
    ctx->pc = 0x176894u;
    SET_GPR_U32(ctx, 31, 0x17689Cu);
    ctx->pc = 0x176898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176894u;
    // 0x176898: 0x8c460000  lw          $a2, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23C838u, 0x176894u, 0x17689Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17689Cu;
label_17689c:
    // 0x17689c: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x17689cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x1768a0: 0x24423b82  addiu       $v0, $v0, 0x3B82
    ctx->pc = 0x1768a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15234));
    // 0x1768a4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1768a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1768a8: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x1768A8u;
    {
        const bool branch_taken_0x1768a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1768ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1768A8u;
        // 0x1768ac: 0x90420000  lbu         $v0, 0x0($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1768a8) {
            ctx->pc = 0x17694Cu;
            return;
        }
    }
    ctx->pc = 0x1768B0u;
}
