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

// Function: entry_001402e8
// Address: 0x1402e8 - 0x140310
void entry_001402e8_0x1402e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001402e8_0x1402e8");
#endif

    ctx->pc = 0x1402e8u;

    // 0x1402e8: 0x8604003c  lh          $a0, 0x3C($s0)
    ctx->pc = 0x1402e8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x1402ec: 0x24020049  addiu       $v0, $zero, 0x49
    ctx->pc = 0x1402ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 73));
    // 0x1402f0: 0x10820010  beq         $a0, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1402F0u;
    {
        const bool branch_taken_0x1402f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x1402f0) {
            ctx->pc = 0x140334u;
            return;
        }
    }
    ctx->pc = 0x1402F8u;
    // 0x1402f8: 0x28820096  slti        $v0, $a0, 0x96
    ctx->pc = 0x1402f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)150) ? 1 : 0);
    // 0x1402fc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1402FCu;
    {
        const bool branch_taken_0x1402fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x140300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1402FCu;
        // 0x140300: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1402fc) {
            ctx->pc = 0x140310u;
            return;
        }
    }
    ctx->pc = 0x140304u;
    // 0x140304: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x140304u;
    {
        const bool branch_taken_0x140304 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x140308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140304u;
        // 0x140308: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140304) {
            ctx->pc = 0x140310u;
            return;
        }
    }
    ctx->pc = 0x14030Cu;
    // 0x14030c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x14030cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x140310u;
}
