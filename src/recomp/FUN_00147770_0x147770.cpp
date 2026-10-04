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

// Function: FUN_00147770
// Address: 0x147770 - 0x1477f8
void FUN_00147770_0x147770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00147770_0x147770");
#endif

    switch (ctx->pc) {
        case 0x14778cu: goto label_14778c;
        case 0x147794u: goto label_147794;
        case 0x14779cu: goto label_14779c;
        case 0x1477a4u: goto label_1477a4;
        case 0x1477acu: goto label_1477ac;
        case 0x1477b4u: goto label_1477b4;
        case 0x1477bcu: goto label_1477bc;
        case 0x1477e8u: goto label_1477e8;
        case 0x1477f0u: goto label_1477f0;
        default: break;
    }

    ctx->pc = 0x147770u;

    // 0x147770: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x147770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x147774: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x147774u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x147778: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x147778u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x14777c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x14777cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x147780: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x147780u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147784: 0xc05ffa4  jal         func_17FE90
    ctx->pc = 0x147784u;
    SET_GPR_U32(ctx, 31, 0x14778Cu);
    ctx->pc = 0x147788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x147784u;
    // 0x147788: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17FE90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17FE90u, 0x147784u, 0x14778Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14778Cu;
label_14778c:
    // 0x14778c: 0xc06076c  jal         func_181DB0
    ctx->pc = 0x14778Cu;
    SET_GPR_U32(ctx, 31, 0x147794u);
    ctx->pc = 0x181DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181DB0u, 0x14778Cu, 0x147794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147794u;
label_147794:
    // 0x147794: 0xc045000  jal         func_114000
    ctx->pc = 0x147794u;
    SET_GPR_U32(ctx, 31, 0x14779Cu);
    ctx->pc = 0x114000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114000u, 0x147794u, 0x14779Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14779Cu;
label_14779c:
    // 0x14779c: 0xc053238  jal         func_14C8E0
    ctx->pc = 0x14779Cu;
    SET_GPR_U32(ctx, 31, 0x1477A4u);
    ctx->pc = 0x14C8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14C8E0u, 0x14779Cu, 0x1477A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1477A4u;
label_1477a4:
    // 0x1477a4: 0xc058fdc  jal         func_163F70
    ctx->pc = 0x1477A4u;
    SET_GPR_U32(ctx, 31, 0x1477ACu);
    ctx->pc = 0x163F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163F70u, 0x1477A4u, 0x1477ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1477ACu;
label_1477ac:
    // 0x1477ac: 0xc058fbc  jal         func_163EF0
    ctx->pc = 0x1477ACu;
    SET_GPR_U32(ctx, 31, 0x1477B4u);
    ctx->pc = 0x163EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163EF0u, 0x1477ACu, 0x1477B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1477B4u;
label_1477b4:
    // 0x1477b4: 0xc0756f8  jal         func_1D5BE0
    ctx->pc = 0x1477B4u;
    SET_GPR_U32(ctx, 31, 0x1477BCu);
    ctx->pc = 0x1D5BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5BE0u, 0x1477B4u, 0x1477BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1477BCu;
label_1477bc:
    // 0x1477bc: 0x2a210015  slti        $at, $s1, 0x15
    ctx->pc = 0x1477bcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)21) ? 1 : 0);
    // 0x1477c0: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1477C0u;
    {
        const bool branch_taken_0x1477c0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1477c0) {
            ctx->pc = 0x1477CCu;
            goto label_1477cc;
        }
    }
    ctx->pc = 0x1477C8u;
    // 0x1477c8: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x1477c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1477cc:
    // 0x1477cc: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1477CCu;
    {
        const bool branch_taken_0x1477cc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1477cc) {
            ctx->pc = 0x1477E0u;
            goto label_1477e0;
        }
    }
    ctx->pc = 0x1477D4u;
    // 0x1477d4: 0x8f828588  lw          $v0, -0x7A78($gp)
    ctx->pc = 0x1477d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935944)));
    // 0x1477d8: 0x34426000  ori         $v0, $v0, 0x6000
    ctx->pc = 0x1477d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)24576);
    // 0x1477dc: 0xaf828588  sw          $v0, -0x7A78($gp)
    ctx->pc = 0x1477dcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935944), GPR_U32(ctx, 2));
label_1477e0:
    // 0x1477e0: 0xc055478  jal         func_1551E0
    ctx->pc = 0x1477E0u;
    SET_GPR_U32(ctx, 31, 0x1477E8u);
    ctx->pc = 0x1551E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1551E0u, 0x1477E0u, 0x1477E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1477E8u;
label_1477e8:
    // 0x1477e8: 0xc064718  jal         func_191C60
    ctx->pc = 0x1477E8u;
    SET_GPR_U32(ctx, 31, 0x1477F0u);
    ctx->pc = 0x191C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191C60u, 0x1477E8u, 0x1477F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1477F0u;
label_1477f0:
    // 0x1477f0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1477f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1477f4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1477f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->pc = 0x1477f8u;
}
