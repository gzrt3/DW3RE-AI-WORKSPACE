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

// Function: FUN_002324c0
// Address: 0x2324c0 - 0x232514
void FUN_002324c0_0x2324c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_002324c0_0x2324c0");
#endif

    ctx->pc = 0x2324c0u;

    // 0x2324c0: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x2324c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x2324c4: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2324c4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2324c8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2324c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2324cc: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x2324ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x2324d0: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x2324d0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x2324d4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2324d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2324d8: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x2324d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x2324dc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2324dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2324e0: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x2324e0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x2324e4: 0x752c0  sll         $t2, $a3, 11
    ctx->pc = 0x2324e4u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 7), 11));
    // 0x2324e8: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x2324e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x2324ec: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2324ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2324f0: 0xae090054  sw          $t1, 0x54($s0)
    ctx->pc = 0x2324f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 9));
    // 0x2324f4: 0xae0a0018  sw          $t2, 0x18($s0)
    ctx->pc = 0x2324f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 10));
    // 0x2324f8: 0xae070008  sw          $a3, 0x8($s0)
    ctx->pc = 0x2324f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 7));
    // 0x2324fc: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x2324fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
    // 0x232500: 0xae080050  sw          $t0, 0x50($s0)
    ctx->pc = 0x232500u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 8));
    // 0x232504: 0xae060004  sw          $a2, 0x4($s0)
    ctx->pc = 0x232504u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 6));
    // 0x232508: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x232508u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x23250c: 0xc069208  jal         func_1A4820
    ctx->pc = 0x23250Cu;
    SET_GPR_U32(ctx, 31, 0x232514u);
    ctx->pc = 0x232510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23250Cu;
    // 0x232510: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4820u, 0x23250Cu, 0x232514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232514u;
}
