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

// Function: FUN_0019f280
// Address: 0x19f280 - 0x19f31c
void FUN_0019f280_0x19f280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0019f280_0x19f280");
#endif

    switch (ctx->pc) {
        case 0x19f2e0u: goto label_19f2e0;
        case 0x19f2f4u: goto label_19f2f4;
        default: break;
    }

    ctx->pc = 0x19f280u;

    // 0x19f280: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x19f280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x19f284: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x19f284u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x19f288: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x19f288u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x19f28c: 0x34422010  ori         $v0, $v0, 0x2010
    ctx->pc = 0x19f28cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8208);
    // 0x19f290: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x19f290u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x19f294: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x19f294u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x19f298: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x19f298u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x19f29c: 0x34a54000  ori         $a1, $a1, 0x4000
    ctx->pc = 0x19f29cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)16384);
    // 0x19f2a0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x19f2a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x19f2a4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x19f2a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f2a8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x19f2a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19f2ac: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x19f2acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f2b0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x19f2b0u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x10002010u));
    // 0x19f2b4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x19f2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x19f2b8: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x19f2b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x19f2bc: 0x14620013  bne         $v1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x19F2BCu;
    {
        const bool branch_taken_0x19f2bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x19F2C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F2BCu;
        // 0x19f2c0: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f2bc) {
            ctx->pc = 0x19F30Cu;
            goto label_19f30c;
        }
    }
    ctx->pc = 0x19F2C4u;
    // 0x19f2c4: 0x3c111000  lui         $s1, 0x1000
    ctx->pc = 0x19f2c4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)4096 << 16));
    // 0x19f2c8: 0x3c108000  lui         $s0, 0x8000
    ctx->pc = 0x19f2c8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)32768 << 16));
    // 0x19f2cc: 0x36312010  ori         $s1, $s1, 0x2010
    ctx->pc = 0x19f2ccu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)8208);
    // 0x19f2d0: 0x36104000  ori         $s0, $s0, 0x4000
    ctx->pc = 0x19f2d0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)16384);
    // 0x19f2d4: 0x3c138000  lui         $s3, 0x8000
    ctx->pc = 0x19f2d4u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)32768 << 16));
    // 0x19f2d8: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x19f2d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f2dc: 0x0  nop
    ctx->pc = 0x19f2dcu;
    // NOP
label_19f2e0:
    // 0x19f2e0: 0x28421389  slti        $v0, $v0, 0x1389
    ctx->pc = 0x19f2e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)5001) ? 1 : 0);
    // 0x19f2e4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x19F2E4u;
    {
        const bool branch_taken_0x19f2e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19F2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F2E4u;
        // 0x19f2e8: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f2e4) {
            ctx->pc = 0x19F2F8u;
            goto label_19f2f8;
        }
    }
    ctx->pc = 0x19F2ECu;
    // 0x19f2ec: 0xc068b26  jal         func_1A2C98
    ctx->pc = 0x19F2ECu;
    SET_GPR_U32(ctx, 31, 0x19F2F4u);
    ctx->pc = 0x19F2F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F2ECu;
    // 0x19f2f0: 0x8e440858  lw          $a0, 0x858($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2136)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2C98u, 0x19F2ECu, 0x19F2F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F2F4u;
label_19f2f4:
    // 0x19f2f4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x19f2f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19f2f8:
    // 0x19f2f8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x19f2f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x19f2fc: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x19f2fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x19f300: 0x1053fff7  beq         $v0, $s3, . + 4 + (-0x9 << 2)
    ctx->pc = 0x19F300u;
    {
        const bool branch_taken_0x19f300 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        ctx->pc = 0x19F304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F300u;
        // 0x19f304: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f300) {
            ctx->pc = 0x19F2E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19f2e0;
        }
    }
    ctx->pc = 0x19F308u;
    // 0x19f308: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x19f308u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_19f30c:
    // 0x19f30c: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x19f30cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19f310: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x19f310u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19f314: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x19f314u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19f318: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19f318u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x19f31cu;
}
