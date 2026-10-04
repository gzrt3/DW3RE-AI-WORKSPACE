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

// Function: entry_00204244
// Address: 0x204244 - 0x204298
void entry_00204244_0x204244(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00204244_0x204244");
#endif

    switch (ctx->pc) {
        case 0x20427cu: goto label_20427c;
        default: break;
    }

    ctx->pc = 0x204244u;

    // 0x204244: 0x14a30014  bne         $a1, $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x204244u;
    {
        const bool branch_taken_0x204244 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x204244) {
            ctx->pc = 0x204298u;
            return;
        }
    }
    ctx->pc = 0x20424Cu;
    // 0x20424c: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x20424cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
    // 0x204250: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x204250u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x204254: 0x2442d360  addiu       $v0, $v0, -0x2CA0
    ctx->pc = 0x204254u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955872));
    // 0x204258: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x204258u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x20425c: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x20425cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x204260: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x204260u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x204264: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x204264u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x204268: 0x27828280  addiu       $v0, $gp, -0x7D80
    ctx->pc = 0x204268u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935168));
    // 0x20426c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x20426cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x204270: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x204270u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x204274: 0xc08f20e  jal         func_23C838
    ctx->pc = 0x204274u;
    SET_GPR_U32(ctx, 31, 0x20427Cu);
    ctx->pc = 0x204278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204274u;
    // 0x204278: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23C838u, 0x204274u, 0x20427Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20427Cu;
label_20427c:
    // 0x20427c: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x20427cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
    // 0x204280: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x204280u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x204284: 0x2442d360  addiu       $v0, $v0, -0x2CA0
    ctx->pc = 0x204284u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955872));
    // 0x204288: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x204288u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x20428c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x20428cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x204290: 0xc08f28e  jal         func_23CA38
    ctx->pc = 0x204290u;
    SET_GPR_U32(ctx, 31, 0x204298u);
    ctx->pc = 0x204294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204290u;
    // 0x204294: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23CA38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23CA38u, 0x204290u, 0x204298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204298u;
}
