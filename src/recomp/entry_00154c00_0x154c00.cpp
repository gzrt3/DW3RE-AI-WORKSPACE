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

// Function: entry_00154c00
// Address: 0x154c00 - 0x154c30
void entry_00154c00_0x154c00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00154c00_0x154c00");
#endif

    switch (ctx->pc) {
        case 0x154c1cu: goto label_154c1c;
        default: break;
    }

    ctx->pc = 0x154c00u;

    // 0x154c00: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x154c00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x154c04: 0x61980  sll         $v1, $a2, 6
    ctx->pc = 0x154c04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
    // 0x154c08: 0x2442ba20  addiu       $v0, $v0, -0x45E0
    ctx->pc = 0x154c08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949408));
    // 0x154c0c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x154c0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154c10: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x154c10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x154c14: 0xc066e14  jal         func_19B850
    ctx->pc = 0x154C14u;
    SET_GPR_U32(ctx, 31, 0x154C1Cu);
    ctx->pc = 0x154C18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154C14u;
    // 0x154c18: 0x24450030  addiu       $a1, $v0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B850u, 0x154C14u, 0x154C1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154C1Cu;
label_154c1c:
    // 0x154c1c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x154c1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x154c20: 0x3e00008  jr          $ra
    ctx->pc = 0x154C20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x154C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154C20u;
        // 0x154c24: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x154C20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x154C28u;
    // 0x154c28: 0x0  nop
    ctx->pc = 0x154c28u;
    // NOP
    // 0x154c2c: 0x0  nop
    ctx->pc = 0x154c2cu;
    // NOP
    ctx->pc = 0x154c30u;
}
