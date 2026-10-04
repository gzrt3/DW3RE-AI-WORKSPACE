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

// Function: FUN_00236da0
// Address: 0x236da0 - 0x236dfc
void FUN_00236da0_0x236da0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00236da0_0x236da0");
#endif

    switch (ctx->pc) {
        case 0x236dc8u: goto label_236dc8;
        case 0x236dd8u: goto label_236dd8;
        default: break;
    }

    ctx->pc = 0x236da0u;

    // 0x236da0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x236da0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x236da4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x236da4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x236da8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x236da8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236dac: 0x8f8482f4  lw          $a0, -0x7D0C($gp)
    ctx->pc = 0x236dacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935284)));
    // 0x236db0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x236db0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x236db4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x236db4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236db8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x236db8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x236dbc: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x236dbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x236dc0: 0xc08dbf8  jal         func_236FE0
    ctx->pc = 0x236DC0u;
    SET_GPR_U32(ctx, 31, 0x236DC8u);
    ctx->pc = 0x236DC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236DC0u;
    // 0x236dc4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236FE0u, 0x236DC0u, 0x236DC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236DC8u;
label_236dc8:
    // 0x236dc8: 0x240500af  addiu       $a1, $zero, 0xAF
    ctx->pc = 0x236dc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 175));
    // 0x236dcc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x236dccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236dd0: 0xc08db22  jal         func_236C88
    ctx->pc = 0x236DD0u;
    SET_GPR_U32(ctx, 31, 0x236DD8u);
    ctx->pc = 0x236DD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236DD0u;
    // 0x236dd4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236C88u, 0x236DD0u, 0x236DD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236DD8u;
label_236dd8:
    // 0x236dd8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x236dd8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236ddc: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x236ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x236de0: 0x2442b1c0  addiu       $v0, $v0, -0x4E40
    ctx->pc = 0x236de0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947264));
    // 0x236de4: 0x8c4300d0  lw          $v1, 0xD0($v0)
    ctx->pc = 0x236de4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x58B290u));
    // 0x236de8: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x236de8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x236dec: 0x8c4400d4  lw          $a0, 0xD4($v0)
    ctx->pc = 0x236decu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x58B294u));
    // 0x236df0: 0xae440000  sw          $a0, 0x0($s2)
    ctx->pc = 0x236df0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 4));
    // 0x236df4: 0xc069210  jal         func_1A4840
    ctx->pc = 0x236DF4u;
    SET_GPR_U32(ctx, 31, 0x236DFCu);
    ctx->pc = 0x236DF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236DF4u;
    // 0x236df8: 0x8f8482f4  lw          $a0, -0x7D0C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935284)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4840u, 0x236DF4u, 0x236DFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236DFCu;
}
