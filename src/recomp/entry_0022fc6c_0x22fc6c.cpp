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

// Function: entry_0022fc6c
// Address: 0x22fc6c - 0x22fc98
void entry_0022fc6c_0x22fc6c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022fc6c_0x22fc6c");
#endif

    switch (ctx->pc) {
        case 0x22fc90u: goto label_22fc90;
        default: break;
    }

    ctx->pc = 0x22fc6cu;

    // 0x22fc6c: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x22fc6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x22fc70: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x22fc70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x22fc74: 0x90234999  lbu         $v1, 0x4999($at)
    ctx->pc = 0x22fc74u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x334999u));
    // 0x22fc78: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x22FC78u;
    {
        const bool branch_taken_0x22fc78 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x22FC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FC78u;
        // 0x22fc7c: 0x3c040029  lui         $a0, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)41 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fc78) {
            ctx->pc = 0x22FC98u;
            return;
        }
    }
    ctx->pc = 0x22FC80u;
    // 0x22fc80: 0x3c040029  lui         $a0, 0x29
    ctx->pc = 0x22fc80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)41 << 16));
    // 0x22fc84: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x22fc84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22fc88: 0xc1762c8  jal         func_5D8B20
    ctx->pc = 0x22FC88u;
    SET_GPR_U32(ctx, 31, 0x22FC90u);
    ctx->pc = 0x22FC8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22FC88u;
    // 0x22fc8c: 0x24840470  addiu       $a0, $a0, 0x470 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1136));
    ctx->in_delay_slot = false;
    ctx->pc = 0x5D8B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x5D8B20u, 0x22FC88u, 0x22FC90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22FC90u;
label_22fc90:
    // 0x22fc90: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x22FC90u;
    {
        const bool branch_taken_0x22fc90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22FC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FC90u;
        // 0x22fc94: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fc90) {
            ctx->pc = 0x22FCA8u;
            return;
        }
    }
    ctx->pc = 0x22FC98u;
}
