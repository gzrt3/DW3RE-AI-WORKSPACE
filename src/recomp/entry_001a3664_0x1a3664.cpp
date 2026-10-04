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

// Function: entry_001a3664
// Address: 0x1a3664 - 0x1a36c0
void entry_001a3664_0x1a3664(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a3664_0x1a3664");
#endif

    switch (ctx->pc) {
        case 0x1a3670u: goto label_1a3670;
        case 0x1a3694u: goto label_1a3694;
        case 0x1a36a4u: goto label_1a36a4;
        case 0x1a36b0u: goto label_1a36b0;
        case 0x1a36b8u: goto label_1a36b8;
        default: break;
    }

    ctx->pc = 0x1a3664u;

    // 0x1a3664: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a3664u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3668: 0xc067dd2  jal         func_19F748
    ctx->pc = 0x1A3668u;
    SET_GPR_U32(ctx, 31, 0x1A3670u);
    ctx->pc = 0x1A366Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3668u;
    // 0x1a366c: 0x2405001e  addiu       $a1, $zero, 0x1E (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F748u, 0x1A3668u, 0x1A3670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3670u;
label_1a3670:
    // 0x1a3670: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1a3670u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3674: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a3674u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3678: 0x31042  srl         $v0, $v1, 1
    ctx->pc = 0x1a3678u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x1a367c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1a367cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a3680: 0x31b02  srl         $v1, $v1, 12
    ctx->pc = 0x1a3680u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 12));
    // 0x1a3684: 0x304203ff  andi        $v0, $v0, 0x3FF
    ctx->pc = 0x1a3684u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1023);
    // 0x1a3688: 0xae030134  sw          $v1, 0x134($s0)
    ctx->pc = 0x1a3688u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 308), GPR_U32(ctx, 3));
    // 0x1a368c: 0xc067dd2  jal         func_19F748
    ctx->pc = 0x1A368Cu;
    SET_GPR_U32(ctx, 31, 0x1A3694u);
    ctx->pc = 0x1A3690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A368Cu;
    // 0x1a3690: 0xae020138  sw          $v0, 0x138($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 312), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F748u, 0x1A368Cu, 0x1A3694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3694u;
label_1a3694:
    // 0x1a3694: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1A3694u;
    {
        const bool branch_taken_0x1a3694 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3694u;
        // 0x1a3698: 0xae020840  sw          $v0, 0x840($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2112), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3694) {
            ctx->pc = 0x1A36C0u;
            return;
        }
    }
    ctx->pc = 0x1A369Cu;
    // 0x1a369c: 0xc067ca0  jal         func_19F280
    ctx->pc = 0x1A369Cu;
    SET_GPR_U32(ctx, 31, 0x1A36A4u);
    ctx->pc = 0x1A36A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A369Cu;
    // 0x1a36a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F280u, 0x1A369Cu, 0x1A36A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A36A4u;
label_1a36a4:
    // 0x1a36a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a36a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a36a8: 0xc067c94  jal         func_19F250
    ctx->pc = 0x1A36A8u;
    SET_GPR_U32(ctx, 31, 0x1A36B0u);
    ctx->pc = 0x1A36ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A36A8u;
    // 0x1a36ac: 0x3c055000  lui         $a1, 0x5000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)20480 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F250u, 0x1A36A8u, 0x1A36B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A36B0u;
label_1a36b0:
    // 0x1a36b0: 0xc067ca0  jal         func_19F280
    ctx->pc = 0x1A36B0u;
    SET_GPR_U32(ctx, 31, 0x1A36B8u);
    ctx->pc = 0x1A36B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A36B0u;
    // 0x1a36b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F280u, 0x1A36B0u, 0x1A36B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A36B8u;
label_1a36b8:
    // 0x1a36b8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1A36B8u;
    {
        const bool branch_taken_0x1a36b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A36BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A36B8u;
        // 0x1a36bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a36b8) {
            ctx->pc = 0x1A36D8u;
            return;
        }
    }
    ctx->pc = 0x1A36C0u;
}
