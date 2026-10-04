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

// Function: FUN_00238f68
// Address: 0x238f68 - 0x238f9c
void FUN_00238f68_0x238f68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00238f68_0x238f68");
#endif

    switch (ctx->pc) {
        case 0x238f94u: goto label_238f94;
        default: break;
    }

    ctx->pc = 0x238f68u;

    // 0x238f68: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x238f68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x238f6c: 0x3c02005a  lui         $v0, 0x5A
    ctx->pc = 0x238f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)90 << 16));
    // 0x238f70: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x238f70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x238f74: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x238f74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238f78: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x238f78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x238f7c: 0x245159c8  addiu       $s1, $v0, 0x59C8
    ctx->pc = 0x238f7cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 22984));
    // 0x238f80: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x238f80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238f84: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x238f84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238f88: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x238f88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x238f8c: 0xc0693f6  jal         func_1A4FD8
    ctx->pc = 0x238F8Cu;
    SET_GPR_U32(ctx, 31, 0x238F94u);
    ctx->pc = 0x238F90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238F8Cu;
    // 0x238f90: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4FD8u, 0x238F8Cu, 0x238F94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238F94u;
label_238f94:
    // 0x238f94: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x238f94u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238f98: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x238f98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x238f9cu;
}
