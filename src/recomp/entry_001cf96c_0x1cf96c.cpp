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

// Function: entry_001cf96c
// Address: 0x1cf96c - 0x1cf9a0
void entry_001cf96c_0x1cf96c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cf96c_0x1cf96c");
#endif

    switch (ctx->pc) {
        case 0x1cf980u: goto label_1cf980;
        default: break;
    }

    ctx->pc = 0x1cf96cu;

    // 0x1cf96c: 0x3c040047  lui         $a0, 0x47
    ctx->pc = 0x1cf96cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)71 << 16));
    // 0x1cf970: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cf970u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf974: 0x24847a80  addiu       $a0, $a0, 0x7A80
    ctx->pc = 0x1cf974u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31360));
    // 0x1cf978: 0xc073e68  jal         func_1CF9A0
    ctx->pc = 0x1CF978u;
    SET_GPR_U32(ctx, 31, 0x1CF980u);
    ctx->pc = 0x1CF97Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF978u;
    // 0x1cf97c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CF9A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CF9A0u, 0x1CF978u, 0x1CF980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF980u;
label_1cf980:
    // 0x1cf980: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1cf980u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1cf984: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1cf984u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cf988: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1cf988u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cf98c: 0x3e00008  jr          $ra
    ctx->pc = 0x1CF98Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CF990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF98Cu;
        // 0x1cf990: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CF98Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CF994u;
    // 0x1cf994: 0x0  nop
    ctx->pc = 0x1cf994u;
    // NOP
    // 0x1cf998: 0x0  nop
    ctx->pc = 0x1cf998u;
    // NOP
    // 0x1cf99c: 0x0  nop
    ctx->pc = 0x1cf99cu;
    // NOP
    ctx->pc = 0x1cf9a0u;
}
