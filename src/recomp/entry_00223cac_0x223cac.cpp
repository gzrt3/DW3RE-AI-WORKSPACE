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

// Function: entry_00223cac
// Address: 0x223cac - 0x223ce4
void entry_00223cac_0x223cac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00223cac_0x223cac");
#endif

    switch (ctx->pc) {
        case 0x223cc0u: goto label_223cc0;
        default: break;
    }

    ctx->pc = 0x223cacu;

    // 0x223cac: 0x92030096  lbu         $v1, 0x96($s0)
    ctx->pc = 0x223cacu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 150)));
    // 0x223cb0: 0x1471000c  bne         $v1, $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x223CB0u;
    {
        const bool branch_taken_0x223cb0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 17));
        ctx->pc = 0x223CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223CB0u;
        // 0x223cb4: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223cb0) {
            ctx->pc = 0x223CE4u;
            return;
        }
    }
    ctx->pc = 0x223CB8u;
    // 0x223cb8: 0xc0590dc  jal         func_164370
    ctx->pc = 0x223CB8u;
    SET_GPR_U32(ctx, 31, 0x223CC0u);
    ctx->pc = 0x164370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164370u, 0x223CB8u, 0x223CC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223CC0u;
label_223cc0:
    // 0x223cc0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x223CC0u;
    {
        const bool branch_taken_0x223cc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x223cc0) {
            ctx->pc = 0x223CE4u;
            return;
        }
    }
    ctx->pc = 0x223CC8u;
    // 0x223cc8: 0x9204009c  lbu         $a0, 0x9C($s0)
    ctx->pc = 0x223cc8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 156)));
    // 0x223ccc: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x223cccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x223cd0: 0x24633710  addiu       $v1, $v1, 0x3710
    ctx->pc = 0x223cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14096));
    // 0x223cd4: 0x34840080  ori         $a0, $a0, 0x80
    ctx->pc = 0x223cd4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)128);
    // 0x223cd8: 0xa204009c  sb          $a0, 0x9C($s0)
    ctx->pc = 0x223cd8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 156), (uint8_t)GPR_U32(ctx, 4));
    // 0x223cdc: 0xac50005c  sw          $s0, 0x5C($v0)
    ctx->pc = 0x223cdcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 92), GPR_U32(ctx, 16));
    // 0x223ce0: 0xac43001c  sw          $v1, 0x1C($v0)
    ctx->pc = 0x223ce0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 3));
    ctx->pc = 0x223ce4u;
}
