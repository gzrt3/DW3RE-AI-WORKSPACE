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

// Function: FUN_002007f0
// Address: 0x2007f0 - 0x2008a4
void FUN_002007f0_0x2007f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_002007f0_0x2007f0");
#endif

    ctx->pc = 0x2007f0u;

    // 0x2007f0: 0x8f8390e8  lw          $v1, -0x6F18($gp)
    ctx->pc = 0x2007f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938856)));
    // 0x2007f4: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x2007F4u;
    {
        const bool branch_taken_0x2007f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2007f4) {
            ctx->pc = 0x200828u;
            goto label_200828;
        }
    }
    ctx->pc = 0x2007FCu;
    // 0x2007fc: 0x8f8390bc  lw          $v1, -0x6F44($gp)
    ctx->pc = 0x2007fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938812)));
    // 0x200800: 0x4600009  bltz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x200800u;
    {
        const bool branch_taken_0x200800 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x200800) {
            ctx->pc = 0x200828u;
            goto label_200828;
        }
    }
    ctx->pc = 0x200808u;
    // 0x200808: 0x8f8490b8  lw          $a0, -0x6F48($gp)
    ctx->pc = 0x200808u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938808)));
    // 0x20080c: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x20080cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x200810: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x200810u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x200814: 0x83001a  div         $zero, $a0, $v1
    ctx->pc = 0x200814u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x200818: 0x0  nop
    ctx->pc = 0x200818u;
    // NOP
    // 0x20081c: 0x0  nop
    ctx->pc = 0x20081cu;
    // NOP
    // 0x200820: 0x1810  mfhi        $v1
    ctx->pc = 0x200820u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x200824: 0xaf8390b8  sw          $v1, -0x6F48($gp)
    ctx->pc = 0x200824u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938808), GPR_U32(ctx, 3));
label_200828:
    // 0x200828: 0x8f8490ec  lw          $a0, -0x6F14($gp)
    ctx->pc = 0x200828u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938860)));
    // 0x20082c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x20082cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x200830: 0x1483000f  bne         $a0, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x200830u;
    {
        const bool branch_taken_0x200830 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x200834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200830u;
        // 0x200834: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200830) {
            ctx->pc = 0x200870u;
            goto label_200870;
        }
    }
    ctx->pc = 0x200838u;
    // 0x200838: 0x8f8490e8  lw          $a0, -0x6F18($gp)
    ctx->pc = 0x200838u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938856)));
    // 0x20083c: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x20083cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x200840: 0x2881000c  slti        $at, $a0, 0xC
    ctx->pc = 0x200840u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x200844: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x200844u;
    {
        const bool branch_taken_0x200844 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x200848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200844u;
        // 0x200848: 0xaf8390e8  sw          $v1, -0x6F18($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938856), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200844) {
            ctx->pc = 0x200854u;
            goto label_200854;
        }
    }
    ctx->pc = 0x20084Cu;
    // 0x20084c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x20084Cu;
    {
        const bool branch_taken_0x20084c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x200850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20084Cu;
        // 0x200850: 0x8f8390e8  lw          $v1, -0x6F18($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938856)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20084c) {
            ctx->pc = 0x200858u;
            goto label_200858;
        }
    }
    ctx->pc = 0x200854u;
label_200854:
    // 0x200854: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x200854u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_200858:
    // 0x200858: 0xaf8390e8  sw          $v1, -0x6F18($gp)
    ctx->pc = 0x200858u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938856), GPR_U32(ctx, 3));
    // 0x20085c: 0x2863000c  slti        $v1, $v1, 0xC
    ctx->pc = 0x20085cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x200860: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x200860u;
    {
        const bool branch_taken_0x200860 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x200860) {
            ctx->pc = 0x2008A4u;
            return;
        }
    }
    ctx->pc = 0x200868u;
    // 0x200868: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x200868u;
    {
        const bool branch_taken_0x200868 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20086Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200868u;
        // 0x20086c: 0xaf8090ec  sw          $zero, -0x6F14($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938860), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200868) {
            ctx->pc = 0x2008A4u;
            return;
        }
    }
    ctx->pc = 0x200870u;
label_200870:
    // 0x200870: 0x1483000c  bne         $a0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x200870u;
    {
        const bool branch_taken_0x200870 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x200870) {
            ctx->pc = 0x2008A4u;
            return;
        }
    }
    ctx->pc = 0x200878u;
    // 0x200878: 0x8f8490e8  lw          $a0, -0x6F18($gp)
    ctx->pc = 0x200878u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938856)));
    // 0x20087c: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x20087cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x200880: 0x4082a  slt         $at, $zero, $a0
    ctx->pc = 0x200880u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x200884: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x200884u;
    {
        const bool branch_taken_0x200884 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x200888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200884u;
        // 0x200888: 0xaf8390e8  sw          $v1, -0x6F18($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938856), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200884) {
            ctx->pc = 0x200894u;
            goto label_200894;
        }
    }
    ctx->pc = 0x20088Cu;
    // 0x20088c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x20088Cu;
    {
        const bool branch_taken_0x20088c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x200890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20088Cu;
        // 0x200890: 0x8f8390e8  lw          $v1, -0x6F18($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938856)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20088c) {
            ctx->pc = 0x200898u;
            goto label_200898;
        }
    }
    ctx->pc = 0x200894u;
label_200894:
    // 0x200894: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x200894u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_200898:
    // 0x200898: 0x1c600002  bgtz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x200898u;
    {
        const bool branch_taken_0x200898 = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x20089Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200898u;
        // 0x20089c: 0xaf8390e8  sw          $v1, -0x6F18($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938856), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200898) {
            ctx->pc = 0x2008A4u;
            return;
        }
    }
    ctx->pc = 0x2008A0u;
    // 0x2008a0: 0xaf8090ec  sw          $zero, -0x6F14($gp)
    ctx->pc = 0x2008a0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938860), GPR_U32(ctx, 0));
    ctx->pc = 0x2008a4u;
}
