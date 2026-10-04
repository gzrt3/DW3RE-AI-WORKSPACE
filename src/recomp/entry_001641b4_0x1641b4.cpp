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

// Function: entry_001641b4
// Address: 0x1641b4 - 0x1641d4
void entry_001641b4_0x1641b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001641b4_0x1641b4");
#endif

    switch (ctx->pc) {
        case 0x1641ccu: goto label_1641cc;
        default: break;
    }

    ctx->pc = 0x1641b4u;

    // 0x1641b4: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x1641b4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1641b8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1641b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1641bc: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1641BCu;
    {
        const bool branch_taken_0x1641bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1641bc) {
            ctx->pc = 0x1641D4u;
            return;
        }
    }
    ctx->pc = 0x1641C4u;
    // 0x1641c4: 0xc0591f8  jal         func_1647E0
    ctx->pc = 0x1641C4u;
    SET_GPR_U32(ctx, 31, 0x1641CCu);
    ctx->pc = 0x1641C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1641C4u;
    // 0x1641c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1647E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1647E0u, 0x1641C4u, 0x1641CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1641CCu;
label_1641cc:
    // 0x1641cc: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1641CCu;
    {
        const bool branch_taken_0x1641cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1641cc) {
            ctx->pc = 0x1641F8u;
            return;
        }
    }
    ctx->pc = 0x1641D4u;
}
