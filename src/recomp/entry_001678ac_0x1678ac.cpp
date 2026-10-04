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

// Function: entry_001678ac
// Address: 0x1678ac - 0x1678d0
void entry_001678ac_0x1678ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001678ac_0x1678ac");
#endif

    ctx->pc = 0x1678acu;

    // 0x1678ac: 0x0  nop
    ctx->pc = 0x1678acu;
    // NOP
    // 0x1678b0: 0x9203004d  lbu         $v1, 0x4D($s0)
    ctx->pc = 0x1678b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 77)));
    // 0x1678b4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1678b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1678b8: 0x1065000e  beq         $v1, $a1, . + 4 + (0xE << 2)
    ctx->pc = 0x1678B8u;
    {
        const bool branch_taken_0x1678b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x1678b8) {
            ctx->pc = 0x1678F4u;
            return;
        }
    }
    ctx->pc = 0x1678C0u;
    // 0x1678c0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1678C0u;
    {
        const bool branch_taken_0x1678c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1678c0) {
            ctx->pc = 0x1678D0u;
            return;
        }
    }
    ctx->pc = 0x1678C8u;
    // 0x1678c8: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x1678C8u;
    {
        const bool branch_taken_0x1678c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1678c8) {
            ctx->pc = 0x167984u;
            return;
        }
    }
    ctx->pc = 0x1678D0u;
}
