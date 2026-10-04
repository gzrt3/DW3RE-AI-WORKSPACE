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

// Function: entry_0019b144
// Address: 0x19b144 - 0x19b160
void entry_0019b144_0x19b144(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019b144_0x19b144");
#endif

    ctx->pc = 0x19b144u;

    // 0x19b144: 0x10c00006  beqz        $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x19B144u;
    {
        const bool branch_taken_0x19b144 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B144u;
        // 0x19b148: 0xa61023  subu        $v0, $a1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b144) {
            ctx->pc = 0x19B160u;
            return;
        }
    }
    ctx->pc = 0x19B14Cu;
    // 0x19b14c: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x19b14cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x19b150: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x19b150u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x19b154: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x19b154u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x19b158: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x19b158u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x19b15c: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x19b15cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    ctx->pc = 0x19b160u;
}
