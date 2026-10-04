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

// Function: entry_00222294
// Address: 0x222294 - 0x2222d4
void entry_00222294_0x222294(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00222294_0x222294");
#endif

    switch (ctx->pc) {
        case 0x2222bcu: goto label_2222bc;
        default: break;
    }

    ctx->pc = 0x222294u;

    // 0x222294: 0x1462000f  bne         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x222294u;
    {
        const bool branch_taken_0x222294 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x222294) {
            ctx->pc = 0x2222D4u;
            return;
        }
    }
    ctx->pc = 0x22229Cu;
    // 0x22229c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x22229cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2222a0: 0x24020023  addiu       $v0, $zero, 0x23
    ctx->pc = 0x2222a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x2222a4: 0x9463000a  lhu         $v1, 0xA($v1)
    ctx->pc = 0x2222a4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 10)));
    // 0x2222a8: 0x14620014  bne         $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2222A8u;
    {
        const bool branch_taken_0x2222a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2222a8) {
            ctx->pc = 0x2222FCu;
            return;
        }
    }
    ctx->pc = 0x2222B0u;
    // 0x2222b0: 0x8f8592d8  lw          $a1, -0x6D28($gp)
    ctx->pc = 0x2222b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939352)));
    // 0x2222b4: 0xc056ff8  jal         func_15BFE0
    ctx->pc = 0x2222B4u;
    SET_GPR_U32(ctx, 31, 0x2222BCu);
    ctx->pc = 0x2222B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2222B4u;
    // 0x2222b8: 0x2404001b  addiu       $a0, $zero, 0x1B (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15BFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15BFE0u, 0x2222B4u, 0x2222BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2222BCu;
label_2222bc:
    // 0x2222bc: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2222BCu;
    {
        const bool branch_taken_0x2222bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2222bc) {
            ctx->pc = 0x2222FCu;
            return;
        }
    }
    ctx->pc = 0x2222C4u;
    // 0x2222c4: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x2222c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2222c8: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x2222c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2222cc: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2222CCu;
    {
        const bool branch_taken_0x2222cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2222D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2222CCu;
        // 0x2222d0: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2222cc) {
            ctx->pc = 0x2222FCu;
            return;
        }
    }
    ctx->pc = 0x2222D4u;
}
