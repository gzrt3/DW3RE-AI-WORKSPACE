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

// Function: entry_00164234
// Address: 0x164234 - 0x164258
void entry_00164234_0x164234(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00164234_0x164234");
#endif

    ctx->pc = 0x164234u;

label_164234:
    // 0x164234: 0x0  nop
    ctx->pc = 0x164234u;
    // NOP
label_164238:
    // 0x164238: 0x8e020364  lw          $v0, 0x364($s0)
    ctx->pc = 0x164238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 868)));
label_16423c:
    // 0x16423c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_164240:
    if (ctx->pc == 0x164240u) {
        ctx->pc = 0x164244u;
        goto label_164244;
    }
    ctx->pc = 0x16423Cu;
    {
        const bool branch_taken_0x16423c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16423c) {
            ctx->pc = 0x164258u;
            return;
        }
    }
    ctx->pc = 0x164244u;
label_164244:
    // 0x164244: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x164244u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_164248:
    // 0x164248: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x164248u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
label_16424c:
    // 0x16424c: 0x8e020364  lw          $v0, 0x364($s0)
    ctx->pc = 0x16424cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 868)));
label_164250:
    // 0x164250: 0x40f809  jalr        $v0
label_164254:
    if (ctx->pc == 0x164254u) {
        ctx->pc = 0x164254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164250u;
        // 0x164254: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x164258u;
        goto label_fallthrough_0x164250;
    }
    ctx->pc = 0x164250u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x164258u);
        ctx->pc = 0x164254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164250u;
        // 0x164254: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x164250u, 0x164258u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x164250:
    ctx->pc = 0x164258u;
}
