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

// Function: entry_001bfe84
// Address: 0x1bfe84 - 0x1bffe0
void entry_001bfe84_0x1bfe84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bfe84_0x1bfe84");
#endif

    ctx->pc = 0x1bfe84u;

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
            goto label_1bfea4;
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
label_1bfea4:
    // 0x1bfea4: 0x3e00008  jr          $ra
    ctx->pc = 0x1BFEA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BFEA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BFEACu;
    // 0x1bfeac: 0x0  nop
    ctx->pc = 0x1bfeacu;
    // NOP
    // 0x1bfeb0: 0x90860234  lbu         $a2, 0x234($a0)
    ctx->pc = 0x1bfeb0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 564)));
    // 0x1bfeb4: 0x3c05002f  lui         $a1, 0x2F
    ctx->pc = 0x1bfeb4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)47 << 16));
    // 0x1bfeb8: 0x90830239  lbu         $v1, 0x239($a0)
    ctx->pc = 0x1bfeb8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 569)));
    // 0x1bfebc: 0x24a52570  addiu       $a1, $a1, 0x2570
    ctx->pc = 0x1bfebcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9584));
    // 0x1bfec0: 0x61200  sll         $v0, $a2, 8
    ctx->pc = 0x1bfec0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
    // 0x1bfec4: 0x463023  subu        $a2, $v0, $a2
    ctx->pc = 0x1bfec4u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1bfec8: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x1bfec8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x1bfecc: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x1bfeccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1bfed0: 0x24841532  addiu       $a0, $a0, 0x1532
    ctx->pc = 0x1bfed0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5426));
    // 0x1bfed4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1bfed4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1bfed8: 0x618c0  sll         $v1, $a2, 3
    ctx->pc = 0x1bfed8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x1bfedc: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x1bfedcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1bfee0: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x1bfee0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1bfee4: 0x610c0  sll         $v0, $a2, 3
    ctx->pc = 0x1bfee4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x1bfee8: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x1bfee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1bfeec: 0x24420000  addiu       $v0, $v0, 0x0
    ctx->pc = 0x1bfeecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
    // 0x1bfef0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1bfef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1bfef4: 0x90450034  lbu         $a1, 0x34($v0)
    ctx->pc = 0x1bfef4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x1bfef8: 0x9043003e  lbu         $v1, 0x3E($v0)
    ctx->pc = 0x1bfef8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 62)));
    // 0x1bfefc: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x1bfefcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x1bff00: 0x452821  addu        $a1, $v0, $a1
    ctx->pc = 0x1bff00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1bff04: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x1bff04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1bff08: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1bff08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1bff0c: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x1bff0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1bff10: 0x652823  subu        $a1, $v1, $a1
    ctx->pc = 0x1bff10u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1bff14: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x1bff14u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x1bff18: 0x51200  sll         $v0, $a1, 8
    ctx->pc = 0x1bff18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
    // 0x1bff1c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1bff1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1bff20: 0x24420000  addiu       $v0, $v0, 0x0
    ctx->pc = 0x1bff20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
    // 0x1bff24: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1bff24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1bff28: 0x3e00008  jr          $ra
    ctx->pc = 0x1BFF28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BFF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFF28u;
        // 0x1bff2c: 0x84420000  lh          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BFF28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BFF30u;
    // 0x1bff30: 0x90870234  lbu         $a3, 0x234($a0)
    ctx->pc = 0x1bff30u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 564)));
    // 0x1bff34: 0x3c06002f  lui         $a2, 0x2F
    ctx->pc = 0x1bff34u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)47 << 16));
    // 0x1bff38: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x1bff38u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
    // 0x1bff3c: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1bff3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x1bff40: 0x24c62570  addiu       $a2, $a2, 0x2570
    ctx->pc = 0x1bff40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 9584));
    // 0x1bff44: 0x24a51520  addiu       $a1, $a1, 0x1520
    ctx->pc = 0x1bff44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5408));
    // 0x1bff48: 0x24423b80  addiu       $v0, $v0, 0x3B80
    ctx->pc = 0x1bff48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15232));
    // 0x1bff4c: 0x90840239  lbu         $a0, 0x239($a0)
    ctx->pc = 0x1bff4cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 569)));
    // 0x1bff50: 0x71a00  sll         $v1, $a3, 8
    ctx->pc = 0x1bff50u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1bff54: 0x673823  subu        $a3, $v1, $a3
    ctx->pc = 0x1bff54u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x1bff58: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x1bff58u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1bff5c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1bff5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1bff60: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x1bff60u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x1bff64: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1bff64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1bff68: 0xe42021  addu        $a0, $a3, $a0
    ctx->pc = 0x1bff68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x1bff6c: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x1bff6cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1bff70: 0xc43821  addu        $a3, $a2, $a0
    ctx->pc = 0x1bff70u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x1bff74: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x1bff74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x1bff78: 0x90660034  lbu         $a2, 0x34($v1)
    ctx->pc = 0x1bff78u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x1bff7c: 0x9064003e  lbu         $a0, 0x3E($v1)
    ctx->pc = 0x1bff7cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 62)));
    // 0x1bff80: 0x618c0  sll         $v1, $a2, 3
    ctx->pc = 0x1bff80u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x1bff84: 0x663021  addu        $a2, $v1, $a2
    ctx->pc = 0x1bff84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1bff88: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x1bff88u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1bff8c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1bff8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1bff90: 0x62080  sll         $a0, $a2, 2
    ctx->pc = 0x1bff90u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1bff94: 0x863023  subu        $a2, $a0, $a2
    ctx->pc = 0x1bff94u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x1bff98: 0x32180  sll         $a0, $v1, 6
    ctx->pc = 0x1bff98u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x1bff9c: 0x61a00  sll         $v1, $a2, 8
    ctx->pc = 0x1bff9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
    // 0x1bffa0: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x1bffa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1bffa4: 0x24630000  addiu       $v1, $v1, 0x0
    ctx->pc = 0x1bffa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 0));
    // 0x1bffa8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1bffa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1bffac: 0x90640000  lbu         $a0, 0x0($v1)
    ctx->pc = 0x1bffacu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1bffb0: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x1bffb0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1bffb4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1bffb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1bffb8: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1bffb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1bffbc: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x1bffbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x1bffc0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1bffc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1bffc4: 0x9464000a  lhu         $a0, 0xA($v1)
    ctx->pc = 0x1bffc4u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 10)));
    // 0x1bffc8: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x1bffc8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x1bffcc: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x1bffccu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1bffd0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1bffd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1bffd4: 0x3e00008  jr          $ra
    ctx->pc = 0x1BFFD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BFFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFFD4u;
        // 0x1bffd8: 0x90420000  lbu         $v0, 0x0($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BFFD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BFFDCu;
    // 0x1bffdc: 0x0  nop
    ctx->pc = 0x1bffdcu;
    // NOP
    ctx->pc = 0x1bffe0u;
}
