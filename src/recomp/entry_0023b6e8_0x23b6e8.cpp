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

// Function: entry_0023b6e8
// Address: 0x23b6e8 - 0x23b718
void entry_0023b6e8_0x23b6e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023b6e8_0x23b6e8");
#endif

    ctx->pc = 0x23b6e8u;

    // 0x23b6e8: 0xaea30000  sw          $v1, 0x0($s5)
    ctx->pc = 0x23b6e8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
    // 0x23b6ec: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x23b6ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23b6f0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x23b6f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23b6f4: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x23b6f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x23b6f8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x23b6f8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23b6fc: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x23b6fcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23b700: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x23b700u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23b704: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x23b704u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x23b708: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x23b708u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x23b70c: 0x3e00008  jr          $ra
    ctx->pc = 0x23B70Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23B710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B70Cu;
        // 0x23b710: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23B70Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23B714u;
    // 0x23b714: 0x0  nop
    ctx->pc = 0x23b714u;
    // NOP
    ctx->pc = 0x23b718u;
}
