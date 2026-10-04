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

// Function: entry_00198028
// Address: 0x198028 - 0x198048
void entry_00198028_0x198028(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00198028_0x198028");
#endif

    switch (ctx->pc) {
        case 0x198040u: goto label_198040;
        default: break;
    }

    ctx->pc = 0x198028u;

    // 0x198028: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x198028u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x19802c: 0xae230018  sw          $v1, 0x18($s1)
    ctx->pc = 0x19802cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 3));
    // 0x198030: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x198030u;
    {
        const bool branch_taken_0x198030 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x198034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198030u;
        // 0x198034: 0x26250234  addiu       $a1, $s1, 0x234 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 564));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198030) {
            ctx->pc = 0x198048u;
            return;
        }
    }
    ctx->pc = 0x198038u;
    // 0x198038: 0xc0659c0  jal         func_196700
    ctx->pc = 0x198038u;
    SET_GPR_U32(ctx, 31, 0x198040u);
    ctx->pc = 0x196700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x196700u, 0x198038u, 0x198040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198040u;
label_198040:
    // 0x198040: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x198040u;
    {
        const bool branch_taken_0x198040 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x198044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198040u;
        // 0x198044: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198040) {
            ctx->pc = 0x198050u;
            return;
        }
    }
    ctx->pc = 0x198048u;
}
