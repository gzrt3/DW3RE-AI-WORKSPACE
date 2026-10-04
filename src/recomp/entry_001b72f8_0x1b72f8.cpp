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

// Function: entry_001b72f8
// Address: 0x1b72f8 - 0x1b7370
void entry_001b72f8_0x1b72f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b72f8_0x1b72f8");
#endif

    ctx->pc = 0x1b72f8u;

    // 0x1b72f8: 0x240207ff  addiu       $v0, $zero, 0x7FF
    ctx->pc = 0x1b72f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2047));
    // 0x1b72fc: 0x54e20012  bnel        $a3, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1B72FCu;
    {
        const bool branch_taken_0x1b72fc = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        if (branch_taken_0x1b72fc) {
            ctx->pc = 0x1B7300u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B72FCu;
            // 0x1b7300: 0x31a38  dsll        $v1, $v1, 8 (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 8);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B7348u;
            goto label_1b7348;
        }
    }
    ctx->pc = 0x1B7304u;
    // 0x1b7304: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B7304u;
    {
        const bool branch_taken_0x1b7304 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B7308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7304u;
        // 0x1b7308: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7304) {
            ctx->pc = 0x1B7318u;
            goto label_1b7318;
        }
    }
    ctx->pc = 0x1B730Cu;
    // 0x1b730c: 0x3e00008  jr          $ra
    ctx->pc = 0x1B730Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B7310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B730Cu;
        // 0x1b7310: 0xacc20000  sw          $v0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B730Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B7314u;
    // 0x1b7314: 0x0  nop
    ctx->pc = 0x1b7314u;
    // NOP
label_1b7318:
    // 0x1b7318: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x1b7318u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1b731c: 0x2113c  dsll32      $v0, $v0, 4
    ctx->pc = 0x1b731cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 4));
    // 0x1b7320: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1b7320u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1b7324: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B7324u;
    {
        const bool branch_taken_0x1b7324 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B7328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7324u;
        // 0x1b7328: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7324) {
            ctx->pc = 0x1B7338u;
            goto label_1b7338;
        }
    }
    ctx->pc = 0x1B732Cu;
    // 0x1b732c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1B732Cu;
    {
        const bool branch_taken_0x1b732c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B7330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B732Cu;
        // 0x1b7330: 0xacc20000  sw          $v0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b732c) {
            ctx->pc = 0x1B733Cu;
            goto label_1b733c;
        }
    }
    ctx->pc = 0x1B7334u;
    // 0x1b7334: 0x0  nop
    ctx->pc = 0x1b7334u;
    // NOP
label_1b7338:
    // 0x1b7338: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x1b7338u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
label_1b733c:
    // 0x1b733c: 0x3e00008  jr          $ra
    ctx->pc = 0x1B733Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B7340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B733Cu;
        // 0x1b7340: 0xfcc30010  sd          $v1, 0x10($a2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B733Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B7344u;
    // 0x1b7344: 0x0  nop
    ctx->pc = 0x1b7344u;
    // NOP
label_1b7348:
    // 0x1b7348: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x1b7348u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1b734c: 0x2137c  dsll32      $v0, $v0, 13
    ctx->pc = 0x1b734cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 13));
    // 0x1b7350: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1b7350u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1b7354: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1b7354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1b7358: 0x24e4fc01  addiu       $a0, $a3, -0x3FF
    ctx->pc = 0x1b7358u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 4294966273));
    // 0x1b735c: 0xfcc30010  sd          $v1, 0x10($a2)
    ctx->pc = 0x1b735cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 3));
    // 0x1b7360: 0xacc40008  sw          $a0, 0x8($a2)
    ctx->pc = 0x1b7360u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 4));
    // 0x1b7364: 0x3e00008  jr          $ra
    ctx->pc = 0x1B7364u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B7368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7364u;
        // 0x1b7368: 0xacc20000  sw          $v0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B7364u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B736Cu;
    // 0x1b736c: 0x0  nop
    ctx->pc = 0x1b736cu;
    // NOP
    ctx->pc = 0x1b7370u;
}
