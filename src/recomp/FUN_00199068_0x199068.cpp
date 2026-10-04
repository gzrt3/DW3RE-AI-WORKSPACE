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

// Function: FUN_00199068
// Address: 0x199068 - 0x1990f4
void FUN_00199068_0x199068(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00199068_0x199068");
#endif

    switch (ctx->pc) {
        case 0x19907cu: goto label_19907c;
        case 0x199094u: goto label_199094;
        case 0x1990d0u: goto label_1990d0;
        default: break;
    }

    ctx->pc = 0x199068u;

    // 0x199068: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x199068u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19906c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x19906cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x199070: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x199070u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x199074: 0xc06614a  jal         func_198528
    ctx->pc = 0x199074u;
    SET_GPR_U32(ctx, 31, 0x19907Cu);
    ctx->pc = 0x198528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x198528u, 0x199074u, 0x19907Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19907Cu;
label_19907c:
    // 0x19907c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x19907cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199080: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x199080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x199084: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x199084u;
    {
        const bool branch_taken_0x199084 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x199084) {
            ctx->pc = 0x1990C8u;
            goto label_1990c8;
        }
    }
    ctx->pc = 0x19908Cu;
    // 0x19908c: 0xc06932c  jal         func_1A4CB0
    ctx->pc = 0x19908Cu;
    SET_GPR_U32(ctx, 31, 0x199094u);
    ctx->pc = 0x1A4CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4CB0u, 0x19908Cu, 0x199094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199094u;
label_199094:
    // 0x199094: 0x86030000  lh          $v1, 0x0($s0)
    ctx->pc = 0x199094u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x199098: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x199098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19909c: 0x14620014  bne         $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x19909Cu;
    {
        const bool branch_taken_0x19909c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1990A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19909Cu;
        // 0x1990a0: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19909c) {
            ctx->pc = 0x1990F0u;
            goto label_1990f0;
        }
    }
    ctx->pc = 0x1990A4u;
    // 0x1990a4: 0x3c031200  lui         $v1, 0x1200
    ctx->pc = 0x1990a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4608 << 16));
    // 0x1990a8: 0x34631000  ori         $v1, $v1, 0x1000
    ctx->pc = 0x1990a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4096);
    // 0x1990ac: 0xdc620000  ld          $v0, 0x0($v1)
    ctx->pc = 0x1990acu;
    SET_GPR_U64(ctx, 2, runtime->Load64(rdram, ctx, 0x12001000u));
    // 0x1990b0: 0x2137a  dsrl        $v0, $v0, 13
    ctx->pc = 0x1990b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 13);
    // 0x1990b4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1990b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1990b8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1990b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1990bc: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1990bcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1990c0: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1990C0u;
    {
        const bool branch_taken_0x1990c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1990C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1990C0u;
        // 0x1990c4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1990c0) {
            ctx->pc = 0x1990F4u;
            return;
        }
    }
    ctx->pc = 0x1990C8u;
label_1990c8:
    // 0x1990c8: 0xc069350  jal         func_1A4D40
    ctx->pc = 0x1990C8u;
    SET_GPR_U32(ctx, 31, 0x1990D0u);
    ctx->pc = 0x1A4D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4D40u, 0x1990C8u, 0x1990D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1990D0u;
label_1990d0:
    // 0x1990d0: 0x2137b  dsra        $v0, $v0, 13
    ctx->pc = 0x1990d0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 13);
    // 0x1990d4: 0x86030000  lh          $v1, 0x0($s0)
    ctx->pc = 0x1990d4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1990d8: 0x30440001  andi        $a0, $v0, 0x1
    ctx->pc = 0x1990d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1990dc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1990dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1990e0: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1990E0u;
    {
        const bool branch_taken_0x1990e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1990E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1990E0u;
        // 0x1990e4: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1990e0) {
            ctx->pc = 0x1990F0u;
            goto label_1990f0;
        }
    }
    ctx->pc = 0x1990E8u;
    // 0x1990e8: 0x4103c  dsll32      $v0, $a0, 0
    ctx->pc = 0x1990e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 0));
    // 0x1990ec: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1990ecu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_1990f0:
    // 0x1990f0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1990f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x1990f4u;
}
