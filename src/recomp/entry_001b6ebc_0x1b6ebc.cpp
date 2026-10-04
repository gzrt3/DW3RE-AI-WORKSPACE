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

// Function: entry_001b6ebc
// Address: 0x1b6ebc - 0x1b6ef0
void entry_001b6ebc_0x1b6ebc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b6ebc_0x1b6ebc");
#endif

    switch (ctx->pc) {
        case 0x1b6eccu: goto label_1b6ecc;
        case 0x1b6ed8u: goto label_1b6ed8;
        default: break;
    }

    ctx->pc = 0x1b6ebcu;

    // 0x1b6ebc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1b6ebcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6ec0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b6ec0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6ec4: 0xc06dd74  jal         func_1B75D0
    ctx->pc = 0x1B6EC4u;
    SET_GPR_U32(ctx, 31, 0x1B6ECCu);
    ctx->pc = 0x1B75D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B75D0u, 0x1B6EC4u, 0x1B6ECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6ECCu;
label_1b6ecc:
    // 0x1b6ecc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1b6eccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6ed0: 0xc06df6c  jal         func_1B7DB0
    ctx->pc = 0x1B6ED0u;
    SET_GPR_U32(ctx, 31, 0x1B6ED8u);
    ctx->pc = 0x1B7DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7DB0u, 0x1B6ED0u, 0x1B6ED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6ED8u;
label_1b6ed8:
    // 0x1b6ed8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b6ed8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b6edc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b6edcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b6ee0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1b6ee0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b6ee4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1b6ee4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1b6ee8: 0x3e00008  jr          $ra
    ctx->pc = 0x1B6EE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B6EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6EE8u;
        // 0x1b6eec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B6EE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B6EF0u;
}
