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

// Function: entry_0015aae8
// Address: 0x15aae8 - 0x15aaf0
void entry_0015aae8_0x15aae8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015aae8_0x15aae8");
#endif

    ctx->pc = 0x15aae8u;

    // 0x15aae8: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x15AAE8u;
    {
        const bool branch_taken_0x15aae8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15AAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AAE8u;
        // 0x15aaec: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15aae8) {
            ctx->pc = 0x15AB64u;
            return;
        }
    }
    ctx->pc = 0x15AAF0u;
}
