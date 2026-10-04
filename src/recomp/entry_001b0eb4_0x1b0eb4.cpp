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

// Function: entry_001b0eb4
// Address: 0x1b0eb4 - 0x1b0edc
void entry_001b0eb4_0x1b0eb4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b0eb4_0x1b0eb4");
#endif

    ctx->pc = 0x1b0eb4u;

    // 0x1b0eb4: 0xae320004  sw          $s2, 0x4($s1)
    ctx->pc = 0x1b0eb4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 18));
    // 0x1b0eb8: 0xae330008  sw          $s3, 0x8($s1)
    ctx->pc = 0x1b0eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 19));
    // 0x1b0ebc: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B0EBCu;
    {
        const bool branch_taken_0x1b0ebc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0EBCu;
        // 0x1b0ec0: 0xae34000c  sw          $s4, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0ebc) {
            ctx->pc = 0x1B0EDCu;
            return;
        }
    }
    ctx->pc = 0x1B0EC4u;
    // 0x1b0ec4: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x1b0ec4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b0ec8: 0xa2220010  sb          $v0, 0x10($s1)
    ctx->pc = 0x1b0ec8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 16), (uint8_t)GPR_U32(ctx, 2));
    // 0x1b0ecc: 0x92030001  lbu         $v1, 0x1($s0)
    ctx->pc = 0x1b0eccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x1b0ed0: 0xa2230011  sb          $v1, 0x11($s1)
    ctx->pc = 0x1b0ed0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 17), (uint8_t)GPR_U32(ctx, 3));
    // 0x1b0ed4: 0x92020002  lbu         $v0, 0x2($s0)
    ctx->pc = 0x1b0ed4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x1b0ed8: 0xa2220012  sb          $v0, 0x12($s1)
    ctx->pc = 0x1b0ed8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 18), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x1b0edcu;
}
