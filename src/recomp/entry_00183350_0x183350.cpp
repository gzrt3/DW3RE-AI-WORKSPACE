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

// Function: entry_00183350
// Address: 0x183350 - 0x183370
void entry_00183350_0x183350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00183350_0x183350");
#endif

    switch (ctx->pc) {
        case 0x183368u: goto label_183368;
        default: break;
    }

    ctx->pc = 0x183350u;

    // 0x183350: 0x90a70237  lbu         $a3, 0x237($a1)
    ctx->pc = 0x183350u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 567)));
    // 0x183354: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x183354u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x183358: 0x14e30005  bne         $a3, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x183358u;
    {
        const bool branch_taken_0x183358 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 3));
        ctx->pc = 0x18335Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183358u;
        // 0x18335c: 0x24030006  addiu       $v1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183358) {
            ctx->pc = 0x183370u;
            return;
        }
    }
    ctx->pc = 0x183360u;
    // 0x183360: 0xc061108  jal         func_184420
    ctx->pc = 0x183360u;
    SET_GPR_U32(ctx, 31, 0x183368u);
    ctx->pc = 0x184420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x184420u, 0x183360u, 0x183368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183368u;
label_183368:
    // 0x183368: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x183368u;
    {
        const bool branch_taken_0x183368 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18336Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183368u;
        // 0x18336c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183368) {
            ctx->pc = 0x1833B0u;
            return;
        }
    }
    ctx->pc = 0x183370u;
}
