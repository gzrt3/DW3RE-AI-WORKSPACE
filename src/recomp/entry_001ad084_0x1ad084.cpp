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

// Function: entry_001ad084
// Address: 0x1ad084 - 0x1ad0c0
void entry_001ad084_0x1ad084(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ad084_0x1ad084");
#endif

    switch (ctx->pc) {
        case 0x1ad098u: goto label_1ad098;
        case 0x1ad0b4u: goto label_1ad0b4;
        default: break;
    }

    ctx->pc = 0x1ad084u;

    // 0x1ad084: 0x2a020030  slti        $v0, $s0, 0x30
    ctx->pc = 0x1ad084u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)48) ? 1 : 0);
    // 0x1ad088: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1AD088u;
    {
        const bool branch_taken_0x1ad088 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD08Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD088u;
        // 0x1ad08c: 0x19cb40  sll         $t9, $t9, 13 (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)SLL32(GPR_U32(ctx, 25), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad088) {
            ctx->pc = 0x1AD0C0u;
            return;
        }
    }
    ctx->pc = 0x1AD090u;
    // 0x1ad090: 0x3c02e000  lui         $v0, 0xE000
    ctx->pc = 0x1ad090u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57344 << 16));
    // 0x1ad094: 0x3228821  addu        $s1, $t9, $v0
    ctx->pc = 0x1ad094u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 2)));
label_1ad098:
    // 0x1ad098: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ad098u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad09c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1ad09cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad0a0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ad0a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad0a4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1ad0a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad0a8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1ad0a8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad0ac: 0xc06b382  jal         func_1ACE08
    ctx->pc = 0x1AD0ACu;
    SET_GPR_U32(ctx, 31, 0x1AD0B4u);
    ctx->pc = 0x1AD0B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD0ACu;
    // 0x1ad0b0: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ACE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ACE08u, 0x1AD0ACu, 0x1AD0B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD0B4u;
label_1ad0b4:
    // 0x1ad0b4: 0x2a020030  slti        $v0, $s0, 0x30
    ctx->pc = 0x1ad0b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)48) ? 1 : 0);
    // 0x1ad0b8: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1AD0B8u;
    {
        const bool branch_taken_0x1ad0b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AD0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD0B8u;
        // 0x1ad0bc: 0x26312000  addiu       $s1, $s1, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad0b8) {
            ctx->pc = 0x1AD098u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ad098;
        }
    }
    ctx->pc = 0x1AD0C0u;
}
