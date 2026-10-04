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

// Function: entry_00100a6c
// Address: 0x100a6c - 0x100a90
void entry_00100a6c_0x100a6c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00100a6c_0x100a6c");
#endif

    ctx->pc = 0x100a6cu;

    // 0x100a6c: 0x0  nop
    ctx->pc = 0x100a6cu;
    // NOP
    // 0x100a70: 0x18a3021  addu        $a2, $t4, $t2
    ctx->pc = 0x100a70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 10)));
    // 0x100a74: 0xdcc60008  ld          $a2, 0x8($a2)
    ctx->pc = 0x100a74u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x100a78: 0x10c00005  beqz        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x100A78u;
    {
        const bool branch_taken_0x100a78 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x100a78) {
            ctx->pc = 0x100A90u;
            return;
        }
    }
    ctx->pc = 0x100A80u;
    // 0x100a80: 0x6333c  dsll32      $a2, $a2, 12
    ctx->pc = 0x100a80u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 12));
    // 0x100a84: 0x6333e  dsrl32      $a2, $a2, 12
    ctx->pc = 0x100a84u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 12));
    // 0x100a88: 0x1663014  dsllv       $a2, $a2, $t3
    ctx->pc = 0x100a88u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (GPR_U32(ctx, 11) & 0x3F));
    // 0x100a8c: 0xe63825  or          $a3, $a3, $a2
    ctx->pc = 0x100a8cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 6));
    ctx->pc = 0x100a90u;
}
