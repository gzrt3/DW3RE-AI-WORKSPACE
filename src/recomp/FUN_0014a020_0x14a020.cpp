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

// Function: FUN_0014a020
// Address: 0x14a020 - 0x14a034
void FUN_0014a020_0x14a020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0014a020_0x14a020");
#endif

    ctx->pc = 0x14a020u;

    // 0x14a020: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x14a020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x14a024: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x14a024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x14a028: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x14a028u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x14a02c: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x14a02cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x14a030: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x14a030u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    ctx->pc = 0x14a034u;
}
