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

// Function: entry_00286f18
// Address: 0x286f18 - 0x286f4c
void entry_00286f18_0x286f18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00286f18_0x286f18");
#endif

    ctx->pc = 0x286f18u;

label_286f18:
    // 0x286f18: 0x8e226700  lw          $v0, 0x6700($s1)
    ctx->pc = 0x286f18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 26368)));
    // 0x286f1c: 0x102102a  slt         $v0, $t0, $v0
    ctx->pc = 0x286f1cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x286f20: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x286F20u;
    {
        const bool branch_taken_0x286f20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x286F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286F20u;
        // 0x286f24: 0x24030014  addiu       $v1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286f20) {
            ctx->pc = 0x286F4Cu;
            return;
        }
    }
    ctx->pc = 0x286F28u;
    // 0x286f28: 0x26446740  addiu       $a0, $s2, 0x6740
    ctx->pc = 0x286f28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 26432));
    // 0x286f2c: 0x1031818  mult        $v1, $t0, $v1
    ctx->pc = 0x286f2cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x286f30: 0x96456740  lhu         $a1, 0x6740($s2)
    ctx->pc = 0x286f30u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 26432)));
    // 0x286f34: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x286f34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x286f38: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x286f38u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x286f3c: 0x10a2fff6  beq         $a1, $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x286F3Cu;
    {
        const bool branch_taken_0x286f3c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x286F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286F3Cu;
        // 0x286f40: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286f3c) {
            ctx->pc = 0x286F18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_286f18;
        }
    }
    ctx->pc = 0x286F44u;
    // 0x286f44: 0xc01d918  jal         func_076460
    ctx->pc = 0x286F44u;
    SET_GPR_U32(ctx, 31, 0x286F4Cu);
    ctx->pc = 0x286F48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286F44u;
    // 0x286f48: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x76460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x76460u, 0x286F44u, 0x286F4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286F4Cu;
}
