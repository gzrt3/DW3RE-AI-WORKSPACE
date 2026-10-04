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

// Function: entry_00163f28
// Address: 0x163f28 - 0x163f48
void entry_00163f28_0x163f28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00163f28_0x163f28");
#endif

    ctx->pc = 0x163f28u;

label_163f28:
    // 0x163f28: 0x8e030364  lw          $v1, 0x364($s0)
    ctx->pc = 0x163f28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 868)));
label_163f2c:
    // 0x163f2c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_163f30:
    if (ctx->pc == 0x163F30u) {
        ctx->pc = 0x163F34u;
        goto label_163f34;
    }
    ctx->pc = 0x163F2Cu;
    {
        const bool branch_taken_0x163f2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x163f2c) {
            ctx->pc = 0x163F48u;
            return;
        }
    }
    ctx->pc = 0x163F34u;
label_163f34:
    // 0x163f34: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x163f34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_163f38:
    // 0x163f38: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x163f38u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
label_163f3c:
    // 0x163f3c: 0x8e020364  lw          $v0, 0x364($s0)
    ctx->pc = 0x163f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 868)));
label_163f40:
    // 0x163f40: 0x40f809  jalr        $v0
label_163f44:
    if (ctx->pc == 0x163F44u) {
        ctx->pc = 0x163F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163F40u;
        // 0x163f44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163F48u;
        goto label_fallthrough_0x163f40;
    }
    ctx->pc = 0x163F40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x163F48u);
        ctx->pc = 0x163F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163F40u;
        // 0x163f44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x163F40u, 0x163F48u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x163f40:
    ctx->pc = 0x163F48u;
}
