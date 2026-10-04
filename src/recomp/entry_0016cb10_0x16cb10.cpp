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

// Function: entry_0016cb10
// Address: 0x16cb10 - 0x16cb38
void entry_0016cb10_0x16cb10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016cb10_0x16cb10");
#endif

    switch (ctx->pc) {
        case 0x16cb24u: goto label_16cb24;
        default: break;
    }

    ctx->pc = 0x16cb10u;

label_16cb10:
    // 0x16cb10: 0x8f858710  lw          $a1, -0x78F0($gp)
    ctx->pc = 0x16cb10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
    // 0x16cb14: 0x3c060036  lui         $a2, 0x36
    ctx->pc = 0x16cb14u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)54 << 16));
    // 0x16cb18: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x16cb18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x16cb1c: 0xc08d61c  jal         func_235870
    ctx->pc = 0x16CB1Cu;
    SET_GPR_U32(ctx, 31, 0x16CB24u);
    ctx->pc = 0x16CB20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16CB1Cu;
    // 0x16cb20: 0x24c63ef0  addiu       $a2, $a2, 0x3EF0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235870u, 0x16CB1Cu, 0x16CB24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16CB24u;
label_16cb24:
    // 0x16cb24: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x16cb24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16cb28: 0x1043fff9  beq         $v0, $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x16CB28u;
    {
        const bool branch_taken_0x16cb28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x16cb28) {
            ctx->pc = 0x16CB10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16cb10;
        }
    }
    ctx->pc = 0x16CB30u;
    // 0x16cb30: 0xaf808710  sw          $zero, -0x78F0($gp)
    ctx->pc = 0x16cb30u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936336), GPR_U32(ctx, 0));
    // 0x16cb34: 0x320300ff  andi        $v1, $s0, 0xFF
    ctx->pc = 0x16cb34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    ctx->pc = 0x16cb38u;
}
