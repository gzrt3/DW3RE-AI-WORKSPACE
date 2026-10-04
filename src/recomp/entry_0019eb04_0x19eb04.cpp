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

// Function: entry_0019eb04
// Address: 0x19eb04 - 0x19eb14
void entry_0019eb04_0x19eb04(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019eb04_0x19eb04");
#endif

    switch (ctx->pc) {
        case 0x19eb0cu: goto label_19eb0c;
        default: break;
    }

    ctx->pc = 0x19eb04u;

    // 0x19eb04: 0xc067dd2  jal         func_19F748
    ctx->pc = 0x19EB04u;
    SET_GPR_U32(ctx, 31, 0x19EB0Cu);
    ctx->pc = 0x19EB08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19EB04u;
    // 0x19eb08: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F748u, 0x19EB04u, 0x19EB0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19EB0Cu;
label_19eb0c:
    // 0x19eb0c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x19EB0Cu;
    {
        const bool branch_taken_0x19eb0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19EB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EB0Cu;
        // 0x19eb10: 0xaea20000  sw          $v0, 0x0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19eb0c) {
            ctx->pc = 0x19EB40u;
            return;
        }
    }
    ctx->pc = 0x19EB14u;
}
