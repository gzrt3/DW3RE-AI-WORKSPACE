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

// Function: entry_0023ac24
// Address: 0x23ac24 - 0x23ac3c
void entry_0023ac24_0x23ac24(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023ac24_0x23ac24");
#endif

    ctx->pc = 0x23ac24u;

    // 0x23ac24: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x23ac24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x23ac28: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x23AC28u;
    {
        const bool branch_taken_0x23ac28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23AC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AC28u;
        // 0x23ac2c: 0x30a2000f  andi        $v0, $a1, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ac28) {
            ctx->pc = 0x23AC3Cu;
            return;
        }
    }
    ctx->pc = 0x23AC30u;
    // 0x23ac30: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x23ac30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x23ac34: 0x52a02  srl         $a1, $a1, 8
    ctx->pc = 0x23ac34u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 8));
    // 0x23ac38: 0x30a2000f  andi        $v0, $a1, 0xF
    ctx->pc = 0x23ac38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)15);
    ctx->pc = 0x23ac3cu;
}
