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

// Function: FUN_00226d50
// Address: 0x226d50 - 0x226da4
void FUN_00226d50_0x226d50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00226d50_0x226d50");
#endif

    switch (ctx->pc) {
        case 0x226d9cu: goto label_226d9c;
        default: break;
    }

    ctx->pc = 0x226d50u;

    // 0x226d50: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x226d50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x226d54: 0x3c06002f  lui         $a2, 0x2F
    ctx->pc = 0x226d54u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)47 << 16));
    // 0x226d58: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x226d58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x226d5c: 0x24c62570  addiu       $a2, $a2, 0x2570
    ctx->pc = 0x226d5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 9584));
    // 0x226d60: 0x8c870000  lw          $a3, 0x0($a0)
    ctx->pc = 0x226d60u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x226d64: 0x8c850008  lw          $a1, 0x8($a0)
    ctx->pc = 0x226d64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x226d68: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x226d68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x226d6c: 0x71200  sll         $v0, $a3, 8
    ctx->pc = 0x226d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x226d70: 0x472023  subu        $a0, $v0, $a3
    ctx->pc = 0x226d70u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x226d74: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x226d74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x226d78: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x226d78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x226d7c: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x226d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x226d80: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x226d80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x226d84: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x226d84u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x226d88: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x226d88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x226d8c: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x226d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x226d90: 0x24420000  addiu       $v0, $v0, 0x0
    ctx->pc = 0x226d90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
    // 0x226d94: 0xc05d518  jal         func_175460
    ctx->pc = 0x226D94u;
    SET_GPR_U32(ctx, 31, 0x226D9Cu);
    ctx->pc = 0x226D98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226D94u;
    // 0x226d98: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175460u, 0x226D94u, 0x226D9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226D9Cu;
label_226d9c:
    // 0x226d9c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x226d9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x226da0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x226da0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x226da4u;
}
