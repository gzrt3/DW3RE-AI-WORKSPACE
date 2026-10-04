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

// Function: entry_00158b74
// Address: 0x158b74 - 0x158bbc
void entry_00158b74_0x158b74(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00158b74_0x158b74");
#endif

    ctx->pc = 0x158b74u;

    // 0x158b74: 0x90254af6  lbu         $a1, 0x4AF6($at)
    ctx->pc = 0x158b74u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 19190)));
    // 0x158b78: 0x28a10029  slti        $at, $a1, 0x29
    ctx->pc = 0x158b78u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)41) ? 1 : 0);
    // 0x158b7c: 0x10200016  beqz        $at, . + 4 + (0x16 << 2)
    ctx->pc = 0x158B7Cu;
    {
        const bool branch_taken_0x158b7c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x158b7c) {
            ctx->pc = 0x158BD8u;
            return;
        }
    }
    ctx->pc = 0x158B84u;
    // 0x158b84: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x158b84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x158b88: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x158b88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x158b8c: 0x90244a29  lbu         $a0, 0x4A29($at)
    ctx->pc = 0x158b8cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)FAST_READ8(0x334A29u));
    // 0x158b90: 0x14830011  bne         $a0, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x158B90u;
    {
        const bool branch_taken_0x158b90 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x158b90) {
            ctx->pc = 0x158BD8u;
            return;
        }
    }
    ctx->pc = 0x158B98u;
    // 0x158b98: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x158b98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x158b9c: 0x14a30007  bne         $a1, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x158B9Cu;
    {
        const bool branch_taken_0x158b9c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x158BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158B9Cu;
        // 0x158ba0: 0x2403000d  addiu       $v1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158b9c) {
            ctx->pc = 0x158BBCu;
            return;
        }
    }
    ctx->pc = 0x158BA4u;
    // 0x158ba4: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x158ba4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x158ba8: 0x90234af7  lbu         $v1, 0x4AF7($at)
    ctx->pc = 0x158ba8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x334AF7u));
    // 0x158bac: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x158bacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x158bb0: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x158bb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x158bb4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x158BB4u;
    {
        const bool branch_taken_0x158bb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x158BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158BB4u;
        // 0x158bb8: 0xa0234af7  sb          $v1, 0x4AF7($at) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 1), 19191), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158bb4) {
            ctx->pc = 0x158BD8u;
            return;
        }
    }
    ctx->pc = 0x158BBCu;
}
