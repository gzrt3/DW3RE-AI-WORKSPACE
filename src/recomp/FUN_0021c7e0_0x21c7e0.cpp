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

// Function: FUN_0021c7e0
// Address: 0x21c7e0 - 0x21c84c
void FUN_0021c7e0_0x21c7e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0021c7e0_0x21c7e0");
#endif

    switch (ctx->pc) {
        case 0x21c804u: goto label_21c804;
        case 0x21c810u: goto label_21c810;
        case 0x21c818u: goto label_21c818;
        case 0x21c820u: goto label_21c820;
        case 0x21c82cu: goto label_21c82c;
        case 0x21c834u: goto label_21c834;
        case 0x21c83cu: goto label_21c83c;
        default: break;
    }

    ctx->pc = 0x21c7e0u;

    // 0x21c7e0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x21c7e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x21c7e4: 0x3c04002f  lui         $a0, 0x2F
    ctx->pc = 0x21c7e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)47 << 16));
    // 0x21c7e8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x21c7e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x21c7ec: 0x24842470  addiu       $a0, $a0, 0x2470
    ctx->pc = 0x21c7ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9328));
    // 0x21c7f0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x21c7f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x21c7f4: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x21c7f4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x21c7f8: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x21c7f8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x21c7fc: 0xc044a9c  jal         func_112A70
    ctx->pc = 0x21C7FCu;
    SET_GPR_U32(ctx, 31, 0x21C804u);
    ctx->pc = 0x21C800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C7FCu;
    // 0x21c800: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x112A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112A70u, 0x21C7FCu, 0x21C804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C804u;
label_21c804:
    // 0x21c804: 0x3c04002f  lui         $a0, 0x2F
    ctx->pc = 0x21c804u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)47 << 16));
    // 0x21c808: 0xc044bf4  jal         func_112FD0
    ctx->pc = 0x21C808u;
    SET_GPR_U32(ctx, 31, 0x21C810u);
    ctx->pc = 0x21C80Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C808u;
    // 0x21c80c: 0x24842490  addiu       $a0, $a0, 0x2490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112FD0u, 0x21C808u, 0x21C810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C810u;
label_21c810:
    // 0x21c810: 0xc0655bc  jal         func_1956F0
    ctx->pc = 0x21C810u;
    SET_GPR_U32(ctx, 31, 0x21C818u);
    ctx->pc = 0x1956F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1956F0u, 0x21C810u, 0x21C818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C818u;
label_21c818:
    // 0x21c818: 0xc045924  jal         func_116490
    ctx->pc = 0x21C818u;
    SET_GPR_U32(ctx, 31, 0x21C820u);
    ctx->pc = 0x116490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116490u, 0x21C818u, 0x21C820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C820u;
label_21c820:
    // 0x21c820: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x21c820u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x21c824: 0xc0456d4  jal         func_115B50
    ctx->pc = 0x21C824u;
    SET_GPR_U32(ctx, 31, 0x21C82Cu);
    ctx->pc = 0x21C828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C824u;
    // 0x21c828: 0x24843c00  addiu       $a0, $a0, 0x3C00 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x115B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115B50u, 0x21C824u, 0x21C82Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C82Cu;
label_21c82c:
    // 0x21c82c: 0xc045b68  jal         func_116DA0
    ctx->pc = 0x21C82Cu;
    SET_GPR_U32(ctx, 31, 0x21C834u);
    ctx->pc = 0x116DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116DA0u, 0x21C82Cu, 0x21C834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C834u;
label_21c834:
    // 0x21c834: 0xc045a80  jal         func_116A00
    ctx->pc = 0x21C834u;
    SET_GPR_U32(ctx, 31, 0x21C83Cu);
    ctx->pc = 0x116A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116A00u, 0x21C834u, 0x21C83Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C83Cu;
label_21c83c:
    // 0x21c83c: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x21c83cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
    // 0x21c840: 0x3c090029  lui         $t1, 0x29
    ctx->pc = 0x21c840u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)41 << 16));
    // 0x21c844: 0x2442d8e0  addiu       $v0, $v0, -0x2720
    ctx->pc = 0x21c844u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957280));
    // 0x21c848: 0x3c070029  lui         $a3, 0x29
    ctx->pc = 0x21c848u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)41 << 16));
    ctx->pc = 0x21c84cu;
}
