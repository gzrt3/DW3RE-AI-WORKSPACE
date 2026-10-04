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

// Function: FUN_001a30f0
// Address: 0x1a30f0 - 0x1a317c
void FUN_001a30f0_0x1a30f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001a30f0_0x1a30f0");
#endif

    switch (ctx->pc) {
        case 0x1a3154u: goto label_1a3154;
        case 0x1a316cu: goto label_1a316c;
        default: break;
    }

    ctx->pc = 0x1a30f0u;

    // 0x1a30f0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1a30f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1a30f4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1a30f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1a30f8: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x1a30f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x1a30fc: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1a30fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1a3100: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1a3100u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3104: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1a3104u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1a3108: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1a3108u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a310c: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x1a310cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x1a3110: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1a3110u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1a3114: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a3114u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a3118: 0x8e500040  lw          $s0, 0x40($s2)
    ctx->pc = 0x1a3118u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x1a311c: 0x10c20004  beq         $a2, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A311Cu;
    {
        const bool branch_taken_0x1a311c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A3120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A311Cu;
        // 0x1a3120: 0xae000120  sw          $zero, 0x120($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 288), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a311c) {
            ctx->pc = 0x1A3130u;
            goto label_1a3130;
        }
    }
    ctx->pc = 0x1A3124u;
    // 0x1a3124: 0xa6102a  slt         $v0, $a1, $a2
    ctx->pc = 0x1a3124u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x1a3128: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A3128u;
    {
        const bool branch_taken_0x1a3128 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a3128) {
            ctx->pc = 0x1A312Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A3128u;
            // 0x1a312c: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A3138u;
            goto label_1a3138;
        }
    }
    ctx->pc = 0x1A3130u;
label_1a3130:
    // 0x1a3130: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x1a3130u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a3134: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1a3134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1a3138:
    // 0x1a3138: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A3138u;
    {
        const bool branch_taken_0x1a3138 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A313Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3138u;
        // 0x1a313c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3138) {
            ctx->pc = 0x1A314Cu;
            goto label_1a314c;
        }
    }
    ctx->pc = 0x1A3140u;
    // 0x1a3140: 0xae400008  sw          $zero, 0x8($s2)
    ctx->pc = 0x1a3140u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 0));
    // 0x1a3144: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a3144u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a3148: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x1a3148u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_1a314c:
    // 0x1a314c: 0xc0680e0  jal         func_1A0380
    ctx->pc = 0x1A314Cu;
    SET_GPR_U32(ctx, 31, 0x1A3154u);
    ctx->pc = 0x1A3150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A314Cu;
    // 0x1a3150: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0380u, 0x1A314Cu, 0x1A3154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3154u;
label_1a3154:
    // 0x1a3154: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A3154u;
    {
        const bool branch_taken_0x1a3154 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3154u;
        // 0x1a3158: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3154) {
            ctx->pc = 0x1A3170u;
            goto label_1a3170;
        }
    }
    ctx->pc = 0x1A315Cu;
    // 0x1a315c: 0x12600005  beqz        $s3, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A315Cu;
    {
        const bool branch_taken_0x1a315c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A315Cu;
        // 0x1a3160: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a315c) {
            ctx->pc = 0x1A3174u;
            goto label_1a3174;
        }
    }
    ctx->pc = 0x1A3164u;
    // 0x1a3164: 0xc068088  jal         func_1A0220
    ctx->pc = 0x1A3164u;
    SET_GPR_U32(ctx, 31, 0x1A316Cu);
    ctx->pc = 0x1A3168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3164u;
    // 0x1a3168: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0220u, 0x1A3164u, 0x1A316Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A316Cu;
label_1a316c:
    // 0x1a316c: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x1a316cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a3170:
    // 0x1a3170: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a3170u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a3174:
    // 0x1a3174: 0xc067e60  jal         func_19F980
    ctx->pc = 0x1A3174u;
    SET_GPR_U32(ctx, 31, 0x1A317Cu);
    ctx->pc = 0x1A3178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3174u;
    // 0x1a3178: 0xae110120  sw          $s1, 0x120($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 288), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F980u, 0x1A3174u, 0x1A317Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A317Cu;
}
