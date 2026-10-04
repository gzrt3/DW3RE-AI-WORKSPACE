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

// Function: entry_0022b014
// Address: 0x22b014 - 0x22b050
void entry_0022b014_0x22b014(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022b014_0x22b014");
#endif

    ctx->pc = 0x22b014u;

    // 0x22b014: 0x91430094  lbu         $v1, 0x94($t2)
    ctx->pc = 0x22b014u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 148)));
    // 0x22b018: 0x14690016  bne         $v1, $t1, . + 4 + (0x16 << 2)
    ctx->pc = 0x22B018u;
    {
        const bool branch_taken_0x22b018 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 9));
        if (branch_taken_0x22b018) {
            ctx->pc = 0x22B074u;
            return;
        }
    }
    ctx->pc = 0x22B020u;
    // 0x22b020: 0x91430096  lbu         $v1, 0x96($t2)
    ctx->pc = 0x22b020u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 150)));
    // 0x22b024: 0x14680013  bne         $v1, $t0, . + 4 + (0x13 << 2)
    ctx->pc = 0x22B024u;
    {
        const bool branch_taken_0x22b024 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 8));
        if (branch_taken_0x22b024) {
            ctx->pc = 0x22B074u;
            return;
        }
    }
    ctx->pc = 0x22B02Cu;
    // 0x22b02c: 0x9143009d  lbu         $v1, 0x9D($t2)
    ctx->pc = 0x22b02cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 157)));
    // 0x22b030: 0x1067000a  beq         $v1, $a3, . + 4 + (0xA << 2)
    ctx->pc = 0x22B030u;
    {
        const bool branch_taken_0x22b030 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 7));
        if (branch_taken_0x22b030) {
            ctx->pc = 0x22B05Cu;
            return;
        }
    }
    ctx->pc = 0x22B038u;
    // 0x22b038: 0x10660007  beq         $v1, $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x22B038u;
    {
        const bool branch_taken_0x22b038 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        if (branch_taken_0x22b038) {
            ctx->pc = 0x22B058u;
            return;
        }
    }
    ctx->pc = 0x22B040u;
    // 0x22b040: 0x10650003  beq         $v1, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x22B040u;
    {
        const bool branch_taken_0x22b040 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x22b040) {
            ctx->pc = 0x22B050u;
            return;
        }
    }
    ctx->pc = 0x22B048u;
    // 0x22b048: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x22B048u;
    {
        const bool branch_taken_0x22b048 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22b048) {
            ctx->pc = 0x22B05Cu;
            return;
        }
    }
    ctx->pc = 0x22B050u;
}
