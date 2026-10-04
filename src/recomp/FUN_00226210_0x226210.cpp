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

// Function: FUN_00226210
// Address: 0x226210 - 0x2262d0
void FUN_00226210_0x226210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00226210_0x226210");
#endif

    switch (ctx->pc) {
        case 0x226220u: goto label_226220;
        default: break;
    }

    ctx->pc = 0x226210u;

    // 0x226210: 0x8f8784e0  lw          $a3, -0x7B20($gp)
    ctx->pc = 0x226210u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935776)));
    // 0x226214: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x226214u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226218: 0x3c05002f  lui         $a1, 0x2F
    ctx->pc = 0x226218u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)47 << 16));
    // 0x22621c: 0x24a52570  addiu       $a1, $a1, 0x2570
    ctx->pc = 0x22621cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9584));
label_226220:
    // 0x226220: 0x90e2002e  lbu         $v0, 0x2E($a3)
    ctx->pc = 0x226220u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 46)));
    // 0x226224: 0x14400025  bnez        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x226224u;
    {
        const bool branch_taken_0x226224 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x226224) {
            ctx->pc = 0x2262BCu;
            goto label_2262bc;
        }
    }
    ctx->pc = 0x22622Cu;
    // 0x22622c: 0x90e2002f  lbu         $v0, 0x2F($a3)
    ctx->pc = 0x22622cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 47)));
    // 0x226230: 0x284100ff  slti        $at, $v0, 0xFF
    ctx->pc = 0x226230u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)255) ? 1 : 0);
    // 0x226234: 0x10200021  beqz        $at, . + 4 + (0x21 << 2)
    ctx->pc = 0x226234u;
    {
        const bool branch_taken_0x226234 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x226234) {
            ctx->pc = 0x2262BCu;
            goto label_2262bc;
        }
    }
    ctx->pc = 0x22623Cu;
    // 0x22623c: 0x90e6002c  lbu         $a2, 0x2C($a3)
    ctx->pc = 0x22623cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 44)));
    // 0x226240: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x226240u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x226244: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x226244u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x226248: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x226248u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x22624c: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x22624cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x226250: 0x61200  sll         $v0, $a2, 8
    ctx->pc = 0x226250u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
    // 0x226254: 0x463023  subu        $a2, $v0, $a2
    ctx->pc = 0x226254u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x226258: 0x610c0  sll         $v0, $a2, 3
    ctx->pc = 0x226258u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x22625c: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x22625cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x226260: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x226260u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x226264: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x226264u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x226268: 0x24420000  addiu       $v0, $v0, 0x0
    ctx->pc = 0x226268u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
    // 0x22626c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x22626cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x226270: 0x14820012  bne         $a0, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x226270u;
    {
        const bool branch_taken_0x226270 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x226270) {
            ctx->pc = 0x2262BCu;
            goto label_2262bc;
        }
    }
    ctx->pc = 0x226278u;
    // 0x226278: 0x90e2002d  lbu         $v0, 0x2D($a3)
    ctx->pc = 0x226278u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 45)));
    // 0x22627c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x22627cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x226280: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x226280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x226284: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x226284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x226288: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x226288u;
    {
        const bool branch_taken_0x226288 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x226288) {
            ctx->pc = 0x2262BCu;
            goto label_2262bc;
        }
    }
    ctx->pc = 0x226290u;
    // 0x226290: 0xc4410188  lwc1        $f1, 0x188($v0)
    ctx->pc = 0x226290u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x226294: 0x3c02c37b  lui         $v0, 0xC37B
    ctx->pc = 0x226294u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50043 << 16));
    // 0x226298: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x226298u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22629c: 0x0  nop
    ctx->pc = 0x22629cu;
    // NOP
    // 0x2262a0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2262a0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2262a4: 0x0  nop
    ctx->pc = 0x2262a4u;
    // NOP
    // 0x2262a8: 0x45010009  bc1t        . + 4 + (0x9 << 2)
    ctx->pc = 0x2262A8u;
    {
        const bool branch_taken_0x2262a8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2262ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2262A8u;
        // 0x2262ac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2262a8) {
            ctx->pc = 0x2262D0u;
            return;
        }
    }
    ctx->pc = 0x2262B0u;
    // 0x2262b0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2262b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2262b4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2262B4u;
    {
        const bool branch_taken_0x2262b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2262b4) {
            ctx->pc = 0x2262D0u;
            return;
        }
    }
    ctx->pc = 0x2262BCu;
label_2262bc:
    // 0x2262bc: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x2262bcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x2262c0: 0x2902004a  slti        $v0, $t0, 0x4A
    ctx->pc = 0x2262c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)74) ? 1 : 0);
    // 0x2262c4: 0x1440ffd6  bnez        $v0, . + 4 + (-0x2A << 2)
    ctx->pc = 0x2262C4u;
    {
        const bool branch_taken_0x2262c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2262C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2262C4u;
        // 0x2262c8: 0x24e70030  addiu       $a3, $a3, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2262c4) {
            ctx->pc = 0x226220u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_226220;
        }
    }
    ctx->pc = 0x2262CCu;
    // 0x2262cc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2262ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2262d0u;
}
