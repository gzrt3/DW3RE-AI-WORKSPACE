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

// Function: entry_00137a64
// Address: 0x137a64 - 0x137aa0
void entry_00137a64_0x137a64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00137a64_0x137a64");
#endif

    switch (ctx->pc) {
        case 0x137a88u: goto label_137a88;
        default: break;
    }

    ctx->pc = 0x137a64u;

    // 0x137a64: 0x92240237  lbu         $a0, 0x237($s1)
    ctx->pc = 0x137a64u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 567)));
    // 0x137a68: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x137a68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x137a6c: 0x1083000c  beq         $a0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x137A6Cu;
    {
        const bool branch_taken_0x137a6c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x137a6c) {
            ctx->pc = 0x137AA0u;
            return;
        }
    }
    ctx->pc = 0x137A74u;
    // 0x137a74: 0x922301a2  lbu         $v1, 0x1A2($s1)
    ctx->pc = 0x137a74u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 418)));
    // 0x137a78: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x137A78u;
    {
        const bool branch_taken_0x137a78 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x137A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137A78u;
        // 0x137a7c: 0x26240150  addiu       $a0, $s1, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 336));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137a78) {
            ctx->pc = 0x137AA0u;
            return;
        }
    }
    ctx->pc = 0x137A80u;
    // 0x137a80: 0xc0451f8  jal         func_1147E0
    ctx->pc = 0x137A80u;
    SET_GPR_U32(ctx, 31, 0x137A88u);
    ctx->pc = 0x1147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1147E0u, 0x137A80u, 0x137A88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137A88u;
label_137a88:
    // 0x137a88: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x137A88u;
    {
        const bool branch_taken_0x137a88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x137a88) {
            ctx->pc = 0x137AA0u;
            return;
        }
    }
    ctx->pc = 0x137A90u;
    // 0x137a90: 0x92250290  lbu         $a1, 0x290($s1)
    ctx->pc = 0x137a90u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 656)));
    // 0x137a94: 0x92260291  lbu         $a2, 0x291($s1)
    ctx->pc = 0x137a94u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 657)));
    // 0x137a98: 0xc045404  jal         func_115010
    ctx->pc = 0x137A98u;
    SET_GPR_U32(ctx, 31, 0x137AA0u);
    ctx->pc = 0x137A9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x137A98u;
    // 0x137a9c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x115010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115010u, 0x137A98u, 0x137AA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137AA0u;
}
