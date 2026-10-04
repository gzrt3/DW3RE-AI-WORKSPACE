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

// Function: FUN_001aaa30
// Address: 0x1aaa30 - 0x1aaa6c
void FUN_001aaa30_0x1aaa30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001aaa30_0x1aaa30");
#endif

    ctx->pc = 0x1aaa30u;

    // 0x1aaa30: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x1aaa30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x1aaa34: 0xffb10050  sd          $s1, 0x50($sp)
    ctx->pc = 0x1aaa34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    // 0x1aaa38: 0xffb50090  sd          $s5, 0x90($sp)
    ctx->pc = 0x1aaa38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 21));
    // 0x1aaa3c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1aaa3cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aaa40: 0xffb600a0  sd          $s6, 0xA0($sp)
    ctx->pc = 0x1aaa40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
    // 0x1aaa44: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x1aaa44u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aaa48: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x1aaa48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x1aaa4c: 0x24040013  addiu       $a0, $zero, 0x13
    ctx->pc = 0x1aaa4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x1aaa50: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x1aaa50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x1aaa54: 0x3c160037  lui         $s6, 0x37
    ctx->pc = 0x1aaa54u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)55 << 16));
    // 0x1aaa58: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x1aaa58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x1aaa5c: 0x26d03240  addiu       $s0, $s6, 0x3240
    ctx->pc = 0x1aaa5cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), 12864));
    // 0x1aaa60: 0xffb30070  sd          $s3, 0x70($sp)
    ctx->pc = 0x1aaa60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
    // 0x1aaa64: 0xc06a14c  jal         func_1A8530
    ctx->pc = 0x1AAA64u;
    SET_GPR_U32(ctx, 31, 0x1AAA6Cu);
    ctx->pc = 0x1AAA68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AAA64u;
    // 0x1aaa68: 0xffb20060  sd          $s2, 0x60($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8530u, 0x1AAA64u, 0x1AAA6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AAA6Cu;
}
