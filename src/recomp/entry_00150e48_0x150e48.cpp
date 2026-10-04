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

// Function: entry_00150e48
// Address: 0x150e48 - 0x150e60
void entry_00150e48_0x150e48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00150e48_0x150e48");
#endif

    ctx->pc = 0x150e48u;

    // 0x150e48: 0x16000048  bnez        $s0, . + 4 + (0x48 << 2)
    ctx->pc = 0x150E48u;
    {
        const bool branch_taken_0x150e48 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x150e48) {
            ctx->pc = 0x150F6Cu;
            return;
        }
    }
    ctx->pc = 0x150E50u;
    // 0x150e50: 0x8f868128  lw          $a2, -0x7ED8($gp)
    ctx->pc = 0x150e50u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934824)));
    // 0x150e54: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x150e54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x150e58: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x150e58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150e5c: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x150e5cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x150e60u;
}
