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

// Function: entry_001a7344
// Address: 0x1a7344 - 0x1a7368
void entry_001a7344_0x1a7344(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a7344_0x1a7344");
#endif

    switch (ctx->pc) {
        case 0x1a734cu: goto label_1a734c;
        default: break;
    }

    ctx->pc = 0x1a7344u;

    // 0x1a7344: 0xc069cbe  jal         func_1A72F8
    ctx->pc = 0x1A7344u;
    SET_GPR_U32(ctx, 31, 0x1A734Cu);
    ctx->pc = 0x1A72F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A72F8u, 0x1A7344u, 0x1A734Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A734Cu;
label_1a734c:
    // 0x1a734c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1A734Cu;
    {
        const bool branch_taken_0x1a734c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A734Cu;
        // 0x1a7350: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a734c) {
            ctx->pc = 0x1A7360u;
            goto label_1a7360;
        }
    }
    ctx->pc = 0x1A7354u;
    // 0x1a7354: 0x51180  sll         $v0, $a1, 6
    ctx->pc = 0x1a7354u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
    // 0x1a7358: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1a7358u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1a735c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a735cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a7360:
    // 0x1a7360: 0x3e00008  jr          $ra
    ctx->pc = 0x1A7360u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A7364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7360u;
        // 0x1a7364: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A7360u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A7368u;
}
