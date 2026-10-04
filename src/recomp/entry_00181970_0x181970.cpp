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

// Function: entry_00181970
// Address: 0x181970 - 0x181a00
void entry_00181970_0x181970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00181970_0x181970");
#endif

    ctx->pc = 0x181970u;

    // 0x181970: 0x3c03fff8  lui         $v1, 0xFFF8
    ctx->pc = 0x181970u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65528 << 16));
    // 0x181974: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x181974u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x181978: 0x3463001f  ori         $v1, $v1, 0x1F
    ctx->pc = 0x181978u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)31);
    // 0x18197c: 0x2117c  dsll32      $v0, $v0, 5
    ctx->pc = 0x18197cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 5));
    // 0x181980: 0x3283c  dsll32      $a1, $v1, 0
    ctx->pc = 0x181980u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
    // 0x181984: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x181984u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x181988: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x181988u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x18198c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x18198cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x181990: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x181990u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x181994: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x181994u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x181998: 0x3e00008  jr          $ra
    ctx->pc = 0x181998u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18199Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181998u;
        // 0x18199c: 0x621025  or          $v0, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x181998u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1819A0u;
    // 0x1819a0: 0x4800007  bltz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1819A0u;
    {
        const bool branch_taken_0x1819a0 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x1819A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1819A0u;
        // 0x1819a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1819a0) {
            ctx->pc = 0x1819C0u;
            goto label_1819c0;
        }
    }
    ctx->pc = 0x1819A8u;
    // 0x1819a8: 0x288100b8  slti        $at, $a0, 0xB8
    ctx->pc = 0x1819a8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)184) ? 1 : 0);
    // 0x1819ac: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x1819ACu;
    {
        const bool branch_taken_0x1819ac = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1819B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1819ACu;
        // 0x1819b0: 0x288300b8  slti        $v1, $a0, 0xB8 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)184) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1819ac) {
            ctx->pc = 0x1819C4u;
            goto label_1819c4;
        }
    }
    ctx->pc = 0x1819B4u;
    // 0x1819b4: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x1819b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1819b8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1819B8u;
    {
        const bool branch_taken_0x1819b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1819BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1819B8u;
        // 0x1819bc: 0x24423ba0  addiu       $v0, $v0, 0x3BA0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1819b8) {
            ctx->pc = 0x1819D8u;
            goto label_1819d8;
        }
    }
    ctx->pc = 0x1819C0u;
label_1819c0:
    // 0x1819c0: 0x288300b8  slti        $v1, $a0, 0xB8
    ctx->pc = 0x1819c0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)184) ? 1 : 0);
label_1819c4:
    // 0x1819c4: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1819C4u;
    {
        const bool branch_taken_0x1819c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1819C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1819C4u;
        // 0x1819c8: 0x28810238  slti        $at, $a0, 0x238 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)568) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1819c4) {
            ctx->pc = 0x1819D8u;
            goto label_1819d8;
        }
    }
    ctx->pc = 0x1819CCu;
    // 0x1819cc: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1819CCu;
    {
        const bool branch_taken_0x1819cc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1819cc) {
            ctx->pc = 0x1819D8u;
            goto label_1819d8;
        }
    }
    ctx->pc = 0x1819D4u;
    // 0x1819d4: 0x24823dc8  addiu       $v0, $a0, 0x3DC8
    ctx->pc = 0x1819d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 15816));
label_1819d8:
    // 0x1819d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1819D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1819D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1819E0u;
    // 0x1819e0: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x1819e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
    // 0x1819e4: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x1819e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1819e8: 0x24422a30  addiu       $v0, $v0, 0x2A30
    ctx->pc = 0x1819e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10800));
    // 0x1819ec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1819ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1819f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1819F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1819F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1819F0u;
        // 0x1819f4: 0x84420000  lh          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1819F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1819F8u;
    // 0x1819f8: 0x0  nop
    ctx->pc = 0x1819f8u;
    // NOP
    // 0x1819fc: 0x0  nop
    ctx->pc = 0x1819fcu;
    // NOP
    ctx->pc = 0x181a00u;
}
