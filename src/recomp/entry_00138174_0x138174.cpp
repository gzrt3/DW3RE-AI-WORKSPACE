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

// Function: entry_00138174
// Address: 0x138174 - 0x138180
void entry_00138174_0x138174(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00138174_0x138174");
#endif

    ctx->pc = 0x138174u;

    // 0x138174: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x138174u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x138178: 0xa6030000  sh          $v1, 0x0($s0)
    ctx->pc = 0x138178u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x13817c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x13817cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->pc = 0x138180u;
}
