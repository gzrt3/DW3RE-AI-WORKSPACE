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

// Function: FUN_001dfa10
// Address: 0x1dfa10 - 0x1dfcac
void FUN_001dfa10_0x1dfa10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001dfa10_0x1dfa10");
#endif

    switch (ctx->pc) {
        case 0x1dfa70u: goto label_1dfa70;
        case 0x1dfb8cu: goto label_1dfb8c;
        case 0x1dfca8u: goto label_1dfca8;
        default: break;
    }

    ctx->pc = 0x1dfa10u;

    // 0x1dfa10: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1dfa10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1dfa14: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1dfa14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1dfa18: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1dfa18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1dfa1c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1dfa1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1dfa20: 0x8f838cd4  lw          $v1, -0x732C($gp)
    ctx->pc = 0x1dfa20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937812)));
    // 0x1dfa24: 0x106000a0  beqz        $v1, . + 4 + (0xA0 << 2)
    ctx->pc = 0x1DFA24u;
    {
        const bool branch_taken_0x1dfa24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DFA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFA24u;
        // 0x1dfa28: 0x3c017000  lui         $at, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfa24) {
            ctx->pc = 0x1DFCA8u;
            goto label_1dfca8;
        }
    }
    ctx->pc = 0x1DFA2Cu;
    // 0x1dfa2c: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x1dfa2cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x1dfa30: 0x8c253ffc  lw          $a1, 0x3FFC($at)
    ctx->pc = 0x1dfa30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
    // 0x1dfa34: 0x27828cd8  addiu       $v0, $gp, -0x7328
    ctx->pc = 0x1dfa34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937816));
    // 0x1dfa38: 0x24841e00  addiu       $a0, $a0, 0x1E00
    ctx->pc = 0x1dfa38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7680));
    // 0x1dfa3c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1dfa3cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dfa40: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1dfa40u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dfa44: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1dfa44u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dfa48: 0x53140  sll         $a2, $a1, 5
    ctx->pc = 0x1dfa48u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x1dfa4c: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x1dfa4cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1dfa50: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x1dfa50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x1dfa54: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1dfa54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1dfa58: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1dfa58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1dfa5c: 0x0  nop
    ctx->pc = 0x1dfa5cu;
    // NOP
    // 0x1dfa60: 0x3c029249  lui         $v0, 0x9249
    ctx->pc = 0x1dfa60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37449 << 16));
    // 0x1dfa64: 0x240f0038  addiu       $t7, $zero, 0x38
    ctx->pc = 0x1dfa64u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x1dfa68: 0x34422493  ori         $v0, $v0, 0x2493
    ctx->pc = 0x1dfa68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9363);
    // 0x1dfa6c: 0x240e000a  addiu       $t6, $zero, 0xA
    ctx->pc = 0x1dfa6cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1dfa70:
    // 0x1dfa70: 0x8f868cd0  lw          $a2, -0x7330($gp)
    ctx->pc = 0x1dfa70u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937808)));
    // 0x1dfa74: 0xc85823  subu        $t3, $a2, $t0
    ctx->pc = 0x1dfa74u;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x1dfa78: 0x5610003  bgez        $t3, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DFA78u;
    {
        const bool branch_taken_0x1dfa78 = (GPR_S32(ctx, 11) >= 0);
        ctx->pc = 0x1DFA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFA78u;
        // 0x1dfa7c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfa78) {
            ctx->pc = 0x1DFA88u;
            goto label_1dfa88;
        }
    }
    ctx->pc = 0x1DFA80u;
    // 0x1dfa80: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1DFA80u;
    {
        const bool branch_taken_0x1dfa80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dfa80) {
            ctx->pc = 0x1DFAE4u;
            goto label_1dfae4;
        }
    }
    ctx->pc = 0x1DFA88u;
