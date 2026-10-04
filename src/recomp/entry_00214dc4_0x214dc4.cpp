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

// Function: entry_00214dc4
// Address: 0x214dc4 - 0x214df4
void entry_00214dc4_0x214dc4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00214dc4_0x214dc4");
#endif

    ctx->pc = 0x214dc4u;

    // 0x214dc4: 0x0  nop
    ctx->pc = 0x214dc4u;
    // NOP
    // 0x214dc8: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x214dc8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x214dcc: 0x29230002  slti        $v1, $t1, 0x2
    ctx->pc = 0x214dccu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x214dd0: 0x256b0004  addiu       $t3, $t3, 0x4
    ctx->pc = 0x214dd0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
    // 0x214dd4: 0x1460ffef  bnez        $v1, . + 4 + (-0x11 << 2)
    ctx->pc = 0x214DD4u;
    {
        const bool branch_taken_0x214dd4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x214DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214DD4u;
        // 0x214dd8: 0x258c0090  addiu       $t4, $t4, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214dd4) {
            ctx->pc = 0x214D94u;
            return;
        }
    }
    ctx->pc = 0x214DDCu;
    // 0x214ddc: 0x0  nop
    ctx->pc = 0x214ddcu;
    // NOP
    // 0x214de0: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x214de0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214de4: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x214de4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214de8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x214de8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214dec: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x214decu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214df0: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x214df0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x214df4u;
}
