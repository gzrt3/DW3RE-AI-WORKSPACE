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

// Function: entry_001b53a0
// Address: 0x1b53a0 - 0x1b53e8
void entry_001b53a0_0x1b53a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b53a0_0x1b53a0");
#endif

    switch (ctx->pc) {
        case 0x1b53acu: goto label_1b53ac;
        case 0x1b53c4u: goto label_1b53c4;
        case 0x1b53d8u: goto label_1b53d8;
        default: break;
    }

    ctx->pc = 0x1b53a0u;

    // 0x1b53a0: 0xc7ac0000  lwc1        $f12, 0x0($sp)
    ctx->pc = 0x1b53a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1b53a4: 0xc06cfb0  jal         func_1B3EC0
    ctx->pc = 0x1B53A4u;
    SET_GPR_U32(ctx, 31, 0x1B53ACu);
    ctx->pc = 0x1B53A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B53A4u;
    // 0x1b53a8: 0xc7ad0004  lwc1        $f13, 0x4($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3EC0u, 0x1B53A4u, 0x1B53ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B53ACu;
label_1b53ac:
    // 0x1b53ac: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1B53ACu;
    {
        const bool branch_taken_0x1b53ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B53B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B53ACu;
        // 0x1b53b0: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b53ac) {
            ctx->pc = 0x1B53E0u;
            goto label_1b53e0;
        }
    }
    ctx->pc = 0x1B53B4u;
    // 0x1b53b4: 0x0  nop
    ctx->pc = 0x1b53b4u;
    // NOP
    // 0x1b53b8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1b53b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b53bc: 0xc06d236  jal         func_1B48D8
    ctx->pc = 0x1B53BCu;
    SET_GPR_U32(ctx, 31, 0x1B53C4u);
    ctx->pc = 0x1B53C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B53BCu;
    // 0x1b53c0: 0xc7ad0004  lwc1        $f13, 0x4($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B48D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B48D8u, 0x1B53BCu, 0x1B53C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B53C4u;
label_1b53c4:
    // 0x1b53c4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1B53C4u;
    {
        const bool branch_taken_0x1b53c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B53C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B53C4u;
        // 0x1b53c8: 0x46000007  neg.s       $f0, $f0 (Delay Slot)
        ctx->f[0] = FPU_NEG_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b53c4) {
            ctx->pc = 0x1B53DCu;
            goto label_1b53dc;
        }
    }
    ctx->pc = 0x1B53CCu;
    // 0x1b53cc: 0x0  nop
    ctx->pc = 0x1b53ccu;
    // NOP
    // 0x1b53d0: 0xc06cfb0  jal         func_1B3EC0
    ctx->pc = 0x1B53D0u;
    SET_GPR_U32(ctx, 31, 0x1B53D8u);
    ctx->pc = 0x1B53D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B53D0u;
    // 0x1b53d4: 0xc7ad0004  lwc1        $f13, 0x4($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3EC0u, 0x1B53D0u, 0x1B53D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B53D8u;
label_1b53d8:
    // 0x1b53d8: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1b53d8u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_1b53dc:
    // 0x1b53dc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1b53dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1b53e0:
    // 0x1b53e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1B53E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B53E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B53E0u;
        // 0x1b53e4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B53E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B53E8u;
}
