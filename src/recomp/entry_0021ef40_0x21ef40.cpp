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

// Function: entry_0021ef40
// Address: 0x21ef40 - 0x21ef5c
void entry_0021ef40_0x21ef40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021ef40_0x21ef40");
#endif

    ctx->pc = 0x21ef40u;

    // 0x21ef40: 0xcc1821  addu        $v1, $a2, $t4
    ctx->pc = 0x21ef40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 12)));
    // 0x21ef44: 0x10b3821  addu        $a3, $t0, $t3
    ctx->pc = 0x21ef44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 11)));
    // 0x21ef48: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x21ef48u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x21ef4c: 0x24ea1fe0  addiu       $t2, $a3, 0x1FE0
    ctx->pc = 0x21ef4cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 7), 8160));
    // 0x21ef50: 0x12650002  beq         $s3, $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x21EF50u;
    {
        const bool branch_taken_0x21ef50 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 5));
        ctx->pc = 0x21EF54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EF50u;
        // 0x21ef54: 0xa4e31fea  sh          $v1, 0x1FEA($a3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 7), 8170), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ef50) {
            ctx->pc = 0x21EF5Cu;
            return;
        }
    }
    ctx->pc = 0x21EF58u;
    // 0x21ef58: 0xa1440010  sb          $a0, 0x10($t2)
    ctx->pc = 0x21ef58u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 16), (uint8_t)GPR_U32(ctx, 4));
    ctx->pc = 0x21ef5cu;
}
