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

// Function: entry_0024467c
// Address: 0x24467c - 0x24469c
void entry_0024467c_0x24467c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0024467c_0x24467c");
#endif

    ctx->pc = 0x24467cu;

    // 0x24467c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x24467cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x244680: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x244680u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x244684: 0xac600014  sw          $zero, 0x14($v1)
    ctx->pc = 0x244684u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 0));
    // 0x244688: 0xa460000c  sh          $zero, 0xC($v1)
    ctx->pc = 0x244688u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 12), (uint16_t)GPR_U32(ctx, 0));
    // 0x24468c: 0xa460000e  sh          $zero, 0xE($v1)
    ctx->pc = 0x24468cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 14), (uint16_t)GPR_U32(ctx, 0));
    // 0x244690: 0xac600010  sw          $zero, 0x10($v1)
    ctx->pc = 0x244690u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 0));
    // 0x244694: 0xa0600006  sb          $zero, 0x6($v1)
    ctx->pc = 0x244694u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 6), (uint8_t)GPR_U32(ctx, 0));
    // 0x244698: 0xa0600005  sb          $zero, 0x5($v1)
    ctx->pc = 0x244698u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x24469cu;
}
