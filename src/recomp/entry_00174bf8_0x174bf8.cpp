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

// Function: entry_00174bf8
// Address: 0x174bf8 - 0x174c10
void entry_00174bf8_0x174bf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00174bf8_0x174bf8");
#endif

    ctx->pc = 0x174bf8u;

    // 0x174bf8: 0x2402002b  addiu       $v0, $zero, 0x2B
    ctx->pc = 0x174bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
    // 0x174bfc: 0x10820004  beq         $a0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x174BFCu;
    {
        const bool branch_taken_0x174bfc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x174bfc) {
            ctx->pc = 0x174C10u;
            return;
        }
    }
    ctx->pc = 0x174C04u;
    // 0x174c04: 0x24020036  addiu       $v0, $zero, 0x36
    ctx->pc = 0x174c04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
    // 0x174c08: 0x14820006  bne         $a0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x174C08u;
    {
        const bool branch_taken_0x174c08 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x174c08) {
            ctx->pc = 0x174C24u;
            return;
        }
    }
    ctx->pc = 0x174C10u;
}
