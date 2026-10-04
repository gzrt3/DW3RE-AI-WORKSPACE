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

// Function: entry_001b1dbc
// Address: 0x1b1dbc - 0x1b1e0c
void entry_001b1dbc_0x1b1dbc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b1dbc_0x1b1dbc");
#endif

    switch (ctx->pc) {
        case 0x1b1de8u: goto label_1b1de8;
        case 0x1b1e08u: goto label_1b1e08;
        default: break;
    }

    ctx->pc = 0x1b1dbcu;

    // 0x1b1dbc: 0x3c090037  lui         $t1, 0x37
    ctx->pc = 0x1b1dbcu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)55 << 16));
    // 0x1b1dc0: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1b1dc0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1dc4: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1b1dc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1dc8: 0x252977c0  addiu       $t1, $t1, 0x77C0
    ctx->pc = 0x1b1dc8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 30656));
    // 0x1b1dcc: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1b1dccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1b1dd0: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1b1dd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1b1dd4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1b1dd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b1dd8: 0x24080414  addiu       $t0, $zero, 0x414
    ctx->pc = 0x1b1dd8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1044));
    // 0x1b1ddc: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1b1ddcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1b1de0: 0xc069e2a  jal         func_1A78A8
    ctx->pc = 0x1B1DE0u;
    SET_GPR_U32(ctx, 31, 0x1B1DE8u);
    ctx->pc = 0x1B1DE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1DE0u;
    // 0x1b1de4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A78A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A78A8u, 0x1B1DE0u, 0x1B1DE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1DE8u;
label_1b1de8:
    // 0x1b1de8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1b1de8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1dec: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B1DECu;
    {
        const bool branch_taken_0x1b1dec = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B1DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1DECu;
        // 0x1b1df0: 0x3c030029  lui         $v1, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1dec) {
            ctx->pc = 0x1B1E00u;
            goto label_1b1e00;
        }
    }
    ctx->pc = 0x1B1DF4u;
    // 0x1b1df4: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x1b1df4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1b1df8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1B1DF8u;
    {
        const bool branch_taken_0x1b1df8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1DF8u;
        // 0x1b1dfc: 0xac628d08  sw          $v0, -0x72F8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294937864), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1df8) {
            ctx->pc = 0x1B1E08u;
            goto label_1b1e08;
        }
    }
    ctx->pc = 0x1B1E00u;
label_1b1e00:
    // 0x1b1e00: 0xc069210  jal         func_1A4840
    ctx->pc = 0x1B1E00u;
    SET_GPR_U32(ctx, 31, 0x1B1E08u);
    ctx->pc = 0x1B1E04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1E00u;
    // 0x1b1e04: 0x8ea48d0c  lw          $a0, -0x72F4($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294937868)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4840u, 0x1B1E00u, 0x1B1E08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1E08u;
label_1b1e08:
    // 0x1b1e08: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1b1e08u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1b1e0cu;
}
