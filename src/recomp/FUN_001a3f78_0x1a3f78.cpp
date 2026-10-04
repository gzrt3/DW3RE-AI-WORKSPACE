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

// Function: FUN_001a3f78
// Address: 0x1a3f78 - 0x1a40c0
void FUN_001a3f78_0x1a3f78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001a3f78_0x1a3f78");
#endif

    switch (ctx->pc) {
        case 0x1a3ffcu: goto label_1a3ffc;
        case 0x1a4008u: goto label_1a4008;
        case 0x1a4038u: goto label_1a4038;
        default: break;
    }

    ctx->pc = 0x1a3f78u;

    // 0x1a3f78: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1a3f78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1a3f7c: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x1a3f7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x1a3f80: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1a3f80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1a3f84: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1a3f84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1a3f88: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a3f88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a3f8c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1a3f8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1a3f90: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a3f90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3f94: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x1a3f94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1a3f98: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x1a3f98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1a3f9c: 0x21a02  srl         $v1, $v0, 8
    ctx->pc = 0x1a3f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x1a3fa0: 0x3053007f  andi        $s3, $v0, 0x7F
    ctx->pc = 0x1a3fa0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)127);
    // 0x1a3fa4: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x1a3fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x1a3fa8: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x1a3fa8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x1a3fac: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x1a3facu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x1a3fb0: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x1a3fb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a3fb4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a3fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a3fb8: 0x8e060010  lw          $a2, 0x10($s0)
    ctx->pc = 0x1a3fb8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1a3fbc: 0x829021  addu        $s2, $a0, $v0
    ctx->pc = 0x1a3fbcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1a3fc0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1a3fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1a3fc4: 0x10c0000d  beqz        $a2, . + 4 + (0xD << 2)
    ctx->pc = 0x1A3FC4u;
    {
        const bool branch_taken_0x1a3fc4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3FC4u;
        // 0x1a3fc8: 0xa28823  subu        $s1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3fc4) {
            ctx->pc = 0x1A3FFCu;
            goto label_1a3ffc;
        }
    }
    ctx->pc = 0x1A3FCCu;
    // 0x1a3fcc: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x1a3fccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1a3fd0: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1A3FD0u;
    {
        const bool branch_taken_0x1a3fd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3FD0u;
        // 0x1a3fd4: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3fd0) {
            ctx->pc = 0x1A3FFCu;
            goto label_1a3ffc;
        }
    }
    ctx->pc = 0x1A3FD8u;
    // 0x1a3fd8: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x1a3fd8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x1a3fdc: 0x3442b010  ori         $v0, $v0, 0xB010
    ctx->pc = 0x1a3fdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45072);
    // 0x1a3fe0: 0x3484b020  ori         $a0, $a0, 0xB020
    ctx->pc = 0x1a3fe0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)45088);
    // 0x1a3fe4: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x1a3fe4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
    // 0x1a3fe8: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x1a3fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1a3fec: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1a3fecu;
    runtime->Store32(rdram, ctx, 0x1000B020u, GPR_U32(ctx, 3));
    // 0x1a3ff0: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x1a3ff0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1a3ff4: 0xc068f70  jal         func_1A3DC0
    ctx->pc = 0x1A3FF4u;
    SET_GPR_U32(ctx, 31, 0x1A3FFCu);
    ctx->pc = 0x1A3FF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3FF4u;
    // 0x1a3ff8: 0x34840100  ori         $a0, $a0, 0x100 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)256);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A3DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3DC0u, 0x1A3FF4u, 0x1A3FFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3FFCu;
label_1a3ffc:
    // 0x1a3ffc: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1a3ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1a4000: 0x34632010  ori         $v1, $v1, 0x2010
    ctx->pc = 0x1a4000u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8208);
    // 0x1a4004: 0x0  nop
    ctx->pc = 0x1a4004u;
    // NOP
label_1a4008:
    // 0x1a4008: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1a4008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a400c: 0x0  nop
    ctx->pc = 0x1a400cu;
    // NOP
    // 0x1a4010: 0x0  nop
    ctx->pc = 0x1a4010u;
    // NOP
    // 0x1a4014: 0x0  nop
    ctx->pc = 0x1a4014u;
    // NOP
    // 0x1a4018: 0x0  nop
    ctx->pc = 0x1a4018u;
    // NOP
    // 0x1a401c: 0x440fffa  bltz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1A401Cu;
    {
        const bool branch_taken_0x1a401c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1a401c) {
            ctx->pc = 0x1A4008u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a4008;
        }
    }
    ctx->pc = 0x1A4024u;
    // 0x1a4024: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1a4024u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1a4028: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1a4028u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1a402c: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x1a402cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x1a4030: 0x34632010  ori         $v1, $v1, 0x2010
    ctx->pc = 0x1a4030u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8208);
    // 0x1a4034: 0xac530000  sw          $s3, 0x0($v0)
    ctx->pc = 0x1a4034u;
    runtime->Store32(rdram, ctx, 0x10002000u, GPR_U32(ctx, 19));
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
            goto label_1a40b0;
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
            goto label_1a40b4;
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
label_1a40b0:
    // 0x1a40b0: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x1a40b0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1a40b4:
    // 0x1a40b4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1a40b4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a40b8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1a40b8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a40bc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a40bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x1a40c0u;
}
