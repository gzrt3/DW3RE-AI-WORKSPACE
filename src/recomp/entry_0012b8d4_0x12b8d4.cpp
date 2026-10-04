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

// Function: entry_0012b8d4
// Address: 0x12b8d4 - 0x12b8dc
void entry_0012b8d4_0x12b8d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012b8d4_0x12b8d4");
#endif

    ctx->pc = 0x12b8d4u;

    // 0x12b8d4: 0x2463fffa  addiu       $v1, $v1, -0x6
    ctx->pc = 0x12b8d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967290));
    // 0x12b8d8: 0xa4830d70  sh          $v1, 0xD70($a0)
    ctx->pc = 0x12b8d8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 3440), (uint16_t)GPR_U32(ctx, 3));
    ctx->pc = 0x12b8dcu;
}