label_1dfa88:
    // 0x1dfa88: 0x29610039  slti        $at, $t3, 0x39
    ctx->pc = 0x1dfa88u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 11) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x1dfa8c: 0x14200008  bnez        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x1DFA8Cu;
    {
        const bool branch_taken_0x1dfa8c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dfa8c) {
            ctx->pc = 0x1DFAB0u;
            goto label_1dfab0;
        }
    }
    ctx->pc = 0x1DFA94u;
    // 0x1dfa94: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DFA94u;
    {
        const bool branch_taken_0x1dfa94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DFA98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFA94u;
        // 0x1dfa98: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfa94) {
            ctx->pc = 0x1DFAA4u;
            goto label_1dfaa4;
        }
    }
    ctx->pc = 0x1DFA9Cu;
    // 0x1dfa9c: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1DFA9Cu;
    {
        const bool branch_taken_0x1dfa9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DFAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFA9Cu;
        // 0x1dfaa0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfa9c) {
            ctx->pc = 0x1DFAE4u;
            goto label_1dfae4;
        }
    }
    ctx->pc = 0x1DFAA4u;
label_1dfaa4:
    // 0x1dfaa4: 0x0  nop
    ctx->pc = 0x1dfaa4u;
    // NOP
    // 0x1dfaa8: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1DFAA8u;
    {
        const bool branch_taken_0x1dfaa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DFAACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFAA8u;
        // 0x1dfaac: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfaa8) {
            ctx->pc = 0x1DFAE4u;
            goto label_1dfae4;
        }
    }
    ctx->pc = 0x1DFAB0u;
label_1dfab0:
    // 0x1dfab0: 0xb51c0  sll         $t2, $t3, 7
    ctx->pc = 0x1dfab0u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 11), 7));
    // 0x1dfab4: 0x4a0018  mult        $zero, $v0, $t2
    ctx->pc = 0x1dfab4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1dfab8: 0xa3fc2  srl         $a3, $t2, 31
    ctx->pc = 0x1dfab8u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 10), 31));
    // 0x1dfabc: 0x0  nop
    ctx->pc = 0x1dfabcu;
    // NOP
    // 0x1dfac0: 0x3010  mfhi        $a2
    ctx->pc = 0x1dfac0u;
    SET_GPR_U64(ctx, 6, ctx->hi);
    // 0x1dfac4: 0xca3021  addu        $a2, $a2, $t2
    ctx->pc = 0x1dfac4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 10)));
    // 0x1dfac8: 0x63143  sra         $a2, $a2, 5
    ctx->pc = 0x1dfac8u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 5));
    // 0x1dfacc: 0xc73821  addu        $a3, $a2, $a3
    ctx->pc = 0x1dfaccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x1dfad0: 0x4e10003  bgez        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DFAD0u;
    {
        const bool branch_taken_0x1dfad0 = (GPR_S32(ctx, 7) >= 0);
        ctx->pc = 0x1DFAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFAD0u;
        // 0x1dfad4: 0x73043  sra         $a2, $a3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfad0) {
            ctx->pc = 0x1DFAE0u;
            goto label_1dfae0;
        }
    }
    ctx->pc = 0x1DFAD8u;
    // 0x1dfad8: 0x24e60001  addiu       $a2, $a3, 0x1
    ctx->pc = 0x1dfad8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1dfadc: 0x63043  sra         $a2, $a2, 1
    ctx->pc = 0x1dfadcu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 1));
label_1dfae0:
    // 0x1dfae0: 0x1eb3823  subu        $a3, $t7, $t3
    ctx->pc = 0x1dfae0u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 11)));
label_1dfae4:
    // 0x1dfae4: 0x0  nop
    ctx->pc = 0x1dfae4u;
    // NOP
    // 0x1dfae8: 0x14c00005  bnez        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x1DFAE8u;
    {
        const bool branch_taken_0x1dfae8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DFAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFAE8u;
        // 0x1dfaec: 0xc82d  daddu       $t9, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfae8) {
            ctx->pc = 0x1DFB00u;
            goto label_1dfb00;
        }
    }
    ctx->pc = 0x1DFAF0u;
    // 0x1dfaf0: 0xc02d  daddu       $t8, $zero, $zero
    ctx->pc = 0x1dfaf0u;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dfaf4: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1dfaf4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dfaf8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1DFAF8u;
    {
        const bool branch_taken_0x1dfaf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DFAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFAF8u;
        // 0x1dfafc: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfaf8) {
            ctx->pc = 0x1DFB20u;
            goto label_1dfb20;
        }
    }
    ctx->pc = 0x1DFB00u;
