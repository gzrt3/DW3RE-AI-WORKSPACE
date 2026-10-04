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

// Function: entry_00163fa8
// Address: 0x163fa8 - 0x163fc8
void entry_00163fa8_0x163fa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00163fa8_0x163fa8");
#endif

    ctx->pc = 0x163fa8u;

    // 0x163fa8: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x163fa8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x163fac: 0x106000b0  beqz        $v1, . + 4 + (0xB0 << 2)
    ctx->pc = 0x163FACu;
    {
        const bool branch_taken_0x163fac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x163fac) {
            ctx->pc = 0x164270u;
            return;
        }
    }
    ctx->pc = 0x163FB4u;
    // 0x163fb4: 0x8f838644  lw          $v1, -0x79BC($gp)
    ctx->pc = 0x163fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936132)));
    // 0x163fb8: 0x1c6000ad  bgtz        $v1, . + 4 + (0xAD << 2)
    ctx->pc = 0x163FB8u;
    {
        const bool branch_taken_0x163fb8 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x163fb8) {
            ctx->pc = 0x164270u;
            return;
        }
    }
    ctx->pc = 0x163FC0u;
    // 0x163fc0: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x163fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x163fc4: 0xaf828644  sw          $v0, -0x79BC($gp)
    ctx->pc = 0x163fc4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936132), GPR_U32(ctx, 2));
    ctx->pc = 0x163fc8u;
}
