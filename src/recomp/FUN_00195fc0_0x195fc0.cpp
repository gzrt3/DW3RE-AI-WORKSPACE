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

// Function: FUN_00195fc0
// Address: 0x195fc0 - 0x196030
void FUN_00195fc0_0x195fc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00195fc0_0x195fc0");
#endif

    ctx->pc = 0x195fc0u;

    // 0x195fc0: 0x288200ab  slti        $v0, $a0, 0xAB
    ctx->pc = 0x195fc0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)171) ? 1 : 0);
    // 0x195fc4: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x195FC4u;
    {
        const bool branch_taken_0x195fc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x195FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195FC4u;
        // 0x195fc8: 0x28820082  slti        $v0, $a0, 0x82 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)130) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x195fc4) {
            ctx->pc = 0x195FE4u;
            goto label_195fe4;
        }
    }
    ctx->pc = 0x195FCCu;
    // 0x195fcc: 0x2483ff55  addiu       $v1, $a0, -0xAB
    ctx->pc = 0x195fccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967125));
    // 0x195fd0: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x195fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
    // 0x195fd4: 0x244252f0  addiu       $v0, $v0, 0x52F0
    ctx->pc = 0x195fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21232));
    // 0x195fd8: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x195fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x195fdc: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x195FDCu;
    {
        const bool branch_taken_0x195fdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x195FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195FDCu;
        // 0x195fe0: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195fdc) {
            ctx->pc = 0x196030u;
            return;
        }
    }
    ctx->pc = 0x195FE4u;
label_195fe4:
    // 0x195fe4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x195FE4u;
    {
        const bool branch_taken_0x195fe4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x195fe4) {
            ctx->pc = 0x195FF4u;
            goto label_195ff4;
        }
    }
    ctx->pc = 0x195FECu;
    // 0x195fec: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x195FECu;
    {
        const bool branch_taken_0x195fec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x195FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195FECu;
        // 0x195ff0: 0x2484ffd7  addiu       $a0, $a0, -0x29 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967255));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195fec) {
            ctx->pc = 0x196020u;
            goto label_196020;
        }
    }
    ctx->pc = 0x195FF4u;
label_195ff4:
    // 0x195ff4: 0x28820059  slti        $v0, $a0, 0x59
    ctx->pc = 0x195ff4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)89) ? 1 : 0);
    // 0x195ff8: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x195FF8u;
    {
        const bool branch_taken_0x195ff8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x195ff8) {
            ctx->pc = 0x196020u;
            goto label_196020;
        }
    }
    ctx->pc = 0x196000u;
    // 0x196000: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x196000u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x196004: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x196004u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
    // 0x196008: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x196008u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x19600c: 0x24429d72  addiu       $v0, $v0, -0x628E
    ctx->pc = 0x19600cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942066));
    // 0x196010: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x196010u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x196014: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x196014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x196018: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x196018u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19601c: 0x0  nop
    ctx->pc = 0x19601cu;
    // NOP
label_196020:
    // 0x196020: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x196020u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
    // 0x196024: 0x41980  sll         $v1, $a0, 6
    ctx->pc = 0x196024u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
    // 0x196028: 0x24423270  addiu       $v0, $v0, 0x3270
    ctx->pc = 0x196028u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12912));
    // 0x19602c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x19602cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->pc = 0x196030u;
}
