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

// Function: entry_0019aa40
// Address: 0x19aa40 - 0x19aa88
void entry_0019aa40_0x19aa40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019aa40_0x19aa40");
#endif

    ctx->pc = 0x19aa40u;

    // 0x19aa40: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x19aa40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x19aa44: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x19aa44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x19aa48: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x19aa48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x19aa4c: 0x54620001  bnel        $v1, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x19AA4Cu;
    {
        const bool branch_taken_0x19aa4c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x19aa4c) {
            ctx->pc = 0x19AA50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19AA4Cu;
            // 0x19aa50: 0xae130030  sw          $s3, 0x30($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 19));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19AA54u;
            goto label_19aa54;
        }
    }
    ctx->pc = 0x19AA54u;
label_19aa54:
    // 0x19aa54: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x19aa54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x19aa58: 0x2403fff3  addiu       $v1, $zero, -0xD
    ctx->pc = 0x19aa58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x19aa5c: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x19aa5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x19aa60: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x19aa60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x19aa64: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x19aa64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19aa68: 0x34420105  ori         $v0, $v0, 0x105
    ctx->pc = 0x19aa68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)261);
    // 0x19aa6c: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x19aa6cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19aa70: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x19aa70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x19aa74: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x19aa74u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19aa78: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x19aa78u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19aa7c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19aa7cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19aa80: 0x3e00008  jr          $ra
    ctx->pc = 0x19AA80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19AA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AA80u;
        // 0x19aa84: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19AA80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19AA88u;
}
