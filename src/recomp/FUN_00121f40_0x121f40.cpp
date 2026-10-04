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

// Function: FUN_00121f40
// Address: 0x121f40 - 0x121f9c
void FUN_00121f40_0x121f40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00121f40_0x121f40");
#endif

    switch (ctx->pc) {
        case 0x121f64u: goto label_121f64;
        default: break;
    }

    ctx->pc = 0x121f40u;

    // 0x121f40: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x121f40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x121f44: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x121f44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x121f48: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x121f48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x121f4c: 0x908202e3  lbu         $v0, 0x2E3($a0)
    ctx->pc = 0x121f4cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 739)));
    // 0x121f50: 0x28410004  slti        $at, $v0, 0x4
    ctx->pc = 0x121f50u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x121f54: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x121F54u;
    {
        const bool branch_taken_0x121f54 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x121F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121F54u;
        // 0x121f58: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121f54) {
            ctx->pc = 0x121F6Cu;
            goto label_121f6c;
        }
    }
    ctx->pc = 0x121F5Cu;
    // 0x121f5c: 0xc0591f4  jal         func_1647D0
    ctx->pc = 0x121F5Cu;
    SET_GPR_U32(ctx, 31, 0x121F64u);
    ctx->pc = 0x121F60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121F5Cu;
    // 0x121f60: 0xa20002e3  sb          $zero, 0x2E3($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 739), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1647D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1647D0u, 0x121F5Cu, 0x121F64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121F64u;
label_121f64:
    // 0x121f64: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x121F64u;
    {
        const bool branch_taken_0x121f64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x121F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121F64u;
        // 0x121f68: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121f64) {
            ctx->pc = 0x121FD0u;
            return;
        }
    }
    ctx->pc = 0x121F6Cu;
label_121f6c:
    // 0x121f6c: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x121f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x121f70: 0x260402d0  addiu       $a0, $s0, 0x2D0
    ctx->pc = 0x121f70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 720));
    // 0x121f74: 0xa20202e3  sb          $v0, 0x2E3($s0)
    ctx->pc = 0x121f74u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 739), (uint8_t)GPR_U32(ctx, 2));
    // 0x121f78: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x121f78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121f7c: 0xc6000300  lwc1        $f0, 0x300($s0)
    ctx->pc = 0x121f7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 768)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x121f80: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x121f80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x121f84: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x121f84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x121f88: 0xc6000300  lwc1        $f0, 0x300($s0)
    ctx->pc = 0x121f88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 768)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x121f8c: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x121f8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x121f90: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x121f90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
    // 0x121f94: 0xc066e02  jal         func_19B808
    ctx->pc = 0x121F94u;
    SET_GPR_U32(ctx, 31, 0x121F9Cu);
    ctx->pc = 0x121F98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121F94u;
    // 0x121f98: 0xafa0002c  sw          $zero, 0x2C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B808u, 0x121F94u, 0x121F9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121F9Cu;
}
