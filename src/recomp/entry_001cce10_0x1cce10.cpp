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

// Function: entry_001cce10
// Address: 0x1cce10 - 0x1ccee0
void entry_001cce10_0x1cce10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cce10_0x1cce10");
#endif

    switch (ctx->pc) {
        case 0x1cce28u: goto label_1cce28;
        case 0x1cce64u: goto label_1cce64;
        case 0x1cce74u: goto label_1cce74;
        case 0x1cce7cu: goto label_1cce7c;
        case 0x1cce84u: goto label_1cce84;
        case 0x1ccec4u: goto label_1ccec4;
        case 0x1cced4u: goto label_1cced4;
        case 0x1ccedcu: goto label_1ccedc;
        default: break;
    }

    ctx->pc = 0x1cce10u;

    // 0x1cce10: 0x96030012  lhu         $v1, 0x12($s0)
    ctx->pc = 0x1cce10u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x1cce14: 0x28610002  slti        $at, $v1, 0x2
    ctx->pc = 0x1cce14u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1cce18: 0x14200031  bnez        $at, . + 4 + (0x31 << 2)
    ctx->pc = 0x1CCE18u;
    {
        const bool branch_taken_0x1cce18 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cce18) {
            ctx->pc = 0x1CCEE0u;
            return;
        }
    }
    ctx->pc = 0x1CCE20u;
    // 0x1cce20: 0xc08f0cc  jal         func_23C330
    ctx->pc = 0x1CCE20u;
    SET_GPR_U32(ctx, 31, 0x1CCE28u);
    ctx->pc = 0x23C330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23C330u, 0x1CCE20u, 0x1CCE28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCE28u;
label_1cce28:
    // 0x1cce28: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1cce28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cce2c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1cce2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1cce30: 0x26050030  addiu       $a1, $s0, 0x30
    ctx->pc = 0x1cce30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x1cce34: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1cce34u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1cce38: 0x3c02442e  lui         $v0, 0x442E
    ctx->pc = 0x1cce38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17454 << 16));
    // 0x1cce3c: 0x344375c3  ori         $v1, $v0, 0x75C3
    ctx->pc = 0x1cce3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)30147);
    // 0x1cce40: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x1cce40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x1cce44: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1cce44u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cce48: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1cce48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1cce4c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1cce4cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1cce50: 0x46020303  div.s       $f12, $f0, $f2
    ctx->pc = 0x1cce50u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[12] = ctx->f[0] / ctx->f[2];
    // 0x1cce54: 0x0  nop
    ctx->pc = 0x1cce54u;
    // NOP
    // 0x1cce58: 0x0  nop
    ctx->pc = 0x1cce58u;
    // NOP
    // 0x1cce5c: 0xc066e14  jal         func_19B850
    ctx->pc = 0x1CCE5Cu;
    SET_GPR_U32(ctx, 31, 0x1CCE64u);
    ctx->pc = 0x19B850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B850u, 0x1CCE5Cu, 0x1CCE64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCE64u;
label_1cce64:
    // 0x1cce64: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1cce64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1cce68: 0x26050020  addiu       $a1, $s0, 0x20
    ctx->pc = 0x1cce68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x1cce6c: 0xc066e02  jal         func_19B808
    ctx->pc = 0x1CCE6Cu;
    SET_GPR_U32(ctx, 31, 0x1CCE74u);
    ctx->pc = 0x1CCE70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCE6Cu;
    // 0x1cce70: 0x27a60030  addiu       $a2, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B808u, 0x1CCE6Cu, 0x1CCE74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCE74u;
label_1cce74:
    // 0x1cce74: 0xc0733f4  jal         func_1CCFD0
    ctx->pc = 0x1CCE74u;
    SET_GPR_U32(ctx, 31, 0x1CCE7Cu);
    ctx->pc = 0x1CCE78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCE74u;
    // 0x1cce78: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCFD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCFD0u, 0x1CCE74u, 0x1CCE7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCE7Cu;
label_1cce7c:
    // 0x1cce7c: 0xc08f0cc  jal         func_23C330
    ctx->pc = 0x1CCE7Cu;
    SET_GPR_U32(ctx, 31, 0x1CCE84u);
    ctx->pc = 0x23C330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23C330u, 0x1CCE7Cu, 0x1CCE84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCE84u;
label_1cce84:
    // 0x1cce84: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1cce84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cce88: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1cce88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1cce8c: 0x26050040  addiu       $a1, $s0, 0x40
    ctx->pc = 0x1cce8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x1cce90: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x1cce90u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1cce94: 0x3c024434  lui         $v0, 0x4434
    ctx->pc = 0x1cce94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17460 << 16));
    // 0x1cce98: 0x34436852  ori         $v1, $v0, 0x6852
    ctx->pc = 0x1cce98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26706);
    // 0x1cce9c: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x1cce9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x1ccea0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1ccea0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ccea4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ccea4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ccea8: 0x0  nop
    ctx->pc = 0x1ccea8u;
    // NOP
    // 0x1cceac: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1cceacu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1cceb0: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x1cceb0u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[12] = ctx->f[1] / ctx->f[0];
    // 0x1cceb4: 0x0  nop
    ctx->pc = 0x1cceb4u;
    // NOP
    // 0x1cceb8: 0x0  nop
    ctx->pc = 0x1cceb8u;
    // NOP
    // 0x1ccebc: 0xc066e14  jal         func_19B850
    ctx->pc = 0x1CCEBCu;
    SET_GPR_U32(ctx, 31, 0x1CCEC4u);
    ctx->pc = 0x19B850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B850u, 0x1CCEBCu, 0x1CCEC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCEC4u;
label_1ccec4:
    // 0x1ccec4: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1ccec4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1ccec8: 0x26050020  addiu       $a1, $s0, 0x20
    ctx->pc = 0x1ccec8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x1ccecc: 0xc066e02  jal         func_19B808
    ctx->pc = 0x1CCECCu;
    SET_GPR_U32(ctx, 31, 0x1CCED4u);
    ctx->pc = 0x1CCED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCECCu;
    // 0x1cced0: 0x27a60030  addiu       $a2, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B808u, 0x1CCECCu, 0x1CCED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCED4u;
label_1cced4:
    // 0x1cced4: 0xc0733f4  jal         func_1CCFD0
    ctx->pc = 0x1CCED4u;
    SET_GPR_U32(ctx, 31, 0x1CCEDCu);
    ctx->pc = 0x1CCED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCED4u;
    // 0x1cced8: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCFD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCFD0u, 0x1CCED4u, 0x1CCEDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCEDCu;
label_1ccedc:
    // 0x1ccedc: 0xa6000012  sh          $zero, 0x12($s0)
    ctx->pc = 0x1ccedcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 18), (uint16_t)GPR_U32(ctx, 0));
    ctx->pc = 0x1ccee0u;
}
