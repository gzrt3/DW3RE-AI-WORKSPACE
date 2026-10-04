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

// Function: FUN_00202610
// Address: 0x202610 - 0x202620
void FUN_00202610_0x202610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00202610_0x202610");
#endif

    ctx->pc = 0x202610u;

    // 0x202610: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x202610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
    // 0x202614: 0x3407fff0  ori         $a3, $zero, 0xFFF0
    ctx->pc = 0x202614u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65520);
    // 0x202618: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x202618u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x20261c: 0x24080210  addiu       $t0, $zero, 0x210
    ctx->pc = 0x20261cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 528));
    ctx->pc = 0x202620u;
}
