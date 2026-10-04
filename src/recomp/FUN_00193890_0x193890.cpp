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

// Function: FUN_00193890
// Address: 0x193890 - 0x1938a4
void FUN_00193890_0x193890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00193890_0x193890");
#endif

    ctx->pc = 0x193890u;

    // 0x193890: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x193890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x193894: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x193894u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x193898: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x193898u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x19389c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x19389cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x1938a0: 0xe0f02d  daddu       $fp, $a3, $zero
    ctx->pc = 0x1938a0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1938a4u;
}
