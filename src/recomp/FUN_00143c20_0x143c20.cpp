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

// Function: FUN_00143c20
// Address: 0x143c20 - 0x143d28
void FUN_00143c20_0x143c20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00143c20_0x143c20");
#endif

    ctx->pc = 0x143c20u;

    // 0x143c20: 0x8ca60024  lw          $a2, 0x24($a1)
    ctx->pc = 0x143c20u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
    // 0x143c24: 0x3c030080  lui         $v1, 0x80
    ctx->pc = 0x143c24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
    // 0x143c28: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x143c28u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x143c2c: 0xc31824  and         $v1, $a2, $v1
    ctx->pc = 0x143c2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x143c30: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x143C30u;
    {
        const bool branch_taken_0x143c30 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x143c30) {
            ctx->pc = 0x143C44u;
            goto label_143c44;
        }
    }
    ctx->pc = 0x143C38u;
    // 0x143c38: 0x90a301a0  lbu         $v1, 0x1A0($a1)
    ctx->pc = 0x143c38u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 416)));
    // 0x143c3c: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x143c3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x143c40: 0xa0a301a0  sb          $v1, 0x1A0($a1)
    ctx->pc = 0x143c40u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 416), (uint8_t)GPR_U32(ctx, 3));
label_143c44:
    // 0x143c44: 0x8f868590  lw          $a2, -0x7A70($gp)
    ctx->pc = 0x143c44u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
    // 0x143c48: 0x30c3000c  andi        $v1, $a2, 0xC
    ctx->pc = 0x143c48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)12);
    // 0x143c4c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x143C4Cu;
    {
        const bool branch_taken_0x143c4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x143C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143C4Cu;
        // 0x143c50: 0x2403004f  addiu       $v1, $zero, 0x4F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143c4c) {
            ctx->pc = 0x143C64u;
            goto label_143c64;
        }
    }
    ctx->pc = 0x143C54u;
    // 0x143c54: 0x30c30020  andi        $v1, $a2, 0x20
    ctx->pc = 0x143c54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)32);
    // 0x143c58: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x143C58u;
    {
        const bool branch_taken_0x143c58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x143c58) {
            ctx->pc = 0x143C94u;
            goto label_143c94;
        }
    }
    ctx->pc = 0x143C60u;
    // 0x143c60: 0x2403004f  addiu       $v1, $zero, 0x4F
    ctx->pc = 0x143c60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
label_143c64:
    // 0x143c64: 0x1083000b  beq         $a0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x143C64u;
    {
        const bool branch_taken_0x143c64 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x143C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143C64u;
        // 0x143c68: 0x2883004c  slti        $v1, $a0, 0x4C (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)76) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x143c64) {
            ctx->pc = 0x143C94u;
            goto label_143c94;
        }
    }
    ctx->pc = 0x143C6Cu;
    // 0x143c6c: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x143C6Cu;
    {
        const bool branch_taken_0x143c6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x143C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143C6Cu;
        // 0x143c70: 0x2881005a  slti        $at, $a0, 0x5A (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)90) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x143c6c) {
            ctx->pc = 0x143C94u;
            goto label_143c94;
        }
    }
    ctx->pc = 0x143C74u;
    // 0x143c74: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x143C74u;
    {
        const bool branch_taken_0x143c74 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x143c74) {
            ctx->pc = 0x143C94u;
            goto label_143c94;
        }
    }
    ctx->pc = 0x143C7Cu;
    // 0x143c7c: 0x8ca60038  lw          $a2, 0x38($a1)
    ctx->pc = 0x143c7cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 56)));
    // 0x143c80: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x143c80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x143c84: 0x80c6021f  lb          $a2, 0x21F($a2)
    ctx->pc = 0x143c84u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 543)));
    // 0x143c88: 0x14c30002  bne         $a2, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x143C88u;
    {
        const bool branch_taken_0x143c88 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        if (branch_taken_0x143c88) {
            ctx->pc = 0x143C94u;
            goto label_143c94;
        }
    }
    ctx->pc = 0x143C90u;
    // 0x143c90: 0x2484000e  addiu       $a0, $a0, 0xE
    ctx->pc = 0x143c90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14));
