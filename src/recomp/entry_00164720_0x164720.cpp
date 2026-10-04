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

// Function: entry_00164720
// Address: 0x164720 - 0x164728
void entry_00164720_0x164720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00164720_0x164720");
#endif

    ctx->pc = 0x164720u;

    // 0x164720: 0xac45000c  sw          $a1, 0xC($v0)
    ctx->pc = 0x164720u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 5));
    // 0x164724: 0xaca20008  sw          $v0, 0x8($a1)
    ctx->pc = 0x164724u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
    ctx->pc = 0x164728u;
}
