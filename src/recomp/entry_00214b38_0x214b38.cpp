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

// Function: entry_00214b38
// Address: 0x214b38 - 0x214bb0
void entry_00214b38_0x214b38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00214b38_0x214b38");
#endif

    switch (ctx->pc) {
        case 0x214b60u: goto label_214b60;
        default: break;
    }

    ctx->pc = 0x214b38u;

label_214b38:
    // 0x214b38: 0x2111021  addu        $v0, $s0, $s1
    ctx->pc = 0x214b38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x214b3c: 0x24050280  addiu       $a1, $zero, 0x280
    ctx->pc = 0x214b3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
    // 0x214b40: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x214b40u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x214b44: 0x24440360  addiu       $a0, $v0, 0x360
    ctx->pc = 0x214b44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 864));
    // 0x214b48: 0x240601c0  addiu       $a2, $zero, 0x1C0
    ctx->pc = 0x214b48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
    // 0x214b4c: 0x3407ffff  ori         $a3, $zero, 0xFFFF
    ctx->pc = 0x214b4cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x214b50: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x214b50u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214b54: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x214b54u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x214b58: 0xc05e060  jal         func_178180
    ctx->pc = 0x214B58u;
    SET_GPR_U32(ctx, 31, 0x214B60u);
    ctx->pc = 0x214B5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214B58u;
    // 0x214b5c: 0x140582d  daddu       $t3, $t2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178180u, 0x214B58u, 0x214B60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214B60u;
label_214b60:
    // 0x214b60: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x214b60u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x214b64: 0x2a430002  slti        $v1, $s2, 0x2
    ctx->pc = 0x214b64u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x214b68: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
    ctx->pc = 0x214B68u;
    {
        const bool branch_taken_0x214b68 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x214B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214B68u;
        // 0x214b6c: 0x263100b0  addiu       $s1, $s1, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214b68) {
            ctx->pc = 0x214B38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_214b38;
        }
    }
    ctx->pc = 0x214B70u;
    // 0x214b70: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x214b70u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x214b74: 0x2ac30002  slti        $v1, $s6, 0x2
    ctx->pc = 0x214b74u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x214b78: 0x1460ffb2  bnez        $v1, . + 4 + (-0x4E << 2)
    ctx->pc = 0x214B78u;
    {
        const bool branch_taken_0x214b78 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x214B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214B78u;
        // 0x214b7c: 0x269404c0  addiu       $s4, $s4, 0x4C0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1216));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214b78) {
            ctx->pc = 0x214A44u;
            return;
        }
    }
    ctx->pc = 0x214B80u;
    // 0x214b80: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x214b80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x214b84: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x214b84u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x214b88: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x214b88u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x214b8c: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x214b8cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x214b90: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x214b90u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x214b94: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x214b94u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x214b98: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x214b98u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x214b9c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x214b9cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x214ba0: 0x3e00008  jr          $ra
    ctx->pc = 0x214BA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x214BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214BA0u;
        // 0x214ba4: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x214BA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x214BA8u;
    // 0x214ba8: 0x0  nop
    ctx->pc = 0x214ba8u;
    // NOP
    // 0x214bac: 0x0  nop
    ctx->pc = 0x214bacu;
    // NOP
    ctx->pc = 0x214bb0u;
}
