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

// Function: entry_001990c8
// Address: 0x1990c8 - 0x1990f0
void entry_001990c8_0x1990c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001990c8_0x1990c8");
#endif

    switch (ctx->pc) {
        case 0x1990d0u: goto label_1990d0;
        default: break;
    }

    ctx->pc = 0x1990c8u;

    // 0x1990c8: 0xc069350  jal         func_1A4D40
    ctx->pc = 0x1990C8u;
    SET_GPR_U32(ctx, 31, 0x1990D0u);
    ctx->pc = 0x1A4D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4D40u, 0x1990C8u, 0x1990D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1990D0u;
label_1990d0:
    // 0x1990d0: 0x2137b  dsra        $v0, $v0, 13
    ctx->pc = 0x1990d0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 13);
    // 0x1990d4: 0x86030000  lh          $v1, 0x0($s0)
    ctx->pc = 0x1990d4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1990d8: 0x30440001  andi        $a0, $v0, 0x1
    ctx->pc = 0x1990d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1990dc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1990dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1990e0: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1990E0u;
    {
        const bool branch_taken_0x1990e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1990E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1990E0u;
        // 0x1990e4: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1990e0) {
            ctx->pc = 0x1990F0u;
            return;
        }
    }
    ctx->pc = 0x1990E8u;
    // 0x1990e8: 0x4103c  dsll32      $v0, $a0, 0
    ctx->pc = 0x1990e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 0));
    // 0x1990ec: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1990ecu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    ctx->pc = 0x1990f0u;
}
