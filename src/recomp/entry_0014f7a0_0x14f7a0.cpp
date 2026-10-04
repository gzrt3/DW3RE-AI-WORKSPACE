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

// Function: entry_0014f7a0
// Address: 0x14f7a0 - 0x14f7d0
void entry_0014f7a0_0x14f7a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014f7a0_0x14f7a0");
#endif

    ctx->pc = 0x14f7a0u;

    // 0x14f7a0: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x14f7a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14f7a4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x14f7a4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x14f7a8: 0xe6000050  swc1        $f0, 0x50($s0)
    ctx->pc = 0x14f7a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
    // 0x14f7ac: 0xc6010058  lwc1        $f1, 0x58($s0)
    ctx->pc = 0x14f7acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14f7b0: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x14f7b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14f7b4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x14f7b4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x14f7b8: 0xe6000058  swc1        $f0, 0x58($s0)
    ctx->pc = 0x14f7b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
    // 0x14f7bc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x14f7bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14f7c0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x14f7c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14f7c4: 0x3e00008  jr          $ra
    ctx->pc = 0x14F7C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14F7C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F7C4u;
        // 0x14f7c8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14F7C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14F7CCu;
    // 0x14f7cc: 0x0  nop
    ctx->pc = 0x14f7ccu;
    // NOP
    ctx->pc = 0x14f7d0u;
}
