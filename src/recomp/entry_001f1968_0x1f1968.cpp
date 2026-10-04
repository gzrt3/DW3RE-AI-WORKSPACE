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

// Function: entry_001f1968
// Address: 0x1f1968 - 0x1f1988
void entry_001f1968_0x1f1968(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f1968_0x1f1968");
#endif

    ctx->pc = 0x1f1968u;

    // 0x1f1968: 0x8f838fc4  lw          $v1, -0x703C($gp)
    ctx->pc = 0x1f1968u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938564)));
    // 0x1f196c: 0x0  nop
    ctx->pc = 0x1f196cu;
    // NOP
    // 0x1f1970: 0x0  nop
    ctx->pc = 0x1f1970u;
    // NOP
    // 0x1f1974: 0x0  nop
    ctx->pc = 0x1f1974u;
    // NOP
    // 0x1f1978: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1F1978u;
    {
        const bool branch_taken_0x1f1978 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f1978) {
            ctx->pc = 0x1F1960u;
            return;
        }
    }
    ctx->pc = 0x1F1980u;
    // 0x1f1980: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1F1980u;
    {
        const bool branch_taken_0x1f1980 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1980u;
        // 0x1f1984: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1980) {
            ctx->pc = 0x1F19C8u;
            return;
        }
    }
    ctx->pc = 0x1F1988u;
}
