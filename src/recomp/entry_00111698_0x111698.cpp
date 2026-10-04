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

// Function: entry_00111698
// Address: 0x111698 - 0x1116c4
void entry_00111698_0x111698(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00111698_0x111698");
#endif

    ctx->pc = 0x111698u;

    // 0x111698: 0x1105000a  beq         $t0, $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x111698u;
    {
        const bool branch_taken_0x111698 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 5));
        if (branch_taken_0x111698) {
            ctx->pc = 0x1116C4u;
            return;
        }
    }
    ctx->pc = 0x1116A0u;
    // 0x1116a0: 0x90870034  lbu         $a3, 0x34($a0)
    ctx->pc = 0x1116a0u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x1116a4: 0x2466000a  addiu       $a2, $v1, 0xA
    ctx->pc = 0x1116a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
    // 0x1116a8: 0x9085002a  lbu         $a1, 0x2A($a0)
    ctx->pc = 0x1116a8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 42)));
    // 0x1116ac: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x1116acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x1116b0: 0x90c60000  lbu         $a2, 0x0($a2)
    ctx->pc = 0x1116b0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1116b4: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x1116b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x1116b8: 0x28a1001c  slti        $at, $a1, 0x1C
    ctx->pc = 0x1116b8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)28) ? 1 : 0);
    // 0x1116bc: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x1116BCu;
    {
        const bool branch_taken_0x1116bc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1116bc) {
            ctx->pc = 0x1116E4u;
            return;
        }
    }
    ctx->pc = 0x1116C4u;
}
