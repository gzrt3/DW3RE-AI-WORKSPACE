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

// Function: FUN_001a6298
// Address: 0x1a6298 - 0x1a62c8
void FUN_001a6298_0x1a6298(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001a6298_0x1a6298");
#endif

    ctx->pc = 0x1a6298u;

    // 0x1a6298: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1a6298u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x1a629c: 0xffb30050  sd          $s3, 0x50($sp)
    ctx->pc = 0x1a629cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
    // 0x1a62a0: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x1a62a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x1a62a4: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1a62a4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a62a8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a62a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a62ac: 0xffb60080  sd          $s6, 0x80($sp)
    ctx->pc = 0x1a62acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 22));
    // 0x1a62b0: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1a62b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x1a62b4: 0xffb50070  sd          $s5, 0x70($sp)
    ctx->pc = 0x1a62b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 21));
    // 0x1a62b8: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x1a62b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x1a62bc: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x1a62bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x1a62c0: 0xc06b518  jal         func_1AD460
    ctx->pc = 0x1A62C0u;
    SET_GPR_U32(ctx, 31, 0x1A62C8u);
    ctx->pc = 0x1A62C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A62C0u;
    // 0x1a62c4: 0xffb10030  sd          $s1, 0x30($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD460u, 0x1A62C0u, 0x1A62C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A62C8u;
}
