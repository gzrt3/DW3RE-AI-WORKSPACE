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

// Function: entry_002224ec
// Address: 0x2224ec - 0x222510
void entry_002224ec_0x2224ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002224ec_0x2224ec");
#endif

    ctx->pc = 0x2224ecu;

    // 0x2224ec: 0x90820034  lbu         $v0, 0x34($a0)
    ctx->pc = 0x2224ecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x2224f0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2224f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2224f4: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2224F4u;
    {
        const bool branch_taken_0x2224f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2224f4) {
            ctx->pc = 0x222510u;
            return;
        }
    }
    ctx->pc = 0x2224FCu;
    // 0x2224fc: 0x90820035  lbu         $v0, 0x35($a0)
    ctx->pc = 0x2224fcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 53)));
    // 0x222500: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x222500u;
    {
        const bool branch_taken_0x222500 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x222500) {
            ctx->pc = 0x222510u;
            return;
        }
    }
    ctx->pc = 0x222508u;
    // 0x222508: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x222508u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x22250c: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x22250cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x222510u;
}
