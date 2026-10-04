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

// Function: FUN_001a9970
// Address: 0x1a9970 - 0x1a99b0
void FUN_001a9970_0x1a9970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001a9970_0x1a9970");
#endif

    ctx->pc = 0x1a9970u;

    // 0x1a9970: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x1a9970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x1a9974: 0xffb600a0  sd          $s6, 0xA0($sp)
    ctx->pc = 0x1a9974u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
    // 0x1a9978: 0xffb10050  sd          $s1, 0x50($sp)
    ctx->pc = 0x1a9978u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    // 0x1a997c: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x1a997cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9980: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1a9980u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9984: 0xffb700b0  sd          $s7, 0xB0($sp)
    ctx->pc = 0x1a9984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 23));
    // 0x1a9988: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x1a9988u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x1a998c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1a998cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9990: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x1a9990u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
    // 0x1a9994: 0x3c170037  lui         $s7, 0x37
    ctx->pc = 0x1a9994u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)55 << 16));
    // 0x1a9998: 0xffb50090  sd          $s5, 0x90($sp)
    ctx->pc = 0x1a9998u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 21));
    // 0x1a999c: 0x26f23240  addiu       $s2, $s7, 0x3240
    ctx->pc = 0x1a999cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 23), 12864));
    // 0x1a99a0: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x1a99a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x1a99a4: 0xffb30070  sd          $s3, 0x70($sp)
    ctx->pc = 0x1a99a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
    // 0x1a99a8: 0xc06a14c  jal         func_1A8530
    ctx->pc = 0x1A99A8u;
    SET_GPR_U32(ctx, 31, 0x1A99B0u);
    ctx->pc = 0x1A99ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A99A8u;
    // 0x1a99ac: 0xffb00040  sd          $s0, 0x40($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8530u, 0x1A99A8u, 0x1A99B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A99B0u;
}
