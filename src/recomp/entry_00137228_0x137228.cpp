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

// Function: entry_00137228
// Address: 0x137228 - 0x13726c
void entry_00137228_0x137228(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00137228_0x137228");
#endif

    switch (ctx->pc) {
        case 0x137254u: goto label_137254;
        default: break;
    }

    ctx->pc = 0x137228u;

    // 0x137228: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x137228u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x13722c: 0x2a03001e  slti        $v1, $s0, 0x1E
    ctx->pc = 0x13722cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)30) ? 1 : 0);
    // 0x137230: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x137230u;
    {
        const bool branch_taken_0x137230 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x137234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137230u;
        // 0x137234: 0x263102a0  addiu       $s1, $s1, 0x2A0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 672));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137230) {
            ctx->pc = 0x137204u;
            return;
        }
    }
    ctx->pc = 0x137238u;
    // 0x137238: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x137238u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x13723c: 0x8c23a3e0  lw          $v1, -0x5C20($at)
    ctx->pc = 0x13723cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x30A3E0u));
    // 0x137240: 0x30630400  andi        $v1, $v1, 0x400
    ctx->pc = 0x137240u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1024);
    // 0x137244: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x137244u;
    {
        const bool branch_taken_0x137244 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x137244) {
            ctx->pc = 0x13726Cu;
            return;
        }
    }
    ctx->pc = 0x13724Cu;
    // 0x13724c: 0xc04c044  jal         func_130110
    ctx->pc = 0x13724Cu;
    SET_GPR_U32(ctx, 31, 0x137254u);
    ctx->pc = 0x130110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x130110u, 0x13724Cu, 0x137254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137254u;
label_137254:
    // 0x137254: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x137254u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x137258: 0x2403fbff  addiu       $v1, $zero, -0x401
    ctx->pc = 0x137258u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966271));
    // 0x13725c: 0x8c24a3e0  lw          $a0, -0x5C20($at)
    ctx->pc = 0x13725cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x30A3E0u));
    // 0x137260: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x137260u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x137264: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x137264u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x137268: 0xac23a3e0  sw          $v1, -0x5C20($at)
    ctx->pc = 0x137268u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x30A3E0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x30A3E0u, _value); } while (0);
    ctx->pc = 0x13726cu;
}
