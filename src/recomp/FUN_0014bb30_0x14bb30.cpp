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

// Function: FUN_0014bb30
// Address: 0x14bb30 - 0x14bb4c
void FUN_0014bb30_0x14bb30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0014bb30_0x14bb30");
#endif

    ctx->pc = 0x14bb30u;

    // 0x14bb30: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x14bb30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x14bb34: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x14bb34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x14bb38: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x14bb38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x14bb3c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x14bb3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x14bb40: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x14bb40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x14bb44: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x14bb44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x14bb48: 0x27be00ac  addiu       $fp, $sp, 0xAC
    ctx->pc = 0x14bb48u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
    ctx->pc = 0x14bb4cu;
}
