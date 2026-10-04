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

// Function: FUN_00235158
// Address: 0x235158 - 0x235188
void FUN_00235158_0x235158(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00235158_0x235158");
#endif

    ctx->pc = 0x235158u;

    // 0x235158: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x235158u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x23515c: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x23515cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235160: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x235160u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x235164: 0x849c2  srl         $t1, $t0, 7
    ctx->pc = 0x235164u;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 8), 7));
    // 0x235168: 0x30c700ff  andi        $a3, $a2, 0xFF
    ctx->pc = 0x235168u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x23516c: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x23516cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235170: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x235170u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x235174: 0x3108007f  andi        $t0, $t0, 0x7F
    ctx->pc = 0x235174u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)127);
    // 0x235178: 0x312900ff  andi        $t1, $t1, 0xFF
    ctx->pc = 0x235178u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)255);
    // 0x23517c: 0x24050017  addiu       $a1, $zero, 0x17
    ctx->pc = 0x23517cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x235180: 0x808d3e8  j           func_234FA0
    ctx->pc = 0x235180u;
    ctx->pc = 0x235184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235180u;
    // 0x235184: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x234FA0u;
    FUN_00234fa0_0x234fa0(rdram, ctx, runtime); return;
    ctx->pc = 0x235188u;
}
