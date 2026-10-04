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

// Function: FUN_001d58e0
// Address: 0x1d58e0 - 0x1d595c
void FUN_001d58e0_0x1d58e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001d58e0_0x1d58e0");
#endif

    switch (ctx->pc) {
        case 0x1d58fcu: goto label_1d58fc;
        case 0x1d5920u: goto label_1d5920;
        case 0x1d5928u: goto label_1d5928;
        default: break;
    }

    ctx->pc = 0x1d58e0u;

    // 0x1d58e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d58e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1d58e4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1d58e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1d58e8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1d58e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1d58ec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d58ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d58f0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1d58f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d58f4: 0x3c10004b  lui         $s0, 0x4B
    ctx->pc = 0x1d58f4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)75 << 16));
    // 0x1d58f8: 0x261003a0  addiu       $s0, $s0, 0x3A0
    ctx->pc = 0x1d58f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 928));
label_1d58fc:
    // 0x1d58fc: 0x0  nop
    ctx->pc = 0x1d58fcu;
    // NOP
    // 0x1d5900: 0x86030012  lh          $v1, 0x12($s0)
    ctx->pc = 0x1d5900u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x1d5904: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x1D5904u;
    {
        const bool branch_taken_0x1d5904 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d5904) {
            ctx->pc = 0x1D5944u;
            goto label_1d5944;
        }
    }
    ctx->pc = 0x1D590Cu;
    // 0x1d590c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1d590cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d5910: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1d5910u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d5914: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1d5914u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1d5918: 0xc05b2e4  jal         func_16CB90
    ctx->pc = 0x1D5918u;
    SET_GPR_U32(ctx, 31, 0x1D5920u);
    ctx->pc = 0x1D591Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5918u;
    // 0x1d591c: 0x43200b  movn        $a0, $v0, $v1 (Delay Slot)
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16CB90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16CB90u, 0x1D5918u, 0x1D5920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5920u;
label_1d5920:
    // 0x1d5920: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d5920u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5924: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x1d5924u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1d5928:
    // 0x1d5928: 0x0  nop
    ctx->pc = 0x1d5928u;
    // NOP
    // 0x1d592c: 0x2051821  addu        $v1, $s0, $a1
    ctx->pc = 0x1d592cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x1d5930: 0xa0640068  sb          $a0, 0x68($v1)
    ctx->pc = 0x1d5930u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 104), (uint8_t)GPR_U32(ctx, 4));
    // 0x1d5934: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1d5934u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1d5938: 0x28a30002  slti        $v1, $a1, 0x2
    ctx->pc = 0x1d5938u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1d593c: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1D593Cu;
    {
        const bool branch_taken_0x1d593c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d593c) {
            ctx->pc = 0x1D5928u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d5928;
        }
    }
    ctx->pc = 0x1D5944u;
label_1d5944:
    // 0x1d5944: 0x0  nop
    ctx->pc = 0x1d5944u;
    // NOP
    // 0x1d5948: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d5948u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d594c: 0x2a230002  slti        $v1, $s1, 0x2
    ctx->pc = 0x1d594cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1d5950: 0x1460ffea  bnez        $v1, . + 4 + (-0x16 << 2)
    ctx->pc = 0x1D5950u;
    {
        const bool branch_taken_0x1d5950 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D5954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5950u;
        // 0x1d5954: 0x26100070  addiu       $s0, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5950) {
            ctx->pc = 0x1D58FCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d58fc;
        }
    }
    ctx->pc = 0x1D5958u;
    // 0x1d5958: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1d5958u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->pc = 0x1d595cu;
}
