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

// Function: entry_0020ee08
// Address: 0x20ee08 - 0x20ee20
void entry_0020ee08_0x20ee08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020ee08_0x20ee08");
#endif

    ctx->pc = 0x20ee08u;

    // 0x20ee08: 0x8f8391a4  lw          $v1, -0x6E5C($gp)
    ctx->pc = 0x20ee08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939044)));
    // 0x20ee0c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x20ee0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x20ee10: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x20ee10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20ee14: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x20ee14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20ee18: 0xc083b9c  jal         func_20EE70
    ctx->pc = 0x20EE18u;
    SET_GPR_U32(ctx, 31, 0x20EE20u);
    ctx->pc = 0x20EE1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20EE18u;
    // 0x20ee1c: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20EE70u, 0x20EE18u, 0x20EE20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20EE20u;
}
