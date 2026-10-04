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

// Function: entry_00247e70
// Address: 0x247e70 - 0x247fa0
void entry_00247e70_0x247e70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00247e70_0x247e70");
#endif

    switch (ctx->pc) {
        case 0x247f88u: goto label_247f88;
        default: break;
    }

    ctx->pc = 0x247e70u;

    // 0x247e70: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x247e70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x247e74: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x247e74u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x247e78: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x247e78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x247e7c: 0x3e00008  jr          $ra
    ctx->pc = 0x247E7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x247E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247E7Cu;
        // 0x247e80: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x247E7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x247E84u;
    // 0x247e84: 0x0  nop
    ctx->pc = 0x247e84u;
    // NOP
    // 0x247e88: 0x0  nop
    ctx->pc = 0x247e88u;
    // NOP
    // 0x247e8c: 0x0  nop
    ctx->pc = 0x247e8cu;
    // NOP
    // 0x247e90: 0x8cab0014  lw          $t3, 0x14($a1)
    ctx->pc = 0x247e90u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x247e94: 0x3c0a002d  lui         $t2, 0x2D
    ctx->pc = 0x247e94u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)45 << 16));
    // 0x247e98: 0x3c07002d  lui         $a3, 0x2D
    ctx->pc = 0x247e98u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)45 << 16));
    // 0x247e9c: 0x3c04002d  lui         $a0, 0x2D
    ctx->pc = 0x247e9cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
    // 0x247ea0: 0x254aeb44  addiu       $t2, $t2, -0x14BC
    ctx->pc = 0x247ea0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294961988));
    // 0x247ea4: 0x24090080  addiu       $t1, $zero, 0x80
    ctx->pc = 0x247ea4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x247ea8: 0x3c083f80  lui         $t0, 0x3F80
    ctx->pc = 0x247ea8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16256 << 16));
    // 0x247eac: 0x24e7eb30  addiu       $a3, $a3, -0x14D0
    ctx->pc = 0x247eacu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294961968));
    // 0x247eb0: 0x2484eb34  addiu       $a0, $a0, -0x14CC
    ctx->pc = 0x247eb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961972));
    // 0x247eb4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x247eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x247eb8: 0xaccb008c  sw          $t3, 0x8C($a2)
    ctx->pc = 0x247eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 140), GPR_U32(ctx, 11));
    // 0x247ebc: 0x8cac0018  lw          $t4, 0x18($a1)
    ctx->pc = 0x247ebcu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x247ec0: 0xc5840  sll         $t3, $t4, 1
    ctx->pc = 0x247ec0u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 12), 1));
    // 0x247ec4: 0x16c5821  addu        $t3, $t3, $t4
    ctx->pc = 0x247ec4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 12)));
    // 0x247ec8: 0xb5900  sll         $t3, $t3, 4
    ctx->pc = 0x247ec8u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 4));
    // 0x247ecc: 0x14b5021  addu        $t2, $t2, $t3
    ctx->pc = 0x247eccu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 11)));
    // 0x247ed0: 0x8d4a0000  lw          $t2, 0x0($t2)
    ctx->pc = 0x247ed0u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x247ed4: 0xacca0090  sw          $t2, 0x90($a2)
    ctx->pc = 0x247ed4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 144), GPR_U32(ctx, 10));
    // 0x247ed8: 0xa0c90034  sb          $t1, 0x34($a2)
    ctx->pc = 0x247ed8u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 52), (uint8_t)GPR_U32(ctx, 9));
    // 0x247edc: 0xa0c90004  sb          $t1, 0x4($a2)
    ctx->pc = 0x247edcu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 4), (uint8_t)GPR_U32(ctx, 9));
    // 0x247ee0: 0xa0c90035  sb          $t1, 0x35($a2)
    ctx->pc = 0x247ee0u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 53), (uint8_t)GPR_U32(ctx, 9));
    // 0x247ee4: 0xa0c90005  sb          $t1, 0x5($a2)
    ctx->pc = 0x247ee4u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 5), (uint8_t)GPR_U32(ctx, 9));
    // 0x247ee8: 0xa0c90036  sb          $t1, 0x36($a2)
    ctx->pc = 0x247ee8u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 54), (uint8_t)GPR_U32(ctx, 9));
    // 0x247eec: 0xa0c90006  sb          $t1, 0x6($a2)
    ctx->pc = 0x247eecu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 6), (uint8_t)GPR_U32(ctx, 9));
    // 0x247ef0: 0xa0c90037  sb          $t1, 0x37($a2)
    ctx->pc = 0x247ef0u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 55), (uint8_t)GPR_U32(ctx, 9));
    // 0x247ef4: 0xa0c90007  sb          $t1, 0x7($a2)
    ctx->pc = 0x247ef4u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 7), (uint8_t)GPR_U32(ctx, 9));
    // 0x247ef8: 0xacc00014  sw          $zero, 0x14($a2)
    ctx->pc = 0x247ef8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 0));
    // 0x247efc: 0xacc00010  sw          $zero, 0x10($a2)
    ctx->pc = 0x247efcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 0));
    // 0x247f00: 0xacc8001c  sw          $t0, 0x1C($a2)
    ctx->pc = 0x247f00u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 28), GPR_U32(ctx, 8));
    // 0x247f04: 0xacc80018  sw          $t0, 0x18($a2)
    ctx->pc = 0x247f04u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 8));
    // 0x247f08: 0xc4c00010  lwc1        $f0, 0x10($a2)
    ctx->pc = 0x247f08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x247f0c: 0xe4c00040  swc1        $f0, 0x40($a2)
    ctx->pc = 0x247f0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 64), bits); }
    // 0x247f10: 0xc4c00014  lwc1        $f0, 0x14($a2)
    ctx->pc = 0x247f10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x247f14: 0xe4c00044  swc1        $f0, 0x44($a2)
    ctx->pc = 0x247f14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 68), bits); }
    // 0x247f18: 0xc4c00018  lwc1        $f0, 0x18($a2)
    ctx->pc = 0x247f18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x247f1c: 0xe4c00048  swc1        $f0, 0x48($a2)
    ctx->pc = 0x247f1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 72), bits); }
    // 0x247f20: 0xc4c0001c  lwc1        $f0, 0x1C($a2)
    ctx->pc = 0x247f20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x247f24: 0xe4c0004c  swc1        $f0, 0x4C($a2)
    ctx->pc = 0x247f24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 76), bits); }
    // 0x247f28: 0x8ca90018  lw          $t1, 0x18($a1)
    ctx->pc = 0x247f28u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x247f2c: 0x94040  sll         $t0, $t1, 1
    ctx->pc = 0x247f2cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
    // 0x247f30: 0x1094021  addu        $t0, $t0, $t1
    ctx->pc = 0x247f30u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x247f34: 0x84100  sll         $t0, $t0, 4
    ctx->pc = 0x247f34u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x247f38: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x247f38u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x247f3c: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x247f3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x247f40: 0xe4c00054  swc1        $f0, 0x54($a2)
    ctx->pc = 0x247f40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 84), bits); }
    // 0x247f44: 0xe4c00024  swc1        $f0, 0x24($a2)
    ctx->pc = 0x247f44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 36), bits); }
    // 0x247f48: 0x8ca70018  lw          $a3, 0x18($a1)
    ctx->pc = 0x247f48u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x247f4c: 0x72840  sll         $a1, $a3, 1
    ctx->pc = 0x247f4cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x247f50: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x247f50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x247f54: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x247f54u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x247f58: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x247f58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x247f5c: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x247f5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x247f60: 0xe4c00058  swc1        $f0, 0x58($a2)
    ctx->pc = 0x247f60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 88), bits); }
    // 0x247f64: 0xe4c00028  swc1        $f0, 0x28($a2)
    ctx->pc = 0x247f64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 40), bits); }
    // 0x247f68: 0x3e00008  jr          $ra
    ctx->pc = 0x247F68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x247F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247F68u;
        // 0x247f6c: 0xacc3009c  sw          $v1, 0x9C($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 156), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x247F68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x247F70u;
    // 0x247f70: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x247f70u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247f74: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x247f74u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x247f78: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x247f78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247f7c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x247f7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x247f80: 0xc18dba0  jal         func_636E80
    ctx->pc = 0x247F80u;
    SET_GPR_U32(ctx, 31, 0x247F88u);
    ctx->pc = 0x247F84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247F80u;
    // 0x247f84: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x636E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x636E80u, 0x247F80u, 0x247F88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247F88u;
label_247f88:
    // 0x247f88: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x247f88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x247f8c: 0x3e00008  jr          $ra
    ctx->pc = 0x247F8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x247F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247F8Cu;
        // 0x247f90: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x247F8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x247F94u;
    // 0x247f94: 0x0  nop
    ctx->pc = 0x247f94u;
    // NOP
    // 0x247f98: 0x0  nop
    ctx->pc = 0x247f98u;
    // NOP
    // 0x247f9c: 0x0  nop
    ctx->pc = 0x247f9cu;
    // NOP
    ctx->pc = 0x247fa0u;
}
