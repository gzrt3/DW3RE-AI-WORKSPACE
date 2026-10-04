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

// Function: FUN_00165370
// Address: 0x165370 - 0x165390
void FUN_00165370_0x165370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00165370_0x165370");
#endif

    ctx->pc = 0x165370u;

    // 0x165370: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x165370u;
    {
        const bool branch_taken_0x165370 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x165370) {
            ctx->pc = 0x165390u;
            return;
        }
    }
    ctx->pc = 0x165378u;
    // 0x165378: 0x9086000a  lbu         $a2, 0xA($a0)
    ctx->pc = 0x165378u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 10)));
    // 0x16537c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x16537cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x165380: 0x14c30003  bne         $a2, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x165380u;
    {
        const bool branch_taken_0x165380 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        ctx->pc = 0x165384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165380u;
        // 0x165384: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165380) {
            ctx->pc = 0x165390u;
            return;
        }
    }
    ctx->pc = 0x165388u;
    // 0x165388: 0xa083000a  sb          $v1, 0xA($a0)
    ctx->pc = 0x165388u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 10), (uint8_t)GPR_U32(ctx, 3));
    // 0x16538c: 0xa085000f  sb          $a1, 0xF($a0)
    ctx->pc = 0x16538cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 15), (uint8_t)GPR_U32(ctx, 5));
    ctx->pc = 0x165390u;
}
