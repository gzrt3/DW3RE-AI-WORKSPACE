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

// Function: entry_002202c0
// Address: 0x2202c0 - 0x2202e0
void entry_002202c0_0x2202c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002202c0_0x2202c0");
#endif

    switch (ctx->pc) {
        case 0x2202d8u: goto label_2202d8;
        default: break;
    }

    ctx->pc = 0x2202c0u;

    // 0x2202c0: 0x94c4000a  lhu         $a0, 0xA($a2)
    ctx->pc = 0x2202c0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 10)));
    // 0x2202c4: 0x24030016  addiu       $v1, $zero, 0x16
    ctx->pc = 0x2202c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x2202c8: 0x14830071  bne         $a0, $v1, . + 4 + (0x71 << 2)
    ctx->pc = 0x2202C8u;
    {
        const bool branch_taken_0x2202c8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x2202CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2202C8u;
        // 0x2202cc: 0x240400f8  addiu       $a0, $zero, 0xF8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 248));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2202c8) {
            ctx->pc = 0x220490u;
            return;
        }
    }
    ctx->pc = 0x2202D0u;
    // 0x2202d0: 0xc0882f8  jal         func_220BE0
    ctx->pc = 0x2202D0u;
    SET_GPR_U32(ctx, 31, 0x2202D8u);
    ctx->pc = 0x2202D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2202D0u;
    // 0x2202d4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220BE0u, 0x2202D0u, 0x2202D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2202D8u;
label_2202d8:
    // 0x2202d8: 0x1000006d  b           . + 4 + (0x6D << 2)
    ctx->pc = 0x2202D8u;
    {
        const bool branch_taken_0x2202d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2202d8) {
            ctx->pc = 0x220490u;
            return;
        }
    }
    ctx->pc = 0x2202E0u;
}
