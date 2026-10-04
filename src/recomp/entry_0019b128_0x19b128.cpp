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

// Function: entry_0019b128
// Address: 0x19b128 - 0x19b144
void entry_0019b128_0x19b128(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019b128_0x19b128");
#endif

    ctx->pc = 0x19b128u;

label_19b128:
    // 0x19b128: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x19b128u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x19b12c: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x19b12cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x19b130: 0x30a2000c  andi        $v0, $a1, 0xC
    ctx->pc = 0x19b130u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)12);
    // 0x19b134: 0x0  nop
    ctx->pc = 0x19b134u;
    // NOP
    // 0x19b138: 0x0  nop
    ctx->pc = 0x19b138u;
    // NOP
    // 0x19b13c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x19B13Cu;
    {
        const bool branch_taken_0x19b13c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19b13c) {
            ctx->pc = 0x19B128u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19b128;
        }
    }
    ctx->pc = 0x19B144u;
}
