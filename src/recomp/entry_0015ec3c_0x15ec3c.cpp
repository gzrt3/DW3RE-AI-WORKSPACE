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

// Function: entry_0015ec3c
// Address: 0x15ec3c - 0x15ec68
void entry_0015ec3c_0x15ec3c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015ec3c_0x15ec3c");
#endif

    switch (ctx->pc) {
        case 0x15ec48u: goto label_15ec48;
        default: break;
    }

    ctx->pc = 0x15ec3cu;

label_15ec3c:
    // 0x15ec3c: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x15ec3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x15ec40: 0xc070080  jal         func_1C0200
    ctx->pc = 0x15EC40u;
    SET_GPR_U32(ctx, 31, 0x15EC48u);
    ctx->pc = 0x15EC44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15EC40u;
    // 0x15ec44: 0x24050e40  addiu       $a1, $zero, 0xE40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3648));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0200u, 0x15EC40u, 0x15EC48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15EC48u;
label_15ec48:
    // 0x15ec48: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x15ec48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x15ec4c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x15ec4cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x15ec50: 0x24634b00  addiu       $v1, $v1, 0x4B00
    ctx->pc = 0x15ec50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19200));
    // 0x15ec54: 0x702021  addu        $a0, $v1, $s0
    ctx->pc = 0x15ec54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x15ec58: 0x2a23000d  slti        $v1, $s1, 0xD
    ctx->pc = 0x15ec58u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)13) ? 1 : 0);
    // 0x15ec5c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x15ec5cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x15ec60: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x15EC60u;
    {
        const bool branch_taken_0x15ec60 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x15EC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EC60u;
        // 0x15ec64: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ec60) {
            ctx->pc = 0x15EC3Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15ec3c;
        }
    }
    ctx->pc = 0x15EC68u;
}
