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

// Function: entry_00249dec
// Address: 0x249dec - 0x249e10
void entry_00249dec_0x249dec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00249dec_0x249dec");
#endif

    ctx->pc = 0x249decu;

    // 0x249dec: 0x8f8492fc  lw          $a0, -0x6D04($gp)
    ctx->pc = 0x249decu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939388)));
    // 0x249df0: 0x2053021  addu        $a2, $s0, $a1
    ctx->pc = 0x249df0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x249df4: 0x24c36810  addiu       $v1, $a2, 0x6810
    ctx->pc = 0x249df4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 26640));
    // 0x249df8: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x249DF8u;
    {
        const bool branch_taken_0x249df8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x249DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249DF8u;
        // 0x249dfc: 0x9084001c  lbu         $a0, 0x1C($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249df8) {
            ctx->pc = 0x249E10u;
            return;
        }
    }
    ctx->pc = 0x249E00u;
    // 0x249e00: 0xa0c46883  sb          $a0, 0x6883($a2)
    ctx->pc = 0x249e00u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 26755), (uint8_t)GPR_U32(ctx, 4));
    // 0x249e04: 0xa0c4689b  sb          $a0, 0x689B($a2)
    ctx->pc = 0x249e04u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 26779), (uint8_t)GPR_U32(ctx, 4));
    // 0x249e08: 0xa0c468b3  sb          $a0, 0x68B3($a2)
    ctx->pc = 0x249e08u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 26803), (uint8_t)GPR_U32(ctx, 4));
    // 0x249e0c: 0xa0c468cb  sb          $a0, 0x68CB($a2)
    ctx->pc = 0x249e0cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 26827), (uint8_t)GPR_U32(ctx, 4));
    ctx->pc = 0x249e10u;
}
