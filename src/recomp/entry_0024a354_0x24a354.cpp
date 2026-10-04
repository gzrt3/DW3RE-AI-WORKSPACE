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

// Function: entry_0024a354
// Address: 0x24a354 - 0x24a378
void entry_0024a354_0x24a354(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0024a354_0x24a354");
#endif

    ctx->pc = 0x24a354u;

    // 0x24a354: 0x0  nop
    ctx->pc = 0x24a354u;
    // NOP
    // 0x24a358: 0x8f8492fc  lw          $a0, -0x6D04($gp)
    ctx->pc = 0x24a358u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939388)));
    // 0x24a35c: 0x24c30010  addiu       $v1, $a2, 0x10
    ctx->pc = 0x24a35cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x24a360: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x24A360u;
    {
        const bool branch_taken_0x24a360 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A360u;
        // 0x24a364: 0x9084001c  lbu         $a0, 0x1C($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a360) {
            ctx->pc = 0x24A378u;
            return;
        }
    }
    ctx->pc = 0x24A368u;
    // 0x24a368: 0xa0c40083  sb          $a0, 0x83($a2)
    ctx->pc = 0x24a368u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 131), (uint8_t)GPR_U32(ctx, 4));
    // 0x24a36c: 0xa0c4009b  sb          $a0, 0x9B($a2)
    ctx->pc = 0x24a36cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 155), (uint8_t)GPR_U32(ctx, 4));
    // 0x24a370: 0xa0c400b3  sb          $a0, 0xB3($a2)
    ctx->pc = 0x24a370u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 179), (uint8_t)GPR_U32(ctx, 4));
    // 0x24a374: 0xa0c400cb  sb          $a0, 0xCB($a2)
    ctx->pc = 0x24a374u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 203), (uint8_t)GPR_U32(ctx, 4));
    ctx->pc = 0x24a378u;
}
