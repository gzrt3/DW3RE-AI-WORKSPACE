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

// Function: FUN_001967a0
// Address: 0x1967a0 - 0x196838
void FUN_001967a0_0x1967a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001967a0_0x1967a0");
#endif

    ctx->pc = 0x1967a0u;

    // 0x1967a0: 0x80830000  lb          $v1, 0x0($a0)
    ctx->pc = 0x1967a0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1967a4: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x1967a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1967a8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1967A8u;
    {
        const bool branch_taken_0x1967a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1967a8) {
            ctx->pc = 0x1967C0u;
            goto label_1967c0;
        }
    }
    ctx->pc = 0x1967B0u;
    // 0x1967b0: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x1967b0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x1967b4: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x1967b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1967b8: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x1967B8u;
    {
        const bool branch_taken_0x1967b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1967BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1967B8u;
        // 0x1967bc: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1967b8) {
            ctx->pc = 0x196838u;
            return;
        }
    }
    ctx->pc = 0x1967C0u;
label_1967c0:
    // 0x1967c0: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x1967c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x1967c4: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1967C4u;
    {
        const bool branch_taken_0x1967c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1967C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1967C4u;
        // 0x1967c8: 0x90860001  lbu         $a2, 0x1($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1967c4) {
            ctx->pc = 0x1967E4u;
            goto label_1967e4;
        }
    }
    ctx->pc = 0x1967CCu;
    // 0x1967cc: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x1967ccu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
    // 0x1967d0: 0x24820002  addiu       $v0, $a0, 0x2
    ctx->pc = 0x1967d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x1967d4: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x1967d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x1967d8: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x1967d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x1967dc: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1967DCu;
    {
        const bool branch_taken_0x1967dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1967E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1967DCu;
        // 0x1967e0: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1967dc) {
            ctx->pc = 0x196838u;
            return;
        }
    }
    ctx->pc = 0x1967E4u;
label_1967e4:
    // 0x1967e4: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x1967e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x1967e8: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1967E8u;
    {
        const bool branch_taken_0x1967e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1967ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1967E8u;
        // 0x1967ec: 0x90870002  lbu         $a3, 0x2($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1967e8) {
            ctx->pc = 0x196810u;
            goto label_196810;
        }
    }
    ctx->pc = 0x1967F0u;
    // 0x1967f0: 0x310c3  sra         $v0, $v1, 3
    ctx->pc = 0x1967f0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 3));
    // 0x1967f4: 0x61a00  sll         $v1, $a2, 8
    ctx->pc = 0x1967f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
    // 0x1967f8: 0x23400  sll         $a2, $v0, 16
    ctx->pc = 0x1967f8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1967fc: 0xc31825  or          $v1, $a2, $v1
    ctx->pc = 0x1967fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x196800: 0x24820003  addiu       $v0, $a0, 0x3
    ctx->pc = 0x196800u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 3));
    // 0x196804: 0xe31825  or          $v1, $a3, $v1
    ctx->pc = 0x196804u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x196808: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x196808u;
    {
        const bool branch_taken_0x196808 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19680Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196808u;
        // 0x19680c: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196808) {
            ctx->pc = 0x196838u;
            return;
        }
    }
    ctx->pc = 0x196810u;
label_196810:
    // 0x196810: 0x310c3  sra         $v0, $v1, 3
    ctx->pc = 0x196810u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 3));
    // 0x196814: 0x61c00  sll         $v1, $a2, 16
    ctx->pc = 0x196814u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x196818: 0x23600  sll         $a2, $v0, 24
    ctx->pc = 0x196818u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x19681c: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x19681cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x196820: 0x71200  sll         $v0, $a3, 8
    ctx->pc = 0x196820u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x196824: 0x90830003  lbu         $v1, 0x3($a0)
    ctx->pc = 0x196824u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
    // 0x196828: 0x463025  or          $a2, $v0, $a2
    ctx->pc = 0x196828u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x19682c: 0x24820004  addiu       $v0, $a0, 0x4
    ctx->pc = 0x19682cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x196830: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x196830u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x196834: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x196834u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    ctx->pc = 0x196838u;
}
