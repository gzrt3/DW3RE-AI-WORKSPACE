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

// Function: entry_001cb4b8
// Address: 0x1cb4b8 - 0x1cb4e8
void entry_001cb4b8_0x1cb4b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cb4b8_0x1cb4b8");
#endif

    ctx->pc = 0x1cb4b8u;

    // 0x1cb4b8: 0x90a70232  lbu         $a3, 0x232($a1)
    ctx->pc = 0x1cb4b8u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 562)));
    // 0x1cb4bc: 0x28e10006  slti        $at, $a3, 0x6
    ctx->pc = 0x1cb4bcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x1cb4c0: 0x10200032  beqz        $at, . + 4 + (0x32 << 2)
    ctx->pc = 0x1CB4C0u;
    {
        const bool branch_taken_0x1cb4c0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB4C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB4C0u;
        // 0x1cb4c4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb4c0) {
            ctx->pc = 0x1CB58Cu;
            return;
        }
    }
    ctx->pc = 0x1CB4C8u;
    // 0x1cb4c8: 0x10e60030  beq         $a3, $a2, . + 4 + (0x30 << 2)
    ctx->pc = 0x1CB4C8u;
    {
        const bool branch_taken_0x1cb4c8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 6));
        ctx->pc = 0x1CB4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB4C8u;
        // 0x1cb4cc: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb4c8) {
            ctx->pc = 0x1CB58Cu;
            return;
        }
    }
    ctx->pc = 0x1CB4D0u;
    // 0x1cb4d0: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1cb4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1cb4d4: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x1cb4d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1cb4d8: 0x24421300  addiu       $v0, $v0, 0x1300
    ctx->pc = 0x1cb4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4864));
    // 0x1cb4dc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1cb4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1cb4e0: 0x24480000  addiu       $t0, $v0, 0x0
    ctx->pc = 0x1cb4e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
    // 0x1cb4e4: 0x1091021  addu        $v0, $t0, $t1
    ctx->pc = 0x1cb4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    ctx->pc = 0x1cb4e8u;
}
