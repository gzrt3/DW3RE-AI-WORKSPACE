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

// Function: FUN_00152d70
// Address: 0x152d70 - 0x152dbc
void FUN_00152d70_0x152d70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00152d70_0x152d70");
#endif

    switch (ctx->pc) {
        case 0x152d8cu: goto label_152d8c;
        case 0x152d98u: goto label_152d98;
        case 0x152dacu: goto label_152dac;
        case 0x152db8u: goto label_152db8;
        default: break;
    }

    ctx->pc = 0x152d70u;

    // 0x152d70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x152d70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x152d74: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x152d74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x152d78: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x152d78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x152d7c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x152d7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152d80: 0x84a50220  lh          $a1, 0x220($a1)
    ctx->pc = 0x152d80u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 544)));
    // 0x152d84: 0xc050fe8  jal         func_143FA0
    ctx->pc = 0x152D84u;
    SET_GPR_U32(ctx, 31, 0x152D8Cu);
    ctx->pc = 0x152D88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152D84u;
    // 0x152d88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143FA0u, 0x152D84u, 0x152D8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152D8Cu;
label_152d8c:
    // 0x152d8c: 0x86050252  lh          $a1, 0x252($s0)
    ctx->pc = 0x152d8cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 594)));
    // 0x152d90: 0xc051018  jal         func_144060
    ctx->pc = 0x152D90u;
    SET_GPR_U32(ctx, 31, 0x152D98u);
    ctx->pc = 0x152D94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152D90u;
    // 0x152d94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144060u, 0x152D90u, 0x152D98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152D98u;
label_152d98:
    // 0x152d98: 0x92030232  lbu         $v1, 0x232($s0)
    ctx->pc = 0x152d98u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 562)));
    // 0x152d9c: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x152D9Cu;
    {
        const bool branch_taken_0x152d9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x152DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152D9Cu;
        // 0x152da0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152d9c) {
            ctx->pc = 0x152DB8u;
            goto label_152db8;
        }
    }
    ctx->pc = 0x152DA4u;
    // 0x152da4: 0xc0439cc  jal         func_10E730
    ctx->pc = 0x152DA4u;
    SET_GPR_U32(ctx, 31, 0x152DACu);
    ctx->pc = 0x10E730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E730u, 0x152DA4u, 0x152DACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152DACu;
label_152dac:
    // 0x152dac: 0x24040190  addiu       $a0, $zero, 0x190
    ctx->pc = 0x152dacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
    // 0x152db0: 0xc043884  jal         func_10E210
    ctx->pc = 0x152DB0u;
    SET_GPR_U32(ctx, 31, 0x152DB8u);
    ctx->pc = 0x152DB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152DB0u;
    // 0x152db4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E210u, 0x152DB0u, 0x152DB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152DB8u;
label_152db8:
    // 0x152db8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x152db8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->pc = 0x152dbcu;
}
