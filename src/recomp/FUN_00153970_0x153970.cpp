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

// Function: FUN_00153970
// Address: 0x153970 - 0x1539a0
void FUN_00153970_0x153970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00153970_0x153970");
#endif

    ctx->pc = 0x153970u;

    // 0x153970: 0x1061821  addu        $v1, $t0, $a2
    ctx->pc = 0x153970u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x153974: 0xaf848600  sw          $a0, -0x7A00($gp)
    ctx->pc = 0x153974u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936064), GPR_U32(ctx, 4));
    // 0x153978: 0xaf8385f0  sw          $v1, -0x7A10($gp)
    ctx->pc = 0x153978u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936048), GPR_U32(ctx, 3));
    // 0x15397c: 0x1272021  addu        $a0, $t1, $a3
    ctx->pc = 0x15397cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 7)));
    // 0x153980: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x153980u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x153984: 0xaf8585fc  sw          $a1, -0x7A04($gp)
    ctx->pc = 0x153984u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936060), GPR_U32(ctx, 5));
    // 0x153988: 0xaf8a85e0  sw          $t2, -0x7A20($gp)
    ctx->pc = 0x153988u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936032), GPR_U32(ctx, 10));
    // 0x15398c: 0xaf8485ec  sw          $a0, -0x7A14($gp)
    ctx->pc = 0x15398cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936044), GPR_U32(ctx, 4));
    // 0x153990: 0xaf8385dc  sw          $v1, -0x7A24($gp)
    ctx->pc = 0x153990u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936028), GPR_U32(ctx, 3));
    // 0x153994: 0xaf8885f8  sw          $t0, -0x7A08($gp)
    ctx->pc = 0x153994u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936056), GPR_U32(ctx, 8));
    // 0x153998: 0xaf8885e8  sw          $t0, -0x7A18($gp)
    ctx->pc = 0x153998u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936040), GPR_U32(ctx, 8));
    // 0x15399c: 0xaf8985f4  sw          $t1, -0x7A0C($gp)
    ctx->pc = 0x15399cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936052), GPR_U32(ctx, 9));
    ctx->pc = 0x1539a0u;
}
