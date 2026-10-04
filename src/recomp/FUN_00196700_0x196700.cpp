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

// Function: FUN_00196700
// Address: 0x196700 - 0x196798
void FUN_00196700_0x196700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00196700_0x196700");
#endif

    ctx->pc = 0x196700u;

    // 0x196700: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x196700u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x196704: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x196704u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x196708: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x196708u;
    {
        const bool branch_taken_0x196708 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x196708) {
            ctx->pc = 0x196720u;
            goto label_196720;
        }
    }
    ctx->pc = 0x196710u;
    // 0x196710: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x196710u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x196714: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x196714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x196718: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x196718u;
    {
        const bool branch_taken_0x196718 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19671Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196718u;
        // 0x19671c: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196718) {
            ctx->pc = 0x196798u;
            return;
        }
    }
    ctx->pc = 0x196720u;
label_196720:
    // 0x196720: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x196720u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x196724: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x196724u;
    {
        const bool branch_taken_0x196724 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x196728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196724u;
        // 0x196728: 0x90860001  lbu         $a2, 0x1($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196724) {
            ctx->pc = 0x196744u;
            goto label_196744;
        }
    }
    ctx->pc = 0x19672Cu;
    // 0x19672c: 0x31882  srl         $v1, $v1, 2
    ctx->pc = 0x19672cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 2));
    // 0x196730: 0x24820002  addiu       $v0, $a0, 0x2
    ctx->pc = 0x196730u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x196734: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x196734u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x196738: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x196738u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x19673c: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x19673Cu;
    {
        const bool branch_taken_0x19673c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x196740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19673Cu;
        // 0x196740: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19673c) {
            ctx->pc = 0x196798u;
            return;
        }
    }
    ctx->pc = 0x196744u;
label_196744:
    // 0x196744: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x196744u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x196748: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x196748u;
    {
        const bool branch_taken_0x196748 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19674Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196748u;
        // 0x19674c: 0x90870002  lbu         $a3, 0x2($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196748) {
            ctx->pc = 0x196770u;
            goto label_196770;
        }
    }
    ctx->pc = 0x196750u;
    // 0x196750: 0x310c2  srl         $v0, $v1, 3
    ctx->pc = 0x196750u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 3));
    // 0x196754: 0x61a00  sll         $v1, $a2, 8
    ctx->pc = 0x196754u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
    // 0x196758: 0x23400  sll         $a2, $v0, 16
    ctx->pc = 0x196758u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x19675c: 0xc31825  or          $v1, $a2, $v1
    ctx->pc = 0x19675cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x196760: 0x24820003  addiu       $v0, $a0, 0x3
    ctx->pc = 0x196760u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 3));
    // 0x196764: 0xe31825  or          $v1, $a3, $v1
    ctx->pc = 0x196764u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x196768: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x196768u;
    {
        const bool branch_taken_0x196768 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19676Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196768u;
        // 0x19676c: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196768) {
            ctx->pc = 0x196798u;
            return;
        }
    }
    ctx->pc = 0x196770u;
label_196770:
    // 0x196770: 0x310c2  srl         $v0, $v1, 3
    ctx->pc = 0x196770u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 3));
    // 0x196774: 0x61c00  sll         $v1, $a2, 16
    ctx->pc = 0x196774u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x196778: 0x23600  sll         $a2, $v0, 24
    ctx->pc = 0x196778u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x19677c: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x19677cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x196780: 0x71200  sll         $v0, $a3, 8
    ctx->pc = 0x196780u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x196784: 0x90830003  lbu         $v1, 0x3($a0)
    ctx->pc = 0x196784u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
    // 0x196788: 0x463025  or          $a2, $v0, $a2
    ctx->pc = 0x196788u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x19678c: 0x24820004  addiu       $v0, $a0, 0x4
    ctx->pc = 0x19678cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x196790: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x196790u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x196794: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x196794u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    ctx->pc = 0x196798u;
}
