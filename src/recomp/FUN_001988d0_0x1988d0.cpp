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

// Function: FUN_001988d0
// Address: 0x1988d0 - 0x198918
void FUN_001988d0_0x1988d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001988d0_0x1988d0");
#endif

    switch (ctx->pc) {
        case 0x198900u: goto label_198900;
        default: break;
    }

    ctx->pc = 0x1988d0u;

    // 0x1988d0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1988d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1988d4: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x1988d4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x1988d8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1988d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1988dc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1988dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1988e0: 0x48c00  sll         $s1, $a0, 16
    ctx->pc = 0x1988e0u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x1988e4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1988e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1988e8: 0x58400  sll         $s0, $a1, 16
    ctx->pc = 0x1988e8u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x1988ec: 0x108403  sra         $s0, $s0, 16
    ctx->pc = 0x1988ecu;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 16));
    // 0x1988f0: 0x118c03  sra         $s1, $s1, 16
    ctx->pc = 0x1988f0u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 17), 16));
    // 0x1988f4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1988f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1988f8: 0xc06614a  jal         func_198528
    ctx->pc = 0x1988F8u;
    SET_GPR_U32(ctx, 31, 0x198900u);
    ctx->pc = 0x1988FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1988F8u;
    // 0x1988fc: 0x69403  sra         $s2, $a2, 16 (Delay Slot)
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 6), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x198528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x198528u, 0x1988F8u, 0x198900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198900u;
label_198900:
    // 0x198900: 0x2603003f  addiu       $v1, $s0, 0x3F
    ctx->pc = 0x198900u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 63));
    // 0x198904: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x198904u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198908: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x198908u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x19890c: 0x2610007e  addiu       $s0, $s0, 0x7E
    ctx->pc = 0x19890cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 126));
    // 0x198910: 0x83102a  slt         $v0, $a0, $v1
    ctx->pc = 0x198910u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x198914: 0x32310002  andi        $s1, $s1, 0x2
    ctx->pc = 0x198914u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)2);
    ctx->pc = 0x198918u;
}
