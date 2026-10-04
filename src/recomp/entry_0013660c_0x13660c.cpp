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

// Function: entry_0013660c
// Address: 0x13660c - 0x13666c
void entry_0013660c_0x13660c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013660c_0x13660c");
#endif

    switch (ctx->pc) {
        case 0x136614u: goto label_136614;
        case 0x136638u: goto label_136638;
        case 0x136640u: goto label_136640;
        default: break;
    }

    ctx->pc = 0x13660cu;

    // 0x13660c: 0xc04d51c  jal         func_135470
    ctx->pc = 0x13660Cu;
    SET_GPR_U32(ctx, 31, 0x136614u);
    ctx->pc = 0x135470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135470u, 0x13660Cu, 0x136614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136614u;
label_136614:
    // 0x136614: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x136614u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x136618: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x136618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x13661c: 0x8c23a3e0  lw          $v1, -0x5C20($at)
    ctx->pc = 0x13661cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x30A3E0u));
    // 0x136620: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x136620u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x136624: 0xa022a3ea  sb          $v0, -0x5C16($at)
    ctx->pc = 0x136624u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x30A3EAu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x30A3EAu, _value); } while (0);
    // 0x136628: 0x34620008  ori         $v0, $v1, 0x8
    ctx->pc = 0x136628u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
    // 0x13662c: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x13662cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x136630: 0xc04d238  jal         func_1348E0
    ctx->pc = 0x136630u;
    SET_GPR_U32(ctx, 31, 0x136638u);
    ctx->pc = 0x136634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136630u;
    // 0x136634: 0xac22a3e0  sw          $v0, -0x5C20($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294943712), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1348E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1348E0u, 0x136630u, 0x136638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136638u;
label_136638:
    // 0x136638: 0xc04d44c  jal         func_135130
    ctx->pc = 0x136638u;
    SET_GPR_U32(ctx, 31, 0x136640u);
    ctx->pc = 0x135130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135130u, 0x136638u, 0x136640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136640u;
label_136640:
    // 0x136640: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x136640u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x136644: 0x90239fc0  lbu         $v1, -0x6040($at)
    ctx->pc = 0x136644u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x309FC0u));
    // 0x136648: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x136648u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x13664c: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x13664cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x136650: 0xa0239fc0  sb          $v1, -0x6040($at)
    ctx->pc = 0x136650u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x309FC0u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x309FC0u, _value); } while (0);
    // 0x136654: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x136654u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x136658: 0x90239fc0  lbu         $v1, -0x6040($at)
    ctx->pc = 0x136658u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x309FC0u));
    // 0x13665c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x13665Cu;
    {
        const bool branch_taken_0x13665c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x13665c) {
            ctx->pc = 0x13666Cu;
            return;
        }
    }
    ctx->pc = 0x136664u;
    // 0x136664: 0xc04d8b8  jal         func_1362E0
    ctx->pc = 0x136664u;
    SET_GPR_U32(ctx, 31, 0x13666Cu);
    ctx->pc = 0x1362E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1362E0u, 0x136664u, 0x13666Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13666Cu;
}
