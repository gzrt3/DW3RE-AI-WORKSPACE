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

// Function: FUN_00191c80
// Address: 0x191c80 - 0x191c90
void FUN_00191c80_0x191c80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00191c80_0x191c80");
#endif

    ctx->pc = 0x191c80u;

    // 0x191c80: 0x27bdfe10  addiu       $sp, $sp, -0x1F0
    ctx->pc = 0x191c80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966800));
    // 0x191c84: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x191c84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x191c88: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x191c88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
    // 0x191c8c: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x191c8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
    ctx->pc = 0x191c90u;
}
