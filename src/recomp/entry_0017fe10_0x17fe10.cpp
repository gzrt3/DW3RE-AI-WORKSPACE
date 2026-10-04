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

// Function: entry_0017fe10
// Address: 0x17fe10 - 0x17fe30
void entry_0017fe10_0x17fe10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017fe10_0x17fe10");
#endif

    ctx->pc = 0x17fe10u;

    // 0x17fe10: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x17fe10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17fe14: 0x246391c4  addiu       $v1, $v1, -0x6E3C
    ctx->pc = 0x17fe14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939076));
    // 0x17fe18: 0x672821  addu        $a1, $v1, $a3
    ctx->pc = 0x17fe18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x17fe1c: 0xaca60000  sw          $a2, 0x0($a1)
    ctx->pc = 0x17fe1cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
    // 0x17fe20: 0x3c030200  lui         $v1, 0x200
    ctx->pc = 0x17fe20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)512 << 16));
    // 0x17fe24: 0x8c850090  lw          $a1, 0x90($a0)
    ctx->pc = 0x17fe24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 144)));
    // 0x17fe28: 0xa31825  or          $v1, $a1, $v1
    ctx->pc = 0x17fe28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x17fe2c: 0xac830090  sw          $v1, 0x90($a0)
    ctx->pc = 0x17fe2cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 144), GPR_U32(ctx, 3));
    ctx->pc = 0x17fe30u;
}
