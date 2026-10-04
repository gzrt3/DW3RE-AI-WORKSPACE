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

// Function: entry_00111134
// Address: 0x111134 - 0x11114c
void entry_00111134_0x111134(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00111134_0x111134");
#endif

    ctx->pc = 0x111134u;

    // 0x111134: 0x0  nop
    ctx->pc = 0x111134u;
    // NOP
    // 0x111138: 0x6b7821  addu        $t7, $v1, $t3
    ctx->pc = 0x111138u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
    // 0x11113c: 0x91f00000  lbu         $s0, 0x0($t7)
    ctx->pc = 0x11113cu;
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x111140: 0x16190002  bne         $s0, $t9, . + 4 + (0x2 << 2)
    ctx->pc = 0x111140u;
    {
        const bool branch_taken_0x111140 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 25));
        if (branch_taken_0x111140) {
            ctx->pc = 0x11114Cu;
            return;
        }
    }
    ctx->pc = 0x111148u;
    // 0x111148: 0x702d  daddu       $t6, $zero, $zero
    ctx->pc = 0x111148u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x11114cu;
}
