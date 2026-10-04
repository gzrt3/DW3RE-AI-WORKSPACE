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

// Function: entry_001cd3e0
// Address: 0x1cd3e0 - 0x1cd3f0
void entry_001cd3e0_0x1cd3e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cd3e0_0x1cd3e0");
#endif

    ctx->pc = 0x1cd3e0u;

    // 0x1cd3e0: 0x96030012  lhu         $v1, 0x12($s0)
    ctx->pc = 0x1cd3e0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x1cd3e4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1cd3e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1cd3e8: 0xa6030012  sh          $v1, 0x12($s0)
    ctx->pc = 0x1cd3e8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 18), (uint16_t)GPR_U32(ctx, 3));
    // 0x1cd3ec: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x1cd3ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    ctx->pc = 0x1cd3f0u;
}