label_1dfb00:
    // 0x1dfb00: 0x246a0006  addiu       $t2, $v1, 0x6
    ctx->pc = 0x1dfb00u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), 6));
    // 0x1dfb04: 0xea5818  mult        $t3, $a3, $t2
    ctx->pc = 0x1dfb04u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 11, (int32_t)result); }
    // 0x1dfb08: 0x1c35023  subu        $t2, $t6, $v1
    ctx->pc = 0x1dfb08u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 3)));
    // 0x1dfb0c: 0xb5823  negu        $t3, $t3
    ctx->pc = 0x1dfb0cu;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 11)));
    // 0x1dfb10: 0x70ea5018  mult1       $t2, $a3, $t2
    ctx->pc = 0x1dfb10u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 10); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)result); }
    // 0x1dfb14: 0x255801e0  addiu       $t8, $t2, 0x1E0
    ctx->pc = 0x1dfb14u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 10), 480));
    // 0x1dfb18: 0x255901c0  addiu       $t9, $t2, 0x1C0
    ctx->pc = 0x1dfb18u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 10), 448));
    // 0x1dfb1c: 0x160502d  daddu       $t2, $t3, $zero
    ctx->pc = 0x1dfb1cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_1dfb20:
    // 0x1dfb20: 0xa5100  sll         $t2, $t2, 4
    ctx->pc = 0x1dfb20u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 4));
    // 0x1dfb24: 0x254d6c00  addiu       $t5, $t2, 0x6C00
    ctx->pc = 0x1dfb24u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 10), 27648));
    // 0x1dfb28: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1dfb28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1dfb2c: 0xb50c0  sll         $t2, $t3, 3
    ctx->pc = 0x1dfb2cu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 11), 3));
    // 0x1dfb30: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x1dfb30u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x1dfb34: 0x254c7900  addiu       $t4, $t2, 0x7900
    ctx->pc = 0x1dfb34u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 10), 30976));
    // 0x1dfb38: 0x185100  sll         $t2, $t8, 4
    ctx->pc = 0x1dfb38u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 24), 4));
    // 0x1dfb3c: 0xa9c021  addu        $t8, $a1, $t1
    ctx->pc = 0x1dfb3cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    // 0x1dfb40: 0x254b6c00  addiu       $t3, $t2, 0x6C00
    ctx->pc = 0x1dfb40u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 10), 27648));
    // 0x1dfb44: 0xa70d0090  sh          $t5, 0x90($t8)
    ctx->pc = 0x1dfb44u;
    WRITE16(ADD32(GPR_U32(ctx, 24), 144), (uint16_t)GPR_U32(ctx, 13));
    // 0x1dfb48: 0x1950c0  sll         $t2, $t9, 3
    ctx->pc = 0x1dfb48u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 25), 3));
    // 0x1dfb4c: 0xa70c0092  sh          $t4, 0x92($t8)
    ctx->pc = 0x1dfb4cu;
    WRITE16(ADD32(GPR_U32(ctx, 24), 146), (uint16_t)GPR_U32(ctx, 12));
    // 0x1dfb50: 0x254a7900  addiu       $t2, $t2, 0x7900
    ctx->pc = 0x1dfb50u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 30976));
    // 0x1dfb54: 0xa70b00a0  sh          $t3, 0xA0($t8)
    ctx->pc = 0x1dfb54u;
    WRITE16(ADD32(GPR_U32(ctx, 24), 160), (uint16_t)GPR_U32(ctx, 11));
    // 0x1dfb58: 0x252900a0  addiu       $t1, $t1, 0xA0
    ctx->pc = 0x1dfb58u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 160));
    // 0x1dfb5c: 0xa70a00a2  sh          $t2, 0xA2($t8)
    ctx->pc = 0x1dfb5cu;
    WRITE16(ADD32(GPR_U32(ctx, 24), 162), (uint16_t)GPR_U32(ctx, 10));
    // 0x1dfb60: 0x286a0006  slti        $t2, $v1, 0x6
    ctx->pc = 0x1dfb60u;
    SET_GPR_U64(ctx, 10, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x1dfb64: 0x1540ffc2  bnez        $t2, . + 4 + (-0x3E << 2)
    ctx->pc = 0x1DFB64u;
    {
        const bool branch_taken_0x1dfb64 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DFB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFB64u;
        // 0x1dfb68: 0xa3060083  sb          $a2, 0x83($t8) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 24), 131), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfb64) {
            ctx->pc = 0x1DFA70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1dfa70;
        }
    }
    ctx->pc = 0x1DFB6Cu;
    // 0x1dfb6c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1dfb6cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dfb70: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1dfb70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dfb74: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1dfb74u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dfb78: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1dfb78u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dfb7c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1dfb7cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dfb80: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x1dfb80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1dfb84: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x1dfb84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1dfb88: 0x24190006  addiu       $t9, $zero, 0x6
    ctx->pc = 0x1dfb88u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1dfb8c:
    // 0x1dfb8c: 0x8f8c8cd0  lw          $t4, -0x7330($gp)
    ctx->pc = 0x1dfb8cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937808)));
    // 0x1dfb90: 0x1866823  subu        $t5, $t4, $a2
    ctx->pc = 0x1dfb90u;
    SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 6)));
    // 0x1dfb94: 0x5a10003  bgez        $t5, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DFB94u;
    {
        const bool branch_taken_0x1dfb94 = (GPR_S32(ctx, 13) >= 0);
        ctx->pc = 0x1DFB98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFB94u;
        // 0x1dfb98: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfb94) {
            ctx->pc = 0x1DFBA4u;
            goto label_1dfba4;
        }
    }
    ctx->pc = 0x1DFB9Cu;
    // 0x1dfb9c: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1DFB9Cu;
    {
        const bool branch_taken_0x1dfb9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dfb9c) {
            ctx->pc = 0x1DFBF8u;
            goto label_1dfbf8;
        }
    }
    ctx->pc = 0x1DFBA4u;
