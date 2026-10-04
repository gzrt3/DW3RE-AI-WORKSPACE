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

// Function: entry_00111560
// Address: 0x111560 - 0x111578
void entry_00111560_0x111560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00111560_0x111560");
#endif

    ctx->pc = 0x111560u;

    // 0x111560: 0x14200005  bnez        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x111560u;
    {
        const bool branch_taken_0x111560 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x111560) {
            ctx->pc = 0x111578u;
            return;
        }
    }
    ctx->pc = 0x111568u;
    // 0x111568: 0x9066000e  lbu         $a2, 0xE($v1)
    ctx->pc = 0x111568u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 14)));
    // 0x11156c: 0xca082a  slt         $at, $a2, $t2
    ctx->pc = 0x11156cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
    // 0x111570: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x111570u;
    {
        const bool branch_taken_0x111570 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x111570) {
            ctx->pc = 0x111580u;
            return;
        }
    }
    ctx->pc = 0x111578u;
}
