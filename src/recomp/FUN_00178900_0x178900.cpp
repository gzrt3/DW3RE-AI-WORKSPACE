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

// Function: FUN_00178900
// Address: 0x178900 - 0x178974
void FUN_00178900_0x178900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00178900_0x178900");
#endif

    switch (ctx->pc) {
        case 0x17891cu: goto label_17891c;
        case 0x17892cu: goto label_17892c;
        case 0x17894cu: goto label_17894c;
        case 0x17895cu: goto label_17895c;
        case 0x178968u: goto label_178968;
        case 0x178970u: goto label_178970;
        default: break;
    }

    ctx->pc = 0x178900u;

    // 0x178900: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x178900u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x178904: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x178904u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x178908: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x178908u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x17890c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x17890cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178910: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x178910u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x178914: 0xc05f538  jal         func_17D4E0
    ctx->pc = 0x178914u;
    SET_GPR_U32(ctx, 31, 0x17891Cu);
    ctx->pc = 0x178918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178914u;
    // 0x178918: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17D4E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D4E0u, 0x178914u, 0x17891Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17891Cu;
label_17891c:
    // 0x17891c: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x17891Cu;
    {
        const bool branch_taken_0x17891c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x178920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17891Cu;
        // 0x178920: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17891c) {
            ctx->pc = 0x178970u;
            goto label_178970;
        }
    }
    ctx->pc = 0x178924u;
    // 0x178924: 0xc040058  jal         func_100160
    ctx->pc = 0x178924u;
    SET_GPR_U32(ctx, 31, 0x17892Cu);
    ctx->pc = 0x100160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100160u, 0x178924u, 0x17892Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17892Cu;
label_17892c:
    // 0x17892c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x17892cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x178930: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x178930u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x178934: 0x8c233ffc  lw          $v1, 0x3FFC($at)
    ctx->pc = 0x178934u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x70003FFCu));
    // 0x178938: 0x24421e00  addiu       $v0, $v0, 0x1E00
    ctx->pc = 0x178938u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7680));
    // 0x17893c: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x17893cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x178940: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x178940u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x178944: 0xc05eac8  jal         func_17AB20
    ctx->pc = 0x178944u;
    SET_GPR_U32(ctx, 31, 0x17894Cu);
    ctx->pc = 0x178948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178944u;
    // 0x178948: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17AB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17AB20u, 0x178944u, 0x17894Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17894Cu;
label_17894c:
    // 0x17894c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17894cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178950: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x178950u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178954: 0xc05eaf0  jal         func_17ABC0
    ctx->pc = 0x178954u;
    SET_GPR_U32(ctx, 31, 0x17895Cu);
    ctx->pc = 0x178958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178954u;
    // 0x178958: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17ABC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17ABC0u, 0x178954u, 0x17895Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17895Cu;
label_17895c:
    // 0x17895c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17895cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178960: 0xc05ea7c  jal         func_17A9F0
    ctx->pc = 0x178960u;
    SET_GPR_U32(ctx, 31, 0x178968u);
    ctx->pc = 0x178964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178960u;
    // 0x178964: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A9F0u, 0x178960u, 0x178968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178968u;
label_178968:
    // 0x178968: 0xc05f4d8  jal         func_17D360
    ctx->pc = 0x178968u;
    SET_GPR_U32(ctx, 31, 0x178970u);
    ctx->pc = 0x17896Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178968u;
    // 0x17896c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17D360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D360u, 0x178968u, 0x178970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178970u;
label_178970:
    // 0x178970: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x178970u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->pc = 0x178974u;
}
