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

// Function: FUN_001577a0
// Address: 0x1577a0 - 0x157800
void FUN_001577a0_0x1577a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001577a0_0x1577a0");
#endif

    ctx->pc = 0x1577a0u;

    // 0x1577a0: 0x28810018  slti        $at, $a0, 0x18
    ctx->pc = 0x1577a0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)24) ? 1 : 0);
    // 0x1577a4: 0x1020000c  beqz        $at, . + 4 + (0xC << 2)
    ctx->pc = 0x1577A4u;
    {
        const bool branch_taken_0x1577a4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1577A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1577A4u;
        // 0x1577a8: 0x28810034  slti        $at, $a0, 0x34 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)52) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1577a4) {
            ctx->pc = 0x1577D8u;
            goto label_1577d8;
        }
    }
    ctx->pc = 0x1577ACu;
    // 0x1577ac: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x1577acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
    // 0x1577b0: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1577b0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1577b4: 0x24632740  addiu       $v1, $v1, 0x2740
    ctx->pc = 0x1577b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10048));
    // 0x1577b8: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x1577b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
    // 0x1577bc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1577bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1577c0: 0x8c241880  lw          $a0, 0x1880($at)
    ctx->pc = 0x1577c0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x2B1880u));
    // 0x1577c4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1577c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1577c8: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x1577c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
    // 0x1577cc: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1577ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1577d0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1577D0u;
    {
        const bool branch_taken_0x1577d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1577D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1577D0u;
        // 0x1577d4: 0xac231880  sw          $v1, 0x1880($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 6272), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1577d0) {
            ctx->pc = 0x157800u;
            return;
        }
    }
    ctx->pc = 0x1577D8u;
label_1577d8:
    // 0x1577d8: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x1577D8u;
    {
        const bool branch_taken_0x1577d8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1577d8) {
            ctx->pc = 0x157800u;
            return;
        }
    }
    ctx->pc = 0x1577E0u;
    // 0x1577e0: 0x2484ffe8  addiu       $a0, $a0, -0x18
    ctx->pc = 0x1577e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967272));
    // 0x1577e4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1577e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1577e8: 0x832004  sllv        $a0, $v1, $a0
    ctx->pc = 0x1577e8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 4) & 0x1F));
    // 0x1577ec: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x1577ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
    // 0x1577f0: 0x8c231898  lw          $v1, 0x1898($at)
    ctx->pc = 0x1577f0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x2B1898u));
    // 0x1577f4: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1577f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1577f8: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x1577f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
    // 0x1577fc: 0xac231898  sw          $v1, 0x1898($at)
    ctx->pc = 0x1577fcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x2B1898u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x2B1898u, _value); } while (0);
    ctx->pc = 0x157800u;
}
