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

// Function: FUN_001ad8f8
// Address: 0x1ad8f8 - 0x1ad958
void FUN_001ad8f8_0x1ad8f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001ad8f8_0x1ad8f8");
#endif

    switch (ctx->pc) {
        case 0x1ad94cu: goto label_1ad94c;
        default: break;
    }

    ctx->pc = 0x1ad8f8u;

    // 0x1ad8f8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1ad8f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1ad8fc: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x1ad8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
    // 0x1ad900: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x1ad900u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x1ad904: 0x3c030028  lui         $v1, 0x28
    ctx->pc = 0x1ad904u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40 << 16));
    // 0x1ad908: 0x8c535f98  lw          $s3, 0x5F98($v0)
    ctx->pc = 0x1ad908u;
    SET_GPR_S32(ctx, 19, (int32_t)FAST_READ32(0x285F98u));
    // 0x1ad90c: 0x24676a50  addiu       $a3, $v1, 0x6A50
    ctx->pc = 0x1ad90cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 27216));
    // 0x1ad910: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x1ad910u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x1ad914: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x1ad914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x1ad918: 0x26620040  addiu       $v0, $s3, 0x40
    ctx->pc = 0x1ad918u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 64));
    // 0x1ad91c: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1ad91cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x1ad920: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x1ad920u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad924: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x1ad924u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x1ad928: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1ad928u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad92c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1ad92cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1ad930: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x1ad930u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad934: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x1ad934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x1ad938: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ad938u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad93c: 0x8c646a50  lw          $a0, 0x6A50($v1)
    ctx->pc = 0x1ad93cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x286A50u));
    // 0x1ad940: 0x8ce50004  lw          $a1, 0x4($a3)
    ctx->pc = 0x1ad940u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x286A54u));
    // 0x1ad944: 0xc06b63a  jal         func_1AD8E8
    ctx->pc = 0x1AD944u;
    SET_GPR_U32(ctx, 31, 0x1AD94Cu);
    ctx->pc = 0x1AD948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD944u;
    // 0x1ad948: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD8E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD8E8u, 0x1AD944u, 0x1AD94Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD94Cu;
label_1ad94c:
    // 0x1ad94c: 0x2a430010  slti        $v1, $s2, 0x10
    ctx->pc = 0x1ad94cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x1ad950: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x1ad950u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1ad954: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1ad954u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1ad958u;
}
