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

// Function: entry_0014c684
// Address: 0x14c684 - 0x14c68c
void entry_0014c684_0x14c684(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014c684_0x14c684");
#endif

    ctx->pc = 0x14c684u;

    // 0x14c684: 0xa6230040  sh          $v1, 0x40($s1)
    ctx->pc = 0x14c684u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 64), (uint16_t)GPR_U32(ctx, 3));
    // 0x14c688: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x14c688u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->pc = 0x14c68cu;
}
