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

// Function: entry_00225ff4
// Address: 0x225ff4 - 0x226014
void entry_00225ff4_0x225ff4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00225ff4_0x225ff4");
#endif

    ctx->pc = 0x225ff4u;

    // 0x225ff4: 0x871021  addu        $v0, $a0, $a3
    ctx->pc = 0x225ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x225ff8: 0x24453620  addiu       $a1, $v0, 0x3620
    ctx->pc = 0x225ff8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 13856));
    // 0x225ffc: 0x9042367c  lbu         $v0, 0x367C($v0)
    ctx->pc = 0x225ffcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 13948)));
    // 0x226000: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x226000u;
    {
        const bool branch_taken_0x226000 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x226000) {
            ctx->pc = 0x226014u;
            return;
        }
    }
    ctx->pc = 0x226008u;
    // 0x226008: 0x8ca20050  lw          $v0, 0x50($a1)
    ctx->pc = 0x226008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 80)));
    // 0x22600c: 0x10430006  beq         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x22600Cu;
    {
        const bool branch_taken_0x22600c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x22600c) {
            ctx->pc = 0x226028u;
            return;
        }
    }
    ctx->pc = 0x226014u;
}
