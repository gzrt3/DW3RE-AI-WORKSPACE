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

// Function: entry_00164688
// Address: 0x164688 - 0x164698
void entry_00164688_0x164688(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00164688_0x164688");
#endif

    ctx->pc = 0x164688u;

    // 0x164688: 0x8f828648  lw          $v0, -0x79B8($gp)
    ctx->pc = 0x164688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936136)));
    // 0x16468c: 0x24a51560  addiu       $a1, $a1, 0x1560
    ctx->pc = 0x16468cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5472));
    // 0x164690: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x164690u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x164694: 0xaf828648  sw          $v0, -0x79B8($gp)
    ctx->pc = 0x164694u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936136), GPR_U32(ctx, 2));
    ctx->pc = 0x164698u;
}
