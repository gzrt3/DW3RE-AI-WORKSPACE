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

// Function: entry_001b50e0
// Address: 0x1b50e0 - 0x1b5110
void entry_001b50e0_0x1b50e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b50e0_0x1b50e0");
#endif

    switch (ctx->pc) {
        case 0x1b50f0u: goto label_1b50f0;
        case 0x1b5100u: goto label_1b5100;
        default: break;
    }

    ctx->pc = 0x1b50e0u;

    // 0x1b50e0: 0xc7ac0000  lwc1        $f12, 0x0($sp)
    ctx->pc = 0x1b50e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1b50e4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1b50e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b50e8: 0xc06d236  jal         func_1B48D8
    ctx->pc = 0x1B50E8u;
    SET_GPR_U32(ctx, 31, 0x1B50F0u);
    ctx->pc = 0x1B50ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B50E8u;
    // 0x1b50ec: 0xc7ad0004  lwc1        $f13, 0x4($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B48D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B48D8u, 0x1B50E8u, 0x1B50F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B50F0u;
label_1b50f0:
    // 0x1b50f0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1B50F0u;
    {
        const bool branch_taken_0x1b50f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B50F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B50F0u;
        // 0x1b50f4: 0x46000007  neg.s       $f0, $f0 (Delay Slot)
        ctx->f[0] = FPU_NEG_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b50f0) {
            ctx->pc = 0x1B5110u;
            return;
        }
    }
    ctx->pc = 0x1B50F8u;
    // 0x1b50f8: 0xc06cfb0  jal         func_1B3EC0
    ctx->pc = 0x1B50F8u;
    SET_GPR_U32(ctx, 31, 0x1B5100u);
    ctx->pc = 0x1B50FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B50F8u;
    // 0x1b50fc: 0xc7ad0004  lwc1        $f13, 0x4($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3EC0u, 0x1B50F8u, 0x1B5100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5100u;
label_1b5100:
    // 0x1b5100: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1B5100u;
    {
        const bool branch_taken_0x1b5100 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5100u;
        // 0x1b5104: 0x46000007  neg.s       $f0, $f0 (Delay Slot)
        ctx->f[0] = FPU_NEG_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5100) {
            ctx->pc = 0x1B5110u;
            return;
        }
    }
    ctx->pc = 0x1B5108u;
    // 0x1b5108: 0xc06d236  jal         func_1B48D8
    ctx->pc = 0x1B5108u;
    SET_GPR_U32(ctx, 31, 0x1B5110u);
    ctx->pc = 0x1B510Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5108u;
    // 0x1b510c: 0xc7ad0004  lwc1        $f13, 0x4($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B48D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B48D8u, 0x1B5108u, 0x1B5110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5110u;
}
