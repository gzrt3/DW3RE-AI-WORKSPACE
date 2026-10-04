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

// Function: FUN_0012b710
// Address: 0x12b710 - 0x12b7a4
void FUN_0012b710_0x12b710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0012b710_0x12b710");
#endif

    switch (ctx->pc) {
        case 0x12b740u: goto label_12b740;
        case 0x12b790u: goto label_12b790;
        default: break;
    }

    ctx->pc = 0x12b710u;

    // 0x12b710: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x12b710u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x12b714: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x12b714u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x12b718: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x12b718u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x12b71c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x12b71cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x12b720: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x12b720u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x12b724: 0x9023a3ea  lbu         $v1, -0x5C16($at)
    ctx->pc = 0x12b724u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x30A3EAu));
    // 0x12b728: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x12B728u;
    {
        const bool branch_taken_0x12b728 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x12B72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B728u;
        // 0x12b72c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b728) {
            ctx->pc = 0x12B738u;
            goto label_12b738;
        }
    }
    ctx->pc = 0x12B730u;
    // 0x12b730: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x12B730u;
    {
        const bool branch_taken_0x12b730 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x12b730) {
            ctx->pc = 0x12B748u;
            goto label_12b748;
        }
    }
    ctx->pc = 0x12B738u;
label_12b738:
    // 0x12b738: 0xc0591f4  jal         func_1647D0
    ctx->pc = 0x12B738u;
    SET_GPR_U32(ctx, 31, 0x12B740u);
    ctx->pc = 0x12B73Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B738u;
    // 0x12b73c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1647D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1647D0u, 0x12B738u, 0x12B740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B740u;
label_12b740:
    // 0x12b740: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x12B740u;
    {
        const bool branch_taken_0x12b740 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B740u;
        // 0x12b744: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b740) {
            ctx->pc = 0x12B850u;
            return;
        }
    }
    ctx->pc = 0x12B748u;
label_12b748:
    // 0x12b748: 0x960302e6  lhu         $v1, 0x2E6($s0)
    ctx->pc = 0x12b748u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 742)));
    // 0x12b74c: 0x2861001e  slti        $at, $v1, 0x1E
    ctx->pc = 0x12b74cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)30) ? 1 : 0);
    // 0x12b750: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x12B750u;
    {
        const bool branch_taken_0x12b750 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B750u;
        // 0x12b754: 0x2862001e  slti        $v0, $v1, 0x1E (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)30) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b750) {
            ctx->pc = 0x12B768u;
            goto label_12b768;
        }
    }
    ctx->pc = 0x12B758u;
    // 0x12b758: 0x920202e3  lbu         $v0, 0x2E3($s0)
    ctx->pc = 0x12b758u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 739)));
    // 0x12b75c: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x12b75cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x12b760: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x12B760u;
    {
        const bool branch_taken_0x12b760 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B760u;
        // 0x12b764: 0xa20202e3  sb          $v0, 0x2E3($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 739), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b760) {
            ctx->pc = 0x12B790u;
            goto label_12b790;
        }
    }
    ctx->pc = 0x12B768u;
label_12b768:
    // 0x12b768: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x12B768u;
    {
        const bool branch_taken_0x12b768 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12B76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B768u;
        // 0x12b76c: 0x2861005a  slti        $at, $v1, 0x5A (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)90) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b768) {
            ctx->pc = 0x12B790u;
            goto label_12b790;
        }
    }
    ctx->pc = 0x12B770u;
    // 0x12b770: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x12B770u;
    {
        const bool branch_taken_0x12b770 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x12b770) {
            ctx->pc = 0x12B788u;
            goto label_12b788;
        }
    }
    ctx->pc = 0x12B778u;
    // 0x12b778: 0x920202e3  lbu         $v0, 0x2E3($s0)
    ctx->pc = 0x12b778u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 739)));
    // 0x12b77c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x12b77cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x12b780: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x12B780u;
    {
        const bool branch_taken_0x12b780 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B780u;
        // 0x12b784: 0xa20202e3  sb          $v0, 0x2E3($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 739), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b780) {
            ctx->pc = 0x12B790u;
            goto label_12b790;
        }
    }
    ctx->pc = 0x12B788u;
label_12b788:
    // 0x12b788: 0xc0591f4  jal         func_1647D0
    ctx->pc = 0x12B788u;
    SET_GPR_U32(ctx, 31, 0x12B790u);
    ctx->pc = 0x1647D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1647D0u, 0x12B788u, 0x12B790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B790u;
label_12b790:
    // 0x12b790: 0xc6010300  lwc1        $f1, 0x300($s0)
    ctx->pc = 0x12b790u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 768)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12b794: 0xc6000250  lwc1        $f0, 0x250($s0)
    ctx->pc = 0x12b794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 592)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12b798: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x12b798u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x12b79c: 0xc08f0cc  jal         func_23C330
    ctx->pc = 0x12B79Cu;
    SET_GPR_U32(ctx, 31, 0x12B7A4u);
    ctx->pc = 0x12B7A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B79Cu;
    // 0x12b7a0: 0xe6000250  swc1        $f0, 0x250($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 592), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23C330u, 0x12B79Cu, 0x12B7A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B7A4u;
}
