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

// Function: FUN_00233be0
// Address: 0x233be0 - 0x233c24
void FUN_00233be0_0x233be0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00233be0_0x233be0");
#endif

    switch (ctx->pc) {
        case 0x233c08u: goto label_233c08;
        default: break;
    }

    ctx->pc = 0x233be0u;

    // 0x233be0: 0x8f8482d0  lw          $a0, -0x7D30($gp)
    ctx->pc = 0x233be0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935248)));
    // 0x233be4: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x233be4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x233be8: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x233be8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x233bec: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x233becu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233bf0: 0x3c010009  lui         $at, 0x9
    ctx->pc = 0x233bf0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)9 << 16));
    // 0x233bf4: 0x342111a0  ori         $at, $at, 0x11A0
    ctx->pc = 0x233bf4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4512);
    // 0x233bf8: 0x242021  addu        $a0, $at, $a0
    ctx->pc = 0x233bf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 4)));
    // 0x233bfc: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x233bfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x233c00: 0xc08cc62  jal         func_233188
    ctx->pc = 0x233C00u;
    SET_GPR_U32(ctx, 31, 0x233C08u);
    ctx->pc = 0x233C04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233C00u;
    // 0x233c04: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x233188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x233188u, 0x233C00u, 0x233C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233C08u;
label_233c08:
    // 0x233c08: 0xdfa30000  ld          $v1, 0x0($sp)
    ctx->pc = 0x233c08u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x233c0c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x233c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x233c10: 0xdfa40008  ld          $a0, 0x8($sp)
    ctx->pc = 0x233c10u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x233c14: 0xfe030008  sd          $v1, 0x8($s0)
    ctx->pc = 0x233c14u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 3));
    // 0x233c18: 0xfe040010  sd          $a0, 0x10($s0)
    ctx->pc = 0x233c18u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 16), GPR_U64(ctx, 4));
    // 0x233c1c: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x233c1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x233c20: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x233c20u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->pc = 0x233c24u;
}
