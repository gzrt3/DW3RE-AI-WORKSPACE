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

// Function: FUN_0017b970
// Address: 0x17b970 - 0x17ba08
void FUN_0017b970_0x17b970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0017b970_0x17b970");
#endif

    switch (ctx->pc) {
        case 0x17b9acu: goto label_17b9ac;
        case 0x17b9b4u: goto label_17b9b4;
        default: break;
    }

    ctx->pc = 0x17b970u;

    // 0x17b970: 0x8f848450  lw          $a0, -0x7BB0($gp)
    ctx->pc = 0x17b970u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935632)));
    // 0x17b974: 0x10800024  beqz        $a0, . + 4 + (0x24 << 2)
    ctx->pc = 0x17B974u;
    {
        const bool branch_taken_0x17b974 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B974u;
        // 0x17b978: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b974) {
            ctx->pc = 0x17BA08u;
            return;
        }
    }
    ctx->pc = 0x17B97Cu;
    // 0x17b97c: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x17b97cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x17b980: 0x8f838450  lw          $v1, -0x7BB0($gp)
    ctx->pc = 0x17b980u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935632)));
    // 0x17b984: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x17b984u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x17b988: 0x8f838450  lw          $v1, -0x7BB0($gp)
    ctx->pc = 0x17b988u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935632)));
    // 0x17b98c: 0x246b0008  addiu       $t3, $v1, 0x8
    ctx->pc = 0x17b98cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x17b990: 0x3c043b90  lui         $a0, 0x3B90
    ctx->pc = 0x17b990u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15248 << 16));
    // 0x17b994: 0x3c033da3  lui         $v1, 0x3DA3
    ctx->pc = 0x17b994u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15779 << 16));
    // 0x17b998: 0x34862de0  ori         $a2, $a0, 0x2DE0
    ctx->pc = 0x17b998u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)11744);
    // 0x17b99c: 0x3465d70a  ori         $a1, $v1, 0xD70A
    ctx->pc = 0x17b99cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x17b9a0: 0x3c073f80  lui         $a3, 0x3F80
    ctx->pc = 0x17b9a0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16256 << 16));
    // 0x17b9a4: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x17b9a4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17b9a8: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x17b9a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_17b9ac:
    // 0x17b9ac: 0x256a0004  addiu       $t2, $t3, 0x4
    ctx->pc = 0x17b9acu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
    // 0x17b9b0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x17b9b0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17b9b4:
    // 0x17b9b4: 0x0  nop
    ctx->pc = 0x17b9b4u;
    // NOP
    // 0x17b9b8: 0x15280005  bne         $t1, $t0, . + 4 + (0x5 << 2)
    ctx->pc = 0x17B9B8u;
    {
        const bool branch_taken_0x17b9b8 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 8));
        if (branch_taken_0x17b9b8) {
            ctx->pc = 0x17B9D0u;
            goto label_17b9d0;
        }
    }
    ctx->pc = 0x17B9C0u;
    // 0x17b9c0: 0xad40000c  sw          $zero, 0xC($t2)
    ctx->pc = 0x17b9c0u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 12), GPR_U32(ctx, 0));
    // 0x17b9c4: 0xad400010  sw          $zero, 0x10($t2)
    ctx->pc = 0x17b9c4u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 16), GPR_U32(ctx, 0));
    // 0x17b9c8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x17B9C8u;
    {
        const bool branch_taken_0x17b9c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B9CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B9C8u;
        // 0x17b9cc: 0xad47001c  sw          $a3, 0x1C($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 28), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b9c8) {
            ctx->pc = 0x17B9DCu;
            goto label_17b9dc;
        }
    }
    ctx->pc = 0x17B9D0u;
label_17b9d0:
    // 0x17b9d0: 0xad40000c  sw          $zero, 0xC($t2)
    ctx->pc = 0x17b9d0u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 12), GPR_U32(ctx, 0));
    // 0x17b9d4: 0xad460010  sw          $a2, 0x10($t2)
    ctx->pc = 0x17b9d4u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 16), GPR_U32(ctx, 6));
    // 0x17b9d8: 0xad45001c  sw          $a1, 0x1C($t2)
    ctx->pc = 0x17b9d8u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 28), GPR_U32(ctx, 5));
label_17b9dc:
    // 0x17b9dc: 0x0  nop
    ctx->pc = 0x17b9dcu;
    // NOP
    // 0x17b9e0: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x17b9e0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x17b9e4: 0x2d230002  sltiu       $v1, $t1, 0x2
    ctx->pc = 0x17b9e4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x17b9e8: 0x1460fff2  bnez        $v1, . + 4 + (-0xE << 2)
    ctx->pc = 0x17B9E8u;
    {
        const bool branch_taken_0x17b9e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x17B9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B9E8u;
        // 0x17b9ec: 0x254a0020  addiu       $t2, $t2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b9e8) {
            ctx->pc = 0x17B9B4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17b9b4;
        }
    }
    ctx->pc = 0x17B9F0u;
    // 0x17b9f0: 0x8d630000  lw          $v1, 0x0($t3)
    ctx->pc = 0x17b9f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x17b9f4: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x17b9f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x17b9f8: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x17B9F8u;
    {
        const bool branch_taken_0x17b9f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x17b9f8) {
            ctx->pc = 0x17BA08u;
            return;
        }
    }
    ctx->pc = 0x17BA00u;
    // 0x17ba00: 0x1000ffea  b           . + 4 + (-0x16 << 2)
    ctx->pc = 0x17BA00u;
    {
        const bool branch_taken_0x17ba00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17BA04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BA00u;
        // 0x17ba04: 0x256b0044  addiu       $t3, $t3, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 68));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ba00) {
            ctx->pc = 0x17B9ACu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17b9ac;
        }
    }
    ctx->pc = 0x17BA08u;
}
