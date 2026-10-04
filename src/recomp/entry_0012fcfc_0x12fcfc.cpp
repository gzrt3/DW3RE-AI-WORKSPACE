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

// Function: entry_0012fcfc
// Address: 0x12fcfc - 0x12fd20
void entry_0012fcfc_0x12fcfc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012fcfc_0x12fcfc");
#endif

    switch (ctx->pc) {
        case 0x12fd04u: goto label_12fd04;
        default: break;
    }

    ctx->pc = 0x12fcfcu;

    // 0x12fcfc: 0xc059ec8  jal         func_167B20
    ctx->pc = 0x12FCFCu;
    SET_GPR_U32(ctx, 31, 0x12FD04u);
    ctx->pc = 0x12FD00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12FCFCu;
    // 0x12fd00: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x167B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167B20u, 0x12FCFCu, 0x12FD04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FD04u;
label_12fd04:
    // 0x12fd04: 0x10400062  beqz        $v0, . + 4 + (0x62 << 2)
    ctx->pc = 0x12FD04u;
    {
        const bool branch_taken_0x12fd04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12fd04) {
            ctx->pc = 0x12FE90u;
            return;
        }
    }
    ctx->pc = 0x12FD0Cu;
    // 0x12fd0c: 0x8f8785d0  lw          $a3, -0x7A30($gp)
    ctx->pc = 0x12fd0cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936016)));
    // 0x12fd10: 0x10e0005f  beqz        $a3, . + 4 + (0x5F << 2)
    ctx->pc = 0x12FD10u;
    {
        const bool branch_taken_0x12fd10 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x12FD14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FD10u;
        // 0x12fd14: 0x2404ffef  addiu       $a0, $zero, -0x11 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fd10) {
            ctx->pc = 0x12FE90u;
            return;
        }
    }
    ctx->pc = 0x12FD18u;
    // 0x12fd18: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x12fd18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12fd1c: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x12fd1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->pc = 0x12fd20u;
}
