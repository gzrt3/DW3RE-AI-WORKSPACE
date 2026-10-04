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

// Function: entry_0020ffcc
// Address: 0x20ffcc - 0x210000
void entry_0020ffcc_0x20ffcc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020ffcc_0x20ffcc");
#endif

    switch (ctx->pc) {
        case 0x20ffecu: goto label_20ffec;
        default: break;
    }

    ctx->pc = 0x20ffccu;

    // 0x20ffcc: 0x0  nop
    ctx->pc = 0x20ffccu;
    // NOP
    // 0x20ffd0: 0x3c040059  lui         $a0, 0x59
    ctx->pc = 0x20ffd0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)89 << 16));
    // 0x20ffd4: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x20ffd4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
    // 0x20ffd8: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x20ffd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x20ffdc: 0x2484b310  addiu       $a0, $a0, -0x4CF0
    ctx->pc = 0x20ffdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947600));
    // 0x20ffe0: 0x24a5c990  addiu       $a1, $a1, -0x3670
    ctx->pc = 0x20ffe0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953360));
    // 0x20ffe4: 0xc08e93e  jal         func_23A4F8
    ctx->pc = 0x20FFE4u;
    SET_GPR_U32(ctx, 31, 0x20FFECu);
    ctx->pc = 0x20FFE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20FFE4u;
    // 0x20ffe8: 0x34464f20  ori         $a2, $v0, 0x4F20 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20256);
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A4F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A4F8u, 0x20FFE4u, 0x20FFECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20FFECu;
label_20ffec:
    // 0x20ffec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20ffecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20fff0: 0x3e00008  jr          $ra
    ctx->pc = 0x20FFF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20FFF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FFF0u;
        // 0x20fff4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20FFF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20FFF8u;
    // 0x20fff8: 0x0  nop
    ctx->pc = 0x20fff8u;
    // NOP
    // 0x20fffc: 0x0  nop
    ctx->pc = 0x20fffcu;
    // NOP
    ctx->pc = 0x210000u;
}
