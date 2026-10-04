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

// Function: entry_001bd3ac
// Address: 0x1bd3ac - 0x1bd3d0
void entry_001bd3ac_0x1bd3ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bd3ac_0x1bd3ac");
#endif

    ctx->pc = 0x1bd3acu;

    // 0x1bd3ac: 0x0  nop
    ctx->pc = 0x1bd3acu;
    // NOP
    // 0x1bd3b0: 0x1810  mfhi        $v1
    ctx->pc = 0x1bd3b0u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x1bd3b4: 0x427c2  srl         $a0, $a0, 31
    ctx->pc = 0x1bd3b4u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x1bd3b8: 0x31943  sra         $v1, $v1, 5
    ctx->pc = 0x1bd3b8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 5));
    // 0x1bd3bc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1bd3bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1bd3c0: 0x286100fb  slti        $at, $v1, 0xFB
    ctx->pc = 0x1bd3c0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)251) ? 1 : 0);
    // 0x1bd3c4: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1BD3C4u;
    {
        const bool branch_taken_0x1bd3c4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bd3c4) {
            ctx->pc = 0x1BD3D0u;
            return;
        }
    }
    ctx->pc = 0x1BD3CCu;
    // 0x1bd3cc: 0x240300fa  addiu       $v1, $zero, 0xFA
    ctx->pc = 0x1bd3ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 250));
    ctx->pc = 0x1bd3d0u;
}
