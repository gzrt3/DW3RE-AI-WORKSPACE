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

// Function: entry_0018332c
// Address: 0x18332c - 0x183350
void entry_0018332c_0x18332c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018332c_0x18332c");
#endif

    ctx->pc = 0x18332cu;

    // 0x18332c: 0xa0a30237  sb          $v1, 0x237($a1)
    ctx->pc = 0x18332cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 567), (uint8_t)GPR_U32(ctx, 3));
    // 0x183330: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x183330u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x183334: 0xa0a30235  sb          $v1, 0x235($a1)
    ctx->pc = 0x183334u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 565), (uint8_t)GPR_U32(ctx, 3));
    // 0x183338: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x183338u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x18333c: 0xa0a3023c  sb          $v1, 0x23C($a1)
    ctx->pc = 0x18333cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 572), (uint8_t)GPR_U32(ctx, 3));
    // 0x183340: 0x3c034974  lui         $v1, 0x4974
    ctx->pc = 0x183340u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18804 << 16));
    // 0x183344: 0x34632400  ori         $v1, $v1, 0x2400
    ctx->pc = 0x183344u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)9216);
    // 0x183348: 0xaca30260  sw          $v1, 0x260($a1)
    ctx->pc = 0x183348u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 608), GPR_U32(ctx, 3));
    // 0x18334c: 0xaca00264  sw          $zero, 0x264($a1)
    ctx->pc = 0x18334cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 612), GPR_U32(ctx, 0));
    ctx->pc = 0x183350u;
}
