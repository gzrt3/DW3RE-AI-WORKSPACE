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

// Function: entry_0016d68c
// Address: 0x16d68c - 0x16d698
void entry_0016d68c_0x16d68c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016d68c_0x16d68c");
#endif

    ctx->pc = 0x16d68cu;

    // 0x16d68c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x16d68cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16d690: 0xc05b5ac  jal         func_16D6B0
    ctx->pc = 0x16D690u;
    SET_GPR_U32(ctx, 31, 0x16D698u);
    ctx->pc = 0x16D694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D690u;
    // 0x16d694: 0x50200a  movz        $a0, $v0, $s0 (Delay Slot)
    if (GPR_U64(ctx, 16) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D6B0u, 0x16D690u, 0x16D698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D698u;
}
