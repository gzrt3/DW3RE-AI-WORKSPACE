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

// Function: entry_00154a1c
// Address: 0x154a1c - 0x154a8c
void entry_00154a1c_0x154a1c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00154a1c_0x154a1c");
#endif

    switch (ctx->pc) {
        case 0x154a44u: goto label_154a44;
        case 0x154a58u: goto label_154a58;
        default: break;
    }

    ctx->pc = 0x154a1cu;

    // 0x154a1c: 0x14a2001b  bne         $a1, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x154A1Cu;
    {
        const bool branch_taken_0x154a1c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x154a1c) {
            ctx->pc = 0x154A8Cu;
            return;
        }
    }
    ctx->pc = 0x154A24u;
    // 0x154a24: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x154a24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x154a28: 0x61980  sll         $v1, $a2, 6
    ctx->pc = 0x154a28u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
    // 0x154a2c: 0x2442ba20  addiu       $v0, $v0, -0x45E0
    ctx->pc = 0x154a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949408));
    // 0x154a30: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x154a30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154a34: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x154a34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x154a38: 0x24500020  addiu       $s0, $v0, 0x20
    ctx->pc = 0x154a38u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x154a3c: 0xc066e26  jal         func_19B898
    ctx->pc = 0x154A3Cu;
    SET_GPR_U32(ctx, 31, 0x154A44u);
    ctx->pc = 0x154A40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154A3Cu;
    // 0x154a40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B898u, 0x154A3Cu, 0x154A44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154A44u;
label_154a44:
    // 0x154a44: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x154a44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x154a48: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x154a48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154a4c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x154a4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x154a50: 0xc066e14  jal         func_19B850
    ctx->pc = 0x154A50u;
    SET_GPR_U32(ctx, 31, 0x154A58u);
    ctx->pc = 0x154A54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154A50u;
    // 0x154a54: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B850u, 0x154A50u, 0x154A58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154A58u;
label_154a58:
    // 0x154a58: 0xc7a20040  lwc1        $f2, 0x40($sp)
    ctx->pc = 0x154a58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x154a5c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x154a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x154a60: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x154a60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x154a64: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x154a64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x154a68: 0xac23ba0c  sw          $v1, -0x45F4($at)
    ctx->pc = 0x154a68u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x32BA0Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x32BA0Cu, _value); } while (0);
    // 0x154a6c: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x154a6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x154a70: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x154a70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x154a74: 0xe422ba00  swc1        $f2, -0x4600($at)
    ctx->pc = 0x154a74u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x32BA00u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x32BA00u, _value); } while (0); }
    // 0x154a78: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x154a78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x154a7c: 0xe421ba04  swc1        $f1, -0x45FC($at)
    ctx->pc = 0x154a7cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x32BA04u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x32BA04u, _value); } while (0); }
    // 0x154a80: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x154a80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x154a84: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x154A84u;
    {
        const bool branch_taken_0x154a84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x154A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154A84u;
        // 0x154a88: 0xe420ba08  swc1        $f0, -0x45F8($at) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294949384), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x154a84) {
            ctx->pc = 0x154AA8u;
            return;
        }
    }
    ctx->pc = 0x154A8Cu;
}
