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

// Function: FUN_001f7be0
// Address: 0x1f7be0 - 0x1f7d00
void FUN_001f7be0_0x1f7be0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001f7be0_0x1f7be0");
#endif

    switch (ctx->pc) {
        case 0x1f7c08u: goto label_1f7c08;
        default: break;
    }

    ctx->pc = 0x1f7be0u;

    // 0x1f7be0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1f7be0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7be4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1f7be4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7be8: 0x3c060053  lui         $a2, 0x53
    ctx->pc = 0x1f7be8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)83 << 16));
    // 0x1f7bec: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1f7becu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f7bf0: 0x240d0004  addiu       $t5, $zero, 0x4
    ctx->pc = 0x1f7bf0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1f7bf4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1f7bf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1f7bf8: 0x240b0005  addiu       $t3, $zero, 0x5
    ctx->pc = 0x1f7bf8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1f7bfc: 0x240c0006  addiu       $t4, $zero, 0x6
    ctx->pc = 0x1f7bfcu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1f7c00: 0x24c66f10  addiu       $a2, $a2, 0x6F10
    ctx->pc = 0x1f7c00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 28432));
    // 0x1f7c04: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1f7c04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f7c08:
    // 0x1f7c08: 0xc84821  addu        $t1, $a2, $t0
    ctx->pc = 0x1f7c08u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x1f7c0c: 0x8d2a0000  lw          $t2, 0x0($t1)
    ctx->pc = 0x1f7c0cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1f7c10: 0x1545000a  bne         $t2, $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x1F7C10u;
    {
        const bool branch_taken_0x1f7c10 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 5));
        if (branch_taken_0x1f7c10) {
            ctx->pc = 0x1F7C3Cu;
            goto label_1f7c3c;
        }
    }
    ctx->pc = 0x1F7C18u;
    // 0x1f7c18: 0x8d2a0004  lw          $t2, 0x4($t1)
    ctx->pc = 0x1f7c18u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x1f7c1c: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x1f7c1cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x1f7c20: 0xad2a0004  sw          $t2, 0x4($t1)
    ctx->pc = 0x1f7c20u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 10));
    // 0x1f7c24: 0x8d2a0004  lw          $t2, 0x4($t1)
    ctx->pc = 0x1f7c24u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x1f7c28: 0x294a000c  slti        $t2, $t2, 0xC
    ctx->pc = 0x1f7c28u;
    SET_GPR_U64(ctx, 10, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x1f7c2c: 0x15400026  bnez        $t2, . + 4 + (0x26 << 2)
    ctx->pc = 0x1F7C2Cu;
    {
        const bool branch_taken_0x1f7c2c = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f7c2c) {
            ctx->pc = 0x1F7CC8u;
            goto label_1f7cc8;
        }
    }
    ctx->pc = 0x1F7C34u;
    // 0x1f7c34: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x1F7C34u;
    {
        const bool branch_taken_0x1f7c34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7C34u;
        // 0x1f7c38: 0xad240000  sw          $a0, 0x0($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7c34) {
            ctx->pc = 0x1F7CC8u;
            goto label_1f7cc8;
        }
    }
    ctx->pc = 0x1F7C3Cu;
label_1f7c3c:
    // 0x1f7c3c: 0x0  nop
    ctx->pc = 0x1f7c3cu;
    // NOP
    // 0x1f7c40: 0x1543000a  bne         $t2, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1F7C40u;
    {
        const bool branch_taken_0x1f7c40 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 3));
        if (branch_taken_0x1f7c40) {
            ctx->pc = 0x1F7C6Cu;
            goto label_1f7c6c;
        }
    }
    ctx->pc = 0x1F7C48u;
    // 0x1f7c48: 0x8d2a0004  lw          $t2, 0x4($t1)
    ctx->pc = 0x1f7c48u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x1f7c4c: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x1f7c4cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x1f7c50: 0xad2a0004  sw          $t2, 0x4($t1)
    ctx->pc = 0x1f7c50u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 10));
    // 0x1f7c54: 0x8d2a0004  lw          $t2, 0x4($t1)
    ctx->pc = 0x1f7c54u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x1f7c58: 0x294a000c  slti        $t2, $t2, 0xC
    ctx->pc = 0x1f7c58u;
    SET_GPR_U64(ctx, 10, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x1f7c5c: 0x1540001a  bnez        $t2, . + 4 + (0x1A << 2)
    ctx->pc = 0x1F7C5Cu;
    {
        const bool branch_taken_0x1f7c5c = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f7c5c) {
            ctx->pc = 0x1F7CC8u;
            goto label_1f7cc8;
        }
    }
    ctx->pc = 0x1F7C64u;
    // 0x1f7c64: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1F7C64u;
    {
        const bool branch_taken_0x1f7c64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7C64u;
        // 0x1f7c68: 0xad200000  sw          $zero, 0x0($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7c64) {
            ctx->pc = 0x1F7CC8u;
            goto label_1f7cc8;
        }
    }
    ctx->pc = 0x1F7C6Cu;
