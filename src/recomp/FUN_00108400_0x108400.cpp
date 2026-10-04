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

// Function: FUN_00108400
// Address: 0x108400 - 0x108410
void FUN_00108400_0x108400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00108400_0x108400");
#endif

    ctx->pc = 0x108400u;

    // 0x108400: 0x27bdfe90  addiu       $sp, $sp, -0x170
    ctx->pc = 0x108400u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966928));
    // 0x108404: 0x3c02459c  lui         $v0, 0x459C
    ctx->pc = 0x108404u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17820 << 16));
    // 0x108408: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x108408u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x10840c: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x10840cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    ctx->pc = 0x108410u;
}
