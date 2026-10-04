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

// Function: entry_0013f60c
// Address: 0x13f60c - 0x13f618
void entry_0013f60c_0x13f60c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013f60c_0x13f60c");
#endif

    ctx->pc = 0x13f60cu;

    // 0x13f60c: 0xa4a0019c  sh          $zero, 0x19C($a1)
    ctx->pc = 0x13f60cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 412), (uint16_t)GPR_U32(ctx, 0));
    // 0x13f610: 0xa4a0019e  sh          $zero, 0x19E($a1)
    ctx->pc = 0x13f610u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 414), (uint16_t)GPR_U32(ctx, 0));
    // 0x13f614: 0xaca00194  sw          $zero, 0x194($a1)
    ctx->pc = 0x13f614u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 404), GPR_U32(ctx, 0));
    ctx->pc = 0x13f618u;
}
