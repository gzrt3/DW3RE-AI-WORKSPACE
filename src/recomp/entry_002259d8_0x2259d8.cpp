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

// Function: entry_002259d8
// Address: 0x2259d8 - 0x225a0c
void entry_002259d8_0x2259d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002259d8_0x2259d8");
#endif

    ctx->pc = 0x2259d8u;

    // 0x2259d8: 0x14620025  bne         $v1, $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x2259D8u;
    {
        const bool branch_taken_0x2259d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2259DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2259D8u;
        // 0x2259dc: 0x24020041  addiu       $v0, $zero, 0x41 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2259d8) {
            ctx->pc = 0x225A70u;
            return;
        }
    }
    ctx->pc = 0x2259E0u;
    // 0x2259e0: 0x8c870000  lw          $a3, 0x0($a0)
    ctx->pc = 0x2259e0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2259e4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2259e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2259e8: 0x90e30012  lbu         $v1, 0x12($a3)
    ctx->pc = 0x2259e8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 18)));
    // 0x2259ec: 0x14620045  bne         $v1, $v0, . + 4 + (0x45 << 2)
    ctx->pc = 0x2259ECu;
    {
        const bool branch_taken_0x2259ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2259ec) {
            ctx->pc = 0x225B04u;
            return;
        }
    }
    ctx->pc = 0x2259F4u;
    // 0x2259f4: 0x90e30015  lbu         $v1, 0x15($a3)
    ctx->pc = 0x2259f4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 21)));
    // 0x2259f8: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2259F8u;
    {
        const bool branch_taken_0x2259f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2259f8) {
            ctx->pc = 0x225A0Cu;
            return;
        }
    }
    ctx->pc = 0x225A00u;
    // 0x225a00: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x225a00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x225a04: 0x1462003f  bne         $v1, $v0, . + 4 + (0x3F << 2)
    ctx->pc = 0x225A04u;
    {
        const bool branch_taken_0x225a04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x225a04) {
            ctx->pc = 0x225B04u;
            return;
        }
    }
    ctx->pc = 0x225A0Cu;
}