label_1f7c6c:
    // 0x1f7c6c: 0x0  nop
    ctx->pc = 0x1f7c6cu;
    // NOP
    // 0x1f7c70: 0x154d000a  bne         $t2, $t5, . + 4 + (0xA << 2)
    ctx->pc = 0x1F7C70u;
    {
        const bool branch_taken_0x1f7c70 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 13));
        if (branch_taken_0x1f7c70) {
            ctx->pc = 0x1F7C9Cu;
            goto label_1f7c9c;
        }
    }
    ctx->pc = 0x1F7C78u;
    // 0x1f7c78: 0x8d2a0004  lw          $t2, 0x4($t1)
    ctx->pc = 0x1f7c78u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x1f7c7c: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x1f7c7cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x1f7c80: 0xad2a0004  sw          $t2, 0x4($t1)
    ctx->pc = 0x1f7c80u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 10));
    // 0x1f7c84: 0x8d2a0004  lw          $t2, 0x4($t1)
    ctx->pc = 0x1f7c84u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x1f7c88: 0x294a000c  slti        $t2, $t2, 0xC
    ctx->pc = 0x1f7c88u;
    SET_GPR_U64(ctx, 10, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x1f7c8c: 0x1540000e  bnez        $t2, . + 4 + (0xE << 2)
    ctx->pc = 0x1F7C8Cu;
    {
        const bool branch_taken_0x1f7c8c = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f7c8c) {
            ctx->pc = 0x1F7CC8u;
            goto label_1f7cc8;
        }
    }
    ctx->pc = 0x1F7C94u;
    // 0x1f7c94: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1F7C94u;
    {
        const bool branch_taken_0x1f7c94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7C94u;
        // 0x1f7c98: 0xad2c0000  sw          $t4, 0x0($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7c94) {
            ctx->pc = 0x1F7CC8u;
            goto label_1f7cc8;
        }
    }
    ctx->pc = 0x1F7C9Cu;
label_1f7c9c:
    // 0x1f7c9c: 0x0  nop
    ctx->pc = 0x1f7c9cu;
    // NOP
    // 0x1f7ca0: 0x154b0009  bne         $t2, $t3, . + 4 + (0x9 << 2)
    ctx->pc = 0x1F7CA0u;
    {
        const bool branch_taken_0x1f7ca0 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 11));
        if (branch_taken_0x1f7ca0) {
            ctx->pc = 0x1F7CC8u;
            goto label_1f7cc8;
        }
    }
    ctx->pc = 0x1F7CA8u;
    // 0x1f7ca8: 0x8d2a0004  lw          $t2, 0x4($t1)
    ctx->pc = 0x1f7ca8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x1f7cac: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x1f7cacu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x1f7cb0: 0xad2a0004  sw          $t2, 0x4($t1)
    ctx->pc = 0x1f7cb0u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 10));
    // 0x1f7cb4: 0x8d2a0004  lw          $t2, 0x4($t1)
    ctx->pc = 0x1f7cb4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x1f7cb8: 0x294a000c  slti        $t2, $t2, 0xC
    ctx->pc = 0x1f7cb8u;
    SET_GPR_U64(ctx, 10, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x1f7cbc: 0x15400002  bnez        $t2, . + 4 + (0x2 << 2)
    ctx->pc = 0x1F7CBCu;
    {
        const bool branch_taken_0x1f7cbc = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f7cbc) {
            ctx->pc = 0x1F7CC8u;
            goto label_1f7cc8;
        }
    }
    ctx->pc = 0x1F7CC4u;
    // 0x1f7cc4: 0xad240000  sw          $a0, 0x0($t1)
    ctx->pc = 0x1f7cc4u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 4));
label_1f7cc8:
    // 0x1f7cc8: 0x8d2a0008  lw          $t2, 0x8($t1)
    ctx->pc = 0x1f7cc8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x1f7ccc: 0x19400008  blez        $t2, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F7CCCu;
    {
        const bool branch_taken_0x1f7ccc = (GPR_S32(ctx, 10) <= 0);
        ctx->pc = 0x1F7CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7CCCu;
        // 0x1f7cd0: 0x252e0008  addiu       $t6, $t1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 9), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7ccc) {
            ctx->pc = 0x1F7CF0u;
            goto label_1f7cf0;
        }
    }
    ctx->pc = 0x1F7CD4u;
    // 0x1f7cd4: 0x8d29000c  lw          $t1, 0xC($t1)
    ctx->pc = 0x1f7cd4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
    // 0x1f7cd8: 0x15200005  bnez        $t1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F7CD8u;
    {
        const bool branch_taken_0x1f7cd8 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f7cd8) {
            ctx->pc = 0x1F7CF0u;
            goto label_1f7cf0;
        }
    }
    ctx->pc = 0x1F7CE0u;
    // 0x1f7ce0: 0x2549fff8  addiu       $t1, $t2, -0x8
    ctx->pc = 0x1f7ce0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967288));
    // 0x1f7ce4: 0x9082a  slt         $at, $zero, $t1
    ctx->pc = 0x1f7ce4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
    // 0x1f7ce8: 0x1480a  movz        $t1, $zero, $at
    ctx->pc = 0x1f7ce8u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 0));
    // 0x1f7cec: 0xadc90000  sw          $t1, 0x0($t6)
    ctx->pc = 0x1f7cecu;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 9));
label_1f7cf0:
    // 0x1f7cf0: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1f7cf0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1f7cf4: 0x28e90003  slti        $t1, $a3, 0x3
    ctx->pc = 0x1f7cf4u;
    SET_GPR_U64(ctx, 9, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1f7cf8: 0x1520ffc3  bnez        $t1, . + 4 + (-0x3D << 2)
    ctx->pc = 0x1F7CF8u;
    {
        const bool branch_taken_0x1f7cf8 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F7CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7CF8u;
        // 0x1f7cfc: 0x25080010  addiu       $t0, $t0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7cf8) {
            ctx->pc = 0x1F7C08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f7c08;
        }
    }
    ctx->pc = 0x1F7D00u;
}
