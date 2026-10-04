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

// Function: entry_00235254
// Address: 0x235254 - 0x235280
void entry_00235254_0x235254(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00235254_0x235254");
#endif

    ctx->pc = 0x235254u;

    // 0x235254: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x235254u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x235258: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x235258u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x23525c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x23525cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x235260: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x235260u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x235264: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x235264u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x235268: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x235268u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23526c: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x23526cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x235270: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x235270u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x235274: 0x3e00008  jr          $ra
    ctx->pc = 0x235274u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x235278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235274u;
        // 0x235278: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x235274u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23527Cu;
    // 0x23527c: 0x0  nop
    ctx->pc = 0x23527cu;
    // NOP
    ctx->pc = 0x235280u;
}
