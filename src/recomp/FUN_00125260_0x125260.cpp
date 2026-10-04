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

// Function: FUN_00125260
// Address: 0x125260 - 0x125278
void FUN_00125260_0x125260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00125260_0x125260");
#endif

    ctx->pc = 0x125260u;

    // 0x125260: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x125260u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x125264: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x125264u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x125268: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x125268u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x12526c: 0x2442fb10  addiu       $v0, $v0, -0x4F0
    ctx->pc = 0x12526cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966032));
    // 0x125270: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x125270u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x125274: 0x27a70020  addiu       $a3, $sp, 0x20
    ctx->pc = 0x125274u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x125278u;
}
