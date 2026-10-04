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

// Function: entry_0024a1a8
// Address: 0x24a1a8 - 0x24a1d4
void entry_0024a1a8_0x24a1a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0024a1a8_0x24a1a8");
#endif

    ctx->pc = 0x24a1a8u;

    // 0x24a1a8: 0x8f8392fc  lw          $v1, -0x6D04($gp)
    ctx->pc = 0x24a1a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939388)));
    // 0x24a1ac: 0x9064001c  lbu         $a0, 0x1C($v1)
    ctx->pc = 0x24a1acu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x24a1b0: 0x2465001c  addiu       $a1, $v1, 0x1C
    ctx->pc = 0x24a1b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 28));
    // 0x24a1b4: 0x24830080  addiu       $v1, $a0, 0x80
    ctx->pc = 0x24a1b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 128));
    // 0x24a1b8: 0x28610080  slti        $at, $v1, 0x80
    ctx->pc = 0x24a1b8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x24a1bc: 0x10200055  beqz        $at, . + 4 + (0x55 << 2)
    ctx->pc = 0x24A1BCu;
    {
        const bool branch_taken_0x24a1bc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A1BCu;
        // 0x24a1c0: 0x28810080  slti        $at, $a0, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)128) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a1bc) {
            ctx->pc = 0x24A314u;
            return;
        }
    }
    ctx->pc = 0x24A1C4u;
    // 0x24a1c4: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x24a1c4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x24a1c8: 0x1020004d  beqz        $at, . + 4 + (0x4D << 2)
    ctx->pc = 0x24A1C8u;
    {
        const bool branch_taken_0x24a1c8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A1C8u;
        // 0x24a1cc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a1c8) {
            ctx->pc = 0x24A300u;
            return;
        }
    }
    ctx->pc = 0x24A1D0u;
    // 0x24a1d0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x24a1d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x24a1d4u;
}
