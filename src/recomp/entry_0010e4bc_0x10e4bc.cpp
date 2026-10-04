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

// Function: entry_0010e4bc
// Address: 0x10e4bc - 0x10e4e4
void entry_0010e4bc_0x10e4bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010e4bc_0x10e4bc");
#endif

    ctx->pc = 0x10e4bcu;

    // 0x10e4bc: 0xa1640000  sb          $a0, 0x0($t3)
    ctx->pc = 0x10e4bcu;
    WRITE8(ADD32(GPR_U32(ctx, 11), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x10e4c0: 0xa144000f  sb          $a0, 0xF($t2)
    ctx->pc = 0x10e4c0u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 15), (uint8_t)GPR_U32(ctx, 4));
    // 0x10e4c4: 0x91640000  lbu         $a0, 0x0($t3)
    ctx->pc = 0x10e4c4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x10e4c8: 0x9065024b  lbu         $a1, 0x24B($v1)
    ctx->pc = 0x10e4c8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 587)));
    // 0x10e4cc: 0x892023  subu        $a0, $a0, $t1
    ctx->pc = 0x10e4ccu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x10e4d0: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x10e4d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x10e4d4: 0x28a100fb  slti        $at, $a1, 0xFB
    ctx->pc = 0x10e4d4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)251) ? 1 : 0);
    // 0x10e4d8: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x10E4D8u;
    {
        const bool branch_taken_0x10e4d8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x10e4d8) {
            ctx->pc = 0x10E4E4u;
            return;
        }
    }
    ctx->pc = 0x10E4E0u;
    // 0x10e4e0: 0x240500fa  addiu       $a1, $zero, 0xFA
    ctx->pc = 0x10e4e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 250));
    ctx->pc = 0x10e4e4u;
}
