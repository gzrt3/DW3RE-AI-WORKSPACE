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

// Function: entry_001532fc
// Address: 0x1532fc - 0x153304
void entry_001532fc_0x1532fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001532fc_0x1532fc");
#endif

    ctx->pc = 0x1532fcu;

    // 0x1532fc: 0xdf858610  ld          $a1, -0x79F0($gp)
    ctx->pc = 0x1532fcu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 28), 4294936080)));
    // 0x153300: 0x0  nop
    ctx->pc = 0x153300u;
    // NOP
    ctx->pc = 0x153304u;
}
