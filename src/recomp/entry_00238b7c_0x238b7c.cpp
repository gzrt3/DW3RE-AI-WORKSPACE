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

// Function: entry_00238b7c
// Address: 0x238b7c - 0x238bb0
void entry_00238b7c_0x238b7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00238b7c_0x238b7c");
#endif

    ctx->pc = 0x238b7cu;

    // 0x238b7c: 0x3c030029  lui         $v1, 0x29
    ctx->pc = 0x238b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
    // 0x238b80: 0x8103c  dsll32      $v0, $t0, 0
    ctx->pc = 0x238b80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) << (32 + 0));
    // 0x238b84: 0xdc640c30  ld          $a0, 0xC30($v1)
    ctx->pc = 0x238b84u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 3120)));
    // 0x238b88: 0x35030001  ori         $v1, $t0, 0x1
    ctx->pc = 0x238b88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)1);
    // 0x238b8c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x238b8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x238b90: 0xad490008  sw          $t1, 0x8($t2)
    ctx->pc = 0x238b90u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 8), GPR_U32(ctx, 9));
    // 0x238b94: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x238b94u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x238b98: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x238B98u;
    {
        const bool branch_taken_0x238b98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x238B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238B98u;
        // 0x238b9c: 0xad230004  sw          $v1, 0x4($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238b98) {
            ctx->pc = 0x238BB0u;
            return;
        }
    }
    ctx->pc = 0x238BA0u;
    // 0x238ba0: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x238ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
    // 0x238ba4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x238ba4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238ba8: 0xc08e37e  jal         func_238DF8
    ctx->pc = 0x238BA8u;
    SET_GPR_U32(ctx, 31, 0x238BB0u);
    ctx->pc = 0x238BACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238BA8u;
    // 0x238bac: 0x8c450c38  lw          $a1, 0xC38($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3128)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238DF8u, 0x238BA8u, 0x238BB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238BB0u;
}
