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

// Function: entry_001cf34c
// Address: 0x1cf34c - 0x1cf38c
void entry_001cf34c_0x1cf34c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cf34c_0x1cf34c");
#endif

    switch (ctx->pc) {
        case 0x1cf370u: goto label_1cf370;
        default: break;
    }

    ctx->pc = 0x1cf34cu;

    // 0x1cf34c: 0x0  nop
    ctx->pc = 0x1cf34cu;
    // NOP
    // 0x1cf350: 0x2603000c  addiu       $v1, $s0, 0xC
    ctx->pc = 0x1cf350u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x1cf354: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1cf354u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1cf358: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x1cf358u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1cf35c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1cf35cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1cf360: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x1cf360u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x1cf364: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1cf364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1cf368: 0xc070834  jal         func_1C20D0
    ctx->pc = 0x1CF368u;
    SET_GPR_U32(ctx, 31, 0x1CF370u);
    ctx->pc = 0x1CF36Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF368u;
    // 0x1cf36c: 0x24540690  addiu       $s4, $v0, 0x690 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 1680));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C20D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C20D0u, 0x1CF368u, 0x1CF370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF370u;
label_1cf370:
    // 0x1cf370: 0xfe820060  sd          $v0, 0x60($s4)
    ctx->pc = 0x1cf370u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 96), GPR_U64(ctx, 2));
    // 0x1cf374: 0x8e63002c  lw          $v1, 0x2C($s3)
    ctx->pc = 0x1cf374u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 44)));
    // 0x1cf378: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CF378u;
    {
        const bool branch_taken_0x1cf378 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1CF37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF378u;
        // 0x1cf37c: 0x3062001f  andi        $v0, $v1, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf378) {
            ctx->pc = 0x1CF38Cu;
            return;
        }
    }
    ctx->pc = 0x1CF380u;
    // 0x1cf380: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CF380u;
    {
        const bool branch_taken_0x1cf380 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF380u;
        // 0x1cf384: 0x28410011  slti        $at, $v0, 0x11 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)17) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf380) {
            ctx->pc = 0x1CF390u;
            return;
        }
    }
    ctx->pc = 0x1CF388u;
    // 0x1cf388: 0x2442ffe0  addiu       $v0, $v0, -0x20
    ctx->pc = 0x1cf388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967264));
    ctx->pc = 0x1cf38cu;
}
