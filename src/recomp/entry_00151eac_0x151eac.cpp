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

// Function: entry_00151eac
// Address: 0x151eac - 0x151ee8
void entry_00151eac_0x151eac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00151eac_0x151eac");
#endif

    ctx->pc = 0x151eacu;

    // 0x151eac: 0x8e0303c0  lw          $v1, 0x3C0($s0)
    ctx->pc = 0x151eacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 960)));
    // 0x151eb0: 0x1060005b  beqz        $v1, . + 4 + (0x5B << 2)
    ctx->pc = 0x151EB0u;
    {
        const bool branch_taken_0x151eb0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x151eb0) {
            ctx->pc = 0x152020u;
            return;
        }
    }
    ctx->pc = 0x151EB8u;
    // 0x151eb8: 0x8e0403c4  lw          $a0, 0x3C4($s0)
    ctx->pc = 0x151eb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 964)));
    // 0x151ebc: 0x10800016  beqz        $a0, . + 4 + (0x16 << 2)
    ctx->pc = 0x151EBCu;
    {
        const bool branch_taken_0x151ebc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x151ebc) {
            ctx->pc = 0x151F18u;
            return;
        }
    }
    ctx->pc = 0x151EC4u;
    // 0x151ec4: 0x9083023a  lbu         $v1, 0x23A($a0)
    ctx->pc = 0x151ec4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 570)));
    // 0x151ec8: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x151EC8u;
    {
        const bool branch_taken_0x151ec8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x151ec8) {
            ctx->pc = 0x151EE8u;
            return;
        }
    }
    ctx->pc = 0x151ED0u;
    // 0x151ed0: 0x9083023b  lbu         $v1, 0x23B($a0)
    ctx->pc = 0x151ed0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 571)));
    // 0x151ed4: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x151ED4u;
    {
        const bool branch_taken_0x151ed4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x151ed4) {
            ctx->pc = 0x151EF0u;
            return;
        }
    }
    ctx->pc = 0x151EDCu;
    // 0x151edc: 0x908301a2  lbu         $v1, 0x1A2($a0)
    ctx->pc = 0x151edcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 418)));
    // 0x151ee0: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x151EE0u;
    {
        const bool branch_taken_0x151ee0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x151ee0) {
            ctx->pc = 0x151EF0u;
            return;
        }
    }
    ctx->pc = 0x151EE8u;
}
