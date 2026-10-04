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

// Function: entry_001a5180
// Address: 0x1a5180 - 0x1a51b0
void entry_001a5180_0x1a5180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a5180_0x1a5180");
#endif

    ctx->pc = 0x1a5180u;

    // 0x1a5180: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1a5180u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a5184: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1a5184u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a5188: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a5188u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a518c: 0x3e00008  jr          $ra
    ctx->pc = 0x1A518Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A5190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A518Cu;
        // 0x1a5190: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A518Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A5194u;
    // 0x1a5194: 0x0  nop
    ctx->pc = 0x1a5194u;
    // NOP
    // 0x1a5198: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1a5198u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1a519c: 0x3442ffc0  ori         $v0, $v0, 0xFFC0
    ctx->pc = 0x1a519cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65472);
    // 0x1a51a0: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x1a51a0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x1a51a4: 0x806941c  j           func_1A5070
    ctx->pc = 0x1A51A4u;
    ctx->pc = 0x1A51A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A51A4u;
    // 0x1a51a8: 0x822024  and         $a0, $a0, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5070u;
    FUN_001a5070_0x1a5070(rdram, ctx, runtime); return;
    ctx->pc = 0x1A51ACu;
    // 0x1a51ac: 0x0  nop
    ctx->pc = 0x1a51acu;
    // NOP
    ctx->pc = 0x1a51b0u;
}
