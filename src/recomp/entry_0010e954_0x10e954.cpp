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

// Function: entry_0010e954
// Address: 0x10e954 - 0x10e9b4
void entry_0010e954_0x10e954(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010e954_0x10e954");
#endif

    switch (ctx->pc) {
        case 0x10e960u: goto label_10e960;
        case 0x10e98cu: goto label_10e98c;
        default: break;
    }

    ctx->pc = 0x10e954u;

label_10e954:
    // 0x10e954: 0x8f8284d0  lw          $v0, -0x7B30($gp)
    ctx->pc = 0x10e954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935760)));
    // 0x10e958: 0xc06ff60  jal         func_1BFD80
    ctx->pc = 0x10E958u;
    SET_GPR_U32(ctx, 31, 0x10E960u);
    ctx->pc = 0x10E95Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E958u;
    // 0x10e95c: 0x512021  addu        $a0, $v0, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BFD80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BFD80u, 0x10E958u, 0x10E960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E960u;
label_10e960:
    // 0x10e960: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x10e960u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x10e964: 0x26310290  addiu       $s1, $s1, 0x290
    ctx->pc = 0x10e964u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 656));
    // 0x10e968: 0x2a020080  slti        $v0, $s0, 0x80
    ctx->pc = 0x10e968u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x10e96c: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x10E96Cu;
    {
        const bool branch_taken_0x10e96c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10e96c) {
            ctx->pc = 0x10E954u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10e954;
        }
    }
    ctx->pc = 0x10E974u;
    // 0x10e974: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x10e974u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x10e978: 0x90224af0  lbu         $v0, 0x4AF0($at)
    ctx->pc = 0x10e978u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x334AF0u));
    // 0x10e97c: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x10E97Cu;
    {
        const bool branch_taken_0x10e97c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E97Cu;
        // 0x10e980: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e97c) {
            ctx->pc = 0x10EA2Cu;
            return;
        }
    }
    ctx->pc = 0x10E984u;
    // 0x10e984: 0xc06ea8c  jal         func_1BAA30
    ctx->pc = 0x10E984u;
    SET_GPR_U32(ctx, 31, 0x10E98Cu);
    ctx->pc = 0x10E988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E984u;
    // 0x10e988: 0x9024490d  lbu         $a0, 0x490D($at) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18701)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BAA30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BAA30u, 0x10E984u, 0x10E98Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E98Cu;
label_10e98c:
    // 0x10e98c: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x10e98cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x10e990: 0x8f82863c  lw          $v0, -0x79C4($gp)
    ctx->pc = 0x10e990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936124)));
    // 0x10e994: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x10E994u;
    {
        const bool branch_taken_0x10e994 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E994u;
        // 0x10e998: 0x9023490d  lbu         $v1, 0x490D($at) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18701)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e994) {
            ctx->pc = 0x10E9B4u;
            return;
        }
    }
    ctx->pc = 0x10E99Cu;
    // 0x10e99c: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x10e99cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x10e9a0: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x10e9a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x10e9a4: 0x2442f300  addiu       $v0, $v0, -0xD00
    ctx->pc = 0x10e9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963968));
    // 0x10e9a8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x10e9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x10e9ac: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x10E9ACu;
    {
        const bool branch_taken_0x10e9ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E9ACu;
        // 0x10e9b0: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e9ac) {
            ctx->pc = 0x10E9CCu;
            return;
        }
    }
    ctx->pc = 0x10E9B4u;
}
