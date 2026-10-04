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

// Function: FUN_00133100
// Address: 0x133100 - 0x1331c8
void FUN_00133100_0x133100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00133100_0x133100");
#endif

    switch (ctx->pc) {
        case 0x133160u: goto label_133160;
        case 0x133168u: goto label_133168;
        case 0x133170u: goto label_133170;
        case 0x133184u: goto label_133184;
        case 0x1331c0u: goto label_1331c0;
        default: break;
    }

    ctx->pc = 0x133100u;

    // 0x133100: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x133100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x133104: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x133104u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x133108: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x133108u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x13310c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13310cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x133110: 0x84850002  lh          $a1, 0x2($a0)
    ctx->pc = 0x133110u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x133114: 0x28a1001e  slti        $at, $a1, 0x1E
    ctx->pc = 0x133114u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)30) ? 1 : 0);
    // 0x133118: 0x1020002a  beqz        $at, . + 4 + (0x2A << 2)
    ctx->pc = 0x133118u;
    {
        const bool branch_taken_0x133118 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x133118) {
            ctx->pc = 0x1331C4u;
            goto label_1331c4;
        }
    }
    ctx->pc = 0x133120u;
    // 0x133120: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x133120u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x133124: 0x3c030030  lui         $v1, 0x30
    ctx->pc = 0x133124u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48 << 16));
    // 0x133128: 0x852823  subu        $a1, $a0, $a1
    ctx->pc = 0x133128u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x13312c: 0x24635060  addiu       $v1, $v1, 0x5060
    ctx->pc = 0x13312cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20576));
    // 0x133130: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x133130u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x133134: 0x852023  subu        $a0, $a0, $a1
    ctx->pc = 0x133134u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x133138: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x133138u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x13313c: 0x648021  addu        $s0, $v1, $a0
    ctx->pc = 0x13313cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x133140: 0x92030294  lbu         $v1, 0x294($s0)
    ctx->pc = 0x133140u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 660)));
    // 0x133144: 0x1060001f  beqz        $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x133144u;
    {
        const bool branch_taken_0x133144 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x133144) {
            ctx->pc = 0x1331C4u;
            goto label_1331c4;
        }
    }
    ctx->pc = 0x13314Cu;
    // 0x13314c: 0x8e110038  lw          $s1, 0x38($s0)
    ctx->pc = 0x13314cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x133150: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x133150u;
    {
        const bool branch_taken_0x133150 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x133154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133150u;
        // 0x133154: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133150) {
            ctx->pc = 0x133174u;
            goto label_133174;
        }
    }
    ctx->pc = 0x133158u;
    // 0x133158: 0xc0542d8  jal         func_150B60
    ctx->pc = 0x133158u;
    SET_GPR_U32(ctx, 31, 0x133160u);
    ctx->pc = 0x150B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150B60u, 0x133158u, 0x133160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133160u;
label_133160:
    // 0x133160: 0xc0452fc  jal         func_114BF0
    ctx->pc = 0x133160u;
    SET_GPR_U32(ctx, 31, 0x133168u);
    ctx->pc = 0x133164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133160u;
    // 0x133164: 0x8e2401b0  lw          $a0, 0x1B0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 432)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x114BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114BF0u, 0x133160u, 0x133168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133168u;
label_133168:
    // 0x133168: 0xc0452fc  jal         func_114BF0
    ctx->pc = 0x133168u;
    SET_GPR_U32(ctx, 31, 0x133170u);
    ctx->pc = 0x13316Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133168u;
    // 0x13316c: 0x8e2401b4  lw          $a0, 0x1B4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 436)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x114BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114BF0u, 0x133168u, 0x133170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133170u;
label_133170:
    // 0x133170: 0xae000038  sw          $zero, 0x38($s0)
    ctx->pc = 0x133170u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 0));
label_133174:
    // 0x133174: 0x8f8480d0  lw          $a0, -0x7F30($gp)
    ctx->pc = 0x133174u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934736)));
    // 0x133178: 0x8f8580d8  lw          $a1, -0x7F28($gp)
    ctx->pc = 0x133178u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934744)));
    // 0x13317c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x13317Cu;
    {
        const bool branch_taken_0x13317c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x133180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13317Cu;
        // 0x133180: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13317c) {
            ctx->pc = 0x1331A0u;
            goto label_1331a0;
        }
    }
    ctx->pc = 0x133184u;
label_133184:
    // 0x133184: 0x8c830020  lw          $v1, 0x20($a0)
    ctx->pc = 0x133184u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x133188: 0x14700003  bne         $v1, $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x133188u;
    {
        const bool branch_taken_0x133188 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 16));
        if (branch_taken_0x133188) {
            ctx->pc = 0x133198u;
            goto label_133198;
        }
    }
    ctx->pc = 0x133190u;
    // 0x133190: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x133190u;
    {
        const bool branch_taken_0x133190 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x133190) {
            ctx->pc = 0x1331B0u;
            goto label_1331b0;
        }
    }
    ctx->pc = 0x133198u;
label_133198:
    // 0x133198: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x133198u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x13319c: 0x24842150  addiu       $a0, $a0, 0x2150
    ctx->pc = 0x13319cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8528));
label_1331a0:
    // 0x1331a0: 0xc5182a  slt         $v1, $a2, $a1
    ctx->pc = 0x1331a0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1331a4: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1331A4u;
    {
        const bool branch_taken_0x1331a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1331a4) {
            ctx->pc = 0x133184u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_133184;
        }
    }
    ctx->pc = 0x1331ACu;
    // 0x1331ac: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1331acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1331b0:
    // 0x1331b0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1331B0u;
    {
        const bool branch_taken_0x1331b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1331b0) {
            ctx->pc = 0x1331C0u;
            goto label_1331c0;
        }
    }
    ctx->pc = 0x1331B8u;
    // 0x1331b8: 0xc0452fc  jal         func_114BF0
    ctx->pc = 0x1331B8u;
    SET_GPR_U32(ctx, 31, 0x1331C0u);
    ctx->pc = 0x114BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114BF0u, 0x1331B8u, 0x1331C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1331C0u;
label_1331c0:
    // 0x1331c0: 0xa2000294  sb          $zero, 0x294($s0)
    ctx->pc = 0x1331c0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 660), (uint8_t)GPR_U32(ctx, 0));
label_1331c4:
    // 0x1331c4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1331c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->pc = 0x1331c8u;
}
