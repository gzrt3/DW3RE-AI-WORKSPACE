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

// Function: entry_0010e33c
// Address: 0x10e33c - 0x10e360
void entry_0010e33c_0x10e33c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010e33c_0x10e33c");
#endif

    ctx->pc = 0x10e33cu;

    // 0x10e33c: 0xa5030000  sh          $v1, 0x0($t0)
    ctx->pc = 0x10e33cu;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x10e340: 0x85040000  lh          $a0, 0x0($t0)
    ctx->pc = 0x10e340u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x10e344: 0x84a30252  lh          $v1, 0x252($a1)
    ctx->pc = 0x10e344u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 594)));
    // 0x10e348: 0x872023  subu        $a0, $a0, $a3
    ctx->pc = 0x10e348u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x10e34c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x10e34cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x10e350: 0x28610191  slti        $at, $v1, 0x191
    ctx->pc = 0x10e350u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)401) ? 1 : 0);
    // 0x10e354: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x10E354u;
    {
        const bool branch_taken_0x10e354 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x10e354) {
            ctx->pc = 0x10E360u;
            return;
        }
    }
    ctx->pc = 0x10E35Cu;
    // 0x10e35c: 0x24030190  addiu       $v1, $zero, 0x190
    ctx->pc = 0x10e35cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
    ctx->pc = 0x10e360u;
}
