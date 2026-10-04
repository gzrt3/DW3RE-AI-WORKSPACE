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

// Function: entry_001b026c
// Address: 0x1b026c - 0x1b02b4
void entry_001b026c_0x1b026c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b026c_0x1b026c");
#endif

    switch (ctx->pc) {
        case 0x1b0278u: goto label_1b0278;
        case 0x1b029cu: goto label_1b029c;
        case 0x1b02b0u: goto label_1b02b0;
        default: break;
    }

    ctx->pc = 0x1b026cu;

    // 0x1b026c: 0x8e6472ac  lw          $a0, 0x72AC($s3)
    ctx->pc = 0x1b026cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 29356)));
    // 0x1b0270: 0xc069210  jal         func_1A4840
    ctx->pc = 0x1B0270u;
    SET_GPR_U32(ctx, 31, 0x1B0278u);
    ctx->pc = 0x1A4840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4840u, 0x1B0270u, 0x1B0278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0278u;
label_1b0278:
    // 0x1b0278: 0x3a440008  xori        $a0, $s2, 0x8
    ctx->pc = 0x1b0278u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) ^ (uint64_t)(uint16_t)8);
    // 0x1b027c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1b027cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b0280: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1b0280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1b0284: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1B0284u;
    {
        const bool branch_taken_0x1b0284 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0284u;
        // 0x1b0288: 0x64100a  movz        $v0, $v1, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0284) {
            ctx->pc = 0x1B02B4u;
            return;
        }
    }
    ctx->pc = 0x1B028Cu;
    // 0x1b028c: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B028Cu;
    {
        const bool branch_taken_0x1b028c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1B0290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B028Cu;
        // 0x1b0290: 0x3c04002d  lui         $a0, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b028c) {
            ctx->pc = 0x1B029Cu;
            goto label_1b029c;
        }
    }
    ctx->pc = 0x1B0294u;
    // 0x1b0294: 0xc069a30  jal         func_1A68C0
    ctx->pc = 0x1B0294u;
    SET_GPR_U32(ctx, 31, 0x1B029Cu);
    ctx->pc = 0x1B0298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0294u;
    // 0x1b0298: 0x2484aae8  addiu       $a0, $a0, -0x5518 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A68C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A68C0u, 0x1B0294u, 0x1B029Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B029Cu;
label_1b029c:
    // 0x1b029c: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x1b029cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x1b02a0: 0x8e6472ac  lw          $a0, 0x72AC($s3)
    ctx->pc = 0x1b02a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 29356)));
    // 0x1b02a4: 0x2221025  or          $v0, $s1, $v0
    ctx->pc = 0x1b02a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
    // 0x1b02a8: 0xc069210  jal         func_1A4840
    ctx->pc = 0x1B02A8u;
    SET_GPR_U32(ctx, 31, 0x1B02B0u);
    ctx->pc = 0x1B02ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B02A8u;
    // 0x1b02ac: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4840u, 0x1B02A8u, 0x1B02B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B02B0u;
label_1b02b0:
    // 0x1b02b0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1b02b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1b02b4u;
}