label_143c94:
    // 0x143c94: 0xa4a4003c  sh          $a0, 0x3C($a1)
    ctx->pc = 0x143c94u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 60), (uint16_t)GPR_U32(ctx, 4));
    // 0x143c98: 0x43100  sll         $a2, $a0, 4
    ctx->pc = 0x143c98u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x143c9c: 0x8ca30020  lw          $v1, 0x20($a1)
    ctx->pc = 0x143c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x143ca0: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x143ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x143ca4: 0xaca30024  sw          $v1, 0x24($a1)
    ctx->pc = 0x143ca4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 36), GPR_U32(ctx, 3));
    // 0x143ca8: 0x8f868590  lw          $a2, -0x7A70($gp)
    ctx->pc = 0x143ca8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
    // 0x143cac: 0x30c3000c  andi        $v1, $a2, 0xC
    ctx->pc = 0x143cacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)12);
    // 0x143cb0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x143CB0u;
    {
        const bool branch_taken_0x143cb0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x143CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143CB0u;
        // 0x143cb4: 0x30c30020  andi        $v1, $a2, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x143cb0) {
            ctx->pc = 0x143CC0u;
            goto label_143cc0;
        }
    }
    ctx->pc = 0x143CB8u;
    // 0x143cb8: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x143CB8u;
    {
        const bool branch_taken_0x143cb8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x143cb8) {
            ctx->pc = 0x143CE8u;
            goto label_143ce8;
        }
    }
    ctx->pc = 0x143CC0u;
label_143cc0:
    // 0x143cc0: 0x14800009  bnez        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x143CC0u;
    {
        const bool branch_taken_0x143cc0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x143cc0) {
            ctx->pc = 0x143CE8u;
            goto label_143ce8;
        }
    }
    ctx->pc = 0x143CC8u;
    // 0x143cc8: 0x8ca30020  lw          $v1, 0x20($a1)
    ctx->pc = 0x143cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x143ccc: 0x90a601a1  lbu         $a2, 0x1A1($a1)
    ctx->pc = 0x143cccu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 417)));
    // 0x143cd0: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x143cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x143cd4: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x143cd4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x143cd8: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x143cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x143cdc: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x143cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x143ce0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x143CE0u;
    {
        const bool branch_taken_0x143ce0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x143CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143CE0u;
        // 0x143ce4: 0xaca30030  sw          $v1, 0x30($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 48), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143ce0) {
            ctx->pc = 0x143CF4u;
            goto label_143cf4;
        }
    }
    ctx->pc = 0x143CE8u;
label_143ce8:
    // 0x143ce8: 0x8ca30024  lw          $v1, 0x24($a1)
    ctx->pc = 0x143ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
    // 0x143cec: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x143cecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x143cf0: 0xaca30030  sw          $v1, 0x30($a1)
    ctx->pc = 0x143cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 48), GPR_U32(ctx, 3));
label_143cf4:
    // 0x143cf4: 0x8ca30030  lw          $v1, 0x30($a1)
    ctx->pc = 0x143cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x143cf8: 0x8c670004  lw          $a3, 0x4($v1)
    ctx->pc = 0x143cf8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x143cfc: 0x4e00004  bltz        $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x143CFCu;
    {
        const bool branch_taken_0x143cfc = (GPR_S32(ctx, 7) < 0);
        ctx->pc = 0x143D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143CFCu;
        // 0x143d00: 0x73042  srl         $a2, $a3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143cfc) {
            ctx->pc = 0x143D10u;
            goto label_143d10;
        }
    }
    ctx->pc = 0x143D04u;
    // 0x143d04: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x143d04u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x143d08: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x143D08u;
    {
        const bool branch_taken_0x143d08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x143D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143D08u;
        // 0x143d0c: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x143d08) {
            ctx->pc = 0x143D28u;
            return;
        }
    }
    ctx->pc = 0x143D10u;
label_143d10:
    // 0x143d10: 0x30e30001  andi        $v1, $a3, 0x1
    ctx->pc = 0x143d10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1);
    // 0x143d14: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x143d14u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x143d18: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x143d18u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x143d1c: 0x0  nop
    ctx->pc = 0x143d1cu;
    // NOP
    // 0x143d20: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x143d20u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x143d24: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x143d24u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    ctx->pc = 0x143d28u;
}
