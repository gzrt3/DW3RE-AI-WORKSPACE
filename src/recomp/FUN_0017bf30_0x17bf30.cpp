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

// Function: FUN_0017bf30
// Address: 0x17bf30 - 0x17bfd8
void FUN_0017bf30_0x17bf30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0017bf30_0x17bf30");
#endif

    switch (ctx->pc) {
        case 0x17bf90u: goto label_17bf90;
        default: break;
    }

    ctx->pc = 0x17bf30u;

    // 0x17bf30: 0x8f858450  lw          $a1, -0x7BB0($gp)
    ctx->pc = 0x17bf30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935632)));
    // 0x17bf34: 0x10a00028  beqz        $a1, . + 4 + (0x28 << 2)
    ctx->pc = 0x17BF34u;
    {
        const bool branch_taken_0x17bf34 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x17BF38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BF34u;
        // 0x17bf38: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17bf34) {
            ctx->pc = 0x17BFD8u;
            return;
        }
    }
    ctx->pc = 0x17BF3Cu;
    // 0x17bf3c: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x17BF3Cu;
    {
        const bool branch_taken_0x17bf3c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x17bf3c) {
            ctx->pc = 0x17BF50u;
            goto label_17bf50;
        }
    }
    ctx->pc = 0x17BF44u;
    // 0x17bf44: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x17bf44u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x17bf48: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x17BF48u;
    {
        const bool branch_taken_0x17bf48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17BF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BF48u;
        // 0x17bf4c: 0xaf808758  sw          $zero, -0x78A8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936408), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17bf48) {
            ctx->pc = 0x17BF78u;
            goto label_17bf78;
        }
    }
    ctx->pc = 0x17BF50u;
label_17bf50:
    // 0x17bf50: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x17bf50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x17bf54: 0x3c034416  lui         $v1, 0x4416
    ctx->pc = 0x17bf54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17430 << 16));
    // 0x17bf58: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x17bf58u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x17bf5c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x17bf5cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17bf60: 0x8f848450  lw          $a0, -0x7BB0($gp)
    ctx->pc = 0x17bf60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935632)));
    // 0x17bf64: 0x3c03c040  lui         $v1, 0xC040
    ctx->pc = 0x17bf64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49216 << 16));
    // 0x17bf68: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x17bf68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17bf6c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x17bf6cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x17bf70: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x17bf70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x17bf74: 0xaf838758  sw          $v1, -0x78A8($gp)
    ctx->pc = 0x17bf74u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936408), GPR_U32(ctx, 3));
label_17bf78:
    // 0x17bf78: 0x8f838450  lw          $v1, -0x7BB0($gp)
    ctx->pc = 0x17bf78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935632)));
    // 0x17bf7c: 0x24670008  addiu       $a3, $v1, 0x8
    ctx->pc = 0x17bf7cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x17bf80: 0x3c03bfff  lui         $v1, 0xBFFF
    ctx->pc = 0x17bf80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49151 << 16));
    // 0x17bf84: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x17bf84u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x17bf88: 0x3465ffff  ori         $a1, $v1, 0xFFFF
    ctx->pc = 0x17bf88u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x17bf8c: 0x3c064000  lui         $a2, 0x4000
    ctx->pc = 0x17bf8cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16384 << 16));
label_17bf90:
    // 0x17bf90: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x17bf90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x17bf94: 0x664024  and         $t0, $v1, $a2
    ctx->pc = 0x17bf94u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x17bf98: 0x15000004  bnez        $t0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17BF98u;
    {
        const bool branch_taken_0x17bf98 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        if (branch_taken_0x17bf98) {
            ctx->pc = 0x17BFACu;
            goto label_17bfac;
        }
    }
    ctx->pc = 0x17BFA0u;
    // 0x17bfa0: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x17bfa0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x17bfa4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x17BFA4u;
    {
        const bool branch_taken_0x17bfa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17BFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BFA4u;
        // 0x17bfa8: 0xace30000  sw          $v1, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17bfa4) {
            ctx->pc = 0x17BFC0u;
            goto label_17bfc0;
        }
    }
    ctx->pc = 0x17BFACu;
label_17bfac:
    // 0x17bfac: 0x0  nop
    ctx->pc = 0x17bfacu;
    // NOP
    // 0x17bfb0: 0x11000003  beqz        $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17BFB0u;
    {
        const bool branch_taken_0x17bfb0 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x17bfb0) {
            ctx->pc = 0x17BFC0u;
            goto label_17bfc0;
        }
    }
    ctx->pc = 0x17BFB8u;
    // 0x17bfb8: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x17bfb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x17bfbc: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x17bfbcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
label_17bfc0:
    // 0x17bfc0: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x17bfc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x17bfc4: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x17bfc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x17bfc8: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x17BFC8u;
    {
        const bool branch_taken_0x17bfc8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x17bfc8) {
            ctx->pc = 0x17BFD8u;
            return;
        }
    }
    ctx->pc = 0x17BFD0u;
    // 0x17bfd0: 0x1000ffef  b           . + 4 + (-0x11 << 2)
    ctx->pc = 0x17BFD0u;
    {
        const bool branch_taken_0x17bfd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17BFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BFD0u;
        // 0x17bfd4: 0x24e70044  addiu       $a3, $a3, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 68));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17bfd0) {
            ctx->pc = 0x17BF90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17bf90;
        }
    }
    ctx->pc = 0x17BFD8u;
}
