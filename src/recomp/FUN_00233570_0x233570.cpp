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

// Function: FUN_00233570
// Address: 0x233570 - 0x233594
void FUN_00233570_0x233570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00233570_0x233570");
#endif

    ctx->pc = 0x233570u;

    // 0x233570: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x233570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x233574: 0x3c02002d  lui         $v0, 0x2D
    ctx->pc = 0x233574u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
    // 0x233578: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x233578u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x23357c: 0x27a70018  addiu       $a3, $sp, 0x18
    ctx->pc = 0x23357cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x233580: 0x27a8001c  addiu       $t0, $sp, 0x1C
    ctx->pc = 0x233580u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x233584: 0x27a60014  addiu       $a2, $sp, 0x14
    ctx->pc = 0x233584u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
    // 0x233588: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x233588u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x23358c: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x23358cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x233590: 0x244b0450  addiu       $t3, $v0, 0x450
    ctx->pc = 0x233590u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), 1104));
    ctx->pc = 0x233594u;
}
