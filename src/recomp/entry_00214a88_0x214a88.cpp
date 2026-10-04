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

// Function: entry_00214a88
// Address: 0x214a88 - 0x214ad0
void entry_00214a88_0x214a88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00214a88_0x214a88");
#endif

    switch (ctx->pc) {
        case 0x214ab0u: goto label_214ab0;
        default: break;
    }

    ctx->pc = 0x214a88u;

label_214a88:
    // 0x214a88: 0x2121021  addu        $v0, $s0, $s2
    ctx->pc = 0x214a88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x214a8c: 0x24050280  addiu       $a1, $zero, 0x280
    ctx->pc = 0x214a8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
    // 0x214a90: 0x244400c0  addiu       $a0, $v0, 0xC0
    ctx->pc = 0x214a90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x214a94: 0x240601c0  addiu       $a2, $zero, 0x1C0
    ctx->pc = 0x214a94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
    // 0x214a98: 0x3407ffff  ori         $a3, $zero, 0xFFFF
    ctx->pc = 0x214a98u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x214a9c: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x214a9cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214aa0: 0x240900a0  addiu       $t1, $zero, 0xA0
    ctx->pc = 0x214aa0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    // 0x214aa4: 0x240a0003  addiu       $t2, $zero, 0x3
    ctx->pc = 0x214aa4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x214aa8: 0xc05e060  jal         func_178180
    ctx->pc = 0x214AA8u;
    SET_GPR_U32(ctx, 31, 0x214AB0u);
    ctx->pc = 0x214AACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214AA8u;
    // 0x214aac: 0x240b0001  addiu       $t3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178180u, 0x214AA8u, 0x214AB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214AB0u;
label_214ab0:
    // 0x214ab0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x214ab0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x214ab4: 0x2a220002  slti        $v0, $s1, 0x2
    ctx->pc = 0x214ab4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x214ab8: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x214AB8u;
    {
        const bool branch_taken_0x214ab8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x214ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214AB8u;
        // 0x214abc: 0x265200b0  addiu       $s2, $s2, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214ab8) {
            ctx->pc = 0x214A88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_214a88;
        }
    }
    ctx->pc = 0x214AC0u;
    // 0x214ac0: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x214ac0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214ac4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x214ac4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214ac8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x214ac8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214acc: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x214accu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x214ad0u;
}
