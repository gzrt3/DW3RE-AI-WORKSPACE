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

// Function: entry_00188ee4
// Address: 0x188ee4 - 0x188f10
void entry_00188ee4_0x188ee4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00188ee4_0x188ee4");
#endif

    switch (ctx->pc) {
        case 0x188ef4u: goto label_188ef4;
        default: break;
    }

    ctx->pc = 0x188ee4u;

    // 0x188ee4: 0x26040150  addiu       $a0, $s0, 0x150
    ctx->pc = 0x188ee4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x188ee8: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x188ee8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x188eec: 0xc042484  jal         func_109210
    ctx->pc = 0x188EECu;
    SET_GPR_U32(ctx, 31, 0x188EF4u);
    ctx->pc = 0x188EF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188EECu;
    // 0x188ef0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109210u, 0x188EECu, 0x188EF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188EF4u;
label_188ef4:
    // 0x188ef4: 0x2221024  and         $v0, $s1, $v0
    ctx->pc = 0x188ef4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & GPR_U64(ctx, 2));
    // 0x188ef8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x188EF8u;
    {
        const bool branch_taken_0x188ef8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x188ef8) {
            ctx->pc = 0x188F10u;
            return;
        }
    }
    ctx->pc = 0x188F00u;
    // 0x188f00: 0xa600019c  sh          $zero, 0x19C($s0)
    ctx->pc = 0x188f00u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 412), (uint16_t)GPR_U32(ctx, 0));
    // 0x188f04: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x188f04u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188f08: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x188F08u;
    {
        const bool branch_taken_0x188f08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x188F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188F08u;
        // 0x188f0c: 0xa600019e  sh          $zero, 0x19E($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 414), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188f08) {
            ctx->pc = 0x188F14u;
            return;
        }
    }
    ctx->pc = 0x188F10u;
}
