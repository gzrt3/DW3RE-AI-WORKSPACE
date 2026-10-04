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

// Function: entry_001fd2a4
// Address: 0x1fd2a4 - 0x1fd2d8
void entry_001fd2a4_0x1fd2a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fd2a4_0x1fd2a4");
#endif

    ctx->pc = 0x1fd2a4u;

    // 0x1fd2a4: 0x0  nop
    ctx->pc = 0x1fd2a4u;
    // NOP
    // 0x1fd2a8: 0x86450004  lh          $a1, 0x4($s2)
    ctx->pc = 0x1fd2a8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1fd2ac: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x1fd2acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1fd2b0: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x1fd2b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x1fd2b4: 0x2463a780  addiu       $v1, $v1, -0x5880
    ctx->pc = 0x1fd2b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944640));
    // 0x1fd2b8: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x1fd2b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x1fd2bc: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x1fd2bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1fd2c0: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1fd2c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x1fd2c4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1fd2c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1fd2c8: 0x28810191  slti        $at, $a0, 0x191
    ctx->pc = 0x1fd2c8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)401) ? 1 : 0);
    // 0x1fd2cc: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1FD2CCu;
    {
        const bool branch_taken_0x1fd2cc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fd2cc) {
            ctx->pc = 0x1FD2D8u;
            return;
        }
    }
    ctx->pc = 0x1FD2D4u;
    // 0x1fd2d4: 0x24040190  addiu       $a0, $zero, 0x190
    ctx->pc = 0x1fd2d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
    ctx->pc = 0x1fd2d8u;
}
