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

// Function: FUN_001a5118
// Address: 0x1a5118 - 0x1a518c
void FUN_001a5118_0x1a5118(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001a5118_0x1a5118");
#endif

    switch (ctx->pc) {
        case 0x1a5150u: goto label_1a5150;
        case 0x1a5164u: goto label_1a5164;
        default: break;
    }

    ctx->pc = 0x1a5118u;

    // 0x1a5118: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1a5118u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1a511c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1a511cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1a5120: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1a5120u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1a5124: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1a5124u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5128: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1a5128u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1a512c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1a512cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5130: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a5130u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a5134: 0x40106000  mfc0        $s0, Status
    ctx->pc = 0x1a5134u;
    SET_GPR_S32(ctx, 16, (int32_t)ctx->cop0_status);
    // 0x1a5138: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x1a5138u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x1a513c: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x1a513cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x1a5140: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A5140u;
    {
        const bool branch_taken_0x1a5140 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a5140) {
            ctx->pc = 0x1A5150u;
            goto label_1a5150;
        }
    }
    ctx->pc = 0x1A5148u;
    // 0x1a5148: 0xc06b518  jal         func_1AD460
    ctx->pc = 0x1A5148u;
    SET_GPR_U32(ctx, 31, 0x1A5150u);
    ctx->pc = 0x1AD460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD460u, 0x1A5148u, 0x1A5150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5150u;
label_1a5150:
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
            goto label_1a5180;
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
label_1a5180:
    // 0x1a5180: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1a5180u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a5184: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1a5184u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a5188: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a5188u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x1a518cu;
}
