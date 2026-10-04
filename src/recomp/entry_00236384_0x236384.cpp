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

// Function: entry_00236384
// Address: 0x236384 - 0x2363b8
void entry_00236384_0x236384(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00236384_0x236384");
#endif

    ctx->pc = 0x236384u;

    // 0x236384: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x236384u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x236388: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x236388u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x23638c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x23638cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x236390: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x236390u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x236394: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x236394u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x236398: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x236398u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23639c: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x23639cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2363a0: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x2363a0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2363a4: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x2363a4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2363a8: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x2363a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2363ac: 0x3e00008  jr          $ra
    ctx->pc = 0x2363ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2363B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2363ACu;
        // 0x2363b0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2363ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2363B4u;
    // 0x2363b4: 0x0  nop
    ctx->pc = 0x2363b4u;
    // NOP
    ctx->pc = 0x2363b8u;
}
