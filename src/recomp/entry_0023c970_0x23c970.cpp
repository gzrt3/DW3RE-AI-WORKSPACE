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

// Function: entry_0023c970
// Address: 0x23c970 - 0x23c9b0
void entry_0023c970_0x23c970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023c970_0x23c970");
#endif

    switch (ctx->pc) {
        case 0x23c990u: goto label_23c990;
        default: break;
    }

    ctx->pc = 0x23c970u;

    // 0x23c970: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x23c970u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x23c974: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x23c974u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23c978: 0x8605000e  lh          $a1, 0xE($s0)
    ctx->pc = 0x23c978u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x23c97c: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x23c97cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23c980: 0x3042efff  andi        $v0, $v0, 0xEFFF
    ctx->pc = 0x23c980u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)61439);
    // 0x23c984: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x23c984u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x23c988: 0xc08fcae  jal         func_23F2B8
    ctx->pc = 0x23C988u;
    SET_GPR_U32(ctx, 31, 0x23C990u);
    ctx->pc = 0x23C98Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C988u;
    // 0x23c98c: 0xa602000c  sh          $v0, 0xC($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23F2B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23F2B8u, 0x23C988u, 0x23C990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C990u;
label_23c990:
    // 0x23c990: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23c990u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23c994: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x23c994u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x23c998: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x23c998u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x23c99c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x23c99cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x23c9a0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x23c9a0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23c9a4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x23c9a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x23c9a8: 0x3e00008  jr          $ra
    ctx->pc = 0x23C9A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23C9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C9A8u;
        // 0x23c9ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23C9A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23C9B0u;
}
