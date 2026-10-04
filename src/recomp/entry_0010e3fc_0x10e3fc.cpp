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

// Function: entry_0010e3fc
// Address: 0x10e3fc - 0x10e424
void entry_0010e3fc_0x10e3fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010e3fc_0x10e3fc");
#endif

    ctx->pc = 0x10e3fcu;

    // 0x10e3fc: 0xa5440000  sh          $a0, 0x0($t2)
    ctx->pc = 0x10e3fcu;
    WRITE16(ADD32(GPR_U32(ctx, 10), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x10e400: 0xa4640008  sh          $a0, 0x8($v1)
    ctx->pc = 0x10e400u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 8), (uint16_t)GPR_U32(ctx, 4));
    // 0x10e404: 0x85440000  lh          $a0, 0x0($t2)
    ctx->pc = 0x10e404u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x10e408: 0x85030220  lh          $v1, 0x220($t0)
    ctx->pc = 0x10e408u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 544)));
    // 0x10e40c: 0x892023  subu        $a0, $a0, $t1
    ctx->pc = 0x10e40cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x10e410: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x10e410u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x10e414: 0x28610191  slti        $at, $v1, 0x191
    ctx->pc = 0x10e414u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)401) ? 1 : 0);
    // 0x10e418: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x10E418u;
    {
        const bool branch_taken_0x10e418 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x10e418) {
            ctx->pc = 0x10E424u;
            return;
        }
    }
    ctx->pc = 0x10E420u;
    // 0x10e420: 0x24030190  addiu       $v1, $zero, 0x190
    ctx->pc = 0x10e420u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
    ctx->pc = 0x10e424u;
}
