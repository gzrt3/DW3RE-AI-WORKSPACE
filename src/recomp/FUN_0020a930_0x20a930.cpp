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

// Function: FUN_0020a930
// Address: 0x20a930 - 0x20a9ac
void FUN_0020a930_0x20a930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0020a930_0x20a930");
#endif

    switch (ctx->pc) {
        case 0x20a950u: goto label_20a950;
        case 0x20a998u: goto label_20a998;
        case 0x20a9a8u: goto label_20a9a8;
        default: break;
    }

    ctx->pc = 0x20a930u;

    // 0x20a930: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x20a930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x20a934: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x20a934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x20a938: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x20a938u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x20a93c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x20a93cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x20a940: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x20a940u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a944: 0xaf91910c  sw          $s1, -0x6EF4($gp)
    ctx->pc = 0x20a944u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938892), GPR_U32(ctx, 17));
    // 0x20a948: 0xc082b64  jal         func_20AD90
    ctx->pc = 0x20A948u;
    SET_GPR_U32(ctx, 31, 0x20A950u);
    ctx->pc = 0x20A94Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A948u;
    // 0x20a94c: 0x241000ab  addiu       $s0, $zero, 0xAB (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 171));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20AD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20AD90u, 0x20A948u, 0x20A950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A950u;
label_20a950:
    // 0x20a950: 0x2a21001e  slti        $at, $s1, 0x1E
    ctx->pc = 0x20a950u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)30) ? 1 : 0);
    // 0x20a954: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x20A954u;
    {
        const bool branch_taken_0x20a954 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x20A958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A954u;
        // 0x20a958: 0x2a0100ab  slti        $at, $s0, 0xAB (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)171) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a954) {
            ctx->pc = 0x20A978u;
            goto label_20a978;
        }
    }
    ctx->pc = 0x20A95Cu;
    // 0x20a95c: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x20a95cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x20a960: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x20a960u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x20a964: 0x2442fc60  addiu       $v0, $v0, -0x3A0
    ctx->pc = 0x20a964u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966368));
    // 0x20a968: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x20a968u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x20a96c: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x20a96cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20a970: 0x0  nop
    ctx->pc = 0x20a970u;
    // NOP
    // 0x20a974: 0x2a0100ab  slti        $at, $s0, 0xAB
    ctx->pc = 0x20a974u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)171) ? 1 : 0);
label_20a978:
    // 0x20a978: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x20A978u;
    {
        const bool branch_taken_0x20a978 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x20A97Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A978u;
        // 0x20a97c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a978) {
            ctx->pc = 0x20A9A0u;
            goto label_20a9a0;
        }
    }
    ctx->pc = 0x20A980u;
    // 0x20a980: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x20a980u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x20a984: 0x240601a0  addiu       $a2, $zero, 0x1A0
    ctx->pc = 0x20a984u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 416));
    // 0x20a988: 0x24070030  addiu       $a3, $zero, 0x30
    ctx->pc = 0x20a988u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x20a98c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x20a98cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a990: 0xc07fadc  jal         func_1FEB70
    ctx->pc = 0x20A990u;
    SET_GPR_U32(ctx, 31, 0x20A998u);
    ctx->pc = 0x20A994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A990u;
    // 0x20a994: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FEB70u, 0x20A990u, 0x20A998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A998u;
label_20a998:
    // 0x20a998: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x20A998u;
    {
        const bool branch_taken_0x20a998 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20A99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A998u;
        // 0x20a99c: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a998) {
            ctx->pc = 0x20A9ACu;
            return;
        }
    }
    ctx->pc = 0x20A9A0u;
label_20a9a0:
    // 0x20a9a0: 0xc07fa38  jal         func_1FE8E0
    ctx->pc = 0x20A9A0u;
    SET_GPR_U32(ctx, 31, 0x20A9A8u);
    ctx->pc = 0x1FE8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE8E0u, 0x20A9A0u, 0x20A9A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A9A8u;
label_20a9a8:
    // 0x20a9a8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x20a9a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->pc = 0x20a9acu;
}
