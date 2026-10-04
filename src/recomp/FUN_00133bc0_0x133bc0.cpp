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

// Function: FUN_00133bc0
// Address: 0x133bc0 - 0x133c18
void FUN_00133bc0_0x133bc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00133bc0_0x133bc0");
#endif

    switch (ctx->pc) {
        case 0x133be0u: goto label_133be0;
        case 0x133bf0u: goto label_133bf0;
        case 0x133c04u: goto label_133c04;
        default: break;
    }

    ctx->pc = 0x133bc0u;

    // 0x133bc0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x133bc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x133bc4: 0x3c040031  lui         $a0, 0x31
    ctx->pc = 0x133bc4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49 << 16));
    // 0x133bc8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x133bc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x133bcc: 0x2484a3f0  addiu       $a0, $a0, -0x5C10
    ctx->pc = 0x133bccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943728));
    // 0x133bd0: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x133bd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x133bd4: 0x27a6003c  addiu       $a2, $sp, 0x3C
    ctx->pc = 0x133bd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x133bd8: 0xc04cf10  jal         func_133C40
    ctx->pc = 0x133BD8u;
    SET_GPR_U32(ctx, 31, 0x133BE0u);
    ctx->pc = 0x133BDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133BD8u;
    // 0x133bdc: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x133C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x133C40u, 0x133BD8u, 0x133BE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133BE0u;
label_133be0:
    // 0x133be0: 0xc7b4003c  lwc1        $f20, 0x3C($sp)
    ctx->pc = 0x133be0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x133be4: 0x3c040031  lui         $a0, 0x31
    ctx->pc = 0x133be4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49 << 16));
    // 0x133be8: 0xc066e44  jal         func_19B910
    ctx->pc = 0x133BE8u;
    SET_GPR_U32(ctx, 31, 0x133BF0u);
    ctx->pc = 0x133BECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133BE8u;
    // 0x133bec: 0x2484a460  addiu       $a0, $a0, -0x5BA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B910u, 0x133BE8u, 0x133BF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133BF0u;
label_133bf0:
    // 0x133bf0: 0x3c040031  lui         $a0, 0x31
    ctx->pc = 0x133bf0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49 << 16));
    // 0x133bf4: 0x2484a460  addiu       $a0, $a0, -0x5BA0
    ctx->pc = 0x133bf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943840));
    // 0x133bf8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x133bf8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x133bfc: 0xc066ec0  jal         func_19BB00
    ctx->pc = 0x133BFCu;
    SET_GPR_U32(ctx, 31, 0x133C04u);
    ctx->pc = 0x133C00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133BFCu;
    // 0x133c00: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BB00u, 0x133BFCu, 0x133C04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133C04u;
label_133c04:
    // 0x133c04: 0x3c040031  lui         $a0, 0x31
    ctx->pc = 0x133c04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49 << 16));
    // 0x133c08: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x133c08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x133c0c: 0x2484a460  addiu       $a0, $a0, -0x5BA0
    ctx->pc = 0x133c0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943840));
    // 0x133c10: 0xc066e1a  jal         func_19B868
    ctx->pc = 0x133C10u;
    SET_GPR_U32(ctx, 31, 0x133C18u);
    ctx->pc = 0x133C14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133C10u;
    // 0x133c14: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B868u, 0x133C10u, 0x133C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133C18u;
}
