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

// Function: entry_00150fe0
// Address: 0x150fe0 - 0x151030
void entry_00150fe0_0x150fe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00150fe0_0x150fe0");
#endif

    switch (ctx->pc) {
        case 0x150ff4u: goto label_150ff4;
        case 0x151014u: goto label_151014;
        default: break;
    }

    ctx->pc = 0x150fe0u;

    // 0x150fe0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x150fe0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150fe4: 0xae02020c  sw          $v0, 0x20C($s0)
    ctx->pc = 0x150fe4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 524), GPR_U32(ctx, 2));
    // 0x150fe8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x150fe8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150fec: 0xc075224  jal         func_1D4890
    ctx->pc = 0x150FECu;
    SET_GPR_U32(ctx, 31, 0x150FF4u);
    ctx->pc = 0x150FF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150FECu;
    // 0x150ff0: 0xae110200  sw          $s1, 0x200($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4890u, 0x150FECu, 0x150FF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150FF4u;
label_150ff4:
    // 0x150ff4: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x150FF4u;
    {
        const bool branch_taken_0x150ff4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x150ff4) {
            ctx->pc = 0x151030u;
            return;
        }
    }
    ctx->pc = 0x150FFCu;
    // 0x150ffc: 0xae110204  sw          $s1, 0x204($s0)
    ctx->pc = 0x150ffcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 516), GPR_U32(ctx, 17));
    // 0x151000: 0x92220232  lbu         $v0, 0x232($s1)
    ctx->pc = 0x151000u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 562)));
    // 0x151004: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x151004u;
    {
        const bool branch_taken_0x151004 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x151008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151004u;
        // 0x151008: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151004) {
            ctx->pc = 0x151030u;
            return;
        }
    }
    ctx->pc = 0x15100Cu;
    // 0x15100c: 0xc0439cc  jal         func_10E730
    ctx->pc = 0x15100Cu;
    SET_GPR_U32(ctx, 31, 0x151014u);
    ctx->pc = 0x10E730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E730u, 0x15100Cu, 0x151014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151014u;
label_151014:
    // 0x151014: 0x220c0  sll         $a0, $v0, 3
    ctx->pc = 0x151014u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x151018: 0x3c03004b  lui         $v1, 0x4B
    ctx->pc = 0x151018u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)75 << 16));
    // 0x15101c: 0x821023  subu        $v0, $a0, $v0
    ctx->pc = 0x15101cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x151020: 0x246303d0  addiu       $v1, $v1, 0x3D0
    ctx->pc = 0x151020u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 976));
    // 0x151024: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x151024u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x151028: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x151028u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x15102c: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x15102cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    ctx->pc = 0x151030u;
}
