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

// Function: entry_001acb34
// Address: 0x1acb34 - 0x1acb58
void entry_001acb34_0x1acb34(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001acb34_0x1acb34");
#endif

    switch (ctx->pc) {
        case 0x1acb3cu: goto label_1acb3c;
        case 0x1acb44u: goto label_1acb44;
        default: break;
    }

    ctx->pc = 0x1acb34u;

    // 0x1acb34: 0xc069c1a  jal         func_1A7068
    ctx->pc = 0x1ACB34u;
    SET_GPR_U32(ctx, 31, 0x1ACB3Cu);
    ctx->pc = 0x1ACB38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ACB34u;
    // 0x1acb38: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A7068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7068u, 0x1ACB34u, 0x1ACB3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ACB3Cu;
label_1acb3c:
    // 0x1acb3c: 0xc069c82  jal         func_1A7208
    ctx->pc = 0x1ACB3Cu;
    SET_GPR_U32(ctx, 31, 0x1ACB44u);
    ctx->pc = 0x1A7208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7208u, 0x1ACB3Cu, 0x1ACB44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ACB44u;
label_1acb44:
    // 0x1acb44: 0x82220000  lb          $v0, 0x0($s1)
    ctx->pc = 0x1acb44u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1acb48: 0x3a0182d  daddu       $v1, $sp, $zero
    ctx->pc = 0x1acb48u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1acb4c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1ACB4Cu;
    {
        const bool branch_taken_0x1acb4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ACB50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACB4Cu;
        // 0x1acb50: 0x92240000  lbu         $a0, 0x0($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1acb4c) {
            ctx->pc = 0x1ACB7Cu;
            return;
        }
    }
    ctx->pc = 0x1ACB54u;
    // 0x1acb54: 0x92050000  lbu         $a1, 0x0($s0)
    ctx->pc = 0x1acb54u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->pc = 0x1acb58u;
}
