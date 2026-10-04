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

// Function: entry_001fd49c
// Address: 0x1fd49c - 0x1fd4a4
void entry_001fd49c_0x1fd49c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fd49c_0x1fd49c");
#endif

    ctx->pc = 0x1fd49cu;

    // 0x1fd49c: 0xc0804a0  jal         func_201280
    ctx->pc = 0x1FD49Cu;
    SET_GPR_U32(ctx, 31, 0x1FD4A4u);
    ctx->pc = 0x1FD4A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD49Cu;
    // 0x1fd4a0: 0x2409000a  addiu       $t1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201280u, 0x1FD49Cu, 0x1FD4A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD4A4u;
}
