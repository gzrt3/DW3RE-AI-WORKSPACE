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

// Function: entry_0022f538
// Address: 0x22f538 - 0x22f570
void entry_0022f538_0x22f538(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022f538_0x22f538");
#endif

    ctx->pc = 0x22f538u;

    // 0x22f538: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x22f538u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x22f53c: 0x28e20029  slti        $v0, $a3, 0x29
    ctx->pc = 0x22f53cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)41) ? 1 : 0);
    // 0x22f540: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x22F540u;
    {
        const bool branch_taken_0x22f540 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22F544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F540u;
        // 0x22f544: 0x25080018  addiu       $t0, $t0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f540) {
            ctx->pc = 0x22F510u;
            return;
        }
    }
    ctx->pc = 0x22F548u;
    // 0x22f548: 0x18c00035  blez        $a2, . + 4 + (0x35 << 2)
    ctx->pc = 0x22F548u;
    {
        const bool branch_taken_0x22f548 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x22F54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F548u;
        // 0x22f54c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f548) {
            ctx->pc = 0x22F620u;
            return;
        }
    }
    ctx->pc = 0x22F550u;
    // 0x22f550: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x22f550u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f554: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x22f554u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f558: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x22f558u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
    // 0x22f55c: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x22f55cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
    // 0x22f560: 0x24843420  addiu       $a0, $a0, 0x3420
    ctx->pc = 0x22f560u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13344));
    // 0x22f564: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x22f564u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22f568: 0x24c6c990  addiu       $a2, $a2, -0x3670
    ctx->pc = 0x22f568u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294953360));
    // 0x22f56c: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x22f56cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->pc = 0x22f570u;
}
