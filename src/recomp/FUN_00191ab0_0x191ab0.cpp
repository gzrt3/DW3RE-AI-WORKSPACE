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

// Function: FUN_00191ab0
// Address: 0x191ab0 - 0x191af4
void FUN_00191ab0_0x191ab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00191ab0_0x191ab0");
#endif

    switch (ctx->pc) {
        case 0x191ae4u: goto label_191ae4;
        case 0x191af0u: goto label_191af0;
        default: break;
    }

    ctx->pc = 0x191ab0u;

    // 0x191ab0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x191ab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x191ab4: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x191ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x191ab8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x191ab8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x191abc: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x191abcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
    // 0x191ac0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x191ac0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x191ac4: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x191ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x191ac8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x191ac8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191acc: 0x24422cc0  addiu       $v0, $v0, 0x2CC0
    ctx->pc = 0x191accu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11456));
    // 0x191ad0: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x191ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x191ad4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x191ad4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191ad8: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x191ad8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x191adc: 0xc066d98  jal         func_19B660
    ctx->pc = 0x191ADCu;
    SET_GPR_U32(ctx, 31, 0x191AE4u);
    ctx->pc = 0x191AE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191ADCu;
    // 0x191ae0: 0x24a60010  addiu       $a2, $a1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B660u, 0x191ADCu, 0x191AE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191AE4u;
label_191ae4:
    // 0x191ae4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x191ae4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191ae8: 0xc066daa  jal         func_19B6A8
    ctx->pc = 0x191AE8u;
    SET_GPR_U32(ctx, 31, 0x191AF0u);
    ctx->pc = 0x191AECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191AE8u;
    // 0x191aec: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B6A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B6A8u, 0x191AE8u, 0x191AF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191AF0u;
label_191af0:
    // 0x191af0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x191af0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->pc = 0x191af4u;
}
