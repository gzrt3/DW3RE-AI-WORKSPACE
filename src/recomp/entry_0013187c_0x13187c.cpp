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

// Function: entry_0013187c
// Address: 0x13187c - 0x1318b8
void entry_0013187c_0x13187c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013187c_0x13187c");
#endif

    ctx->pc = 0x13187cu;

    // 0x13187c: 0x14d1021  addu        $v0, $t2, $t5
    ctx->pc = 0x13187cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 13)));
    // 0x131880: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x131880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x131884: 0x9449000a  lhu         $t1, 0xA($v0)
    ctx->pc = 0x131884u;
    SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 10)));
    // 0x131888: 0x91100  sll         $v0, $t1, 4
    ctx->pc = 0x131888u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
    // 0x13188c: 0x491023  subu        $v0, $v0, $t1
    ctx->pc = 0x13188cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x131890: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x131890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x131894: 0x90420002  lbu         $v0, 0x2($v0)
    ctx->pc = 0x131894u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x131898: 0x1047000b  beq         $v0, $a3, . + 4 + (0xB << 2)
    ctx->pc = 0x131898u;
    {
        const bool branch_taken_0x131898 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 7));
        if (branch_taken_0x131898) {
            ctx->pc = 0x1318C8u;
            return;
        }
    }
    ctx->pc = 0x1318A0u;
    // 0x1318a0: 0x10460007  beq         $v0, $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x1318A0u;
    {
        const bool branch_taken_0x1318a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        if (branch_taken_0x1318a0) {
            ctx->pc = 0x1318C0u;
            return;
        }
    }
    ctx->pc = 0x1318A8u;
    // 0x1318a8: 0x10450003  beq         $v0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1318A8u;
    {
        const bool branch_taken_0x1318a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x1318a8) {
            ctx->pc = 0x1318B8u;
            return;
        }
    }
    ctx->pc = 0x1318B0u;
    // 0x1318b0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1318B0u;
    {
        const bool branch_taken_0x1318b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1318b0) {
            ctx->pc = 0x1318CCu;
            return;
        }
    }
    ctx->pc = 0x1318B8u;
}
