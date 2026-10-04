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

// Function: entry_001365c8
// Address: 0x1365c8 - 0x13660c
void entry_001365c8_0x1365c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001365c8_0x1365c8");
#endif

    ctx->pc = 0x1365c8u;

    // 0x1365c8: 0x14c00039  bnez        $a2, . + 4 + (0x39 << 2)
    ctx->pc = 0x1365C8u;
    {
        const bool branch_taken_0x1365c8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x1365c8) {
            ctx->pc = 0x1366B0u;
            return;
        }
    }
    ctx->pc = 0x1365D0u;
    // 0x1365d0: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x1365d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x1365d4: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1365d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x1365d8: 0x9025a400  lbu         $a1, -0x5C00($at)
    ctx->pc = 0x1365d8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)FAST_READ8(0x30A400u));
    // 0x1365dc: 0x24420080  addiu       $v0, $v0, 0x80
    ctx->pc = 0x1365dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x1365e0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1365e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1365e4: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x1365e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x1365e8: 0x24a5fffd  addiu       $a1, $a1, -0x3
    ctx->pc = 0x1365e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967293));
    // 0x1365ec: 0x9023a402  lbu         $v1, -0x5BFE($at)
    ctx->pc = 0x1365ecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x30A402u));
    // 0x1365f0: 0xa42004  sllv        $a0, $a0, $a1
    ctx->pc = 0x1365f0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 5) & 0x1F));
    // 0x1365f4: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x1365f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1365f8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1365f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1365fc: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x1365fcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x136600: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x136600u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x136604: 0x1440002a  bnez        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x136604u;
    {
        const bool branch_taken_0x136604 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x136604) {
            ctx->pc = 0x1366B0u;
            return;
        }
    }
    ctx->pc = 0x13660Cu;
}
