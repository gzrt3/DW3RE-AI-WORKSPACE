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

// Function: entry_0012b290
// Address: 0x12b290 - 0x12b2c8
void entry_0012b290_0x12b290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012b290_0x12b290");
#endif

    switch (ctx->pc) {
        case 0x12b2a0u: goto label_12b2a0;
        default: break;
    }

    ctx->pc = 0x12b290u;

    // 0x12b290: 0x26040250  addiu       $a0, $s0, 0x250
    ctx->pc = 0x12b290u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 592));
    // 0x12b294: 0x26060330  addiu       $a2, $s0, 0x330
    ctx->pc = 0x12b294u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 816));
    // 0x12b298: 0xc066e02  jal         func_19B808
    ctx->pc = 0x12B298u;
    SET_GPR_U32(ctx, 31, 0x12B2A0u);
    ctx->pc = 0x12B29Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B298u;
    // 0x12b29c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B808u, 0x12B298u, 0x12B2A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B2A0u;
label_12b2a0:
    // 0x12b2a0: 0xc6010334  lwc1        $f1, 0x334($s0)
    ctx->pc = 0x12b2a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 820)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12b2a4: 0x3c03bb03  lui         $v1, 0xBB03
    ctx->pc = 0x12b2a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)47875 << 16));
    // 0x12b2a8: 0x3463126f  ori         $v1, $v1, 0x126F
    ctx->pc = 0x12b2a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4719);
    // 0x12b2ac: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x12b2acu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12b2b0: 0x0  nop
    ctx->pc = 0x12b2b0u;
    // NOP
    // 0x12b2b4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x12b2b4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x12b2b8: 0xe6000334  swc1        $f0, 0x334($s0)
    ctx->pc = 0x12b2b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 820), bits); }
    // 0x12b2bc: 0x960302e6  lhu         $v1, 0x2E6($s0)
    ctx->pc = 0x12b2bcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 742)));
    // 0x12b2c0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x12b2c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x12b2c4: 0xa60302e6  sh          $v1, 0x2E6($s0)
    ctx->pc = 0x12b2c4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 742), (uint16_t)GPR_U32(ctx, 3));
    ctx->pc = 0x12b2c8u;
}
