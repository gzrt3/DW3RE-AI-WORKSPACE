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

// Function: entry_001a4038
// Address: 0x1a4038 - 0x1a40b0
void entry_001a4038_0x1a4038(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a4038_0x1a4038");
#endif

    ctx->pc = 0x1a4038u;

label_1a4038:
    // 0x1a4038: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1a4038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a403c: 0x0  nop
    ctx->pc = 0x1a403cu;
    // NOP
    // 0x1a4040: 0x0  nop
    ctx->pc = 0x1a4040u;
    // NOP
    // 0x1a4044: 0x0  nop
    ctx->pc = 0x1a4044u;
    // NOP
    // 0x1a4048: 0x0  nop
    ctx->pc = 0x1a4048u;
    // NOP
    // 0x1a404c: 0x440fffa  bltz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1A404Cu;
    {
        const bool branch_taken_0x1a404c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1a404c) {
            ctx->pc = 0x1A4038u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a4038;
        }
    }
    ctx->pc = 0x1A4054u;
    // 0x1a4054: 0x12200016  beqz        $s1, . + 4 + (0x16 << 2)
    ctx->pc = 0x1A4054u;
    {
        const bool branch_taken_0x1a4054 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4054u;
        // 0x1a4058: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4054) {
            ctx->pc = 0x1A40B0u;
            return;
        }
    }
    ctx->pc = 0x1A405Cu;
    // 0x1a405c: 0x12400015  beqz        $s2, . + 4 + (0x15 << 2)
    ctx->pc = 0x1A405Cu;
    {
        const bool branch_taken_0x1a405c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A405Cu;
        // 0x1a4060: 0xdfb30030  ld          $s3, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a405c) {
            ctx->pc = 0x1A40B4u;
            return;
        }
    }
    ctx->pc = 0x1A4064u;
    // 0x1a4064: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1a4064u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1a4068: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x1a4068u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x1a406c: 0x3442b410  ori         $v0, $v0, 0xB410
    ctx->pc = 0x1a406cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46096);
    // 0x1a4070: 0x3484b430  ori         $a0, $a0, 0xB430
    ctx->pc = 0x1a4070u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)46128);
    // 0x1a4074: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x1a4074u;
    runtime->Store32(rdram, ctx, 0x1000B410u, GPR_U32(ctx, 17));
    // 0x1a4078: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1a4078u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1a407c: 0x3463b420  ori         $v1, $v1, 0xB420
    ctx->pc = 0x1a407cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)46112);
    // 0x1a4080: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1a4080u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a4084: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1a4084u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1a4088: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x1a4088u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a408c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1a408cu;
    runtime->Store32(rdram, ctx, 0x1000B430u, GPR_U32(ctx, 2));
    // 0x1a4090: 0xac720000  sw          $s2, 0x0($v1)
    ctx->pc = 0x1a4090u;
    runtime->Store32(rdram, ctx, 0x1000B420u, GPR_U32(ctx, 18));
    // 0x1a4094: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1a4094u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a4098: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1a4098u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1a409c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1a409cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a40a0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a40a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a40a4: 0x34840100  ori         $a0, $a0, 0x100
    ctx->pc = 0x1a40a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)256);
    // 0x1a40a8: 0x8068f8a  j           func_1A3E28
    ctx->pc = 0x1A40A8u;
    ctx->pc = 0x1A40ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A40A8u;
    // 0x1a40ac: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A3E28u;
    FUN_001a3e28_0x1a3e28(rdram, ctx, runtime); return;
    ctx->pc = 0x1A40B0u;
}
