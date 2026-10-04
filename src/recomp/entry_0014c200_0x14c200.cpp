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

// Function: entry_0014c200
// Address: 0x14c200 - 0x14c230
void entry_0014c200_0x14c200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014c200_0x14c200");
#endif

    switch (ctx->pc) {
        case 0x14c220u: goto label_14c220;
        default: break;
    }

    ctx->pc = 0x14c200u;

    // 0x14c200: 0x90830022  lbu         $v1, 0x22($a0)
    ctx->pc = 0x14c200u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 34)));
    // 0x14c204: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x14c204u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x14c208: 0x90820023  lbu         $v0, 0x23($a0)
    ctx->pc = 0x14c208u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 35)));
    // 0x14c20c: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x14c20cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x14c210: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x14c210u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x14c214: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x14c214u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x14c218: 0xc04494c  jal         func_112530
    ctx->pc = 0x14C218u;
    SET_GPR_U32(ctx, 31, 0x14C220u);
    ctx->pc = 0x14C21Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C218u;
    // 0x14c21c: 0x24450001  addiu       $a1, $v0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112530u, 0x14C218u, 0x14C220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C220u;
label_14c220:
    // 0x14c220: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x14C220u;
    {
        const bool branch_taken_0x14c220 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14c220) {
            ctx->pc = 0x14C270u;
            return;
        }
    }
    ctx->pc = 0x14C228u;
    // 0x14c228: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x14C228u;
    {
        const bool branch_taken_0x14c228 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14C22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C228u;
        // 0x14c22c: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c228) {
            ctx->pc = 0x14C270u;
            return;
        }
    }
    ctx->pc = 0x14C230u;
}
