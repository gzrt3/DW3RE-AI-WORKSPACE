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

// Function: FUN_001b8240
// Address: 0x1b8240 - 0x1b8268
void FUN_001b8240_0x1b8240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001b8240_0x1b8240");
#endif

    switch (ctx->pc) {
        case 0x1b8264u: goto label_1b8264;
        default: break;
    }

    ctx->pc = 0x1b8240u;

    // 0x1b8240: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b8240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b8244: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1b8244u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x1b8248: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b8248u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b824c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1b824cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x1b8250: 0x8c233ffc  lw          $v1, 0x3FFC($at)
    ctx->pc = 0x1b8250u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x70003FFCu));
    // 0x1b8254: 0x24421e00  addiu       $v0, $v0, 0x1E00
    ctx->pc = 0x1b8254u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7680));
    // 0x1b8258: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x1b8258u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x1b825c: 0xc066c42  jal         func_19B108
    ctx->pc = 0x1B825Cu;
    SET_GPR_U32(ctx, 31, 0x1B8264u);
    ctx->pc = 0x1B8260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B825Cu;
    // 0x1b8260: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B108u, 0x1B825Cu, 0x1B8264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8264u;
label_1b8264:
    // 0x1b8264: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b8264u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x1b8268u;
}
