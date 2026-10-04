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

// Function: entry_00181860
// Address: 0x181860 - 0x181930
void entry_00181860_0x181860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00181860_0x181860");
#endif

    ctx->pc = 0x181860u;

    // 0x181860: 0x3343c  dsll32      $a2, $v1, 16
    ctx->pc = 0x181860u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 16));
    // 0x181864: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x181864u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x181868: 0xa1c3c  dsll32      $v1, $t2, 16
    ctx->pc = 0x181868u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) << (32 + 16));
    // 0x18186c: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x18186cu;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x181870: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x181870u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x181874: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x181874u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x181878: 0x32bb8  dsll        $a1, $v1, 14
    ctx->pc = 0x181878u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << 14);
    // 0x18187c: 0x41c3c  dsll32      $v1, $a0, 16
    ctx->pc = 0x18187cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 16));
    // 0x181880: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x181880u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x181884: 0xc52025  or          $a0, $a2, $a1
    ctx->pc = 0x181884u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x181888: 0x31d38  dsll        $v1, $v1, 20
    ctx->pc = 0x181888u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 20);
    // 0x18188c: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x18188cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x181890: 0x21eb8  dsll        $v1, $v0, 26
    ctx->pc = 0x181890u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 26);
    // 0x181894: 0x7143c  dsll32      $v0, $a3, 16
    ctx->pc = 0x181894u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) << (32 + 16));
    // 0x181898: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x181898u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x18189c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x18189cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1818a0: 0x217b8  dsll        $v0, $v0, 30
    ctx->pc = 0x1818a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 30);
    // 0x1818a4: 0x433025  or          $a2, $v0, $v1
    ctx->pc = 0x1818a4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1818a8: 0x9143c  dsll32      $v0, $t1, 16
    ctx->pc = 0x1818a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) << (32 + 16));
    // 0x1818ac: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1818acu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1818b0: 0x2217c  dsll32      $a0, $v0, 5
    ctx->pc = 0x1818b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 5));
    // 0x1818b4: 0x8143c  dsll32      $v0, $t0, 16
    ctx->pc = 0x1818b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) << (32 + 16));
    // 0x1818b8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1818b8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1818bc: 0x21cfc  dsll32      $v1, $v0, 19
    ctx->pc = 0x1818bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 19));
    // 0x1818c0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1818c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1818c4: 0x2283c  dsll32      $a1, $v0, 0
    ctx->pc = 0x1818c4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1818c8: 0xc52825  or          $a1, $a2, $a1
    ctx->pc = 0x1818c8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x1818cc: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1818ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1818d0: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x1818d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x1818d4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1818d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1818d8: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1818d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1818dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1818DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1818E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1818DCu;
        // 0x1818e0: 0x621025  or          $v0, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1818DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1818E4u;
    // 0x1818e4: 0x0  nop
    ctx->pc = 0x1818e4u;
    // NOP
    // 0x1818e8: 0x0  nop
    ctx->pc = 0x1818e8u;
    // NOP
    // 0x1818ec: 0x0  nop
    ctx->pc = 0x1818ecu;
    // NOP
    // 0x1818f0: 0x30a20007  andi        $v0, $a1, 0x7
    ctx->pc = 0x1818f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)7);
    // 0x1818f4: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1818f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1818f8: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x1818f8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x1818fc: 0x3c021fff  lui         $v0, 0x1FFF
    ctx->pc = 0x1818fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8191 << 16));
    // 0x181900: 0x32f7c  dsll32      $a1, $v1, 29
    ctx->pc = 0x181900u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 29));
    // 0x181904: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x181904u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x181908: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x181908u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x18190c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x18190cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x181910: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x181910u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x181914: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x181914u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x181918: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x181918u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x18191c: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x18191cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x181920: 0x3e00008  jr          $ra
    ctx->pc = 0x181920u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x181924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181920u;
        // 0x181924: 0x451025  or          $v0, $v0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x181920u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x181928u;
    // 0x181928: 0x0  nop
    ctx->pc = 0x181928u;
    // NOP
    // 0x18192c: 0x0  nop
    ctx->pc = 0x18192cu;
    // NOP
    ctx->pc = 0x181930u;
}
