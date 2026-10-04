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

// Function: FUN_002336f8
// Address: 0x2336f8 - 0x233730
void FUN_002336f8_0x2336f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_002336f8_0x2336f8");
#endif

    switch (ctx->pc) {
        case 0x233728u: goto label_233728;
        default: break;
    }

    ctx->pc = 0x2336f8u;

    // 0x2336f8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2336f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2336fc: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x2336fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x233700: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x233700u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233704: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x233704u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x233708: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x233708u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23370c: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x23370cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x233710: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x233710u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x233714: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x233714u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x233718: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x233718u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x23371c: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x23371cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x233720: 0xc08cfc4  jal         func_233F10
    ctx->pc = 0x233720u;
    SET_GPR_U32(ctx, 31, 0x233728u);
    ctx->pc = 0x233724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233720u;
    // 0x233724: 0x8e260004  lw          $a2, 0x4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x233F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x233F10u, 0x233720u, 0x233728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233728u;
label_233728:
    // 0x233728: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x233728u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
    // 0x23372c: 0x8c4204dc  lw          $v0, 0x4DC($v0)
    ctx->pc = 0x23372cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x2904DCu));
    ctx->pc = 0x233730u;
}
