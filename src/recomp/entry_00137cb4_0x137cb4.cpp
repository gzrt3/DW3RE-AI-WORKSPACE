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

// Function: entry_00137cb4
// Address: 0x137cb4 - 0x137cfc
void entry_00137cb4_0x137cb4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00137cb4_0x137cb4");
#endif

    switch (ctx->pc) {
        case 0x137ce0u: goto label_137ce0;
        case 0x137ce8u: goto label_137ce8;
        case 0x137cf4u: goto label_137cf4;
        default: break;
    }

    ctx->pc = 0x137cb4u;

    // 0x137cb4: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x137cb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x137cb8: 0xa420a3e4  sh          $zero, -0x5C1C($at)
    ctx->pc = 0x137cb8u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x30A3E4u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x30A3E4u, _value); } while (0);
    // 0x137cbc: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x137cbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x137cc0: 0xa420a3e8  sh          $zero, -0x5C18($at)
    ctx->pc = 0x137cc0u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x30A3E8u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x30A3E8u, _value); } while (0);
    // 0x137cc4: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x137cc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x137cc8: 0x8c23a3e0  lw          $v1, -0x5C20($at)
    ctx->pc = 0x137cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x30A3E0u));
    // 0x137ccc: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x137cccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x137cd0: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x137CD0u;
    {
        const bool branch_taken_0x137cd0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x137cd0) {
            ctx->pc = 0x137CFCu;
            return;
        }
    }
    ctx->pc = 0x137CD8u;
    // 0x137cd8: 0xc04d3d4  jal         func_134F50
    ctx->pc = 0x137CD8u;
    SET_GPR_U32(ctx, 31, 0x137CE0u);
    ctx->pc = 0x134F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x134F50u, 0x137CD8u, 0x137CE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137CE0u;
label_137ce0:
    // 0x137ce0: 0xc04d4a8  jal         func_1352A0
    ctx->pc = 0x137CE0u;
    SET_GPR_U32(ctx, 31, 0x137CE8u);
    ctx->pc = 0x1352A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1352A0u, 0x137CE0u, 0x137CE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137CE8u;
label_137ce8:
    // 0x137ce8: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x137ce8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x137cec: 0xc04c430  jal         func_1310C0
    ctx->pc = 0x137CECu;
    SET_GPR_U32(ctx, 31, 0x137CF4u);
    ctx->pc = 0x137CF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x137CECu;
    // 0x137cf0: 0x8c24a3cc  lw          $a0, -0x5C34($at) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294943692)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1310C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1310C0u, 0x137CECu, 0x137CF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137CF4u;
label_137cf4:
    // 0x137cf4: 0xc04d1e0  jal         func_134780
    ctx->pc = 0x137CF4u;
    SET_GPR_U32(ctx, 31, 0x137CFCu);
    ctx->pc = 0x134780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x134780u, 0x137CF4u, 0x137CFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137CFCu;
}
