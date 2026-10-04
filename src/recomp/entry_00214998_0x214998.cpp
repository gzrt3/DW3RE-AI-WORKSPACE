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

// Function: entry_00214998
// Address: 0x214998 - 0x2149c4
void entry_00214998_0x214998(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00214998_0x214998");
#endif

    switch (ctx->pc) {
        case 0x2149a8u: goto label_2149a8;
        default: break;
    }

    ctx->pc = 0x214998u;

    // 0x214998: 0x14a2000a  bne         $a1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x214998u;
    {
        const bool branch_taken_0x214998 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x214998) {
            ctx->pc = 0x2149C4u;
            return;
        }
    }
    ctx->pc = 0x2149A0u;
    // 0x2149a0: 0xc0854bc  jal         func_2152F0
    ctx->pc = 0x2149A0u;
    SET_GPR_U32(ctx, 31, 0x2149A8u);
    ctx->pc = 0x2152F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2152F0u, 0x2149A0u, 0x2149A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2149A8u;
label_2149a8:
    // 0x2149a8: 0x8f8291d0  lw          $v0, -0x6E30($gp)
    ctx->pc = 0x2149a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939088)));
    // 0x2149ac: 0x28420060  slti        $v0, $v0, 0x60
    ctx->pc = 0x2149acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)96) ? 1 : 0);
    // 0x2149b0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2149B0u;
    {
        const bool branch_taken_0x2149b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2149B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2149B0u;
        // 0x2149b4: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2149b0) {
            ctx->pc = 0x2149C8u;
            return;
        }
    }
    ctx->pc = 0x2149B8u;
    // 0x2149b8: 0xaf8091d0  sw          $zero, -0x6E30($gp)
    ctx->pc = 0x2149b8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939088), GPR_U32(ctx, 0));
    // 0x2149bc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2149BCu;
    {
        const bool branch_taken_0x2149bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2149C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2149BCu;
        // 0x2149c0: 0xaf8291cc  sw          $v0, -0x6E34($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939084), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2149bc) {
            ctx->pc = 0x2149C8u;
            return;
        }
    }
    ctx->pc = 0x2149C4u;
}
