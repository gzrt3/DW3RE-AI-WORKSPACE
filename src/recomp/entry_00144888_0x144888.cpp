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

// Function: entry_00144888
// Address: 0x144888 - 0x1448c8
void entry_00144888_0x144888(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00144888_0x144888");
#endif

    ctx->pc = 0x144888u;

    // 0x144888: 0x92250242  lbu         $a1, 0x242($s1)
    ctx->pc = 0x144888u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 578)));
    // 0x14488c: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x14488cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
    // 0x144890: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x144890u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x144894: 0x2463b25c  addiu       $v1, $v1, -0x4DA4
    ctx->pc = 0x144894u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294947420));
    // 0x144898: 0x2442b25e  addiu       $v0, $v0, -0x4DA2
    ctx->pc = 0x144898u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947422));
    // 0x14489c: 0x52100  sll         $a0, $a1, 4
    ctx->pc = 0x14489cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x1448a0: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1448a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1448a4: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x1448a4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x1448a8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1448a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1448ac: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1448acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1448b0: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x1448b0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1448b4: 0x84450000  lh          $a1, 0x0($v0)
    ctx->pc = 0x1448b4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1448b8: 0x0  nop
    ctx->pc = 0x1448b8u;
    // NOP
    // 0x1448bc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1448bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1448c0: 0xc05ad8c  jal         func_16B630
    ctx->pc = 0x1448C0u;
    SET_GPR_U32(ctx, 31, 0x1448C8u);
    ctx->pc = 0x1448C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1448C0u;
    // 0x1448c4: 0x26270150  addiu       $a3, $s1, 0x150 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16B630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16B630u, 0x1448C0u, 0x1448C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1448C8u;
}
