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

// Function: FUN_00192a90
// Address: 0x192a90 - 0x192ab4
void FUN_00192a90_0x192a90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00192a90_0x192a90");
#endif

    switch (ctx->pc) {
        case 0x192aa4u: goto label_192aa4;
        default: break;
    }

    ctx->pc = 0x192a90u;

    // 0x192a90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x192a90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x192a94: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x192a94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x192a98: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x192a98u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x192a9c: 0xc06d448  jal         func_1B5120
    ctx->pc = 0x192A9Cu;
    SET_GPR_U32(ctx, 31, 0x192AA4u);
    ctx->pc = 0x192AA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192A9Cu;
    // 0x192aa0: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B5120u, 0x192A9Cu, 0x192AA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192AA4u;
label_192aa4:
    // 0x192aa4: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x192aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x192aa8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x192aa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x192aac: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x192aacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x192ab0: 0x0  nop
    ctx->pc = 0x192ab0u;
    // NOP
    ctx->pc = 0x192ab4u;
}
