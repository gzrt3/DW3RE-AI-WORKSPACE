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

// Function: FUN_00239980
// Address: 0x239980 - 0x2399c8
void FUN_00239980_0x239980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00239980_0x239980");
#endif

    switch (ctx->pc) {
        case 0x2399a4u: goto label_2399a4;
        case 0x2399b0u: goto label_2399b0;
        default: break;
    }

    ctx->pc = 0x239980u;

    // 0x239980: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x239980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x239984: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x239984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x239988: 0x3c100029  lui         $s0, 0x29
    ctx->pc = 0x239988u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)41 << 16));
    // 0x23998c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x23998cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x239990: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x239990u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239994: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x239994u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x239998: 0x26100818  addiu       $s0, $s0, 0x818
    ctx->pc = 0x239998u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2072));
    // 0x23999c: 0xc08e9dc  jal         func_23A770
    ctx->pc = 0x23999Cu;
    SET_GPR_U32(ctx, 31, 0x2399A4u);
    ctx->pc = 0x2399A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23999Cu;
    // 0x2399a0: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A770u, 0x23999Cu, 0x2399A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2399A4u;
label_2399a4:
    // 0x2399a4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2399a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2399a8: 0xc08e2c0  jal         func_238B00
    ctx->pc = 0x2399A8u;
    SET_GPR_U32(ctx, 31, 0x2399B0u);
    ctx->pc = 0x2399ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2399A8u;
    // 0x2399ac: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238B00u, 0x2399A8u, 0x2399B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2399B0u;
label_2399b0:
    // 0x2399b0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2399b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2399b4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2399b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2399b8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2399b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2399bc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2399bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2399c0: 0x808e9fc  j           func_23A7F0
    ctx->pc = 0x2399C0u;
    ctx->pc = 0x2399C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2399C0u;
    // 0x2399c4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A7F0u;
    FUN_0023a7f0_0x23a7f0(rdram, ctx, runtime); return;
    ctx->pc = 0x2399C8u;
}
