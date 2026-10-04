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

// Function: entry_001a5150
// Address: 0x1a5150 - 0x1a5180
void entry_001a5150_0x1a5150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a5150_0x1a5150");
#endif

    switch (ctx->pc) {
        case 0x1a5164u: goto label_1a5164;
        default: break;
    }

    ctx->pc = 0x1a5150u;

    // 0x1a5150: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x1a5150u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x1a5154: 0x3484ffc0  ori         $a0, $a0, 0xFFC0
    ctx->pc = 0x1a5154u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65472);
    // 0x1a5158: 0x2242824  and         $a1, $s1, $a0
    ctx->pc = 0x1a5158u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) & GPR_U64(ctx, 4));
    // 0x1a515c: 0xc06941c  jal         func_1A5070
    ctx->pc = 0x1A515Cu;
    SET_GPR_U32(ctx, 31, 0x1A5164u);
    ctx->pc = 0x1A5160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A515Cu;
    // 0x1a5160: 0x2442024  and         $a0, $s2, $a0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) & GPR_U64(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5070u, 0x1A515Cu, 0x1A5164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5164u;
label_1a5164:
    // 0x1a5164: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A5164u;
    {
        const bool branch_taken_0x1a5164 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5164u;
        // 0x1a5168: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5164) {
            ctx->pc = 0x1A5180u;
            return;
        }
    }
    ctx->pc = 0x1A516Cu;
    // 0x1a516c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1a516cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a5170: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1a5170u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a5174: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a5174u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a5178: 0x806b52a  j           func_1AD4A8
    ctx->pc = 0x1A5178u;
    ctx->pc = 0x1A517Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5178u;
    // 0x1a517c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD4A8u;
    FUN_001ad4a8_0x1ad4a8(rdram, ctx, runtime); return;
    ctx->pc = 0x1A5180u;
}
