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

// Function: entry_001f2020
// Address: 0x1f2020 - 0x1f2044
void entry_001f2020_0x1f2020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f2020_0x1f2020");
#endif

    ctx->pc = 0x1f2020u;

    // 0x1f2020: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1f2020u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1f2024: 0x2923000a  slti        $v1, $t1, 0xA
    ctx->pc = 0x1f2024u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x1f2028: 0x1460ffef  bnez        $v1, . + 4 + (-0x11 << 2)
    ctx->pc = 0x1F2028u;
    {
        const bool branch_taken_0x1f2028 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F202Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2028u;
        // 0x1f202c: 0x254a0004  addiu       $t2, $t2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2028) {
            ctx->pc = 0x1F1FE8u;
            return;
        }
    }
    ctx->pc = 0x1F2030u;
    // 0x1f2030: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1f2030u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1f2034: 0x256b0004  addiu       $t3, $t3, 0x4
    ctx->pc = 0x1f2034u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
    // 0x1f2038: 0x29030002  slti        $v1, $t0, 0x2
    ctx->pc = 0x1f2038u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1f203c: 0x1460ffe5  bnez        $v1, . + 4 + (-0x1B << 2)
    ctx->pc = 0x1F203Cu;
    {
        const bool branch_taken_0x1f203c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F2040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F203Cu;
        // 0x1f2040: 0x258c0028  addiu       $t4, $t4, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f203c) {
            ctx->pc = 0x1F1FD4u;
            return;
        }
    }
    ctx->pc = 0x1F2044u;
}
