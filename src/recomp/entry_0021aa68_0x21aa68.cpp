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

// Function: entry_0021aa68
// Address: 0x21aa68 - 0x21aa84
void entry_0021aa68_0x21aa68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021aa68_0x21aa68");
#endif

    ctx->pc = 0x21aa68u;

    // 0x21aa68: 0x8f849288  lw          $a0, -0x6D78($gp)
    ctx->pc = 0x21aa68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939272)));
    // 0x21aa6c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21aa6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21aa70: 0x1082ff4d  beq         $a0, $v0, . + 4 + (-0xB3 << 2)
    ctx->pc = 0x21AA70u;
    {
        const bool branch_taken_0x21aa70 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x21aa70) {
            ctx->pc = 0x21A7A8u;
            return;
        }
    }
    ctx->pc = 0x21AA78u;
    // 0x21aa78: 0xaf80927c  sw          $zero, -0x6D84($gp)
    ctx->pc = 0x21aa78u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939260), GPR_U32(ctx, 0));
    // 0x21aa7c: 0xaf8092ac  sw          $zero, -0x6D54($gp)
    ctx->pc = 0x21aa7cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939308), GPR_U32(ctx, 0));
    // 0x21aa80: 0xaf8092a8  sw          $zero, -0x6D58($gp)
    ctx->pc = 0x21aa80u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939304), GPR_U32(ctx, 0));
    ctx->pc = 0x21aa84u;
}