label_1dfba4:
    // 0x1dfba4: 0x0  nop
    ctx->pc = 0x1dfba4u;
    // NOP
    // 0x1dfba8: 0x29a10041  slti        $at, $t5, 0x41
    ctx->pc = 0x1dfba8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 13) < (int64_t)(int32_t)65) ? 1 : 0);
    // 0x1dfbac: 0x14200008  bnez        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x1DFBACu;
    {
        const bool branch_taken_0x1dfbac = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dfbac) {
            ctx->pc = 0x1DFBD0u;
            goto label_1dfbd0;
        }
    }
    ctx->pc = 0x1DFBB4u;
    // 0x1dfbb4: 0x15600003  bnez        $t3, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DFBB4u;
    {
        const bool branch_taken_0x1dfbb4 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DFBB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFBB4u;
        // 0x1dfbb8: 0x240c0080  addiu       $t4, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfbb4) {
            ctx->pc = 0x1DFBC4u;
            goto label_1dfbc4;
        }
    }
    ctx->pc = 0x1DFBBCu;
    // 0x1dfbbc: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1DFBBCu;
    {
        const bool branch_taken_0x1dfbbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DFBC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFBBCu;
        // 0x1dfbc0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfbbc) {
            ctx->pc = 0x1DFBF8u;
            goto label_1dfbf8;
        }
    }
    ctx->pc = 0x1DFBC4u;
label_1dfbc4:
    // 0x1dfbc4: 0x0  nop
    ctx->pc = 0x1dfbc4u;
    // NOP
    // 0x1dfbc8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1DFBC8u;
    {
        const bool branch_taken_0x1dfbc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DFBCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFBC8u;
        // 0x1dfbcc: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfbc8) {
            ctx->pc = 0x1DFBF8u;
            goto label_1dfbf8;
        }
    }
    ctx->pc = 0x1DFBD0u;
label_1dfbd0:
    // 0x1dfbd0: 0xd61c0  sll         $t4, $t5, 7
    ctx->pc = 0x1dfbd0u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 13), 7));
    // 0x1dfbd4: 0x5810003  bgez        $t4, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DFBD4u;
    {
        const bool branch_taken_0x1dfbd4 = (GPR_S32(ctx, 12) >= 0);
        ctx->pc = 0x1DFBD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFBD4u;
        // 0x1dfbd8: 0xc3983  sra         $a3, $t4, 6 (Delay Slot)
        SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 12), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfbd4) {
            ctx->pc = 0x1DFBE4u;
            goto label_1dfbe4;
        }
    }
    ctx->pc = 0x1DFBDCu;
    // 0x1dfbdc: 0x2587003f  addiu       $a3, $t4, 0x3F
    ctx->pc = 0x1dfbdcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 12), 63));
    // 0x1dfbe0: 0x73983  sra         $a3, $a3, 6
    ctx->pc = 0x1dfbe0u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 6));
