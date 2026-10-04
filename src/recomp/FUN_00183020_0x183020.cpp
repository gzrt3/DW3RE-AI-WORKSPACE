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

// Function: FUN_00183020
// Address: 0x183020 - 0x183038
void FUN_00183020_0x183020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00183020_0x183020");
#endif

    ctx->pc = 0x183020u;

    // 0x183020: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x183020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x183024: 0x3c021062  lui         $v0, 0x1062
    ctx->pc = 0x183024u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4194 << 16));
    // 0x183028: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x183028u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x18302c: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x18302cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x183030: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x183030u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x183034: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x183034u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    ctx->pc = 0x183038u;
}
