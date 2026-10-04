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

// Function: entry_00197c28
// Address: 0x197c28 - 0x197c44
void entry_00197c28_0x197c28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00197c28_0x197c28");
#endif

    switch (ctx->pc) {
        case 0x197c34u: goto label_197c34;
        default: break;
    }

    ctx->pc = 0x197c28u;

    // 0x197c28: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x197c28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x197c2c: 0xc0659e8  jal         func_1967A0
    ctx->pc = 0x197C2Cu;
    SET_GPR_U32(ctx, 31, 0x197C34u);
    ctx->pc = 0x197C30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197C2Cu;
    // 0x197c30: 0x27a500ac  addiu       $a1, $sp, 0xAC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1967A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1967A0u, 0x197C2Cu, 0x197C34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197C34u;
label_197c34:
    // 0x197c34: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x197c34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x197c38: 0x8fa200ac  lw          $v0, 0xAC($sp)
    ctx->pc = 0x197c38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x197c3c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x197c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x197c40: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x197c40u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    ctx->pc = 0x197c44u;
}
