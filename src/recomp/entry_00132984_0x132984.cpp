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

// Function: entry_00132984
// Address: 0x132984 - 0x1329b4
void entry_00132984_0x132984(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00132984_0x132984");
#endif

    ctx->pc = 0x132984u;

    // 0x132984: 0x28e10057  slti        $at, $a3, 0x57
    ctx->pc = 0x132984u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)87) ? 1 : 0);
    // 0x132988: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x132988u;
    {
        const bool branch_taken_0x132988 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x13298Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132988u;
        // 0x13298c: 0x28e1005f  slti        $at, $a3, 0x5F (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)95) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x132988) {
            ctx->pc = 0x1329B4u;
            return;
        }
    }
    ctx->pc = 0x132990u;
    // 0x132990: 0x73080  sll         $a2, $a3, 2
    ctx->pc = 0x132990u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x132994: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x132994u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x132998: 0xc73821  addu        $a3, $a2, $a3
    ctx->pc = 0x132998u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x13299c: 0x2484a4c0  addiu       $a0, $a0, -0x5B40
    ctx->pc = 0x13299cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943936));
    // 0x1329a0: 0x73080  sll         $a2, $a3, 2
    ctx->pc = 0x1329a0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x1329a4: 0xe63021  addu        $a2, $a3, $a2
    ctx->pc = 0x1329a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x1329a8: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x1329a8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x1329ac: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1329ACu;
    {
        const bool branch_taken_0x1329ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1329B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1329ACu;
        // 0x1329b0: 0x862021  addu        $a0, $a0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1329ac) {
            ctx->pc = 0x132A00u;
            return;
        }
    }
    ctx->pc = 0x1329B4u;
}
