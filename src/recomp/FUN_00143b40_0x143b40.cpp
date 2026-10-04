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

// Function: FUN_00143b40
// Address: 0x143b40 - 0x143bcc
void FUN_00143b40_0x143b40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00143b40_0x143b40");
#endif

    ctx->pc = 0x143b40u;

    // 0x143b40: 0x8f868590  lw          $a2, -0x7A70($gp)
    ctx->pc = 0x143b40u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
    // 0x143b44: 0x30c3000c  andi        $v1, $a2, 0xC
    ctx->pc = 0x143b44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)12);
    // 0x143b48: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x143B48u;
    {
        const bool branch_taken_0x143b48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x143B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143B48u;
        // 0x143b4c: 0x2403004f  addiu       $v1, $zero, 0x4F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143b48) {
            ctx->pc = 0x143B60u;
            goto label_143b60;
        }
    }
    ctx->pc = 0x143B50u;
    // 0x143b50: 0x30c30020  andi        $v1, $a2, 0x20
    ctx->pc = 0x143b50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)32);
    // 0x143b54: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x143B54u;
    {
        const bool branch_taken_0x143b54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x143b54) {
            ctx->pc = 0x143B90u;
            goto label_143b90;
        }
    }
    ctx->pc = 0x143B5Cu;
    // 0x143b5c: 0x2403004f  addiu       $v1, $zero, 0x4F
    ctx->pc = 0x143b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
label_143b60:
    // 0x143b60: 0x1083000b  beq         $a0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x143B60u;
    {
        const bool branch_taken_0x143b60 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x143B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143B60u;
        // 0x143b64: 0x2883004c  slti        $v1, $a0, 0x4C (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)76) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x143b60) {
            ctx->pc = 0x143B90u;
            goto label_143b90;
        }
    }
    ctx->pc = 0x143B68u;
    // 0x143b68: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x143B68u;
    {
        const bool branch_taken_0x143b68 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x143B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143B68u;
        // 0x143b6c: 0x2881005a  slti        $at, $a0, 0x5A (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)90) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x143b68) {
            ctx->pc = 0x143B90u;
            goto label_143b90;
        }
    }
    ctx->pc = 0x143B70u;
    // 0x143b70: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x143B70u;
    {
        const bool branch_taken_0x143b70 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x143b70) {
            ctx->pc = 0x143B90u;
            goto label_143b90;
        }
    }
    ctx->pc = 0x143B78u;
    // 0x143b78: 0x8ca60038  lw          $a2, 0x38($a1)
    ctx->pc = 0x143b78u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 56)));
    // 0x143b7c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x143b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x143b80: 0x80c6021f  lb          $a2, 0x21F($a2)
    ctx->pc = 0x143b80u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 543)));
    // 0x143b84: 0x14c30002  bne         $a2, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x143B84u;
    {
        const bool branch_taken_0x143b84 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        if (branch_taken_0x143b84) {
            ctx->pc = 0x143B90u;
            goto label_143b90;
        }
    }
    ctx->pc = 0x143B8Cu;
    // 0x143b8c: 0x2484000e  addiu       $a0, $a0, 0xE
    ctx->pc = 0x143b8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14));
label_143b90:
    // 0x143b90: 0xa4a4003e  sh          $a0, 0x3E($a1)
    ctx->pc = 0x143b90u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 62), (uint16_t)GPR_U32(ctx, 4));
    // 0x143b94: 0x8ca30030  lw          $v1, 0x30($a1)
    ctx->pc = 0x143b94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x143b98: 0x8c660004  lw          $a2, 0x4($v1)
    ctx->pc = 0x143b98u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x143b9c: 0x4c00004  bltz        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x143B9Cu;
    {
        const bool branch_taken_0x143b9c = (GPR_S32(ctx, 6) < 0);
        if (branch_taken_0x143b9c) {
            ctx->pc = 0x143BB0u;
            goto label_143bb0;
        }
    }
    ctx->pc = 0x143BA4u;
    // 0x143ba4: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x143ba4u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x143ba8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x143BA8u;
    {
        const bool branch_taken_0x143ba8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x143BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143BA8u;
        // 0x143bac: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x143ba8) {
            ctx->pc = 0x143BCCu;
            return;
        }
    }
    ctx->pc = 0x143BB0u;
label_143bb0:
    // 0x143bb0: 0x62042  srl         $a0, $a2, 1
    ctx->pc = 0x143bb0u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 6), 1));
    // 0x143bb4: 0x30c30001  andi        $v1, $a2, 0x1
    ctx->pc = 0x143bb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
    // 0x143bb8: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x143bb8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x143bbc: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x143bbcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x143bc0: 0x0  nop
    ctx->pc = 0x143bc0u;
    // NOP
    // 0x143bc4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x143bc4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x143bc8: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x143bc8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    ctx->pc = 0x143bccu;
}
