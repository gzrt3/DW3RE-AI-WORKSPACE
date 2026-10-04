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

// Function: entry_001fd288
// Address: 0x1fd288 - 0x1fd2a4
void entry_001fd288_0x1fd288(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fd288_0x1fd288");
#endif

    ctx->pc = 0x1fd288u;

    // 0x1fd288: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1fd288u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd28c: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x1fd28cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1fd290: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1fd290u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd294: 0x240700ab  addiu       $a3, $zero, 0xAB
    ctx->pc = 0x1fd294u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 171));
    // 0x1fd298: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x1fd298u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd29c: 0xc08053c  jal         func_2014F0
    ctx->pc = 0x1FD29Cu;
    SET_GPR_U32(ctx, 31, 0x1FD2A4u);
    ctx->pc = 0x1FD2A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD29Cu;
    // 0x1fd2a0: 0x24090028  addiu       $t1, $zero, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2014F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2014F0u, 0x1FD29Cu, 0x1FD2A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD2A4u;
}
