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

// Function: entry_0023f888
// Address: 0x23f888 - 0x23f8a0
void entry_0023f888_0x23f888(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023f888_0x23f888");
#endif

    ctx->pc = 0x23f888u;

    // 0x23f888: 0xafa00198  sw          $zero, 0x198($sp)
    ctx->pc = 0x23f888u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 408), GPR_U32(ctx, 0));
    // 0x23f88c: 0x8fa20198  lw          $v0, 0x198($sp)
    ctx->pc = 0x23f88cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x23f890: 0x3c010010  lui         $at, 0x10
    ctx->pc = 0x23f890u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16 << 16));
    // 0x23f894: 0x41082a  slt         $at, $v0, $at
    ctx->pc = 0x23f894u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
    // 0x23f898: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x23F898u;
    {
        const bool branch_taken_0x23f898 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F898u;
        // 0x23f89c: 0x3c030010  lui         $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f898) {
            ctx->pc = 0x23F8BCu;
            return;
        }
    }
    ctx->pc = 0x23F8A0u;
}
