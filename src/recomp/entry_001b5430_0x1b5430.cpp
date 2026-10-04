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

// Function: entry_001b5430
// Address: 0x1b5430 - 0x1b5460
void entry_001b5430_0x1b5430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b5430_0x1b5430");
#endif

    switch (ctx->pc) {
        case 0x1b5438u: goto label_1b5438;
        case 0x1b5454u: goto label_1b5454;
        default: break;
    }

    ctx->pc = 0x1b5430u;

    // 0x1b5430: 0xc06ce88  jal         func_1B3A20
    ctx->pc = 0x1B5430u;
    SET_GPR_U32(ctx, 31, 0x1B5438u);
    ctx->pc = 0x1B3A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3A20u, 0x1B5430u, 0x1B5438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5438u;
label_1b5438:
    // 0x1b5438: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1b5438u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b543c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1b543cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1b5440: 0xc7ac0000  lwc1        $f12, 0x0($sp)
    ctx->pc = 0x1b5440u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1b5444: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1b5444u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1b5448: 0xc7ad0004  lwc1        $f13, 0x4($sp)
    ctx->pc = 0x1b5448u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1b544c: 0xc06d280  jal         func_1B4A00
    ctx->pc = 0x1B544Cu;
    SET_GPR_U32(ctx, 31, 0x1B5454u);
    ctx->pc = 0x1B5450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B544Cu;
    // 0x1b5450: 0x822023  subu        $a0, $a0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4A00u, 0x1B544Cu, 0x1B5454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5454u;
label_1b5454:
    // 0x1b5454: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1b5454u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b5458: 0x3e00008  jr          $ra
    ctx->pc = 0x1B5458u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B545Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5458u;
        // 0x1b545c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B5458u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B5460u;
}
