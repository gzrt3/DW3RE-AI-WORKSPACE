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

// Function: FUN_0015c4e0
// Address: 0x15c4e0 - 0x15c534
void FUN_0015c4e0_0x15c4e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0015c4e0_0x15c4e0");
#endif

    ctx->pc = 0x15c4e0u;

    // 0x15c4e0: 0x24030024  addiu       $v1, $zero, 0x24
    ctx->pc = 0x15c4e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x15c4e4: 0x10830012  beq         $a0, $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x15C4E4u;
    {
        const bool branch_taken_0x15c4e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x15C4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C4E4u;
        // 0x15c4e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c4e4) {
            ctx->pc = 0x15C530u;
            goto label_15c530;
        }
    }
    ctx->pc = 0x15C4ECu;
    // 0x15c4ec: 0x24030023  addiu       $v1, $zero, 0x23
    ctx->pc = 0x15c4ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x15c4f0: 0x1083000f  beq         $a0, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x15C4F0u;
    {
        const bool branch_taken_0x15c4f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x15C4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C4F0u;
        // 0x15c4f4: 0x2403001b  addiu       $v1, $zero, 0x1B (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c4f0) {
            ctx->pc = 0x15C530u;
            goto label_15c530;
        }
    }
    ctx->pc = 0x15C4F8u;
    // 0x15c4f8: 0x1083000d  beq         $a0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x15C4F8u;
    {
        const bool branch_taken_0x15c4f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x15c4f8) {
            ctx->pc = 0x15C530u;
            goto label_15c530;
        }
    }
    ctx->pc = 0x15C500u;
    // 0x15c500: 0x24030012  addiu       $v1, $zero, 0x12
    ctx->pc = 0x15c500u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x15c504: 0x1083000a  beq         $a0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x15C504u;
    {
        const bool branch_taken_0x15c504 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x15C508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C504u;
        // 0x15c508: 0x24030011  addiu       $v1, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c504) {
            ctx->pc = 0x15C530u;
            goto label_15c530;
        }
    }
    ctx->pc = 0x15C50Cu;
    // 0x15c50c: 0x10830008  beq         $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x15C50Cu;
    {
        const bool branch_taken_0x15c50c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x15c50c) {
            ctx->pc = 0x15C530u;
            goto label_15c530;
        }
    }
    ctx->pc = 0x15C514u;
    // 0x15c514: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x15c514u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x15c518: 0x10830005  beq         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x15C518u;
    {
        const bool branch_taken_0x15c518 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x15C51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C518u;
        // 0x15c51c: 0x2403000c  addiu       $v1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c518) {
            ctx->pc = 0x15C530u;
            goto label_15c530;
        }
    }
    ctx->pc = 0x15C520u;
    // 0x15c520: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x15C520u;
    {
        const bool branch_taken_0x15c520 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x15c520) {
            ctx->pc = 0x15C530u;
            goto label_15c530;
        }
    }
    ctx->pc = 0x15C528u;
    // 0x15c528: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x15C528u;
    {
        const bool branch_taken_0x15c528 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15c528) {
            ctx->pc = 0x15C534u;
            return;
        }
    }
    ctx->pc = 0x15C530u;
label_15c530:
    // 0x15c530: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15c530u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x15c534u;
}
