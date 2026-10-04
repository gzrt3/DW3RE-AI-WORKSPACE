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

// Function: entry_001371bc
// Address: 0x1371bc - 0x1371dc
void entry_001371bc_0x1371bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001371bc_0x1371bc");
#endif

    ctx->pc = 0x1371bcu;

    // 0x1371bc: 0x0  nop
    ctx->pc = 0x1371bcu;
    // NOP
    // 0x1371c0: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x1371c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x1371c4: 0x9423a3e4  lhu         $v1, -0x5C1C($at)
    ctx->pc = 0x1371c4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x30A3E4u));
    // 0x1371c8: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x1371c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x1371cc: 0x9422a3e8  lhu         $v0, -0x5C18($at)
    ctx->pc = 0x1371ccu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x30A3E8u));
    // 0x1371d0: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x1371d0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1371d4: 0x1020fe3a  beqz        $at, . + 4 + (-0x1C6 << 2)
    ctx->pc = 0x1371D4u;
    {
        const bool branch_taken_0x1371d4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1371d4) {
            ctx->pc = 0x136AC0u;
            return;
        }
    }
    ctx->pc = 0x1371DCu;
}
