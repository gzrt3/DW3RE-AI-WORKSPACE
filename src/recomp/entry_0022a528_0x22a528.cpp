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

// Function: entry_0022a528
// Address: 0x22a528 - 0x22a54c
void entry_0022a528_0x22a528(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022a528_0x22a528");
#endif

    ctx->pc = 0x22a528u;

    // 0x22a528: 0x891821  addu        $v1, $a0, $t1
    ctx->pc = 0x22a528u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x22a52c: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x22a52cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x22a530: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x22A530u;
    {
        const bool branch_taken_0x22a530 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x22a530) {
            ctx->pc = 0x22A54Cu;
            return;
        }
    }
    ctx->pc = 0x22A538u;
    // 0x22a538: 0x84a3021c  lh          $v1, 0x21C($a1)
    ctx->pc = 0x22a538u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 540)));
    // 0x22a53c: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x22a53cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x22a540: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x22A540u;
    {
        const bool branch_taken_0x22a540 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x22a540) {
            ctx->pc = 0x22A54Cu;
            return;
        }
    }
    ctx->pc = 0x22A548u;
    // 0x22a548: 0xa4a30220  sh          $v1, 0x220($a1)
    ctx->pc = 0x22a548u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 544), (uint16_t)GPR_U32(ctx, 3));
    ctx->pc = 0x22a54cu;
}
