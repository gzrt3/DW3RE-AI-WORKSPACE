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

// Function: entry_001bd458
// Address: 0x1bd458 - 0x1bd470
void entry_001bd458_0x1bd458(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bd458_0x1bd458");
#endif

    ctx->pc = 0x1bd458u;

    // 0x1bd458: 0x31943  sra         $v1, $v1, 5
    ctx->pc = 0x1bd458u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 5));
    // 0x1bd45c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1bd45cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1bd460: 0x286100fb  slti        $at, $v1, 0xFB
    ctx->pc = 0x1bd460u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)251) ? 1 : 0);
    // 0x1bd464: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1BD464u;
    {
        const bool branch_taken_0x1bd464 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bd464) {
            ctx->pc = 0x1BD470u;
            return;
        }
    }
    ctx->pc = 0x1BD46Cu;
    // 0x1bd46c: 0x240300fa  addiu       $v1, $zero, 0xFA
    ctx->pc = 0x1bd46cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 250));
    ctx->pc = 0x1bd470u;
}
