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

// Function: entry_0023b568
// Address: 0x23b568 - 0x23b590
void entry_0023b568_0x23b568(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023b568_0x23b568");
#endif

    ctx->pc = 0x23b568u;

    // 0x23b568: 0x2238825  or          $s1, $s1, $v1
    ctx->pc = 0x23b568u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 3));
    // 0x23b56c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x23b56cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23b570: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23b570u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23b574: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x23b574u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x23b578: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x23b578u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23b57c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x23b57cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x23b580: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x23b580u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23b584: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x23b584u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23b588: 0x3e00008  jr          $ra
    ctx->pc = 0x23B588u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23B58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B588u;
        // 0x23b58c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23B588u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23B590u;
}
