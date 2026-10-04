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

// Function: FUN_00112750
// Address: 0x112750 - 0x11279c
void FUN_00112750_0x112750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00112750_0x112750");
#endif

    ctx->pc = 0x112750u;

    // 0x112750: 0x28a20010  slti        $v0, $a1, 0x10
    ctx->pc = 0x112750u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x112754: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x112754u;
    {
        const bool branch_taken_0x112754 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x112758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112754u;
        // 0x112758: 0x3c020030  lui         $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112754) {
            ctx->pc = 0x112784u;
            goto label_112784;
        }
    }
    ctx->pc = 0x11275Cu;
    // 0x11275c: 0x24830008  addiu       $v1, $a0, 0x8
    ctx->pc = 0x11275cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x112760: 0x24a2fff0  addiu       $v0, $a1, -0x10
    ctx->pc = 0x112760u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967280));
    // 0x112764: 0x32200  sll         $a0, $v1, 8
    ctx->pc = 0x112764u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x112768: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x112768u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x11276c: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x11276cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x112770: 0x24420dc0  addiu       $v0, $v0, 0xDC0
    ctx->pc = 0x112770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3520));
    // 0x112774: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x112774u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x112778: 0x24420000  addiu       $v0, $v0, 0x0
    ctx->pc = 0x112778u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
    // 0x11277c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x11277Cu;
    {
        const bool branch_taken_0x11277c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x112780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11277Cu;
        // 0x112780: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11277c) {
            ctx->pc = 0x11279Cu;
            return;
        }
    }
    ctx->pc = 0x112784u;
label_112784:
    // 0x112784: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x112784u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x112788: 0x24420dc0  addiu       $v0, $v0, 0xDC0
    ctx->pc = 0x112788u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3520));
    // 0x11278c: 0x51900  sll         $v1, $a1, 4
    ctx->pc = 0x11278cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x112790: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x112790u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x112794: 0x24420000  addiu       $v0, $v0, 0x0
    ctx->pc = 0x112794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
    // 0x112798: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x112798u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->pc = 0x11279cu;
}
