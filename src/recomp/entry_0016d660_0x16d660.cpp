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

// Function: entry_0016d660
// Address: 0x16d660 - 0x16d68c
void entry_0016d660_0x16d660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016d660_0x16d660");
#endif

    switch (ctx->pc) {
        case 0x16d678u: goto label_16d678;
        default: break;
    }

    ctx->pc = 0x16d660u;

    // 0x16d660: 0x8f858710  lw          $a1, -0x78F0($gp)
    ctx->pc = 0x16d660u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
    // 0x16d664: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x16d664u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16d668: 0x3c060036  lui         $a2, 0x36
    ctx->pc = 0x16d668u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)54 << 16));
    // 0x16d66c: 0x10200a  movz        $a0, $zero, $s0
    ctx->pc = 0x16d66cu;
    if (GPR_U64(ctx, 16) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
    // 0x16d670: 0xc08d61c  jal         func_235870
    ctx->pc = 0x16D670u;
    SET_GPR_U32(ctx, 31, 0x16D678u);
    ctx->pc = 0x16D674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D670u;
    // 0x16d674: 0x24c63ef0  addiu       $a2, $a2, 0x3EF0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235870u, 0x16D670u, 0x16D678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D678u;
label_16d678:
    // 0x16d678: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x16d678u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16d67c: 0x1043fff4  beq         $v0, $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x16D67Cu;
    {
        const bool branch_taken_0x16d67c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x16d67c) {
            ctx->pc = 0x16D650u;
            return;
        }
    }
    ctx->pc = 0x16D684u;
    // 0x16d684: 0xaf808710  sw          $zero, -0x78F0($gp)
    ctx->pc = 0x16d684u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936336), GPR_U32(ctx, 0));
    // 0x16d688: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x16d688u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x16d68cu;
}
