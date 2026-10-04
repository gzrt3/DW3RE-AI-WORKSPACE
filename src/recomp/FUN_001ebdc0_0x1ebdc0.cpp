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

// Function: FUN_001ebdc0
// Address: 0x1ebdc0 - 0x1ebde8
void FUN_001ebdc0_0x1ebdc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001ebdc0_0x1ebdc0");
#endif

    ctx->pc = 0x1ebdc0u;

    // 0x1ebdc0: 0x27bdfea0  addiu       $sp, $sp, -0x160
    ctx->pc = 0x1ebdc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966944));
    // 0x1ebdc4: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x1ebdc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x1ebdc8: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1ebdc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x1ebdcc: 0x34653ffc  ori         $a1, $v1, 0x3FFC
    ctx->pc = 0x1ebdccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16380);
    // 0x1ebdd0: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x1ebdd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x1ebdd4: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1ebdd4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1ebdd8: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1ebdd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x1ebddc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1ebddcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1ebde0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1ebde0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1ebde4: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x1ebde4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    ctx->pc = 0x1ebde8u;
}
