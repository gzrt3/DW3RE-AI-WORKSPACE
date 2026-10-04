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

// Function: entry_0022f598
// Address: 0x22f598 - 0x22f5d4
void entry_0022f598_0x22f598(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022f598_0x22f598");
#endif

    ctx->pc = 0x22f598u;

    // 0x22f598: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x22f598u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x22f59c: 0x29020029  slti        $v0, $t0, 0x29
    ctx->pc = 0x22f59cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)41) ? 1 : 0);
    // 0x22f5a0: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x22F5A0u;
    {
        const bool branch_taken_0x22f5a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22F5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F5A0u;
        // 0x22f5a4: 0x25290018  addiu       $t1, $t1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f5a0) {
            ctx->pc = 0x22F570u;
            return;
        }
    }
    ctx->pc = 0x22F5A8u;
    // 0x22f5a8: 0x18e0001e  blez        $a3, . + 4 + (0x1E << 2)
    ctx->pc = 0x22F5A8u;
    {
        const bool branch_taken_0x22f5a8 = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x22F5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F5A8u;
        // 0x22f5ac: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f5a8) {
            ctx->pc = 0x22F624u;
            return;
        }
    }
    ctx->pc = 0x22F5B0u;
    // 0x22f5b0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x22f5b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f5b4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x22f5b4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f5b8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x22f5b8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f5bc: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x22f5bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
    // 0x22f5c0: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x22f5c0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
    // 0x22f5c4: 0x24843420  addiu       $a0, $a0, 0x3420
    ctx->pc = 0x22f5c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13344));
    // 0x22f5c8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x22f5c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x22f5cc: 0x24c6c990  addiu       $a2, $a2, -0x3670
    ctx->pc = 0x22f5ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294953360));
    // 0x22f5d0: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x22f5d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->pc = 0x22f5d4u;
}
