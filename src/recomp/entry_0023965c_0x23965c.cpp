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

// Function: entry_0023965c
// Address: 0x23965c - 0x239698
void entry_0023965c_0x23965c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023965c_0x23965c");
#endif

    switch (ctx->pc) {
        case 0x239668u: goto label_239668;
        default: break;
    }

    ctx->pc = 0x23965cu;

    // 0x23965c: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x23965cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x239660: 0xc08e708  jal         func_239C20
    ctx->pc = 0x239660u;
    SET_GPR_U32(ctx, 31, 0x239668u);
    ctx->pc = 0x239664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239660u;
    // 0x239664: 0x24050400  addiu       $a1, $zero, 0x400 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x239C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x239C20u, 0x239660u, 0x239668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239668u;
label_239668:
    // 0x239668: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x239668u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23966c: 0x14a0000a  bnez        $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x23966Cu;
    {
        const bool branch_taken_0x23966c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x239670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23966Cu;
        // 0x239670: 0x9602000c  lhu         $v0, 0xC($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23966c) {
            ctx->pc = 0x239698u;
            return;
        }
    }
    ctx->pc = 0x239674u;
    // 0x239674: 0x26040043  addiu       $a0, $s0, 0x43
    ctx->pc = 0x239674u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 67));
    // 0x239678: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x239678u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23967c: 0xae040010  sw          $a0, 0x10($s0)
    ctx->pc = 0x23967cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 4));
    // 0x239680: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x239680u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x239684: 0xae030014  sw          $v1, 0x14($s0)
    ctx->pc = 0x239684u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
    // 0x239688: 0xa602000c  sh          $v0, 0xC($s0)
    ctx->pc = 0x239688u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x23968c: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x23968Cu;
    {
        const bool branch_taken_0x23968c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x239690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23968Cu;
        // 0x239690: 0xae040000  sw          $a0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23968c) {
            ctx->pc = 0x2396DCu;
            return;
        }
    }
    ctx->pc = 0x239694u;
    // 0x239694: 0x0  nop
    ctx->pc = 0x239694u;
    // NOP
    ctx->pc = 0x239698u;
}
