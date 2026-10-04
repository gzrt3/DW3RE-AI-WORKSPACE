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

// Function: entry_00239100
// Address: 0x239100 - 0x239138
void entry_00239100_0x239100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00239100_0x239100");
#endif

    switch (ctx->pc) {
        case 0x239120u: goto label_239120;
        default: break;
    }

    ctx->pc = 0x239100u;

    // 0x239100: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x239100u;
    {
        const bool branch_taken_0x239100 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x239104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239100u;
        // 0x239104: 0x8e300008  lw          $s0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239100) {
            ctx->pc = 0x239138u;
            return;
        }
    }
    ctx->pc = 0x239108u;
    // 0x239108: 0x250102b  sltu        $v0, $s2, $s0
    ctx->pc = 0x239108u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x23910c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x23910cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x239110: 0x242800b  movn        $s0, $s2, $v0
    ctx->pc = 0x239110u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 18));
    // 0x239114: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x239114u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239118: 0xc08e96a  jal         func_23A5A8
    ctx->pc = 0x239118u;
    SET_GPR_U32(ctx, 31, 0x239120u);
    ctx->pc = 0x23911Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239118u;
    // 0x23911c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A5A8u, 0x239118u, 0x239120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239120u;
label_239120:
    // 0x239120: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x239120u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x239124: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x239124u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x239128: 0x701823  subu        $v1, $v1, $s0
    ctx->pc = 0x239128u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x23912c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x23912cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x239130: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x239130u;
    {
        const bool branch_taken_0x239130 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x239134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239130u;
        // 0x239134: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239130) {
            ctx->pc = 0x2391DCu;
            return;
        }
    }
    ctx->pc = 0x239138u;
}
