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

// Function: entry_001ea870
// Address: 0x1ea870 - 0x1ea8b0
void entry_001ea870_0x1ea870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ea870_0x1ea870");
#endif

    switch (ctx->pc) {
        case 0x1ea89cu: goto label_1ea89c;
        default: break;
    }

    ctx->pc = 0x1ea870u;

    // 0x1ea870: 0xdf8487c8  ld          $a0, -0x7838($gp)
    ctx->pc = 0x1ea870u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 28), 4294936520)));
    // 0x1ea874: 0x24051000  addiu       $a1, $zero, 0x1000
    ctx->pc = 0x1ea874u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x1ea878: 0xe52804  sllv        $a1, $a1, $a3
    ctx->pc = 0x1ea878u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 7) & 0x1F));
    // 0x1ea87c: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x1ea87cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x1ea880: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x1EA880u;
    {
        const bool branch_taken_0x1ea880 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ea880) {
            ctx->pc = 0x1EA8B0u;
            return;
        }
    }
    ctx->pc = 0x1EA888u;
    // 0x1ea888: 0x8f838eb8  lw          $v1, -0x7148($gp)
    ctx->pc = 0x1ea888u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938296)));
    // 0x1ea88c: 0x10600033  beqz        $v1, . + 4 + (0x33 << 2)
    ctx->pc = 0x1EA88Cu;
    {
        const bool branch_taken_0x1ea88c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA88Cu;
        // 0x1ea890: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea88c) {
            ctx->pc = 0x1EA95Cu;
            return;
        }
    }
    ctx->pc = 0x1EA894u;
    // 0x1ea894: 0xc05b420  jal         func_16D080
    ctx->pc = 0x1EA894u;
    SET_GPR_U32(ctx, 31, 0x1EA89Cu);
    ctx->pc = 0x1EA898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA894u;
    // 0x1ea898: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D080u, 0x1EA894u, 0x1EA89Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA89Cu;
label_1ea89c:
    // 0x1ea89c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1ea89cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ea8a0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1ea8a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1ea8a4: 0xaf848ec4  sw          $a0, -0x713C($gp)
    ctx->pc = 0x1ea8a4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938308), GPR_U32(ctx, 4));
    // 0x1ea8a8: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x1EA8A8u;
    {
        const bool branch_taken_0x1ea8a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA8ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA8A8u;
        // 0x1ea8ac: 0xaf838ec8  sw          $v1, -0x7138($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938312), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea8a8) {
            ctx->pc = 0x1EA95Cu;
            return;
        }
    }
    ctx->pc = 0x1EA8B0u;
}
