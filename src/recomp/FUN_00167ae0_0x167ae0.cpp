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

// Function: FUN_00167ae0
// Address: 0x167ae0 - 0x167b14
void FUN_00167ae0_0x167ae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00167ae0_0x167ae0");
#endif

    switch (ctx->pc) {
        case 0x167b08u: goto label_167b08;
        case 0x167b10u: goto label_167b10;
        default: break;
    }

    ctx->pc = 0x167ae0u;

    // 0x167ae0: 0x308b00ff  andi        $t3, $a0, 0xFF
    ctx->pc = 0x167ae0u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x167ae4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x167ae4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x167ae8: 0x3163001f  andi        $v1, $t3, 0x1F
    ctx->pc = 0x167ae8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)31);
    // 0x167aec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x167aecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x167af0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x167af0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x167af4: 0x621804  sllv        $v1, $v0, $v1
    ctx->pc = 0x167af4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x167af8: 0x8f8286b8  lw          $v0, -0x7948($gp)
    ctx->pc = 0x167af8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936248)));
    // 0x167afc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x167afcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x167b00: 0xc0592ec  jal         func_164BB0
    ctx->pc = 0x167B00u;
    SET_GPR_U32(ctx, 31, 0x167B08u);
    ctx->pc = 0x167B04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167B00u;
    // 0x167b04: 0xaf8286b8  sw          $v0, -0x7948($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936248), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x164BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164BB0u, 0x167B00u, 0x167B08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167B08u;
label_167b08:
    // 0x167b08: 0xc04f5bc  jal         func_13D6F0
    ctx->pc = 0x167B08u;
    SET_GPR_U32(ctx, 31, 0x167B10u);
    ctx->pc = 0x167B0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167B08u;
    // 0x167b0c: 0x160202d  daddu       $a0, $t3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13D6F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13D6F0u, 0x167B08u, 0x167B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167B10u;
label_167b10:
    // 0x167b10: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x167b10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x167b14u;
}
