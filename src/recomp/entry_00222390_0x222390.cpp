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

// Function: entry_00222390
// Address: 0x222390 - 0x2223c4
void entry_00222390_0x222390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00222390_0x222390");
#endif

    switch (ctx->pc) {
        case 0x2223acu: goto label_2223ac;
        default: break;
    }

    ctx->pc = 0x222390u;

    // 0x222390: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x222390u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x222394: 0x24020023  addiu       $v0, $zero, 0x23
    ctx->pc = 0x222394u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x222398: 0x9463000a  lhu         $v1, 0xA($v1)
    ctx->pc = 0x222398u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 10)));
    // 0x22239c: 0x1462005c  bne         $v1, $v0, . + 4 + (0x5C << 2)
    ctx->pc = 0x22239Cu;
    {
        const bool branch_taken_0x22239c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x22239c) {
            ctx->pc = 0x222510u;
            return;
        }
    }
    ctx->pc = 0x2223A4u;
    // 0x2223a4: 0xc084b7c  jal         func_212DF0
    ctx->pc = 0x2223A4u;
    SET_GPR_U32(ctx, 31, 0x2223ACu);
    ctx->pc = 0x2223A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2223A4u;
    // 0x2223a8: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212DF0u, 0x2223A4u, 0x2223ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2223ACu;
label_2223ac:
    // 0x2223ac: 0x10400058  beqz        $v0, . + 4 + (0x58 << 2)
    ctx->pc = 0x2223ACu;
    {
        const bool branch_taken_0x2223ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2223ac) {
            ctx->pc = 0x222510u;
            return;
        }
    }
    ctx->pc = 0x2223B4u;
    // 0x2223b4: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x2223b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2223b8: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x2223b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2223bc: 0x10000054  b           . + 4 + (0x54 << 2)
    ctx->pc = 0x2223BCu;
    {
        const bool branch_taken_0x2223bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2223C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2223BCu;
        // 0x2223c0: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2223bc) {
            ctx->pc = 0x222510u;
            return;
        }
    }
    ctx->pc = 0x2223C4u;
}
