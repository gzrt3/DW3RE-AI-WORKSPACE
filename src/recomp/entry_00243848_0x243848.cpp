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

// Function: entry_00243848
// Address: 0x243848 - 0x243874
void entry_00243848_0x243848(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00243848_0x243848");
#endif

    ctx->pc = 0x243848u;

    // 0x243848: 0x3c02002d  lui         $v0, 0x2D
    ctx->pc = 0x243848u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
    // 0x24384c: 0x2442eb08  addiu       $v0, $v0, -0x14F8
    ctx->pc = 0x24384cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961928));
    // 0x243850: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x243850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x243854: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x243854u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x243858: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x243858u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x24385c: 0x2443c  dsll32      $t0, $v0, 16
    ctx->pc = 0x24385cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) << (32 + 16));
    // 0x243860: 0x8443f  dsra32      $t0, $t0, 16
    ctx->pc = 0x243860u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 16));
    // 0x243864: 0x15000003  bnez        $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x243864u;
    {
        const bool branch_taken_0x243864 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x243868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243864u;
        // 0x243868: 0x3c03005a  lui         $v1, 0x5A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)90 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243864) {
            ctx->pc = 0x243874u;
            return;
        }
    }
    ctx->pc = 0x24386Cu;
    // 0x24386c: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x24386Cu;
    {
        const bool branch_taken_0x24386c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x243870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24386Cu;
        // 0x243870: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24386c) {
            ctx->pc = 0x2438BCu;
            return;
        }
    }
    ctx->pc = 0x243874u;
}
