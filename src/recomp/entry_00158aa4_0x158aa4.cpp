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

// Function: entry_00158aa4
// Address: 0x158aa4 - 0x158aec
void entry_00158aa4_0x158aa4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00158aa4_0x158aa4");
#endif

    ctx->pc = 0x158aa4u;

    // 0x158aa4: 0xa0204910  sb          $zero, 0x4910($at)
    ctx->pc = 0x158aa4u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 18704), (uint8_t)GPR_U32(ctx, 0));
    // 0x158aa8: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x158aa8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x158aac: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x158aacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x158ab0: 0xa0204af7  sb          $zero, 0x4AF7($at)
    ctx->pc = 0x158ab0u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x334AF7u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x334AF7u, _value); } while (0);
    // 0x158ab4: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x158ab4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x158ab8: 0x90244999  lbu         $a0, 0x4999($at)
    ctx->pc = 0x158ab8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)FAST_READ8(0x334999u));
    // 0x158abc: 0x14830011  bne         $a0, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x158ABCu;
    {
        const bool branch_taken_0x158abc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x158AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158ABCu;
        // 0x158ac0: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158abc) {
            ctx->pc = 0x158B04u;
            return;
        }
    }
    ctx->pc = 0x158AC4u;
    // 0x158ac4: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x158ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x158ac8: 0x8c244970  lw          $a0, 0x4970($at)
    ctx->pc = 0x158ac8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 18800)));
    // 0x158acc: 0x14830007  bne         $a0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x158ACCu;
    {
        const bool branch_taken_0x158acc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x158AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158ACCu;
        // 0x158ad0: 0x2403000d  addiu       $v1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158acc) {
            ctx->pc = 0x158AECu;
            return;
        }
    }
    ctx->pc = 0x158AD4u;
    // 0x158ad4: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x158ad4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x158ad8: 0x90234af7  lbu         $v1, 0x4AF7($at)
    ctx->pc = 0x158ad8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x334AF7u));
    // 0x158adc: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x158adcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x158ae0: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x158ae0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x158ae4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x158AE4u;
    {
        const bool branch_taken_0x158ae4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x158AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158AE4u;
        // 0x158ae8: 0xa0234af7  sb          $v1, 0x4AF7($at) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 1), 19191), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158ae4) {
            ctx->pc = 0x158B04u;
            return;
        }
    }
    ctx->pc = 0x158AECu;
}
