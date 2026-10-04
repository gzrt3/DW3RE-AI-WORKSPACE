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

// Function: entry_0013797c
// Address: 0x13797c - 0x1379b8
void entry_0013797c_0x13797c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013797c_0x13797c");
#endif

    switch (ctx->pc) {
        case 0x1379a8u: goto label_1379a8;
        case 0x1379b0u: goto label_1379b0;
        default: break;
    }

    ctx->pc = 0x13797cu;

    // 0x13797c: 0x92230292  lbu         $v1, 0x292($s1)
    ctx->pc = 0x13797cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 658)));
    // 0x137980: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x137980u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x137984: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x137984u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x137988: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x137988u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x13798c: 0x0  nop
    ctx->pc = 0x13798cu;
    // NOP
    // 0x137990: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x137990u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x137994: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x137994u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
    // 0x137998: 0x0  nop
    ctx->pc = 0x137998u;
    // NOP
    // 0x13799c: 0x0  nop
    ctx->pc = 0x13799cu;
    // NOP
    // 0x1379a0: 0xc04fe24  jal         func_13F890
    ctx->pc = 0x1379A0u;
    SET_GPR_U32(ctx, 31, 0x1379A8u);
    ctx->pc = 0x1379A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1379A0u;
    // 0x1379a4: 0xe6200008  swc1        $f0, 0x8($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F890u, 0x1379A0u, 0x1379A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1379A8u;
label_1379a8:
    // 0x1379a8: 0xc051054  jal         func_144150
    ctx->pc = 0x1379A8u;
    SET_GPR_U32(ctx, 31, 0x1379B0u);
    ctx->pc = 0x1379ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1379A8u;
    // 0x1379ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144150u, 0x1379A8u, 0x1379B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1379B0u;
label_1379b0:
    // 0x1379b0: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1379B0u;
    {
        const bool branch_taken_0x1379b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1379b0) {
            ctx->pc = 0x137A14u;
            return;
        }
    }
    ctx->pc = 0x1379B8u;
}
