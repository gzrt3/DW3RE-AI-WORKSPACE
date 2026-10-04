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

// Function: entry_0016e210
// Address: 0x16e210 - 0x16e25c
void entry_0016e210_0x16e210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016e210_0x16e210");
#endif

    switch (ctx->pc) {
        case 0x16e24cu: goto label_16e24c;
        default: break;
    }

    ctx->pc = 0x16e210u;

    // 0x16e210: 0x8f828710  lw          $v0, -0x78F0($gp)
    ctx->pc = 0x16e210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
    // 0x16e214: 0x3c060036  lui         $a2, 0x36
    ctx->pc = 0x16e214u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)54 << 16));
    // 0x16e218: 0x24c63ef0  addiu       $a2, $a2, 0x3EF0
    ctx->pc = 0x16e218u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16112));
    // 0x16e21c: 0x3c032a07  lui         $v1, 0x2A07
    ctx->pc = 0x16e21cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)10759 << 16));
    // 0x16e220: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x16e220u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x16e224: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x16e224u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x16e228: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x16e228u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x16e22c: 0x8f828710  lw          $v0, -0x78F0($gp)
    ctx->pc = 0x16e22cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
    // 0x16e230: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x16e230u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x16e234: 0xaf828710  sw          $v0, -0x78F0($gp)
    ctx->pc = 0x16e234u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936336), GPR_U32(ctx, 2));
    // 0x16e238: 0x8f858710  lw          $a1, -0x78F0($gp)
    ctx->pc = 0x16e238u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
    // 0x16e23c: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x16E23Cu;
    {
        const bool branch_taken_0x16e23c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x16E240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E23Cu;
        // 0x16e240: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e23c) {
            ctx->pc = 0x16E260u;
            return;
        }
    }
    ctx->pc = 0x16E244u;
    // 0x16e244: 0xc08d61c  jal         func_235870
    ctx->pc = 0x16E244u;
    SET_GPR_U32(ctx, 31, 0x16E24Cu);
    ctx->pc = 0x16E248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16E244u;
    // 0x16e248: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235870u, 0x16E244u, 0x16E24Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E24Cu;
label_16e24c:
    // 0x16e24c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x16e24cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16e250: 0x10430002  beq         $v0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x16E250u;
    {
        const bool branch_taken_0x16e250 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x16e250) {
            ctx->pc = 0x16E25Cu;
            return;
        }
    }
    ctx->pc = 0x16E258u;
    // 0x16e258: 0xaf808710  sw          $zero, -0x78F0($gp)
    ctx->pc = 0x16e258u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936336), GPR_U32(ctx, 0));
    ctx->pc = 0x16e25cu;
}
