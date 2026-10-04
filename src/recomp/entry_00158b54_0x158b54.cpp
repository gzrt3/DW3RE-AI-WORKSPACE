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

// Function: entry_00158b54
// Address: 0x158b54 - 0x158b74
void entry_00158b54_0x158b54(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00158b54_0x158b54");
#endif

    ctx->pc = 0x158b54u;

    // 0x158b54: 0x14830020  bne         $a0, $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x158B54u;
    {
        const bool branch_taken_0x158b54 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x158b54) {
            ctx->pc = 0x158BD8u;
            return;
        }
    }
    ctx->pc = 0x158B5Cu;
    // 0x158b5c: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x158b5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x158b60: 0x90234af7  lbu         $v1, 0x4AF7($at)
    ctx->pc = 0x158b60u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x334AF7u));
    // 0x158b64: 0x34630010  ori         $v1, $v1, 0x10
    ctx->pc = 0x158b64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
    // 0x158b68: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x158b68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x158b6c: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x158B6Cu;
    {
        const bool branch_taken_0x158b6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x158B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158B6Cu;
        // 0x158b70: 0xa0234af7  sb          $v1, 0x4AF7($at) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 1), 19191), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158b6c) {
            ctx->pc = 0x158BD8u;
            return;
        }
    }
    ctx->pc = 0x158B74u;
}
