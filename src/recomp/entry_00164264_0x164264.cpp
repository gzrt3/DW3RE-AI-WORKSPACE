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

// Function: entry_00164264
// Address: 0x164264 - 0x164270
void entry_00164264_0x164264(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00164264_0x164264");
#endif

    ctx->pc = 0x164264u;

    // 0x164264: 0x0  nop
    ctx->pc = 0x164264u;
    // NOP
    // 0x164268: 0xc0713d4  jal         func_1C4F50
    ctx->pc = 0x164268u;
    SET_GPR_U32(ctx, 31, 0x164270u);
    ctx->pc = 0x1C4F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4F50u, 0x164268u, 0x164270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164270u;
}
