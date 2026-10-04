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

// Function: entry_001ce670
// Address: 0x1ce670 - 0x1ce694
void entry_001ce670_0x1ce670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ce670_0x1ce670");
#endif

    ctx->pc = 0x1ce670u;

    // 0x1ce670: 0x960202e6  lhu         $v0, 0x2E6($s0)
    ctx->pc = 0x1ce670u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 742)));
    // 0x1ce674: 0x28410037  slti        $at, $v0, 0x37
    ctx->pc = 0x1ce674u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)55) ? 1 : 0);
    // 0x1ce678: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x1CE678u;
    {
        const bool branch_taken_0x1ce678 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CE67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE678u;
        // 0x1ce67c: 0x3c023f86  lui         $v0, 0x3F86 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16262 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce678) {
            ctx->pc = 0x1CE694u;
            return;
        }
    }
    ctx->pc = 0x1CE680u;
    // 0x1ce680: 0x26040330  addiu       $a0, $s0, 0x330
    ctx->pc = 0x1ce680u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 816));
    // 0x1ce684: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x1ce684u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x1ce688: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1ce688u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1ce68c: 0xc066e14  jal         func_19B850
    ctx->pc = 0x1CE68Cu;
    SET_GPR_U32(ctx, 31, 0x1CE694u);
    ctx->pc = 0x1CE690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE68Cu;
    // 0x1ce690: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B850u, 0x1CE68Cu, 0x1CE694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE694u;
}
