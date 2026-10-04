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

// Function: entry_0014d9e0
// Address: 0x14d9e0 - 0x14da08
void entry_0014d9e0_0x14d9e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014d9e0_0x14d9e0");
#endif

    switch (ctx->pc) {
        case 0x14da00u: goto label_14da00;
        default: break;
    }

    ctx->pc = 0x14d9e0u;

    // 0x14d9e0: 0x10830015  beq         $a0, $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x14D9E0u;
    {
        const bool branch_taken_0x14d9e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x14D9E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D9E0u;
        // 0x14d9e4: 0x3c053f80  lui         $a1, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d9e0) {
            ctx->pc = 0x14DA38u;
            return;
        }
    }
    ctx->pc = 0x14D9E8u;
    // 0x14d9e8: 0x32230002  andi        $v1, $s1, 0x2
    ctx->pc = 0x14d9e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)2);
    // 0x14d9ec: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x14D9ECu;
    {
        const bool branch_taken_0x14d9ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x14D9F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D9ECu;
        // 0x14d9f0: 0xae05000c  sw          $a1, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d9ec) {
            ctx->pc = 0x14DA08u;
            return;
        }
    }
    ctx->pc = 0x14D9F4u;
    // 0x14d9f4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x14d9f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d9f8: 0xc07b064  jal         func_1EC190
    ctx->pc = 0x14D9F8u;
    SET_GPR_U32(ctx, 31, 0x14DA00u);
    ctx->pc = 0x14D9FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D9F8u;
    // 0x14d9fc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EC190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EC190u, 0x14D9F8u, 0x14DA00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14DA00u;
label_14da00:
    // 0x14da00: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x14DA00u;
    {
        const bool branch_taken_0x14da00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14DA04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DA00u;
        // 0x14da04: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14da00) {
            ctx->pc = 0x14DA3Cu;
            return;
        }
    }
    ctx->pc = 0x14DA08u;
}
