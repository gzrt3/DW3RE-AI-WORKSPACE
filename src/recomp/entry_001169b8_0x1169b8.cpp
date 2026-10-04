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

// Function: entry_001169b8
// Address: 0x1169b8 - 0x1169d0
void entry_001169b8_0x1169b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001169b8_0x1169b8");
#endif

    ctx->pc = 0x1169b8u;

    // 0x1169b8: 0x84e50004  lh          $a1, 0x4($a3)
    ctx->pc = 0x1169b8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x1169bc: 0x30a40300  andi        $a0, $a1, 0x300
    ctx->pc = 0x1169bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)768);
    // 0x1169c0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1169C0u;
    {
        const bool branch_taken_0x1169c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1169c0) {
            ctx->pc = 0x1169D0u;
            return;
        }
    }
    ctx->pc = 0x1169C8u;
    // 0x1169c8: 0x34a42000  ori         $a0, $a1, 0x2000
    ctx->pc = 0x1169c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)8192);
    // 0x1169cc: 0xa4e40004  sh          $a0, 0x4($a3)
    ctx->pc = 0x1169ccu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 4), (uint16_t)GPR_U32(ctx, 4));
    ctx->pc = 0x1169d0u;
}
