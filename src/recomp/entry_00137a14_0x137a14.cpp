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

// Function: entry_00137a14
// Address: 0x137a14 - 0x137a64
void entry_00137a14_0x137a14(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00137a14_0x137a14");
#endif

    switch (ctx->pc) {
        case 0x137a4cu: goto label_137a4c;
        default: break;
    }

    ctx->pc = 0x137a14u;

    // 0x137a14: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
    ctx->pc = 0x137A14u;
    {
        const bool branch_taken_0x137a14 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x137a14) {
            ctx->pc = 0x137A64u;
            return;
        }
    }
    ctx->pc = 0x137A1Cu;
    // 0x137a1c: 0x92230292  lbu         $v1, 0x292($s1)
    ctx->pc = 0x137a1cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 658)));
    // 0x137a20: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x137a20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x137a24: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x137a24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x137a28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x137a28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137a2c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x137a2cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x137a30: 0x0  nop
    ctx->pc = 0x137a30u;
    // NOP
    // 0x137a34: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x137a34u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x137a38: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x137a38u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
    // 0x137a3c: 0x0  nop
    ctx->pc = 0x137a3cu;
    // NOP
    // 0x137a40: 0x0  nop
    ctx->pc = 0x137a40u;
    // NOP
    // 0x137a44: 0xc053bec  jal         func_14EFB0
    ctx->pc = 0x137A44u;
    SET_GPR_U32(ctx, 31, 0x137A4Cu);
    ctx->pc = 0x137A48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x137A44u;
    // 0x137a48: 0xe6000008  swc1        $f0, 0x8($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x14EFB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14EFB0u, 0x137A44u, 0x137A4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137A4Cu;
label_137a4c:
    // 0x137a4c: 0x8604020a  lh          $a0, 0x20A($s0)
    ctx->pc = 0x137a4cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 522)));
    // 0x137a50: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x137a50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x137a54: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x137A54u;
    {
        const bool branch_taken_0x137a54 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x137A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137A54u;
        // 0x137a58: 0x26040050  addiu       $a0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137a54) {
            ctx->pc = 0x137A64u;
            return;
        }
    }
    ctx->pc = 0x137A5Cu;
    // 0x137a5c: 0xc08c0f8  jal         func_2303E0
    ctx->pc = 0x137A5Cu;
    SET_GPR_U32(ctx, 31, 0x137A64u);
    ctx->pc = 0x2303E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2303E0u, 0x137A5Cu, 0x137A64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137A64u;
}
