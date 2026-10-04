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

// Function: FUN_00152e70
// Address: 0x152e70 - 0x152ec4
void FUN_00152e70_0x152e70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00152e70_0x152e70");
#endif

    switch (ctx->pc) {
        case 0x152e90u: goto label_152e90;
        case 0x152e9cu: goto label_152e9c;
        default: break;
    }

    ctx->pc = 0x152e70u;

    // 0x152e70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x152e70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x152e74: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x152e74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x152e78: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x152e78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x152e7c: 0x90a30232  lbu         $v1, 0x232($a1)
    ctx->pc = 0x152e7cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 562)));
    // 0x152e80: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x152E80u;
    {
        const bool branch_taken_0x152e80 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x152E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152E80u;
        // 0x152e84: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152e80) {
            ctx->pc = 0x152EA4u;
            goto label_152ea4;
        }
    }
    ctx->pc = 0x152E88u;
    // 0x152e88: 0xc0439cc  jal         func_10E730
    ctx->pc = 0x152E88u;
    SET_GPR_U32(ctx, 31, 0x152E90u);
    ctx->pc = 0x152E8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152E88u;
    // 0x152e8c: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E730u, 0x152E88u, 0x152E90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152E90u;
label_152e90:
    // 0x152e90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x152e90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152e94: 0xc0438bc  jal         func_10E2F0
    ctx->pc = 0x152E94u;
    SET_GPR_U32(ctx, 31, 0x152E9Cu);
    ctx->pc = 0x152E98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152E94u;
    // 0x152e98: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E2F0u, 0x152E94u, 0x152E9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152E9Cu;
label_152e9c:
    // 0x152e9c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x152E9Cu;
    {
        const bool branch_taken_0x152e9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x152EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152E9Cu;
        // 0x152ea0: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152e9c) {
            ctx->pc = 0x152EC4u;
            return;
        }
    }
    ctx->pc = 0x152EA4u;
label_152ea4:
    // 0x152ea4: 0x84a30252  lh          $v1, 0x252($a1)
    ctx->pc = 0x152ea4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 594)));
    // 0x152ea8: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x152ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x152eac: 0x28610191  slti        $at, $v1, 0x191
    ctx->pc = 0x152eacu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)401) ? 1 : 0);
    // 0x152eb0: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x152EB0u;
    {
        const bool branch_taken_0x152eb0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x152eb0) {
            ctx->pc = 0x152EBCu;
            goto label_152ebc;
        }
    }
    ctx->pc = 0x152EB8u;
    // 0x152eb8: 0x24030190  addiu       $v1, $zero, 0x190
    ctx->pc = 0x152eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
label_152ebc:
    // 0x152ebc: 0xa4a30252  sh          $v1, 0x252($a1)
    ctx->pc = 0x152ebcu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 594), (uint16_t)GPR_U32(ctx, 3));
    // 0x152ec0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x152ec0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->pc = 0x152ec4u;
}
