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

// Function: entry_00151ef0
// Address: 0x151ef0 - 0x151f18
void entry_00151ef0_0x151ef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00151ef0_0x151ef0");
#endif

    switch (ctx->pc) {
        case 0x151efcu: goto label_151efc;
        case 0x151f10u: goto label_151f10;
        default: break;
    }

    ctx->pc = 0x151ef0u;

    // 0x151ef0: 0x24850150  addiu       $a1, $a0, 0x150
    ctx->pc = 0x151ef0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 336));
    // 0x151ef4: 0xc066e26  jal         func_19B898
    ctx->pc = 0x151EF4u;
    SET_GPR_U32(ctx, 31, 0x151EFCu);
    ctx->pc = 0x151EF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151EF4u;
    // 0x151ef8: 0x260403b0  addiu       $a0, $s0, 0x3B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 944));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B898u, 0x151EF4u, 0x151EFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151EFCu;
label_151efc:
    // 0x151efc: 0x260403b0  addiu       $a0, $s0, 0x3B0
    ctx->pc = 0x151efcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 944));
    // 0x151f00: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x151f00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x151f04: 0x27a6005c  addiu       $a2, $sp, 0x5C
    ctx->pc = 0x151f04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x151f08: 0xc05f3d0  jal         func_17CF40
    ctx->pc = 0x151F08u;
    SET_GPR_U32(ctx, 31, 0x151F10u);
    ctx->pc = 0x151F0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151F08u;
    // 0x151f0c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17CF40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17CF40u, 0x151F08u, 0x151F10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151F10u;
label_151f10:
    // 0x151f10: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x151F10u;
    {
        const bool branch_taken_0x151f10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x151F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151F10u;
        // 0x151f14: 0xe60003bc  swc1        $f0, 0x3BC($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 956), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x151f10) {
            ctx->pc = 0x152020u;
            return;
        }
    }
    ctx->pc = 0x151F18u;
}
