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

// Function: entry_001b5090
// Address: 0x1b5090 - 0x1b50e0
void entry_001b5090_0x1b5090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b5090_0x1b5090");
#endif

    switch (ctx->pc) {
        case 0x1b5098u: goto label_1b5098;
        case 0x1b50d8u: goto label_1b50d8;
        default: break;
    }

    ctx->pc = 0x1b5090u;

    // 0x1b5090: 0xc06ce88  jal         func_1B3A20
    ctx->pc = 0x1B5090u;
    SET_GPR_U32(ctx, 31, 0x1B5098u);
    ctx->pc = 0x1B5094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5090u;
    // 0x1b5094: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3A20u, 0x1B5090u, 0x1B5098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5098u;
label_1b5098:
    // 0x1b5098: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1b5098u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b509c: 0x30440003  andi        $a0, $v0, 0x3
    ctx->pc = 0x1b509cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x1b50a0: 0x1083000f  beq         $a0, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x1B50A0u;
    {
        const bool branch_taken_0x1b50a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1B50A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B50A0u;
        // 0x1b50a4: 0x28820002  slti        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b50a0) {
            ctx->pc = 0x1B50E0u;
            return;
        }
    }
    ctx->pc = 0x1B50A8u;
    // 0x1b50a8: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B50A8u;
    {
        const bool branch_taken_0x1b50a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b50a8) {
            ctx->pc = 0x1B50ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B50A8u;
            // 0x1b50ac: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B50C0u;
            goto label_1b50c0;
        }
    }
    ctx->pc = 0x1B50B0u;
    // 0x1b50b0: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B50B0u;
    {
        const bool branch_taken_0x1b50b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B50B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B50B0u;
        // 0x1b50b4: 0xc7ac0000  lwc1        $f12, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b50b0) {
            ctx->pc = 0x1B50D0u;
            goto label_1b50d0;
        }
    }
    ctx->pc = 0x1B50B8u;
    // 0x1b50b8: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1B50B8u;
    {
        const bool branch_taken_0x1b50b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B50BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B50B8u;
        // 0x1b50bc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b50b8) {
            ctx->pc = 0x1B5108u;
            return;
        }
    }
    ctx->pc = 0x1B50C0u;
label_1b50c0:
    // 0x1b50c0: 0x1082000d  beq         $a0, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1B50C0u;
    {
        const bool branch_taken_0x1b50c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1B50C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B50C0u;
        // 0x1b50c4: 0xc7ac0000  lwc1        $f12, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b50c0) {
            ctx->pc = 0x1B50F8u;
            return;
        }
    }
    ctx->pc = 0x1B50C8u;
    // 0x1b50c8: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1B50C8u;
    {
        const bool branch_taken_0x1b50c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B50CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B50C8u;
        // 0x1b50cc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b50c8) {
            ctx->pc = 0x1B5108u;
            return;
        }
    }
    ctx->pc = 0x1B50D0u;
label_1b50d0:
    // 0x1b50d0: 0xc06cfb0  jal         func_1B3EC0
    ctx->pc = 0x1B50D0u;
    SET_GPR_U32(ctx, 31, 0x1B50D8u);
    ctx->pc = 0x1B50D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B50D0u;
    // 0x1b50d4: 0xc7ad0004  lwc1        $f13, 0x4($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3EC0u, 0x1B50D0u, 0x1B50D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B50D8u;
label_1b50d8:
    // 0x1b50d8: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1B50D8u;
    {
        const bool branch_taken_0x1b50d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B50DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B50D8u;
        // 0x1b50dc: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b50d8) {
            ctx->pc = 0x1B5114u;
            return;
        }
    }
    ctx->pc = 0x1B50E0u;
}
