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

// Function: entry_00164444
// Address: 0x164444 - 0x164454
void entry_00164444_0x164444(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00164444_0x164444");
#endif

    ctx->pc = 0x164444u;

    // 0x164444: 0x8f828648  lw          $v0, -0x79B8($gp)
    ctx->pc = 0x164444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936136)));
    // 0x164448: 0x24a50370  addiu       $a1, $a1, 0x370
    ctx->pc = 0x164448u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 880));
    // 0x16444c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x16444cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x164450: 0xaf828648  sw          $v0, -0x79B8($gp)
    ctx->pc = 0x164450u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936136), GPR_U32(ctx, 2));
    ctx->pc = 0x164454u;
}
