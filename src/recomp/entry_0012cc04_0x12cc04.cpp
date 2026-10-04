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

// Function: entry_0012cc04
// Address: 0x12cc04 - 0x12cc94
void entry_0012cc04_0x12cc04(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012cc04_0x12cc04");
#endif

    switch (ctx->pc) {
        case 0x12cc3cu: goto label_12cc3c;
        case 0x12cc4cu: goto label_12cc4c;
        case 0x12cc54u: goto label_12cc54;
        case 0x12cc70u: goto label_12cc70;
        default: break;
    }

    ctx->pc = 0x12cc04u;

    // 0x12cc04: 0x460100c0  add.s       $f3, $f0, $f1
    ctx->pc = 0x12cc04u;
    ctx->f[3] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x12cc08: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x12cc08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x12cc0c: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x12cc0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x12cc10: 0x34440fdb  ori         $a0, $v0, 0xFDB
    ctx->pc = 0x12cc10u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x12cc14: 0x3c023daa  lui         $v0, 0x3DAA
    ctx->pc = 0x12cc14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15786 << 16));
    // 0x12cc18: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x12cc18u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x12cc1c: 0x3442aaab  ori         $v0, $v0, 0xAAAB
    ctx->pc = 0x12cc1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43691);
    // 0x12cc20: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x12cc20u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x12cc24: 0x0  nop
    ctx->pc = 0x12cc24u;
    // NOP
    // 0x12cc28: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x12cc28u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x12cc2c: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x12cc2cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x12cc30: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x12cc30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12cc34: 0xc064aa4  jal         func_192A90
    ctx->pc = 0x12CC34u;
    SET_GPR_U32(ctx, 31, 0x12CC3Cu);
    ctx->pc = 0x12CC38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12CC34u;
    // 0x12cc38: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x192A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192A90u, 0x12CC34u, 0x12CC3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12CC3Cu;
label_12cc3c:
    // 0x12cc3c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x12cc3cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x12cc40: 0x26040250  addiu       $a0, $s0, 0x250
    ctx->pc = 0x12cc40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 592));
    // 0x12cc44: 0xc066e26  jal         func_19B898
    ctx->pc = 0x12CC44u;
    SET_GPR_U32(ctx, 31, 0x12CC4Cu);
    ctx->pc = 0x12CC48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12CC44u;
    // 0x12cc48: 0x26050330  addiu       $a1, $s0, 0x330 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 816));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B898u, 0x12CC44u, 0x12CC4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12CC4Cu;
label_12cc4c:
    // 0x12cc4c: 0xc06d4c0  jal         func_1B5300
    ctx->pc = 0x12CC4Cu;
    SET_GPR_U32(ctx, 31, 0x12CC54u);
    ctx->pc = 0x12CC50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12CC4Cu;
    // 0x12cc50: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B5300u, 0x12CC4Cu, 0x12CC54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12CC54u;
label_12cc54:
    // 0x12cc54: 0xc6020300  lwc1        $f2, 0x300($s0)
    ctx->pc = 0x12cc54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 768)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x12cc58: 0xc6010250  lwc1        $f1, 0x250($s0)
    ctx->pc = 0x12cc58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 592)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12cc5c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x12cc5cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x12cc60: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x12cc60u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x12cc64: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x12cc64u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x12cc68: 0xc06d412  jal         func_1B5048
    ctx->pc = 0x12CC68u;
    SET_GPR_U32(ctx, 31, 0x12CC70u);
    ctx->pc = 0x12CC6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12CC68u;
    // 0x12cc6c: 0xe6000250  swc1        $f0, 0x250($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 592), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B5048u, 0x12CC68u, 0x12CC70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12CC70u;
label_12cc70:
    // 0x12cc70: 0xc6020300  lwc1        $f2, 0x300($s0)
    ctx->pc = 0x12cc70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 768)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x12cc74: 0xc6010258  lwc1        $f1, 0x258($s0)
    ctx->pc = 0x12cc74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12cc78: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x12cc78u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x12cc7c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x12cc7cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x12cc80: 0xe6000258  swc1        $f0, 0x258($s0)
    ctx->pc = 0x12cc80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 600), bits); }
    // 0x12cc84: 0xe61402a4  swc1        $f20, 0x2A4($s0)
    ctx->pc = 0x12cc84u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 676), bits); }
    // 0x12cc88: 0x960302e6  lhu         $v1, 0x2E6($s0)
    ctx->pc = 0x12cc88u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 742)));
    // 0x12cc8c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x12cc8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x12cc90: 0xa60302e6  sh          $v1, 0x2E6($s0)
    ctx->pc = 0x12cc90u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 742), (uint16_t)GPR_U32(ctx, 3));
    ctx->pc = 0x12cc94u;
}
