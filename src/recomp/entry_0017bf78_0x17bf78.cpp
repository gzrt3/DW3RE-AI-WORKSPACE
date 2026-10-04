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

// Function: entry_0017bf78
// Address: 0x17bf78 - 0x17bf90
void entry_0017bf78_0x17bf78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017bf78_0x17bf78");
#endif

    ctx->pc = 0x17bf78u;

    // 0x17bf78: 0x8f838450  lw          $v1, -0x7BB0($gp)
    ctx->pc = 0x17bf78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935632)));
    // 0x17bf7c: 0x24670008  addiu       $a3, $v1, 0x8
    ctx->pc = 0x17bf7cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x17bf80: 0x3c03bfff  lui         $v1, 0xBFFF
    ctx->pc = 0x17bf80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49151 << 16));
    // 0x17bf84: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x17bf84u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x17bf88: 0x3465ffff  ori         $a1, $v1, 0xFFFF
    ctx->pc = 0x17bf88u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x17bf8c: 0x3c064000  lui         $a2, 0x4000
    ctx->pc = 0x17bf8cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16384 << 16));
    ctx->pc = 0x17bf90u;
}
