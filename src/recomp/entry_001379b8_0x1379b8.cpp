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

// Function: entry_001379b8
// Address: 0x1379b8 - 0x137a14
void entry_001379b8_0x1379b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001379b8_0x1379b8");
#endif

    switch (ctx->pc) {
        case 0x1379e4u: goto label_1379e4;
        case 0x1379ecu: goto label_1379ec;
        default: break;
    }

    ctx->pc = 0x1379b8u;

    // 0x1379b8: 0x92230292  lbu         $v1, 0x292($s1)
    ctx->pc = 0x1379b8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 658)));
    // 0x1379bc: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x1379bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x1379c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1379c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1379c4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1379c4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1379c8: 0x0  nop
    ctx->pc = 0x1379c8u;
    // NOP
    // 0x1379cc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1379ccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1379d0: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1379d0u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
    // 0x1379d4: 0x0  nop
    ctx->pc = 0x1379d4u;
    // NOP
    // 0x1379d8: 0x0  nop
    ctx->pc = 0x1379d8u;
    // NOP
    // 0x1379dc: 0xc04fe24  jal         func_13F890
    ctx->pc = 0x1379DCu;
    SET_GPR_U32(ctx, 31, 0x1379E4u);
    ctx->pc = 0x1379E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1379DCu;
    // 0x1379e0: 0xe6200008  swc1        $f0, 0x8($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F890u, 0x1379DCu, 0x1379E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1379E4u;
label_1379e4:
    // 0x1379e4: 0xc051054  jal         func_144150
    ctx->pc = 0x1379E4u;
    SET_GPR_U32(ctx, 31, 0x1379ECu);
    ctx->pc = 0x1379E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1379E4u;
    // 0x1379e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144150u, 0x1379E4u, 0x1379ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1379ECu;
label_1379ec:
    // 0x1379ec: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x1379ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1379f0: 0x8e230030  lw          $v1, 0x30($s1)
    ctx->pc = 0x1379f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x1379f4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1379f4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1379f8: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x1379f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1379fc: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x1379fcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x137a00: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x137a00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x137a04: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x137a04u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x137a08: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x137A08u;
    {
        const bool branch_taken_0x137a08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x137a08) {
            ctx->pc = 0x137A14u;
            return;
        }
    }
    ctx->pc = 0x137A10u;
    // 0x137a10: 0xa2200237  sb          $zero, 0x237($s1)
    ctx->pc = 0x137a10u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 567), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x137a14u;
}
