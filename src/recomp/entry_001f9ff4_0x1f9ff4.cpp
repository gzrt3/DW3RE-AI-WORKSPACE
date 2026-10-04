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

// Function: entry_001f9ff4
// Address: 0x1f9ff4 - 0x1fa010
void entry_001f9ff4_0x1f9ff4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f9ff4_0x1f9ff4");
#endif

    ctx->pc = 0x1f9ff4u;

    // 0x1f9ff4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1f9ff4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1f9ff8: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x1f9ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1f9ffc: 0x10430004  beq         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F9FFCu;
    {
        const bool branch_taken_0x1f9ffc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1FA000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9FFCu;
        // 0x1fa000: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9ffc) {
            ctx->pc = 0x1FA010u;
            return;
        }
    }
    ctx->pc = 0x1FA004u;
    // 0x1fa004: 0x2403000d  addiu       $v1, $zero, 0xD
    ctx->pc = 0x1fa004u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1fa008: 0x1443001a  bne         $v0, $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x1FA008u;
    {
        const bool branch_taken_0x1fa008 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1fa008) {
            ctx->pc = 0x1FA074u;
            return;
        }
    }
    ctx->pc = 0x1FA010u;
}
