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

// Function: entry_0015a6b0
// Address: 0x15a6b0 - 0x15a6f8
void entry_0015a6b0_0x15a6b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015a6b0_0x15a6b0");
#endif

    ctx->pc = 0x15a6b0u;

    // 0x15a6b0: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x15a6b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x15a6b4: 0x84244af4  lh          $a0, 0x4AF4($at)
    ctx->pc = 0x15a6b4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 19188)));
    // 0x15a6b8: 0x1483001f  bne         $a0, $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x15A6B8u;
    {
        const bool branch_taken_0x15a6b8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x15A6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A6B8u;
        // 0x15a6bc: 0x24030007  addiu       $v1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a6b8) {
            ctx->pc = 0x15A738u;
            return;
        }
    }
    ctx->pc = 0x15A6C0u;
    // 0x15a6c0: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x15a6c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x15a6c4: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x15a6c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x15a6c8: 0x90244af1  lbu         $a0, 0x4AF1($at)
    ctx->pc = 0x15a6c8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)FAST_READ8(0x334AF1u));
    // 0x15a6cc: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x15a6ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x15a6d0: 0x8c254970  lw          $a1, 0x4970($at)
    ctx->pc = 0x15a6d0u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x334970u));
    // 0x15a6d4: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x15a6d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x15a6d8: 0x10a30007  beq         $a1, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x15A6D8u;
    {
        const bool branch_taken_0x15a6d8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x15A6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A6D8u;
        // 0x15a6dc: 0xa0244af2  sb          $a0, 0x4AF2($at) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 1), 19186), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a6d8) {
            ctx->pc = 0x15A6F8u;
            return;
        }
    }
    ctx->pc = 0x15A6E0u;
    // 0x15a6e0: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x15a6e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x15a6e4: 0x10a30004  beq         $a1, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x15A6E4u;
    {
        const bool branch_taken_0x15a6e4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x15a6e4) {
            ctx->pc = 0x15A6F8u;
            return;
        }
    }
    ctx->pc = 0x15A6ECu;
    // 0x15a6ec: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x15a6ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x15a6f0: 0x14a3001d  bne         $a1, $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x15A6F0u;
    {
        const bool branch_taken_0x15a6f0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x15a6f0) {
            ctx->pc = 0x15A768u;
            return;
        }
    }
    ctx->pc = 0x15A6F8u;
}
