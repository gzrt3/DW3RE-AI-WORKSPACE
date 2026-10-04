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

// Function: FUN_00178cc0
// Address: 0x178cc0 - 0x178cd0
void FUN_00178cc0_0x178cc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00178cc0_0x178cc0");
#endif

    ctx->pc = 0x178cc0u;

    // 0x178cc0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x178cc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x178cc4: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x178cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x178cc8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x178cc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x178ccc: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x178cccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    ctx->pc = 0x178cd0u;
}
