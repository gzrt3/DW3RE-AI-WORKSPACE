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

// Function: entry_001fd260
// Address: 0x1fd260 - 0x1fd288
void entry_001fd260_0x1fd260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fd260_0x1fd260");
#endif

    switch (ctx->pc) {
        case 0x1fd280u: goto label_1fd280;
        default: break;
    }

    ctx->pc = 0x1fd260u;

    // 0x1fd260: 0x16600009  bnez        $s3, . + 4 + (0x9 << 2)
    ctx->pc = 0x1FD260u;
    {
        const bool branch_taken_0x1fd260 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FD264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD260u;
        // 0x1fd264: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd260) {
            ctx->pc = 0x1FD288u;
            return;
        }
    }
    ctx->pc = 0x1FD268u;
    // 0x1fd268: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x1fd268u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1fd26c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1fd26cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd270: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x1fd270u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd274: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x1fd274u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd278: 0xc08053c  jal         func_2014F0
    ctx->pc = 0x1FD278u;
    SET_GPR_U32(ctx, 31, 0x1FD280u);
    ctx->pc = 0x1FD27Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD278u;
    // 0x1fd27c: 0x2e0482d  daddu       $t1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2014F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2014F0u, 0x1FD278u, 0x1FD280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD280u;
label_1fd280:
    // 0x1fd280: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1FD280u;
    {
        const bool branch_taken_0x1fd280 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fd280) {
            ctx->pc = 0x1FD2A4u;
            return;
        }
    }
    ctx->pc = 0x1FD288u;
}
