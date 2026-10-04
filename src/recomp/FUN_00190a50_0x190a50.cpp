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

// Function: FUN_00190a50
// Address: 0x190a50 - 0x190a60
void FUN_00190a50_0x190a50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00190a50_0x190a50");
#endif

    ctx->pc = 0x190a50u;

    // 0x190a50: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x190a50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x190a54: 0x3c023da3  lui         $v0, 0x3DA3
    ctx->pc = 0x190a54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15779 << 16));
    // 0x190a58: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x190a58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x190a5c: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x190a5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    ctx->pc = 0x190a60u;
}
