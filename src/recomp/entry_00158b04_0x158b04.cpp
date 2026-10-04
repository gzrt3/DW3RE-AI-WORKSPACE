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

// Function: entry_00158b04
// Address: 0x158b04 - 0x158b54
void entry_00158b04_0x158b04(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00158b04_0x158b04");
#endif

    ctx->pc = 0x158b04u;

    // 0x158b04: 0x8f838590  lw          $v1, -0x7A70($gp)
    ctx->pc = 0x158b04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
    // 0x158b08: 0x30660400  andi        $a2, $v1, 0x400
    ctx->pc = 0x158b08u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1024);
    // 0x158b0c: 0x10c00019  beqz        $a2, . + 4 + (0x19 << 2)
    ctx->pc = 0x158B0Cu;
    {
        const bool branch_taken_0x158b0c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x158B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158B0Cu;
        // 0x158b10: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158b0c) {
            ctx->pc = 0x158B74u;
            return;
        }
    }
    ctx->pc = 0x158B14u;
    // 0x158b14: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x158b14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x158b18: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x158b18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x158b1c: 0x90244a29  lbu         $a0, 0x4A29($at)
    ctx->pc = 0x158b1cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)FAST_READ8(0x334A29u));
    // 0x158b20: 0x1483002d  bne         $a0, $v1, . + 4 + (0x2D << 2)
    ctx->pc = 0x158B20u;
    {
        const bool branch_taken_0x158b20 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x158b20) {
            ctx->pc = 0x158BD8u;
            return;
        }
    }
    ctx->pc = 0x158B28u;
    // 0x158b28: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x158b28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x158b2c: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x158b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x158b30: 0x8c244a00  lw          $a0, 0x4A00($at)
    ctx->pc = 0x158b30u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x334A00u));
    // 0x158b34: 0x14830007  bne         $a0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x158B34u;
    {
        const bool branch_taken_0x158b34 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x158B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158B34u;
        // 0x158b38: 0x2403000d  addiu       $v1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158b34) {
            ctx->pc = 0x158B54u;
            return;
        }
    }
    ctx->pc = 0x158B3Cu;
    // 0x158b3c: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x158b3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x158b40: 0x90234af7  lbu         $v1, 0x4AF7($at)
    ctx->pc = 0x158b40u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x334AF7u));
    // 0x158b44: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x158b44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x158b48: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x158b48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x158b4c: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x158B4Cu;
    {
        const bool branch_taken_0x158b4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x158B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158B4Cu;
        // 0x158b50: 0xa0234af7  sb          $v1, 0x4AF7($at) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 1), 19191), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158b4c) {
            ctx->pc = 0x158BD8u;
            return;
        }
    }
    ctx->pc = 0x158B54u;
}
