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

// Function: entry_00231d3c
// Address: 0x231d3c - 0x231da0
void entry_00231d3c_0x231d3c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00231d3c_0x231d3c");
#endif

    ctx->pc = 0x231d3cu;

    // 0x231d3c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x231d3cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x231d40: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x231d40u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x231d44: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x231d44u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x231d48: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x231d48u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x231d4c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x231d4cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x231d50: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x231d50u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x231d54: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x231d54u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x231d58: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x231d58u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x231d5c: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x231d5cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x231d60: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x231d60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x231d64: 0x3e00008  jr          $ra
    ctx->pc = 0x231D64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x231D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231D64u;
        // 0x231d68: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x231D64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x231D6Cu;
    // 0x231d6c: 0x0  nop
    ctx->pc = 0x231d6cu;
    // NOP
    // 0x231d70: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x231d70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x231d74: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x231d74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x231d78: 0x240821  addu        $at, $at, $a0
    ctx->pc = 0x231d78u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 4)));
    // 0x231d7c: 0xac208004  sw          $zero, -0x7FFC($at)
    ctx->pc = 0x231d7cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294934532), GPR_U32(ctx, 0));
    // 0x231d80: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x231d80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x231d84: 0x240821  addu        $at, $at, $a0
    ctx->pc = 0x231d84u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 4)));
    // 0x231d88: 0xac228008  sw          $v0, -0x7FF8($at)
    ctx->pc = 0x231d88u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294934536), GPR_U32(ctx, 2));
    // 0x231d8c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x231d8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x231d90: 0x240821  addu        $at, $at, $a0
    ctx->pc = 0x231d90u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 4)));
    // 0x231d94: 0x3e00008  jr          $ra
    ctx->pc = 0x231D94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x231D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231D94u;
        // 0x231d98: 0xac208000  sw          $zero, -0x8000($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294934528), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x231D94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x231D9Cu;
    // 0x231d9c: 0x0  nop
    ctx->pc = 0x231d9cu;
    // NOP
    ctx->pc = 0x231da0u;
}
