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

// Function: FUN_00225d10
// Address: 0x225d10 - 0x225d64
void FUN_00225d10_0x225d10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00225d10_0x225d10");
#endif

    switch (ctx->pc) {
        case 0x225d5cu: goto label_225d5c;
        default: break;
    }

    ctx->pc = 0x225d10u;

    // 0x225d10: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x225d10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x225d14: 0x3c06002f  lui         $a2, 0x2F
    ctx->pc = 0x225d14u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)47 << 16));
    // 0x225d18: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x225d18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x225d1c: 0x24c62570  addiu       $a2, $a2, 0x2570
    ctx->pc = 0x225d1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 9584));
    // 0x225d20: 0x8c870000  lw          $a3, 0x0($a0)
    ctx->pc = 0x225d20u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x225d24: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x225d24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225d28: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x225d28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x225d2c: 0x71200  sll         $v0, $a3, 8
    ctx->pc = 0x225d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x225d30: 0x472023  subu        $a0, $v0, $a3
    ctx->pc = 0x225d30u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x225d34: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x225d34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x225d38: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x225d38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x225d3c: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x225d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x225d40: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x225d40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x225d44: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x225d44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x225d48: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x225d48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x225d4c: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x225d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x225d50: 0x24420000  addiu       $v0, $v0, 0x0
    ctx->pc = 0x225d50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
    // 0x225d54: 0xc06eb08  jal         func_1BAC20
    ctx->pc = 0x225D54u;
    SET_GPR_U32(ctx, 31, 0x225D5Cu);
    ctx->pc = 0x225D58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225D54u;
    // 0x225d58: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BAC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BAC20u, 0x225D54u, 0x225D5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225D5Cu;
label_225d5c:
    // 0x225d5c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x225d5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x225d60: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x225d60u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x225d64u;
}
