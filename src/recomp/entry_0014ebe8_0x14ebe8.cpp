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

// Function: entry_0014ebe8
// Address: 0x14ebe8 - 0x14ec0c
void entry_0014ebe8_0x14ebe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014ebe8_0x14ebe8");
#endif

    ctx->pc = 0x14ebe8u;

    // 0x14ebe8: 0x0  nop
    ctx->pc = 0x14ebe8u;
    // NOP
    // 0x14ebec: 0x32880  sll         $a1, $v1, 2
    ctx->pc = 0x14ebecu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x14ebf0: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x14ebf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x14ebf4: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x14ebf4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x14ebf8: 0x90a5008c  lbu         $a1, 0x8C($a1)
    ctx->pc = 0x14ebf8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 140)));
    // 0x14ebfc: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x14EBFCu;
    {
        const bool branch_taken_0x14ebfc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x14ebfc) {
            ctx->pc = 0x14EC18u;
            return;
        }
    }
    ctx->pc = 0x14EC04u;
    // 0x14ec04: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x14ec04u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x14ec08: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x14ec08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    ctx->pc = 0x14ec0cu;
}
