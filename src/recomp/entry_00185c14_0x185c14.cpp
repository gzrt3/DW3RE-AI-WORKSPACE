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

// Function: entry_00185c14
// Address: 0x185c14 - 0x185ca0
void entry_00185c14_0x185c14(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00185c14_0x185c14");
#endif

    switch (ctx->pc) {
        case 0x185c44u: goto label_185c44;
        default: break;
    }

    ctx->pc = 0x185c14u;

    // 0x185c14: 0x9224023c  lbu         $a0, 0x23C($s1)
    ctx->pc = 0x185c14u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 572)));
    // 0x185c18: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x185c18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x185c1c: 0x1483009a  bne         $a0, $v1, . + 4 + (0x9A << 2)
    ctx->pc = 0x185C1Cu;
    {
        const bool branch_taken_0x185c1c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x185C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185C1Cu;
        // 0x185c20: 0x30a30020  andi        $v1, $a1, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x185c1c) {
            ctx->pc = 0x185E88u;
            return;
        }
    }
    ctx->pc = 0x185C24u;
    // 0x185c24: 0x30a20004  andi        $v0, $a1, 0x4
    ctx->pc = 0x185c24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4);
    // 0x185c28: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x185C28u;
    {
        const bool branch_taken_0x185c28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x185C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185C28u;
        // 0x185c2c: 0x3c023fc9  lui         $v0, 0x3FC9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185c28) {
            ctx->pc = 0x185CA0u;
            return;
        }
    }
    ctx->pc = 0x185C30u;
    // 0x185c30: 0x5163c  dsll32      $v0, $a1, 24
    ctx->pc = 0x185c30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 24));
    // 0x185c34: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x185c34u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x185c38: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x185c38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x185c3c: 0xc08f0cc  jal         func_23C330
    ctx->pc = 0x185C3Cu;
    SET_GPR_U32(ctx, 31, 0x185C44u);
    ctx->pc = 0x185C40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185C3Cu;
    // 0x185c40: 0xa222023d  sb          $v0, 0x23D($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 573), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23C330u, 0x185C3Cu, 0x185C44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185C44u;
label_185c44:
    // 0x185c44: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x185c44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x185c48: 0x92240230  lbu         $a0, 0x230($s1)
    ctx->pc = 0x185c48u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 560)));
    // 0x185c4c: 0x3c054f00  lui         $a1, 0x4F00
    ctx->pc = 0x185c4cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)20224 << 16));
    // 0x185c50: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x185c50u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x185c54: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x185c54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x185c58: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x185c58u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x185c5c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x185c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x185c60: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x185c60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x185c64: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x185c64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x185c68: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x185c68u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x185c6c: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x185c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
    // 0x185c70: 0x24422b15  addiu       $v0, $v0, 0x2B15
    ctx->pc = 0x185c70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11029));
    // 0x185c74: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x185c74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x185c78: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x185c78u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x185c7c: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x185c7cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x185c80: 0x0  nop
    ctx->pc = 0x185c80u;
    // NOP
    // 0x185c84: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x185c84u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
    // 0x185c88: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x185c88u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x185c8c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x185c8cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x185c90: 0x0  nop
    ctx->pc = 0x185c90u;
    // NOP
    // 0x185c94: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x185c94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x185c98: 0xa6220224  sh          $v0, 0x224($s1)
    ctx->pc = 0x185c98u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 548), (uint16_t)GPR_U32(ctx, 2));
    // 0x185c9c: 0x3c023fc9  lui         $v0, 0x3FC9
    ctx->pc = 0x185c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
    ctx->pc = 0x185ca0u;
}
