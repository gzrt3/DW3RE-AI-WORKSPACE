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

// Function: entry_00134874
// Address: 0x134874 - 0x13488c
void entry_00134874_0x134874(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00134874_0x134874");
#endif

    ctx->pc = 0x134874u;

    // 0x134874: 0x0  nop
    ctx->pc = 0x134874u;
    // NOP
    // 0x134878: 0x84850000  lh          $a1, 0x0($a0)
    ctx->pc = 0x134878u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x13487c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x13487cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x134880: 0x14a3ffe1  bne         $a1, $v1, . + 4 + (-0x1F << 2)
    ctx->pc = 0x134880u;
    {
        const bool branch_taken_0x134880 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x134880) {
            ctx->pc = 0x134808u;
            return;
        }
    }
    ctx->pc = 0x134888u;
    // 0x134888: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x134888u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x13488cu;
}
