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

// Function: entry_00215988
// Address: 0x215988 - 0x215aa0
void entry_00215988_0x215988(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00215988_0x215988");
#endif

    switch (ctx->pc) {
        case 0x215a90u: goto label_215a90;
        default: break;
    }

    ctx->pc = 0x215988u;

    // 0x215988: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x215988u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
    // 0x21598c: 0x8f87924c  lw          $a3, -0x6DB4($gp)
    ctx->pc = 0x21598cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939212)));
    // 0x215990: 0xac208ab0  sw          $zero, -0x7550($at)
    ctx->pc = 0x215990u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x588AB0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x588AB0u, _value); } while (0);
    // 0x215994: 0x3c060029  lui         $a2, 0x29
    ctx->pc = 0x215994u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)41 << 16));
    // 0x215998: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x215998u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
    // 0x21599c: 0x3c083f80  lui         $t0, 0x3F80
    ctx->pc = 0x21599cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16256 << 16));
    // 0x2159a0: 0xac208ab4  sw          $zero, -0x754C($at)
    ctx->pc = 0x2159a0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x588AB4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x588AB4u, _value); } while (0);
    // 0x2159a4: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2159a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2159a8: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x2159a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
    // 0x2159ac: 0xaf829220  sw          $v0, -0x6DE0($gp)
    ctx->pc = 0x2159acu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939168), GPR_U32(ctx, 2));
    // 0x2159b0: 0xac208ab8  sw          $zero, -0x7548($at)
    ctx->pc = 0x2159b0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x588AB8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x588AB8u, _value); } while (0);
    // 0x2159b4: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2159b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2159b8: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x2159b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
    // 0x2159bc: 0x24c6d670  addiu       $a2, $a2, -0x2990
    ctx->pc = 0x2159bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294956656));
    // 0x2159c0: 0x738c0  sll         $a3, $a3, 3
    ctx->pc = 0x2159c0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x2159c4: 0xac288abc  sw          $t0, -0x7544($at)
    ctx->pc = 0x2159c4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294937276), GPR_U32(ctx, 8));
    // 0x2159c8: 0xaf809244  sw          $zero, -0x6DBC($gp)
    ctx->pc = 0x2159c8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939204), GPR_U32(ctx, 0));
    // 0x2159cc: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x2159ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x2159d0: 0xaf809240  sw          $zero, -0x6DC0($gp)
    ctx->pc = 0x2159d0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939200), GPR_U32(ctx, 0));
    // 0x2159d4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2159d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2159d8: 0xaf809228  sw          $zero, -0x6DD8($gp)
    ctx->pc = 0x2159d8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939176), GPR_U32(ctx, 0));
    // 0x2159dc: 0x3c050029  lui         $a1, 0x29
    ctx->pc = 0x2159dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)41 << 16));
    // 0x2159e0: 0xaf88922c  sw          $t0, -0x6DD4($gp)
    ctx->pc = 0x2159e0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939180), GPR_U32(ctx, 8));
    // 0x2159e4: 0x24a5d674  addiu       $a1, $a1, -0x298C
    ctx->pc = 0x2159e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956660));
    // 0x2159e8: 0xaf80921c  sw          $zero, -0x6DE4($gp)
    ctx->pc = 0x2159e8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939164), GPR_U32(ctx, 0));
    // 0x2159ec: 0x3c030029  lui         $v1, 0x29
    ctx->pc = 0x2159ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
    // 0x2159f0: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x2159f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2159f4: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x2159f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
    // 0x2159f8: 0x2463d730  addiu       $v1, $v1, -0x28D0
    ctx->pc = 0x2159f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956848));
    // 0x2159fc: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x2159fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
    // 0x215a00: 0x2442d734  addiu       $v0, $v0, -0x28CC
    ctx->pc = 0x215a00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956852));
    // 0x215a04: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x215a04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x215a08: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x215a08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x215a0c: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x215a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x215a10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x215a10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215a14: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x215a14u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x215a18: 0xac208aa4  sw          $zero, -0x755C($at)
    ctx->pc = 0x215a18u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x588AA4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x588AA4u, _value); } while (0);
    // 0x215a1c: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x215a1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
    // 0x215a20: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x215a20u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x215a24: 0xe4208aa0  swc1        $f0, -0x7560($at)
    ctx->pc = 0x215a24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x588AA0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x588AA0u, _value); } while (0); }
    // 0x215a28: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x215a28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x215a2c: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x215a2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
    // 0x215a30: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x215a30u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x215a34: 0xac288aac  sw          $t0, -0x7554($at)
    ctx->pc = 0x215a34u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 8)); ps2TraceGuestWrite(rdram, 0x588AACu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x588AACu, _value); } while (0);
    // 0x215a38: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x215a38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
    // 0x215a3c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x215a3cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x215a40: 0xe4208aa8  swc1        $f0, -0x7558($at)
    ctx->pc = 0x215a40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x588AA8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x588AA8u, _value); } while (0); }
    // 0x215a44: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x215a44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x215a48: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x215a48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
    // 0x215a4c: 0xe4208a90  swc1        $f0, -0x7570($at)
    ctx->pc = 0x215a4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x588A90u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x588A90u, _value); } while (0); }
    // 0x215a50: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x215a50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x215a54: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x215a54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
    // 0x215a58: 0xe4208a94  swc1        $f0, -0x756C($at)
    ctx->pc = 0x215a58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x588A94u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x588A94u, _value); } while (0); }
    // 0x215a5c: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x215a5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
    // 0x215a60: 0xac288a8c  sw          $t0, -0x7574($at)
    ctx->pc = 0x215a60u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 8)); ps2TraceGuestWrite(rdram, 0x588A8Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x588A8Cu, _value); } while (0);
    // 0x215a64: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x215a64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
    // 0x215a68: 0xac208a98  sw          $zero, -0x7568($at)
    ctx->pc = 0x215a68u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x588A98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x588A98u, _value); } while (0);
    // 0x215a6c: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x215a6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
    // 0x215a70: 0xac208a9c  sw          $zero, -0x7564($at)
    ctx->pc = 0x215a70u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x588A9Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x588A9Cu, _value); } while (0);
    // 0x215a74: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x215a74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
    // 0x215a78: 0xac208a80  sw          $zero, -0x7580($at)
    ctx->pc = 0x215a78u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x588A80u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x588A80u, _value); } while (0);
    // 0x215a7c: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x215a7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
    // 0x215a80: 0xac208a84  sw          $zero, -0x757C($at)
    ctx->pc = 0x215a80u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x588A84u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x588A84u, _value); } while (0);
    // 0x215a84: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x215a84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
    // 0x215a88: 0xc0856a8  jal         func_215AA0
    ctx->pc = 0x215A88u;
    SET_GPR_U32(ctx, 31, 0x215A90u);
    ctx->pc = 0x215A8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215A88u;
    // 0x215a8c: 0xac208a88  sw          $zero, -0x7578($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294937224), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215AA0u, 0x215A88u, 0x215A90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215A90u;
label_215a90:
    // 0x215a90: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x215a90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x215a94: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x215a94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x215a98: 0x3e00008  jr          $ra
    ctx->pc = 0x215A98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x215A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215A98u;
        // 0x215a9c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x215A98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x215AA0u;
}
