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

// Function: FUN_002132c0
// Address: 0x2132c0 - 0x213340
void FUN_002132c0_0x2132c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_002132c0_0x2132c0");
#endif

    switch (ctx->pc) {
        case 0x2132d0u: goto label_2132d0;
        case 0x2132d8u: goto label_2132d8;
        case 0x2132f0u: goto label_2132f0;
        case 0x213314u: goto label_213314;
        default: break;
    }

    ctx->pc = 0x2132c0u;

    // 0x2132c0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2132c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2132c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2132c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2132c8: 0xc084d84  jal         func_213610
    ctx->pc = 0x2132C8u;
    SET_GPR_U32(ctx, 31, 0x2132D0u);
    ctx->pc = 0x213610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x213610u, 0x2132C8u, 0x2132D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2132D0u;
label_2132d0:
    // 0x2132d0: 0xc066e44  jal         func_19B910
    ctx->pc = 0x2132D0u;
    SET_GPR_U32(ctx, 31, 0x2132D8u);
    ctx->pc = 0x2132D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2132D0u;
    // 0x2132d4: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B910u, 0x2132D0u, 0x2132D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2132D8u;
label_2132d8:
    // 0x2132d8: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x2132d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x2132dc: 0x3c060029  lui         $a2, 0x29
    ctx->pc = 0x2132dcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)41 << 16));
    // 0x2132e0: 0x248477d0  addiu       $a0, $a0, 0x77D0
    ctx->pc = 0x2132e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30672));
    // 0x2132e4: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x2132e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2132e8: 0xc066eea  jal         func_19BBA8
    ctx->pc = 0x2132E8u;
    SET_GPR_U32(ctx, 31, 0x2132F0u);
    ctx->pc = 0x2132ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2132E8u;
    // 0x2132ec: 0x24c6d5e0  addiu       $a2, $a2, -0x2A20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294956512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BBA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BBA8u, 0x2132E8u, 0x2132F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2132F0u;
label_2132f0:
    // 0x2132f0: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x2132f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x2132f4: 0x3c050029  lui         $a1, 0x29
    ctx->pc = 0x2132f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)41 << 16));
    // 0x2132f8: 0x3c060029  lui         $a2, 0x29
    ctx->pc = 0x2132f8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)41 << 16));
    // 0x2132fc: 0x3c070029  lui         $a3, 0x29
    ctx->pc = 0x2132fcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)41 << 16));
    // 0x213300: 0x24847790  addiu       $a0, $a0, 0x7790
    ctx->pc = 0x213300u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30608));
    // 0x213304: 0x24a5d600  addiu       $a1, $a1, -0x2A00
    ctx->pc = 0x213304u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956544));
    // 0x213308: 0x24c6d610  addiu       $a2, $a2, -0x29F0
    ctx->pc = 0x213308u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294956560));
    // 0x21330c: 0xc066f34  jal         func_19BCD0
    ctx->pc = 0x21330Cu;
    SET_GPR_U32(ctx, 31, 0x213314u);
    ctx->pc = 0x213310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21330Cu;
    // 0x213310: 0x24e7d620  addiu       $a3, $a3, -0x29E0 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294956576));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BCD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BCD0u, 0x21330Cu, 0x213314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213314u;
label_213314:
    // 0x213314: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x213314u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x213318: 0x3c050029  lui         $a1, 0x29
    ctx->pc = 0x213318u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)41 << 16));
    // 0x21331c: 0x3c060029  lui         $a2, 0x29
    ctx->pc = 0x21331cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)41 << 16));
    // 0x213320: 0x3c070029  lui         $a3, 0x29
    ctx->pc = 0x213320u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)41 << 16));
    // 0x213324: 0x3c080029  lui         $t0, 0x29
    ctx->pc = 0x213324u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)41 << 16));
    // 0x213328: 0x24847750  addiu       $a0, $a0, 0x7750
    ctx->pc = 0x213328u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30544));
    // 0x21332c: 0x24a5d630  addiu       $a1, $a1, -0x29D0
    ctx->pc = 0x21332cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956592));
    // 0x213330: 0x24c6d640  addiu       $a2, $a2, -0x29C0
    ctx->pc = 0x213330u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294956608));
    // 0x213334: 0x24e7d650  addiu       $a3, $a3, -0x29B0
    ctx->pc = 0x213334u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294956624));
    // 0x213338: 0xc066f64  jal         func_19BD90
    ctx->pc = 0x213338u;
    SET_GPR_U32(ctx, 31, 0x213340u);
    ctx->pc = 0x21333Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213338u;
    // 0x21333c: 0x2508d660  addiu       $t0, $t0, -0x29A0 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294956640));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BD90u, 0x213338u, 0x213340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213340u;
}
