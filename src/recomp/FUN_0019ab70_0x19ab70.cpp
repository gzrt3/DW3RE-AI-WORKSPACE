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

// Function: FUN_0019ab70
// Address: 0x19ab70 - 0x19ac14
void FUN_0019ab70_0x19ab70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0019ab70_0x19ab70");
#endif

    switch (ctx->pc) {
        case 0x19abb0u: goto label_19abb0;
        case 0x19abc0u: goto label_19abc0;
        case 0x19abd8u: goto label_19abd8;
        default: break;
    }

    ctx->pc = 0x19ab70u;

    // 0x19ab70: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x19ab70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x19ab74: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x19ab74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x19ab78: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x19ab78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x19ab7c: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x19ab7cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ab80: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x19ab80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x19ab84: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x19ab84u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ab88: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x19ab88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19ab8c: 0x3c110100  lui         $s1, 0x100
    ctx->pc = 0x19ab8cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)256 << 16));
    // 0x19ab90: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x19ab90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x19ab94: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19ab94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ab98: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x19ab98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x19ab9c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x19ab9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x19aba0: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x19aba0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x19aba4: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x19ABA4u;
    {
        const bool branch_taken_0x19aba4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19ABA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19ABA4u;
        // 0x19aba8: 0x3c12002d  lui         $s2, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19aba4) {
            ctx->pc = 0x19AC08u;
            goto label_19ac08;
        }
    }
    ctx->pc = 0x19ABACu;
    // 0x19abac: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x19abacu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_19abb0:
    // 0x19abb0: 0x6210011  bgez        $s1, . + 4 + (0x11 << 2)
    ctx->pc = 0x19ABB0u;
    {
        const bool branch_taken_0x19abb0 = (GPR_S32(ctx, 17) >= 0);
        if (branch_taken_0x19abb0) {
            ctx->pc = 0x19ABF8u;
            goto label_19abf8;
        }
    }
    ctx->pc = 0x19ABB8u;
    // 0x19abb8: 0xc08ee2e  jal         func_23B8B8
    ctx->pc = 0x19ABB8u;
    SET_GPR_U32(ctx, 31, 0x19ABC0u);
    ctx->pc = 0x19ABBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19ABB8u;
    // 0x19abbc: 0x26449f90  addiu       $a0, $s2, -0x6070 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4294942608));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23B8B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B8B8u, 0x19ABB8u, 0x19ABC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19ABC0u;
label_19abc0:
    // 0x19abc0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x19abc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x19abc4: 0x41202  srl         $v0, $a0, 8
    ctx->pc = 0x19abc4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 8));
    // 0x19abc8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x19abc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x19abcc: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x19ABCCu;
    {
        const bool branch_taken_0x19abcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19abcc) {
            ctx->pc = 0x19ABF8u;
            goto label_19abf8;
        }
    }
    ctx->pc = 0x19ABD4u;
    // 0x19abd4: 0x2405feff  addiu       $a1, $zero, -0x101
    ctx->pc = 0x19abd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967039));
label_19abd8:
    // 0x19abd8: 0x851824  and         $v1, $a0, $a1
    ctx->pc = 0x19abd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x19abdc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x19abdcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19abe0: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x19abe0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19abe4: 0x0  nop
    ctx->pc = 0x19abe4u;
    // NOP
    // 0x19abe8: 0x0  nop
    ctx->pc = 0x19abe8u;
    // NOP
    // 0x19abec: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x19ABECu;
    {
        const bool branch_taken_0x19abec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19abec) {
            ctx->pc = 0x19ABD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19abd8;
        }
    }
    ctx->pc = 0x19ABF4u;
    // 0x19abf4: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x19abf4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_19abf8:
    // 0x19abf8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x19abf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x19abfc: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x19abfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x19ac00: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x19AC00u;
    {
        const bool branch_taken_0x19ac00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19AC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AC00u;
        // 0x19ac04: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ac00) {
            ctx->pc = 0x19ABB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19abb0;
        }
    }
    ctx->pc = 0x19AC08u;
label_19ac08:
    // 0x19ac08: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x19ac08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x19ac0c: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x19ac0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x19ac10: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x19ac10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    ctx->pc = 0x19ac14u;
}
