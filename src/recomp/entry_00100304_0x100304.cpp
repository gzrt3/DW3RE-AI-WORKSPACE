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

// Function: entry_00100304
// Address: 0x100304 - 0x100348
void entry_00100304_0x100304(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00100304_0x100304");
#endif

    switch (ctx->pc) {
        case 0x100340u: goto label_100340;
        default: break;
    }

    ctx->pc = 0x100304u;

    // 0x100304: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x100304u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x100308: 0x1483000f  bne         $a0, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x100308u;
    {
        const bool branch_taken_0x100308 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x10030Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100308u;
        // 0x10030c: 0x24030006  addiu       $v1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100308) {
            ctx->pc = 0x100348u;
            return;
        }
    }
    ctx->pc = 0x100310u;
    // 0x100310: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x100310u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x100314: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x100314u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
    // 0x100318: 0x2442edf8  addiu       $v0, $v0, -0x1208
    ctx->pc = 0x100318u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962680));
    // 0x10031c: 0x24a5ec00  addiu       $a1, $a1, -0x1400
    ctx->pc = 0x10031cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962176));
    // 0x100320: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x100320u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x100324: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x100324u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100328: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x100328u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x10032c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x10032cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100330: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x100330u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100334: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x100334u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100338: 0xc066c72  jal         func_19B1C8
    ctx->pc = 0x100338u;
    SET_GPR_U32(ctx, 31, 0x100340u);
    ctx->pc = 0x10033Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100338u;
    // 0x10033c: 0x23102  srl         $a2, $v0, 4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x100338u, 0x100340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100340u;
label_100340:
    // 0x100340: 0x1000009b  b           . + 4 + (0x9B << 2)
    ctx->pc = 0x100340u;
    {
        const bool branch_taken_0x100340 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x100340) {
            ctx->pc = 0x1005B0u;
            return;
        }
    }
    ctx->pc = 0x100348u;
}
