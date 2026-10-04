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

// Function: entry_00199794
// Address: 0x199794 - 0x1997d0
void entry_00199794_0x199794(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00199794_0x199794");
#endif

    ctx->pc = 0x199794u;

    // 0x199794: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x199794u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x199798: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x199798u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x19979c: 0x3442a020  ori         $v0, $v0, 0xA020
    ctx->pc = 0x19979cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)40992);
    // 0x1997a0: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x1997a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x1997a4: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x1997a4u;
    runtime->Store32(rdram, ctx, 0x1000A020u, GPR_U32(ctx, 5));
    // 0x1997a8: 0xe41824  and         $v1, $a3, $a0
    ctx->pc = 0x1997a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & GPR_U64(ctx, 4));
    // 0x1997ac: 0x14640008  bne         $v1, $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1997ACu;
    {
        const bool branch_taken_0x1997ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x1997B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1997ACu;
        // 0x1997b0: 0x3c020fff  lui         $v0, 0xFFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1997ac) {
            ctx->pc = 0x1997D0u;
            return;
        }
    }
    ctx->pc = 0x1997B4u;
    // 0x1997b4: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1997b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1997b8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1997b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1997bc: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x1997bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x1997c0: 0xe21024  and         $v0, $a3, $v0
    ctx->pc = 0x1997c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x1997c4: 0x3463a010  ori         $v1, $v1, 0xA010
    ctx->pc = 0x1997c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)40976);
    // 0x1997c8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1997C8u;
    {
        const bool branch_taken_0x1997c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1997CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1997C8u;
        // 0x1997cc: 0x441025  or          $v0, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1997c8) {
            ctx->pc = 0x1997E0u;
            return;
        }
    }
    ctx->pc = 0x1997D0u;
}
