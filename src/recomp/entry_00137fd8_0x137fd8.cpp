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

// Function: entry_00137fd8
// Address: 0x137fd8 - 0x137fe8
void entry_00137fd8_0x137fd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00137fd8_0x137fd8");
#endif

    ctx->pc = 0x137fd8u;

    // 0x137fd8: 0x8dc30004  lw          $v1, 0x4($t6)
    ctx->pc = 0x137fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 4)));
    // 0x137fdc: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x137FDCu;
    {
        const bool branch_taken_0x137fdc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x137fdc) {
            ctx->pc = 0x137FE8u;
            return;
        }
    }
    ctx->pc = 0x137FE4u;
    // 0x137fe4: 0x100702d  daddu       $t6, $t0, $zero
    ctx->pc = 0x137fe4u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x137fe8u;
}
