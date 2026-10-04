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

// Function: FUN_001461f0
// Address: 0x1461f0 - 0x14624c
void FUN_001461f0_0x1461f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001461f0_0x1461f0");
#endif

    switch (ctx->pc) {
        case 0x146204u: goto label_146204;
        case 0x146210u: goto label_146210;
        case 0x146218u: goto label_146218;
        case 0x146220u: goto label_146220;
        case 0x146228u: goto label_146228;
        case 0x146234u: goto label_146234;
        case 0x146248u: goto label_146248;
        default: break;
    }

    ctx->pc = 0x1461f0u;

    // 0x1461f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1461f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1461f4: 0x3c04002f  lui         $a0, 0x2F
    ctx->pc = 0x1461f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)47 << 16));
    // 0x1461f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1461f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1461fc: 0xc044ad0  jal         func_112B40
    ctx->pc = 0x1461FCu;
    SET_GPR_U32(ctx, 31, 0x146204u);
    ctx->pc = 0x146200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1461FCu;
    // 0x146200: 0x24842470  addiu       $a0, $a0, 0x2470 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9328));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112B40u, 0x1461FCu, 0x146204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146204u;
label_146204:
    // 0x146204: 0x3c04002f  lui         $a0, 0x2F
    ctx->pc = 0x146204u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)47 << 16));
    // 0x146208: 0xc044dd4  jal         func_113750
    ctx->pc = 0x146208u;
    SET_GPR_U32(ctx, 31, 0x146210u);
    ctx->pc = 0x14620Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x146208u;
    // 0x14620c: 0x24842490  addiu       $a0, $a0, 0x2490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x113750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113750u, 0x146208u, 0x146210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146210u;
label_146210:
    // 0x146210: 0xc08c2f0  jal         func_230BC0
    ctx->pc = 0x146210u;
    SET_GPR_U32(ctx, 31, 0x146218u);
    ctx->pc = 0x230BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230BC0u, 0x146210u, 0x146218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146218u;
label_146218:
    // 0x146218: 0xc0544a0  jal         func_151280
    ctx->pc = 0x146218u;
    SET_GPR_U32(ctx, 31, 0x146220u);
    ctx->pc = 0x151280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151280u, 0x146218u, 0x146220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146220u;
label_146220:
    // 0x146220: 0xc0656b0  jal         func_195AC0
    ctx->pc = 0x146220u;
    SET_GPR_U32(ctx, 31, 0x146228u);
    ctx->pc = 0x195AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x195AC0u, 0x146220u, 0x146228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146228u;
label_146228:
    // 0x146228: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x146228u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x14622c: 0xc040220  jal         func_100880
    ctx->pc = 0x14622Cu;
    SET_GPR_U32(ctx, 31, 0x146234u);
    ctx->pc = 0x146230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14622Cu;
    // 0x146230: 0x9024490d  lbu         $a0, 0x490D($at) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18701)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100880u, 0x14622Cu, 0x146234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146234u;
label_146234:
    // 0x146234: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x146234u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x146238: 0x9024490d  lbu         $a0, 0x490D($at)
    ctx->pc = 0x146238u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)FAST_READ8(0x33490Du));
    // 0x14623c: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x14623cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x146240: 0xc04e004  jal         func_138010
    ctx->pc = 0x146240u;
    SET_GPR_U32(ctx, 31, 0x146248u);
    ctx->pc = 0x146244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x146240u;
    // 0x146244: 0x9025490e  lbu         $a1, 0x490E($at) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18702)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x138010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138010u, 0x146240u, 0x146248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146248u;
label_146248:
    // 0x146248: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x146248u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x14624cu;
}
