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

// Function: entry_00116384
// Address: 0x116384 - 0x1163f0
void entry_00116384_0x116384(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00116384_0x116384");
#endif

    switch (ctx->pc) {
        case 0x11639cu: goto label_11639c;
        default: break;
    }

    ctx->pc = 0x116384u;

    // 0x116384: 0x0  nop
    ctx->pc = 0x116384u;
    // NOP
    // 0x116388: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x116388u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x11638c: 0x61900  sll         $v1, $a2, 4
    ctx->pc = 0x11638cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x116390: 0x24423ac0  addiu       $v0, $v0, 0x3AC0
    ctx->pc = 0x116390u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15040));
    // 0x116394: 0xc08f0cc  jal         func_23C330
    ctx->pc = 0x116394u;
    SET_GPR_U32(ctx, 31, 0x11639Cu);
    ctx->pc = 0x116398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116394u;
    // 0x116398: 0x438021  addu        $s0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23C330u, 0x116394u, 0x11639Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11639Cu;
label_11639c:
    // 0x11639c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x11639cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1163a0: 0x0  nop
    ctx->pc = 0x1163a0u;
    // NOP
    // 0x1163a4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1163a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1163a8: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x1163a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x1163ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1163acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1163b0: 0x0  nop
    ctx->pc = 0x1163b0u;
    // NOP
    // 0x1163b4: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x1163b4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1163b8: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x1163b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x1163bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1163bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1163c0: 0x0  nop
    ctx->pc = 0x1163c0u;
    // NOP
    // 0x1163c4: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1163c4u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
    // 0x1163c8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1163c8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1163cc: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1163ccu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1163d0: 0x0  nop
    ctx->pc = 0x1163d0u;
    // NOP
    // 0x1163d4: 0xa22201a1  sb          $v0, 0x1A1($s1)
    ctx->pc = 0x1163d4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 417), (uint8_t)GPR_U32(ctx, 2));
    // 0x1163d8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1163d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1163dc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1163DCu;
    {
        const bool branch_taken_0x1163dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1163E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1163DCu;
        // 0x1163e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1163dc) {
            ctx->pc = 0x1163F4u;
            return;
        }
    }
    ctx->pc = 0x1163E4u;
    // 0x1163e4: 0x922201a1  lbu         $v0, 0x1A1($s1)
    ctx->pc = 0x1163e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 417)));
    // 0x1163e8: 0x24420085  addiu       $v0, $v0, 0x85
    ctx->pc = 0x1163e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 133));
    // 0x1163ec: 0xa22201a1  sb          $v0, 0x1A1($s1)
    ctx->pc = 0x1163ecu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 417), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x1163f0u;
}
