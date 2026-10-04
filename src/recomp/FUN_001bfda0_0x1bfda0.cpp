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

// Function: FUN_001bfda0
// Address: 0x1bfda0 - 0x1bfea4
void FUN_001bfda0_0x1bfda0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001bfda0_0x1bfda0");
#endif

    ctx->pc = 0x1bfda0u;

    // 0x1bfda0: 0x430c0  sll         $a2, $a0, 3
    ctx->pc = 0x1bfda0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1bfda4: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x1bfda4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
    // 0x1bfda8: 0xc42021  addu        $a0, $a2, $a0
    ctx->pc = 0x1bfda8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x1bfdac: 0x24a54968  addiu       $a1, $a1, 0x4968
    ctx->pc = 0x1bfdacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18792));
    // 0x1bfdb0: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x1bfdb0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x1bfdb4: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x1bfdb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1bfdb8: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x1bfdb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1bfdbc: 0x90860236  lbu         $a2, 0x236($a0)
    ctx->pc = 0x1bfdbcu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 566)));
    // 0x1bfdc0: 0x28c1004a  slti        $at, $a2, 0x4A
    ctx->pc = 0x1bfdc0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)74) ? 1 : 0);
    // 0x1bfdc4: 0x1020002b  beqz        $at, . + 4 + (0x2B << 2)
    ctx->pc = 0x1BFDC4u;
    {
        const bool branch_taken_0x1bfdc4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BFDC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFDC4u;
        // 0x1bfdc8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bfdc4) {
            ctx->pc = 0x1BFE74u;
            goto label_1bfe74;
        }
    }
    ctx->pc = 0x1BFDCCu;
    // 0x1bfdcc: 0x90850235  lbu         $a1, 0x235($a0)
    ctx->pc = 0x1bfdccu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 565)));
    // 0x1bfdd0: 0x28a10009  slti        $at, $a1, 0x9
    ctx->pc = 0x1bfdd0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x1bfdd4: 0x10200027  beqz        $at, . + 4 + (0x27 << 2)
    ctx->pc = 0x1BFDD4u;
    {
        const bool branch_taken_0x1bfdd4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bfdd4) {
            ctx->pc = 0x1BFE74u;
            goto label_1bfe74;
        }
    }
    ctx->pc = 0x1BFDDCu;
    // 0x1bfddc: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x1bfddcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1bfde0: 0x30c600ff  andi        $a2, $a2, 0xFF
    ctx->pc = 0x1bfde0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x1bfde4: 0x62840  sll         $a1, $a2, 1
    ctx->pc = 0x1bfde4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x1bfde8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1bfde8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1bfdec: 0xa63021  addu        $a2, $a1, $a2
    ctx->pc = 0x1bfdecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1bfdf0: 0x8f8584e0  lw          $a1, -0x7B20($gp)
    ctx->pc = 0x1bfdf0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935776)));
    // 0x1bfdf4: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x1bfdf4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x1bfdf8: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x1bfdf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1bfdfc: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x1bfdfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1bfe00: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1bfe00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1bfe04: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x1BFE04u;
    {
        const bool branch_taken_0x1bfe04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bfe04) {
            ctx->pc = 0x1BFE74u;
            goto label_1bfe74;
        }
    }
    ctx->pc = 0x1BFE0Cu;
    // 0x1bfe0c: 0x9045023b  lbu         $a1, 0x23B($v0)
    ctx->pc = 0x1bfe0cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 571)));
    // 0x1bfe10: 0x10a00018  beqz        $a1, . + 4 + (0x18 << 2)
    ctx->pc = 0x1BFE10u;
    {
        const bool branch_taken_0x1bfe10 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bfe10) {
            ctx->pc = 0x1BFE74u;
            goto label_1bfe74;
        }
    }
    ctx->pc = 0x1BFE18u;
    // 0x1bfe18: 0x90460234  lbu         $a2, 0x234($v0)
    ctx->pc = 0x1bfe18u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 564)));
    // 0x1bfe1c: 0x90850234  lbu         $a1, 0x234($a0)
    ctx->pc = 0x1bfe1cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 564)));
    // 0x1bfe20: 0x10c50014  beq         $a2, $a1, . + 4 + (0x14 << 2)
    ctx->pc = 0x1BFE20u;
    {
        const bool branch_taken_0x1bfe20 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        if (branch_taken_0x1bfe20) {
            ctx->pc = 0x1BFE74u;
            goto label_1bfe74;
        }
    }
    ctx->pc = 0x1BFE28u;
    // 0x1bfe28: 0x90860218  lbu         $a2, 0x218($a0)
    ctx->pc = 0x1bfe28u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 536)));
    // 0x1bfe2c: 0x90450218  lbu         $a1, 0x218($v0)
    ctx->pc = 0x1bfe2cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 536)));
    // 0x1bfe30: 0xc53823  subu        $a3, $a2, $a1
    ctx->pc = 0x1bfe30u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x1bfe34: 0xe0302a  slt         $a2, $a3, $zero
    ctx->pc = 0x1bfe34u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
    // 0x1bfe38: 0x72822  neg         $a1, $a3
    ctx->pc = 0x1bfe38u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 7), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 5, (int32_t)tmp); }
    // 0x1bfe3c: 0xe6280a  movz        $a1, $a3, $a2
    ctx->pc = 0x1bfe3cu;
    if (GPR_U64(ctx, 6) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 7));
    // 0x1bfe40: 0x28a10002  slti        $at, $a1, 0x2
    ctx->pc = 0x1bfe40u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1bfe44: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
    ctx->pc = 0x1BFE44u;
    {
        const bool branch_taken_0x1bfe44 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bfe44) {
            ctx->pc = 0x1BFE74u;
            goto label_1bfe74;
        }
    }
    ctx->pc = 0x1BFE4Cu;
    // 0x1bfe4c: 0x90860219  lbu         $a2, 0x219($a0)
    ctx->pc = 0x1bfe4cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 537)));
    // 0x1bfe50: 0x90450219  lbu         $a1, 0x219($v0)
    ctx->pc = 0x1bfe50u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 537)));
    // 0x1bfe54: 0xc53823  subu        $a3, $a2, $a1
    ctx->pc = 0x1bfe54u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x1bfe58: 0xe0302a  slt         $a2, $a3, $zero
    ctx->pc = 0x1bfe58u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
    // 0x1bfe5c: 0x72822  neg         $a1, $a3
    ctx->pc = 0x1bfe5cu;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 7), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 5, (int32_t)tmp); }
    // 0x1bfe60: 0xe6280a  movz        $a1, $a3, $a2
    ctx->pc = 0x1bfe60u;
    if (GPR_U64(ctx, 6) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 7));
    // 0x1bfe64: 0x28a10002  slti        $at, $a1, 0x2
    ctx->pc = 0x1bfe64u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1bfe68: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1BFE68u;
    {
        const bool branch_taken_0x1bfe68 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bfe68) {
            ctx->pc = 0x1BFE74u;
            goto label_1bfe74;
        }
    }
    ctx->pc = 0x1BFE70u;
    // 0x1bfe70: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1bfe70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1bfe74:
    // 0x1bfe74: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BFE74u;
    {
        const bool branch_taken_0x1bfe74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bfe74) {
            ctx->pc = 0x1BFE84u;
            goto label_1bfe84;
        }
    }
    ctx->pc = 0x1BFE7Cu;
    // 0x1bfe7c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1BFE7Cu;
    {
        const bool branch_taken_0x1bfe7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bfe7c) {
            ctx->pc = 0x1BFEA4u;
            return;
        }
    }
    ctx->pc = 0x1BFE84u;
label_1bfe84:
    // 0x1bfe84: 0x8f838590  lw          $v1, -0x7A70($gp)
    ctx->pc = 0x1bfe84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
    // 0x1bfe88: 0x30630010  andi        $v1, $v1, 0x10
    ctx->pc = 0x1bfe88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x1bfe8c: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BFE8Cu;
    {
        const bool branch_taken_0x1bfe8c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BFE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFE8Cu;
        // 0x1bfe90: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bfe8c) {
            ctx->pc = 0x1BFEA4u;
            return;
        }
    }
    ctx->pc = 0x1BFE94u;
    // 0x1bfe94: 0x2405004a  addiu       $a1, $zero, 0x4A
    ctx->pc = 0x1bfe94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 74));
    // 0x1bfe98: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x1bfe98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1bfe9c: 0xa0850236  sb          $a1, 0x236($a0)
    ctx->pc = 0x1bfe9cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 566), (uint8_t)GPR_U32(ctx, 5));
    // 0x1bfea0: 0xa0830235  sb          $v1, 0x235($a0)
    ctx->pc = 0x1bfea0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 565), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x1bfea4u;
}
