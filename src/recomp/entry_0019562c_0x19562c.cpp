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

// Function: entry_0019562c
// Address: 0x19562c - 0x195648
void entry_0019562c_0x19562c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019562c_0x19562c");
#endif

    ctx->pc = 0x19562cu;

    // 0x19562c: 0x3c030029  lui         $v1, 0x29
    ctx->pc = 0x19562cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
    // 0x195630: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x195630u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x195634: 0x24639d72  addiu       $v1, $v1, -0x628E
    ctx->pc = 0x195634u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294942066));
    // 0x195638: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x195638u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x19563c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x19563cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x195640: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x195640u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x195644: 0xa083000a  sb          $v1, 0xA($a0)
    ctx->pc = 0x195644u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 10), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x195648u;
}
