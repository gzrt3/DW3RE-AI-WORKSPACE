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

// Function: entry_00233a40
// Address: 0x233a40 - 0x233a70
void entry_00233a40_0x233a40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00233a40_0x233a40");
#endif

    switch (ctx->pc) {
        case 0x233a5cu: goto label_233a5c;
        default: break;
    }

    ctx->pc = 0x233a40u;

    // 0x233a40: 0x3c030009  lui         $v1, 0x9
    ctx->pc = 0x233a40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)9 << 16));
    // 0x233a44: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x233a44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x233a48: 0x8c631270  lw          $v1, 0x1270($v1)
    ctx->pc = 0x233a48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4720)));
    // 0x233a4c: 0x10600021  beqz        $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x233A4Cu;
    {
        const bool branch_taken_0x233a4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x233a4c) {
            ctx->pc = 0x233AD4u;
            return;
        }
    }
    ctx->pc = 0x233A54u;
    // 0x233a54: 0xc08cd34  jal         func_2334D0
    ctx->pc = 0x233A54u;
    SET_GPR_U32(ctx, 31, 0x233A5Cu);
    ctx->pc = 0x233A58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233A54u;
    // 0x233a58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2334D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2334D0u, 0x233A54u, 0x233A5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233A5Cu;
label_233a5c:
    // 0x233a5c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x233a5cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233a60: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x233A60u;
    {
        const bool branch_taken_0x233a60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x233A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233A60u;
        // 0x233a64: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233a60) {
            ctx->pc = 0x233A70u;
            return;
        }
    }
    ctx->pc = 0x233A68u;
    // 0x233a68: 0x1462001a  bne         $v1, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x233A68u;
    {
        const bool branch_taken_0x233a68 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x233a68) {
            ctx->pc = 0x233AD4u;
            return;
        }
    }
    ctx->pc = 0x233A70u;
}
