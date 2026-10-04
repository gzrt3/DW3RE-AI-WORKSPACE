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

// Function: entry_00111618
// Address: 0x111618 - 0x111638
void entry_00111618_0x111618(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00111618_0x111618");
#endif

    ctx->pc = 0x111618u;

    // 0x111618: 0x14400033  bnez        $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x111618u;
    {
        const bool branch_taken_0x111618 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x111618) {
            ctx->pc = 0x1116E8u;
            return;
        }
    }
    ctx->pc = 0x111620u;
    // 0x111620: 0x90860022  lbu         $a2, 0x22($a0)
    ctx->pc = 0x111620u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 34)));
    // 0x111624: 0x14c50004  bne         $a2, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x111624u;
    {
        const bool branch_taken_0x111624 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 5));
        if (branch_taken_0x111624) {
            ctx->pc = 0x111638u;
            return;
        }
    }
    ctx->pc = 0x11162Cu;
    // 0x11162c: 0x90850023  lbu         $a1, 0x23($a0)
    ctx->pc = 0x11162cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 35)));
    // 0x111630: 0x10a9002d  beq         $a1, $t1, . + 4 + (0x2D << 2)
    ctx->pc = 0x111630u;
    {
        const bool branch_taken_0x111630 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 9));
        if (branch_taken_0x111630) {
            ctx->pc = 0x1116E8u;
            return;
        }
    }
    ctx->pc = 0x111638u;
}
