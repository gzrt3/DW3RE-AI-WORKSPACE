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

// Function: FUN_0019bd90
// Address: 0x19bd90 - 0x19bdbc
void FUN_0019bd90_0x19bd90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0019bd90_0x19bd90");
#endif

    ctx->pc = 0x19bd90u;

    // 0x19bd90: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x19bd90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x19bd94: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x19bd94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19bd98: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19bd98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19bd9c: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x19bd9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x19bda0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x19bda0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x19bda4: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x19bda4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19bda8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x19bda8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x19bdac: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x19bdacu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19bdb0: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x19bdb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x19bdb4: 0xc066e26  jal         func_19B898
    ctx->pc = 0x19BDB4u;
    SET_GPR_U32(ctx, 31, 0x19BDBCu);
    ctx->pc = 0x19BDB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19BDB4u;
    // 0x19bdb8: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B898u, 0x19BDB4u, 0x19BDBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19BDBCu;
}
