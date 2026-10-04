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

// Function: FUN_001a5880
// Address: 0x1a5880 - 0x1a58b8
void FUN_001a5880_0x1a5880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001a5880_0x1a5880");
#endif

    ctx->pc = 0x1a5880u;

    // 0x1a5880: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1a5880u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x1a5884: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a5884u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a5888: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x1a5888u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x1a588c: 0x244212d0  addiu       $v0, $v0, 0x12D0
    ctx->pc = 0x1a588cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4816));
    // 0x1a5890: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x1a5890u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x1a5894: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1a5894u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1a5898: 0xafa50004  sw          $a1, 0x4($sp)
    ctx->pc = 0x1a5898u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    // 0x1a589c: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1a589cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x1a58a0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1a58a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a58a4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a58a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1a58a8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1a58a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a58ac: 0xafa60008  sw          $a2, 0x8($sp)
    ctx->pc = 0x1a58acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 6));
    // 0x1a58b0: 0xc069314  jal         func_1A4C50
    ctx->pc = 0x1A58B0u;
    SET_GPR_U32(ctx, 31, 0x1A58B8u);
    ctx->pc = 0x1A58B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A58B0u;
    // 0x1a58b4: 0xafa2000c  sw          $v0, 0xC($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4C50u, 0x1A58B0u, 0x1A58B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A58B8u;
}
