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

// Function: FUN_00165c00
// Address: 0x165c00 - 0x165c0c
void FUN_00165c00_0x165c00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00165c00_0x165c00");
#endif

    ctx->pc = 0x165c00u;

    // 0x165c00: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x165c00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x165c04: 0x3c010032  lui         $at, 0x32
    ctx->pc = 0x165c04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)50 << 16));
    // 0x165c08: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x165c08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    ctx->pc = 0x165c0cu;
}
