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

// Function: entry_001f76f4
// Address: 0x1f76f4 - 0x1f7710
void entry_001f76f4_0x1f76f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f76f4_0x1f76f4");
#endif

    ctx->pc = 0x1f76f4u;

    // 0x1f76f4: 0x0  nop
    ctx->pc = 0x1f76f4u;
    // NOP
    // 0x1f76f8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1f76f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f76fc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f76fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7700: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1f7700u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7704: 0x3c050053  lui         $a1, 0x53
    ctx->pc = 0x1f7704u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)83 << 16));
    // 0x1f7708: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1f7708u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1f770c: 0x24a56f10  addiu       $a1, $a1, 0x6F10
    ctx->pc = 0x1f770cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28432));
    ctx->pc = 0x1f7710u;
}
