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

// Function: entry_00222410
// Address: 0x222410 - 0x22244c
void entry_00222410_0x222410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00222410_0x222410");
#endif

    switch (ctx->pc) {
        case 0x222434u: goto label_222434;
        default: break;
    }

    ctx->pc = 0x222410u;

    // 0x222410: 0x3c04002f  lui         $a0, 0x2F
    ctx->pc = 0x222410u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)47 << 16));
    // 0x222414: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x222414u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x222418: 0x24846d28  addiu       $a0, $a0, 0x6D28
    ctx->pc = 0x222418u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27944));
    // 0x22241c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x22241cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x2F6D28u));
    // 0x222420: 0x9463000a  lhu         $v1, 0xA($v1)
    ctx->pc = 0x222420u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 10)));
    // 0x222424: 0x1462003a  bne         $v1, $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x222424u;
    {
        const bool branch_taken_0x222424 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x222424) {
            ctx->pc = 0x222510u;
            return;
        }
    }
    ctx->pc = 0x22242Cu;
    // 0x22242c: 0xc0448bc  jal         func_1122F0
    ctx->pc = 0x22242Cu;
    SET_GPR_U32(ctx, 31, 0x222434u);
    ctx->pc = 0x1122F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1122F0u, 0x22242Cu, 0x222434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222434u;
label_222434:
    // 0x222434: 0x10400036  beqz        $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x222434u;
    {
        const bool branch_taken_0x222434 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x222434) {
            ctx->pc = 0x222510u;
            return;
        }
    }
    ctx->pc = 0x22243Cu;
    // 0x22243c: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x22243cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x222440: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x222440u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x222444: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x222444u;
    {
        const bool branch_taken_0x222444 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x222448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222444u;
        // 0x222448: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222444) {
            ctx->pc = 0x222510u;
            return;
        }
    }
    ctx->pc = 0x22244Cu;
}
