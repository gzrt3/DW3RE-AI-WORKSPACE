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

// Function: FUN_00233468
// Address: 0x233468 - 0x233480
void FUN_00233468_0x233468(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00233468_0x233468");
#endif

    ctx->pc = 0x233468u;

    // 0x233468: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x233468u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x23346c: 0x24840048  addiu       $a0, $a0, 0x48
    ctx->pc = 0x23346cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 72));
    // 0x233470: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x233470u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x233474: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x233474u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x233478: 0x808c9da  j           func_232768
    ctx->pc = 0x233478u;
    ctx->pc = 0x23347Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233478u;
    // 0x23347c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x232768u;
    FUN_00232768_0x232768(rdram, ctx, runtime); return;
    ctx->pc = 0x233480u;
}
