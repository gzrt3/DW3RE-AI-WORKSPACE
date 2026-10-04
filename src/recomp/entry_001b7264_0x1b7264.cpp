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

// Function: entry_001b7264
// Address: 0x1b7264 - 0x1b72c0
void entry_001b7264_0x1b7264(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b7264_0x1b7264");
#endif

    ctx->pc = 0x1b7264u;

    // 0x1b7264: 0x3403fff0  ori         $v1, $zero, 0xFFF0
    ctx->pc = 0x1b7264u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65520);
    // 0x1b7268: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x1b7268u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1b726c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1b726cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b7270: 0x2133a  dsrl        $v0, $v0, 12
    ctx->pc = 0x1b7270u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 12);
    // 0x1b7274: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x1b7274u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x1b7278: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x1b7278u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x1b727c: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x1b727cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x1b7280: 0x3c02800f  lui         $v0, 0x800F
    ctx->pc = 0x1b7280u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32783 << 16));
    // 0x1b7284: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1b7284u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1b7288: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1b7288u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1b728c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1b728cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1b7290: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1b7290u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1b7294: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1b7294u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1b7298: 0x30e307ff  andi        $v1, $a3, 0x7FF
    ctx->pc = 0x1b7298u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)2047);
    // 0x1b729c: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x1b729cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x1b72a0: 0x31d3c  dsll32      $v1, $v1, 20
    ctx->pc = 0x1b72a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 20));
    // 0x1b72a4: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x1b72a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b72a8: 0x4207a  dsrl        $a0, $a0, 1
    ctx->pc = 0x1b72a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> 1);
    // 0x1b72ac: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x1b72acu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x1b72b0: 0x817fc  dsll32      $v0, $t0, 31
    ctx->pc = 0x1b72b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) << (32 + 31));
    // 0x1b72b4: 0xc43024  and         $a2, $a2, $a0
    ctx->pc = 0x1b72b4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
    // 0x1b72b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1B72B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B72BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B72B8u;
        // 0x1b72bc: 0xc21025  or          $v0, $a2, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B72B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B72C0u;
}
