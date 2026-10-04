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

// Function: FUN_00233b08
// Address: 0x233b08 - 0x233b40
void FUN_00233b08_0x233b08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00233b08_0x233b08");
#endif

    switch (ctx->pc) {
        case 0x233b24u: goto label_233b24;
        default: break;
    }

    ctx->pc = 0x233b08u;

    // 0x233b08: 0x8f8482d0  lw          $a0, -0x7D30($gp)
    ctx->pc = 0x233b08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935248)));
    // 0x233b0c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x233b0cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x233b10: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x233b10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x233b14: 0x3c010009  lui         $at, 0x9
    ctx->pc = 0x233b14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)9 << 16));
    // 0x233b18: 0x34211158  ori         $at, $at, 0x1158
    ctx->pc = 0x233b18u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4440);
    // 0x233b1c: 0xc08cd30  jal         func_2334C0
    ctx->pc = 0x233B1Cu;
    SET_GPR_U32(ctx, 31, 0x233B24u);
    ctx->pc = 0x233B20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233B1Cu;
    // 0x233b20: 0x242021  addu        $a0, $at, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2334C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2334C0u, 0x233B1Cu, 0x233B24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233B24u;
label_233b24:
    // 0x233b24: 0x8f8482d0  lw          $a0, -0x7D30($gp)
    ctx->pc = 0x233b24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935248)));
    // 0x233b28: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x233b28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x233b2c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x233b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x233b30: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x233b30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x233b34: 0x3c010009  lui         $at, 0x9
    ctx->pc = 0x233b34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)9 << 16));
    // 0x233b38: 0x240821  addu        $at, $at, $a0
    ctx->pc = 0x233b38u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 4)));
    // 0x233b3c: 0xac231290  sw          $v1, 0x1290($at)
    ctx->pc = 0x233b3cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4752), GPR_U32(ctx, 3));
    ctx->pc = 0x233b40u;
}
