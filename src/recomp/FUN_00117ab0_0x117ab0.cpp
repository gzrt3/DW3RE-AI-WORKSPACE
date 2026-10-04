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

// Function: FUN_00117ab0
// Address: 0x117ab0 - 0x117aec
void FUN_00117ab0_0x117ab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00117ab0_0x117ab0");
#endif

    switch (ctx->pc) {
        case 0x117ad0u: goto label_117ad0;
        default: break;
    }

    ctx->pc = 0x117ab0u;

    // 0x117ab0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x117ab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x117ab4: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x117ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x117ab8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x117ab8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x117abc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x117abcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x117ac0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x117ac0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x117ac4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x117ac4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117ac8: 0xc066e14  jal         func_19B850
    ctx->pc = 0x117AC8u;
    SET_GPR_U32(ctx, 31, 0x117AD0u);
    ctx->pc = 0x117ACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117AC8u;
    // 0x117acc: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B850u, 0x117AC8u, 0x117AD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117AD0u;
label_117ad0:
    // 0x117ad0: 0xdf868b78  ld          $a2, -0x7488($gp)
    ctx->pc = 0x117ad0u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 28), 4294937464)));
    // 0x117ad4: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x117ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
    // 0x117ad8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x117ad8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x117adc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x117adcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117ae0: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x117ae0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x117ae4: 0xc05c53c  jal         func_1714F0
    ctx->pc = 0x117AE4u;
    SET_GPR_U32(ctx, 31, 0x117AECu);
    ctx->pc = 0x117AE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117AE4u;
    // 0x117ae8: 0x2407001b  addiu       $a3, $zero, 0x1B (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1714F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1714F0u, 0x117AE4u, 0x117AECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117AECu;
}
