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

// Function: entry_001fc2d4
// Address: 0x1fc2d4 - 0x1fc320
void entry_001fc2d4_0x1fc2d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fc2d4_0x1fc2d4");
#endif

    switch (ctx->pc) {
        case 0x1fc2dcu: goto label_1fc2dc;
        default: break;
    }

    ctx->pc = 0x1fc2d4u;

    // 0x1fc2d4: 0xc066e26  jal         func_19B898
    ctx->pc = 0x1FC2D4u;
    SET_GPR_U32(ctx, 31, 0x1FC2DCu);
    ctx->pc = 0x19B898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B898u, 0x1FC2D4u, 0x1FC2DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FC2DCu;
label_1fc2dc:
    // 0x1fc2dc: 0xa6200fe2  sh          $zero, 0xFE2($s1)
    ctx->pc = 0x1fc2dcu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 4066), (uint16_t)GPR_U32(ctx, 0));
    // 0x1fc2e0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1fc2e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1fc2e4: 0xa6300fe0  sh          $s0, 0xFE0($s1)
    ctx->pc = 0x1fc2e4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 4064), (uint16_t)GPR_U32(ctx, 16));
    // 0x1fc2e8: 0xa2230fe4  sb          $v1, 0xFE4($s1)
    ctx->pc = 0x1fc2e8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 4068), (uint8_t)GPR_U32(ctx, 3));
    // 0x1fc2ec: 0x8f838590  lw          $v1, -0x7A70($gp)
    ctx->pc = 0x1fc2ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
    // 0x1fc2f0: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x1fc2f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x1fc2f4: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FC2F4u;
    {
        const bool branch_taken_0x1fc2f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC2F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC2F4u;
        // 0x1fc2f8: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc2f4) {
            ctx->pc = 0x1FC304u;
            goto label_1fc304;
        }
    }
    ctx->pc = 0x1FC2FCu;
    // 0x1fc2fc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1FC2FCu;
    {
        const bool branch_taken_0x1fc2fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC2FCu;
        // 0x1fc300: 0xa6230fe6  sh          $v1, 0xFE6($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 4070), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc2fc) {
            ctx->pc = 0x1FC308u;
            goto label_1fc308;
        }
    }
    ctx->pc = 0x1FC304u;
label_1fc304:
    // 0x1fc304: 0xa6200fe6  sh          $zero, 0xFE6($s1)
    ctx->pc = 0x1fc304u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 4070), (uint16_t)GPR_U32(ctx, 0));
label_1fc308:
    // 0x1fc308: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1fc308u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fc30c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1fc30cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fc310: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1fc310u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fc314: 0x3e00008  jr          $ra
    ctx->pc = 0x1FC314u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FC318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC314u;
        // 0x1fc318: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FC314u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FC31Cu;
    // 0x1fc31c: 0x0  nop
    ctx->pc = 0x1fc31cu;
    // NOP
    ctx->pc = 0x1fc320u;
}
