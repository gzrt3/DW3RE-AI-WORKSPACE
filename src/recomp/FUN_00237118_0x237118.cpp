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

// Function: FUN_00237118
// Address: 0x237118 - 0x237150
void FUN_00237118_0x237118(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00237118_0x237118");
#endif

    switch (ctx->pc) {
        case 0x237128u: goto label_237128;
        case 0x237130u: goto label_237130;
        case 0x237144u: goto label_237144;
        default: break;
    }

    ctx->pc = 0x237118u;

    // 0x237118: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x237118u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x23711c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23711cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x237120: 0xc08f1ac  jal         func_23C6B0
    ctx->pc = 0x237120u;
    SET_GPR_U32(ctx, 31, 0x237128u);
    ctx->pc = 0x237124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237120u;
    // 0x237124: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23C6B0u, 0x237120u, 0x237128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237128u;
label_237128:
    // 0x237128: 0xc04002e  jal         func_1000B8
    ctx->pc = 0x237128u;
    SET_GPR_U32(ctx, 31, 0x237130u);
    ctx->pc = 0x23712Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237128u;
    // 0x23712c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1000B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1000B8u, 0x237128u, 0x237130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237130u;
label_237130:
    // 0x237130: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x237130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x237134: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x237134u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237138: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x237138u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x23713c: 0xc08f5fc  jal         func_23D7F0
    ctx->pc = 0x23713Cu;
    SET_GPR_U32(ctx, 31, 0x237144u);
    ctx->pc = 0x237140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23713Cu;
    // 0x237140: 0x2406000a  addiu       $a2, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23D7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D7F0u, 0x23713Cu, 0x237144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237144u;
label_237144:
    // 0x237144: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x237144u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x237148: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x237148u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x23714c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x23714cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    ctx->pc = 0x237150u;
}