label_1dfbe4:
    // 0x1dfbe4: 0x4e10003  bgez        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DFBE4u;
    {
        const bool branch_taken_0x1dfbe4 = (GPR_S32(ctx, 7) >= 0);
        ctx->pc = 0x1DFBE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFBE4u;
        // 0x1dfbe8: 0x76043  sra         $t4, $a3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 12, SRA32(GPR_S32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfbe4) {
            ctx->pc = 0x1DFBF4u;
            goto label_1dfbf4;
        }
    }
    ctx->pc = 0x1DFBECu;
    // 0x1dfbec: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1dfbecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1dfbf0: 0x76043  sra         $t4, $a3, 1
    ctx->pc = 0x1dfbf0u;
    SET_GPR_S32(ctx, 12, SRA32(GPR_S32(ctx, 7), 1));
label_1dfbf4:
    // 0x1dfbf4: 0x6d3823  subu        $a3, $v1, $t5
    ctx->pc = 0x1dfbf4u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 13)));
label_1dfbf8:
    // 0x1dfbf8: 0x15800005  bnez        $t4, . + 4 + (0x5 << 2)
    ctx->pc = 0x1DFBF8u;
    {
        const bool branch_taken_0x1dfbf8 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DFBFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFBF8u;
        // 0x1dfbfc: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfbf8) {
            ctx->pc = 0x1DFC10u;
            goto label_1dfc10;
        }
    }
    ctx->pc = 0x1DFC00u;
    // 0x1dfc00: 0x702d  daddu       $t6, $zero, $zero
    ctx->pc = 0x1dfc00u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dfc04: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1dfc04u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dfc08: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1DFC08u;
    {
        const bool branch_taken_0x1dfc08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DFC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFC08u;
        // 0x1dfc0c: 0x782d  daddu       $t7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfc08) {
            ctx->pc = 0x1DFC40u;
            goto label_1dfc40;
        }
    }
    ctx->pc = 0x1DFC10u;
label_1dfc10:
    // 0x1dfc10: 0x250d0005  addiu       $t5, $t0, 0x5
    ctx->pc = 0x1dfc10u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 8), 5));
    // 0x1dfc14: 0xed7818  mult        $t7, $a3, $t5
    ctx->pc = 0x1dfc14u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 13); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 15, (int32_t)result); }
    // 0x1dfc18: 0x24ce0005  addiu       $t6, $a2, 0x5
    ctx->pc = 0x1dfc18u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 6), 5));
    // 0x1dfc1c: 0x486823  subu        $t5, $v0, $t0
    ctx->pc = 0x1dfc1cu;
    SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1dfc20: 0x6f7823  subu        $t7, $v1, $t7
    ctx->pc = 0x1dfc20u;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 15)));
    // 0x1dfc24: 0x70ed6818  mult1       $t5, $a3, $t5
    ctx->pc = 0x1dfc24u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 13); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
    // 0x1dfc28: 0x6d8823  subu        $s1, $v1, $t5
    ctx->pc = 0x1dfc28u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 13)));
    // 0x1dfc2c: 0x3296823  subu        $t5, $t9, $t1
    ctx->pc = 0x1dfc2cu;
    SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 25), GPR_U32(ctx, 9)));
    // 0x1dfc30: 0x70ed6818  mult1       $t5, $a3, $t5
    ctx->pc = 0x1dfc30u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 13); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
    // 0x1dfc34: 0x25b00160  addiu       $s0, $t5, 0x160
    ctx->pc = 0x1dfc34u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 13), 352));
    // 0x1dfc38: 0xee6818  mult        $t5, $a3, $t6
    ctx->pc = 0x1dfc38u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
    // 0x1dfc3c: 0x25ae0180  addiu       $t6, $t5, 0x180
    ctx->pc = 0x1dfc3cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 13), 384));
