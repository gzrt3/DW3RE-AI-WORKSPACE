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

// Function: entry_00127f04
// Address: 0x127f04 - 0x127f58
void entry_00127f04_0x127f04(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00127f04_0x127f04");
#endif

    switch (ctx->pc) {
        case 0x127f14u: goto label_127f14;
        case 0x127f1cu: goto label_127f1c;
        case 0x127f50u: goto label_127f50;
        default: break;
    }

    ctx->pc = 0x127f04u;

    // 0x127f04: 0x14200014  bnez        $at, . + 4 + (0x14 << 2)
    ctx->pc = 0x127F04u;
    {
        const bool branch_taken_0x127f04 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x127f04) {
            ctx->pc = 0x127F58u;
            return;
        }
    }
    ctx->pc = 0x127F0Cu;
    // 0x127f0c: 0xc071740  jal         func_1C5D00
    ctx->pc = 0x127F0Cu;
    SET_GPR_U32(ctx, 31, 0x127F14u);
    ctx->pc = 0x1C5D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5D00u, 0x127F0Cu, 0x127F14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127F14u;
label_127f14:
    // 0x127f14: 0xc071728  jal         func_1C5CA0
    ctx->pc = 0x127F14u;
    SET_GPR_U32(ctx, 31, 0x127F1Cu);
    ctx->pc = 0x127F18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x127F14u;
    // 0x127f18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5CA0u, 0x127F14u, 0x127F1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127F1Cu;
label_127f1c:
    // 0x127f1c: 0xc6000300  lwc1        $f0, 0x300($s0)
    ctx->pc = 0x127f1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 768)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x127f20: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x127f20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x127f24: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x127f24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x127f28: 0x0  nop
    ctx->pc = 0x127f28u;
    // NOP
    // 0x127f2c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x127f2cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x127f30: 0x0  nop
    ctx->pc = 0x127f30u;
    // NOP
    // 0x127f34: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x127F34u;
    {
        const bool branch_taken_0x127f34 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x127F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127F34u;
        // 0x127f38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127f34) {
            ctx->pc = 0x127F48u;
            goto label_127f48;
        }
    }
    ctx->pc = 0x127F3Cu;
    // 0x127f3c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x127f3cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x127f40: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x127F40u;
    {
        const bool branch_taken_0x127f40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x127F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127F40u;
        // 0x127f44: 0xe6000300  swc1        $f0, 0x300($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 768), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x127f40) {
            ctx->pc = 0x127F58u;
            return;
        }
    }
    ctx->pc = 0x127F48u;
label_127f48:
    // 0x127f48: 0xc0591f4  jal         func_1647D0
    ctx->pc = 0x127F48u;
    SET_GPR_U32(ctx, 31, 0x127F50u);
    ctx->pc = 0x1647D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1647D0u, 0x127F48u, 0x127F50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127F50u;
label_127f50:
    // 0x127f50: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x127F50u;
    {
        const bool branch_taken_0x127f50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x127f50) {
            ctx->pc = 0x128060u;
            return;
        }
    }
    ctx->pc = 0x127F58u;
}
