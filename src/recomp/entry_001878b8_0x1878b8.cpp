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

// Function: entry_001878b8
// Address: 0x1878b8 - 0x1878f0
void entry_001878b8_0x1878b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001878b8_0x1878b8");
#endif

    switch (ctx->pc) {
        case 0x1878d0u: goto label_1878d0;
        default: break;
    }

    ctx->pc = 0x1878b8u;

    // 0x1878b8: 0x30c30008  andi        $v1, $a2, 0x8
    ctx->pc = 0x1878b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)8);
    // 0x1878bc: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x1878BCu;
    {
        const bool branch_taken_0x1878bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1878bc) {
            ctx->pc = 0x187900u;
            return;
        }
    }
    ctx->pc = 0x1878C4u;
    // 0x1878c4: 0xa620019e  sh          $zero, 0x19E($s1)
    ctx->pc = 0x1878c4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 414), (uint16_t)GPR_U32(ctx, 0));
    // 0x1878c8: 0xc062400  jal         func_189000
    ctx->pc = 0x1878C8u;
    SET_GPR_U32(ctx, 31, 0x1878D0u);
    ctx->pc = 0x1878CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1878C8u;
    // 0x1878cc: 0xa620019c  sh          $zero, 0x19C($s1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 17), 412), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x189000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x189000u, 0x1878C8u, 0x1878D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1878D0u;
label_1878d0:
    // 0x1878d0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1878D0u;
    {
        const bool branch_taken_0x1878d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1878d0) {
            ctx->pc = 0x1878F0u;
            return;
        }
    }
    ctx->pc = 0x1878D8u;
    // 0x1878d8: 0x8e240194  lw          $a0, 0x194($s1)
    ctx->pc = 0x1878d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 404)));
    // 0x1878dc: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x1878dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x1878e0: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x1878e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x1878e4: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1878e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1878e8: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1878E8u;
    {
        const bool branch_taken_0x1878e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1878ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1878E8u;
        // 0x1878ec: 0xae230194  sw          $v1, 0x194($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 404), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1878e8) {
            ctx->pc = 0x18792Cu;
            return;
        }
    }
    ctx->pc = 0x1878F0u;
}