label_1dfc40:
    // 0x1dfc40: 0xf6900  sll         $t5, $t7, 4
    ctx->pc = 0x1dfc40u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 15), 4));
    // 0x1dfc44: 0x25b86c00  addiu       $t8, $t5, 0x6C00
    ctx->pc = 0x1dfc44u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 13), 27648));
    // 0x1dfc48: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x1dfc48u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x1dfc4c: 0x1168c0  sll         $t5, $s1, 3
    ctx->pc = 0x1dfc4cu;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x1dfc50: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x1dfc50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x1dfc54: 0x25af7900  addiu       $t7, $t5, 0x7900
    ctx->pc = 0x1dfc54u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 13), 30976));
    // 0x1dfc58: 0x25080002  addiu       $t0, $t0, 0x2
    ctx->pc = 0x1dfc58u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 2));
    // 0x1dfc5c: 0xe6900  sll         $t5, $t6, 4
    ctx->pc = 0x1dfc5cu;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 14), 4));
    // 0x1dfc60: 0x25290003  addiu       $t1, $t1, 0x3
    ctx->pc = 0x1dfc60u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 3));
    // 0x1dfc64: 0x25ae6c00  addiu       $t6, $t5, 0x6C00
    ctx->pc = 0x1dfc64u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 13), 27648));
    // 0x1dfc68: 0x1068c0  sll         $t5, $s0, 3
    ctx->pc = 0x1dfc68u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x1dfc6c: 0xaa8021  addu        $s0, $a1, $t2
    ctx->pc = 0x1dfc6cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 10)));
    // 0x1dfc70: 0x25ad7900  addiu       $t5, $t5, 0x7900
    ctx->pc = 0x1dfc70u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 30976));
    // 0x1dfc74: 0xa6180450  sh          $t8, 0x450($s0)
    ctx->pc = 0x1dfc74u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1104), (uint16_t)GPR_U32(ctx, 24));
    // 0x1dfc78: 0xa60f0452  sh          $t7, 0x452($s0)
    ctx->pc = 0x1dfc78u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1106), (uint16_t)GPR_U32(ctx, 15));
    // 0x1dfc7c: 0xa60e0460  sh          $t6, 0x460($s0)
    ctx->pc = 0x1dfc7cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1120), (uint16_t)GPR_U32(ctx, 14));
    // 0x1dfc80: 0xa60d0462  sh          $t5, 0x462($s0)
    ctx->pc = 0x1dfc80u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1122), (uint16_t)GPR_U32(ctx, 13));
    // 0x1dfc84: 0xa20c0443  sb          $t4, 0x443($s0)
    ctx->pc = 0x1dfc84u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1091), (uint8_t)GPR_U32(ctx, 12));
    // 0x1dfc88: 0x296c0006  slti        $t4, $t3, 0x6
    ctx->pc = 0x1dfc88u;
    SET_GPR_U64(ctx, 12, ((int64_t)GPR_S64(ctx, 11) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x1dfc8c: 0x1580ffbf  bnez        $t4, . + 4 + (-0x41 << 2)
    ctx->pc = 0x1DFC8Cu;
    {
        const bool branch_taken_0x1dfc8c = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DFC90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFC8Cu;
        // 0x1dfc90: 0x254a00a0  addiu       $t2, $t2, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfc8c) {
            ctx->pc = 0x1DFB8Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1dfb8c;
        }
    }
    ctx->pc = 0x1DFC94u;
    // 0x1dfc94: 0x24060079  addiu       $a2, $zero, 0x79
    ctx->pc = 0x1dfc94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 121));
    // 0x1dfc98: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1dfc98u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dfc9c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1dfc9cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dfca0: 0xc066c72  jal         func_19B1C8
    ctx->pc = 0x1DFCA0u;
    SET_GPR_U32(ctx, 31, 0x1DFCA8u);
    ctx->pc = 0x1DFCA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DFCA0u;
    // 0x1dfca4: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x1DFCA0u, 0x1DFCA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DFCA8u;
label_1dfca8:
    // 0x1dfca8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1dfca8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->pc = 0x1dfcacu;
}
