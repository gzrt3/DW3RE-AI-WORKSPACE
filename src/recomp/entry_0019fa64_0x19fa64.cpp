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

// Function: entry_0019fa64
// Address: 0x19fa64 - 0x19fa90
void entry_0019fa64_0x19fa64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019fa64_0x19fa64");
#endif

    ctx->pc = 0x19fa64u;

    // 0x19fa64: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x19fa64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x19fa68: 0xdfb60080  ld          $s6, 0x80($sp)
    ctx->pc = 0x19fa68u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x19fa6c: 0xdfb50070  ld          $s5, 0x70($sp)
    ctx->pc = 0x19fa6cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x19fa70: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x19fa70u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x19fa74: 0xdfb30050  ld          $s3, 0x50($sp)
    ctx->pc = 0x19fa74u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x19fa78: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x19fa78u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19fa7c: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x19fa7cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19fa80: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x19fa80u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19fa84: 0x3e00008  jr          $ra
    ctx->pc = 0x19FA84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19FA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FA84u;
        // 0x19fa88: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19FA84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19FA8Cu;
    // 0x19fa8c: 0x0  nop
    ctx->pc = 0x19fa8cu;
    // NOP
    ctx->pc = 0x19fa90u;
}
