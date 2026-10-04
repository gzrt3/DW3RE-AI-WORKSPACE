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

// Function: entry_001fd45c
// Address: 0x1fd45c - 0x1fd484
void entry_001fd45c_0x1fd45c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fd45c_0x1fd45c");
#endif

    switch (ctx->pc) {
        case 0x1fd47cu: goto label_1fd47c;
        default: break;
    }

    ctx->pc = 0x1fd45cu;

    // 0x1fd45c: 0x16a00009  bnez        $s5, . + 4 + (0x9 << 2)
    ctx->pc = 0x1FD45Cu;
    {
        const bool branch_taken_0x1fd45c = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FD460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD45Cu;
        // 0x1fd460: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd45c) {
            ctx->pc = 0x1FD484u;
            return;
        }
    }
    ctx->pc = 0x1FD464u;
    // 0x1fd464: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x1fd464u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1fd468: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1fd468u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd46c: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x1fd46cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd470: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x1fd470u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd474: 0xc0804a0  jal         func_201280
    ctx->pc = 0x1FD474u;
    SET_GPR_U32(ctx, 31, 0x1FD47Cu);
    ctx->pc = 0x1FD478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD474u;
    // 0x1fd478: 0x2e0482d  daddu       $t1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201280u, 0x1FD474u, 0x1FD47Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD47Cu;
label_1fd47c:
    // 0x1fd47c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1FD47Cu;
    {
        const bool branch_taken_0x1fd47c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fd47c) {
            ctx->pc = 0x1FD4A4u;
            return;
        }
    }
    ctx->pc = 0x1FD484u;
}
