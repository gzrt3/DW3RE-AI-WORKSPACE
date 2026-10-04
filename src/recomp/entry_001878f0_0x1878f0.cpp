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

// Function: entry_001878f0
// Address: 0x1878f0 - 0x187900
void entry_001878f0_0x1878f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001878f0_0x1878f0");
#endif

    ctx->pc = 0x1878f0u;

    // 0x1878f0: 0x8223023d  lb          $v1, 0x23D($s1)
    ctx->pc = 0x1878f0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 573)));
    // 0x1878f4: 0x306300f7  andi        $v1, $v1, 0xF7
    ctx->pc = 0x1878f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)247);
    // 0x1878f8: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1878F8u;
    {
        const bool branch_taken_0x1878f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1878FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1878F8u;
        // 0x1878fc: 0xa223023d  sb          $v1, 0x23D($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 573), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1878f8) {
            ctx->pc = 0x18792Cu;
            return;
        }
    }
    ctx->pc = 0x187900u;
}
