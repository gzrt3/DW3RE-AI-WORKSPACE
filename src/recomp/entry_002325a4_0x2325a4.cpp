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

// Function: entry_002325a4
// Address: 0x2325a4 - 0x2325f8
void entry_002325a4_0x2325a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002325a4_0x2325a4");
#endif

    switch (ctx->pc) {
        case 0x2325c0u: goto label_2325c0;
        case 0x2325e8u: goto label_2325e8;
        default: break;
    }

    ctx->pc = 0x2325a4u;

    // 0x2325a4: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x2325a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x2325a8: 0x18400013  blez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2325A8u;
    {
        const bool branch_taken_0x2325a8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2325ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2325A8u;
        // 0x2325ac: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2325a8) {
            ctx->pc = 0x2325F8u;
            return;
        }
    }
    ctx->pc = 0x2325B0u;
    // 0x2325b0: 0x3c100fff  lui         $s0, 0xFFF
    ctx->pc = 0x2325b0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)4095 << 16));
    // 0x2325b4: 0x3610ffff  ori         $s0, $s0, 0xFFFF
    ctx->pc = 0x2325b4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)65535);
    // 0x2325b8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2325b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2325bc: 0x0  nop
    ctx->pc = 0x2325bcu;
    // NOP
label_2325c0:
    // 0x2325c0: 0x122ac0  sll         $a1, $s2, 11
    ctx->pc = 0x2325c0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 18), 11));
    // 0x2325c4: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x2325c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2325c8: 0x122100  sll         $a0, $s2, 4
    ctx->pc = 0x2325c8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x2325cc: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x2325ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2325d0: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x2325d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2325d4: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x2325d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2325d8: 0xb02824  and         $a1, $a1, $s0
    ctx->pc = 0x2325d8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 16));
    // 0x2325dc: 0x24070080  addiu       $a3, $zero, 0x80
    ctx->pc = 0x2325dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2325e0: 0xc08c926  jal         func_232498
    ctx->pc = 0x2325E0u;
    SET_GPR_U32(ctx, 31, 0x2325E8u);
    ctx->pc = 0x2325E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2325E0u;
    // 0x2325e4: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x232498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232498u, 0x2325E0u, 0x2325E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2325E8u;
label_2325e8:
    // 0x2325e8: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x2325e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x2325ec: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x2325ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2325f0: 0x5440fff3  bnel        $v0, $zero, . + 4 + (-0xD << 2)
    ctx->pc = 0x2325F0u;
    {
        const bool branch_taken_0x2325f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2325f0) {
            ctx->pc = 0x2325F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2325F0u;
            // 0x2325f4: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2325C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2325c0;
        }
    }
    ctx->pc = 0x2325F8u;
}
