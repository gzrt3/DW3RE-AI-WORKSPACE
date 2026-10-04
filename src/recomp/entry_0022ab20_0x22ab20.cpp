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

// Function: entry_0022ab20
// Address: 0x22ab20 - 0x22ab98
void entry_0022ab20_0x22ab20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022ab20_0x22ab20");
#endif

    switch (ctx->pc) {
        case 0x22ab60u: goto label_22ab60;
        default: break;
    }

    ctx->pc = 0x22ab20u;

    // 0x22ab20: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x22ab20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x22ab24: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x22ab24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x22ab28: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22ab28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22ab2c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22ab2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ab30: 0x26250004  addiu       $a1, $s1, 0x4
    ctx->pc = 0x22ab30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x22ab34: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x22ab34u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x22ab38: 0x240200f0  addiu       $v0, $zero, 0xF0
    ctx->pc = 0x22ab38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
    // 0x22ab3c: 0xe6200010  swc1        $f0, 0x10($s1)
    ctx->pc = 0x22ab3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
    // 0x22ab40: 0xe6200008  swc1        $f0, 0x8($s1)
    ctx->pc = 0x22ab40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x22ab44: 0xe6200018  swc1        $f0, 0x18($s1)
    ctx->pc = 0x22ab44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
    // 0x22ab48: 0xa220003b  sb          $zero, 0x3B($s1)
    ctx->pc = 0x22ab48u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 59), (uint8_t)GPR_U32(ctx, 0));
    // 0x22ab4c: 0xa223003c  sb          $v1, 0x3C($s1)
    ctx->pc = 0x22ab4cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 60), (uint8_t)GPR_U32(ctx, 3));
    // 0x22ab50: 0xa6220040  sh          $v0, 0x40($s1)
    ctx->pc = 0x22ab50u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 64), (uint16_t)GPR_U32(ctx, 2));
    // 0x22ab54: 0xa2200036  sb          $zero, 0x36($s1)
    ctx->pc = 0x22ab54u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 54), (uint8_t)GPR_U32(ctx, 0));
    // 0x22ab58: 0xc0445bc  jal         func_1116F0
    ctx->pc = 0x22AB58u;
    SET_GPR_U32(ctx, 31, 0x22AB60u);
    ctx->pc = 0x22AB5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22AB58u;
    // 0x22ab5c: 0xa6200042  sh          $zero, 0x42($s1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 17), 66), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1116F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1116F0u, 0x22AB58u, 0x22AB60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22AB60u;
label_22ab60:
    // 0x22ab60: 0x9222003a  lbu         $v0, 0x3A($s1)
    ctx->pc = 0x22ab60u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 58)));
    // 0x22ab64: 0xa2220044  sb          $v0, 0x44($s1)
    ctx->pc = 0x22ab64u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 68), (uint8_t)GPR_U32(ctx, 2));
    // 0x22ab68: 0x92220026  lbu         $v0, 0x26($s1)
    ctx->pc = 0x22ab68u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 38)));
    // 0x22ab6c: 0xa2220022  sb          $v0, 0x22($s1)
    ctx->pc = 0x22ab6cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 34), (uint8_t)GPR_U32(ctx, 2));
    // 0x22ab70: 0xa2220028  sb          $v0, 0x28($s1)
    ctx->pc = 0x22ab70u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 40), (uint8_t)GPR_U32(ctx, 2));
    // 0x22ab74: 0x92220027  lbu         $v0, 0x27($s1)
    ctx->pc = 0x22ab74u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 39)));
    // 0x22ab78: 0xa2220023  sb          $v0, 0x23($s1)
    ctx->pc = 0x22ab78u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 35), (uint8_t)GPR_U32(ctx, 2));
    // 0x22ab7c: 0xa2220029  sb          $v0, 0x29($s1)
    ctx->pc = 0x22ab7cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 41), (uint8_t)GPR_U32(ctx, 2));
    // 0x22ab80: 0x92020004  lbu         $v0, 0x4($s0)
    ctx->pc = 0x22ab80u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x22ab84: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x22AB84u;
    {
        const bool branch_taken_0x22ab84 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x22AB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AB84u;
        // 0x22ab88: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ab84) {
            ctx->pc = 0x22AB98u;
            return;
        }
    }
    ctx->pc = 0x22AB8Cu;
    // 0x22ab8c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22ab8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22ab90: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x22AB90u;
    {
        const bool branch_taken_0x22ab90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22AB94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AB90u;
        // 0x22ab94: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ab90) {
            ctx->pc = 0x22ABB0u;
            return;
        }
    }
    ctx->pc = 0x22AB98u;
}
