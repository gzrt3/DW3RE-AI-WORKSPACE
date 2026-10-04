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

// Function: entry_001313f8
// Address: 0x1313f8 - 0x13142c
void entry_001313f8_0x1313f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001313f8_0x1313f8");
#endif

    ctx->pc = 0x1313f8u;

    // 0x1313f8: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x1313f8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1313fc: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x1313fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x131400: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x131400u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x131404: 0xa200000c  sb          $zero, 0xC($s0)
    ctx->pc = 0x131404u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 12), (uint8_t)GPR_U32(ctx, 0));
    // 0x131408: 0x94a30002  lhu         $v1, 0x2($a1)
    ctx->pc = 0x131408u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x13140c: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x13140cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x131410: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x131410u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x131414: 0xa200000d  sb          $zero, 0xD($s0)
    ctx->pc = 0x131414u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 13), (uint8_t)GPR_U32(ctx, 0));
    // 0x131418: 0x94a30004  lhu         $v1, 0x4($a1)
    ctx->pc = 0x131418u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x13141c: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x13141cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x131420: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x131420u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x131424: 0xa200000e  sb          $zero, 0xE($s0)
    ctx->pc = 0x131424u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 14), (uint8_t)GPR_U32(ctx, 0));
    // 0x131428: 0xa211000f  sb          $s1, 0xF($s0)
    ctx->pc = 0x131428u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 15), (uint8_t)GPR_U32(ctx, 17));
    ctx->pc = 0x13142cu;
}
