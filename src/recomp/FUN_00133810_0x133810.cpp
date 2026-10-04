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

// Function: FUN_00133810
// Address: 0x133810 - 0x133828
void FUN_00133810_0x133810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00133810_0x133810");
#endif

    ctx->pc = 0x133810u;

    // 0x133810: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x133810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x133814: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x133814u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x133818: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x133818u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x13381c: 0x2881001e  slti        $at, $a0, 0x1E
    ctx->pc = 0x13381cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)30) ? 1 : 0);
    // 0x133820: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x133820u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
    // 0x133824: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x133824u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
    ctx->pc = 0x133828u;
}
