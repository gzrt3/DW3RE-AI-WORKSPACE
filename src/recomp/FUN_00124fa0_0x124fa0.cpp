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

// Function: FUN_00124fa0
// Address: 0x124fa0 - 0x124ffc
void FUN_00124fa0_0x124fa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00124fa0_0x124fa0");
#endif

    switch (ctx->pc) {
        case 0x124fb8u: goto label_124fb8;
        case 0x124fe0u: goto label_124fe0;
        default: break;
    }

    ctx->pc = 0x124fa0u;

    // 0x124fa0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x124fa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x124fa4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x124fa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x124fa8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x124fa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x124fac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x124facu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124fb0: 0xc0713b0  jal         func_1C4EC0
    ctx->pc = 0x124FB0u;
    SET_GPR_U32(ctx, 31, 0x124FB8u);
    ctx->pc = 0x124FB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124FB0u;
    // 0x124fb4: 0x948402f8  lhu         $a0, 0x2F8($a0) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 760)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4EC0u, 0x124FB0u, 0x124FB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124FB8u;
label_124fb8:
    // 0x124fb8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x124fb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x124fbc: 0x28410004  slti        $at, $v0, 0x4
    ctx->pc = 0x124fbcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x124fc0: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x124FC0u;
    {
        const bool branch_taken_0x124fc0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x124FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124FC0u;
        // 0x124fc4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124fc0) {
            ctx->pc = 0x124FD8u;
            goto label_124fd8;
        }
    }
    ctx->pc = 0x124FC8u;
    // 0x124fc8: 0x920202e3  lbu         $v0, 0x2E3($s0)
    ctx->pc = 0x124fc8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 739)));
    // 0x124fcc: 0x28410004  slti        $at, $v0, 0x4
    ctx->pc = 0x124fccu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x124fd0: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x124FD0u;
    {
        const bool branch_taken_0x124fd0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x124fd0) {
            ctx->pc = 0x124FE8u;
            goto label_124fe8;
        }
    }
    ctx->pc = 0x124FD8u;
label_124fd8:
    // 0x124fd8: 0xc0591f4  jal         func_1647D0
    ctx->pc = 0x124FD8u;
    SET_GPR_U32(ctx, 31, 0x124FE0u);
    ctx->pc = 0x124FDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124FD8u;
    // 0x124fdc: 0xa20002e3  sb          $zero, 0x2E3($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 739), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1647D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1647D0u, 0x124FD8u, 0x124FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124FE0u;
label_124fe0:
    // 0x124fe0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x124FE0u;
    {
        const bool branch_taken_0x124fe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x124FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124FE0u;
        // 0x124fe4: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124fe0) {
            ctx->pc = 0x125000u;
            return;
        }
    }
    ctx->pc = 0x124FE8u;
label_124fe8:
    // 0x124fe8: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x124fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x124fec: 0xa20202e3  sb          $v0, 0x2E3($s0)
    ctx->pc = 0x124fecu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 739), (uint8_t)GPR_U32(ctx, 2));
    // 0x124ff0: 0x960402f8  lhu         $a0, 0x2F8($s0)
    ctx->pc = 0x124ff0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 760)));
    // 0x124ff4: 0xc07139c  jal         func_1C4E70
    ctx->pc = 0x124FF4u;
    SET_GPR_U32(ctx, 31, 0x124FFCu);
    ctx->pc = 0x124FF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124FF4u;
    // 0x124ff8: 0x26050250  addiu       $a1, $s0, 0x250 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 592));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4E70u, 0x124FF4u, 0x124FFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124FFCu;
}
