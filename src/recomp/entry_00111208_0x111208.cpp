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

// Function: entry_00111208
// Address: 0x111208 - 0x111230
void entry_00111208_0x111208(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00111208_0x111208");
#endif

    ctx->pc = 0x111208u;

    // 0x111208: 0x11800009  beqz        $t4, . + 4 + (0x9 << 2)
    ctx->pc = 0x111208u;
    {
        const bool branch_taken_0x111208 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        if (branch_taken_0x111208) {
            ctx->pc = 0x111230u;
            return;
        }
    }
    ctx->pc = 0x111210u;
    // 0x111210: 0x95ae000c  lhu         $t6, 0xC($t5)
    ctx->pc = 0x111210u;
    SET_GPR_ZE32(ctx, 14, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 12)));
    // 0x111214: 0x6a5821  addu        $t3, $v1, $t2
    ctx->pc = 0x111214u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x111218: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x111218u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x11121c: 0xe6100  sll         $t4, $t6, 4
    ctx->pc = 0x11121cu;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 14), 4));
    // 0x111220: 0x18e6023  subu        $t4, $t4, $t6
    ctx->pc = 0x111220u;
    SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 14)));
    // 0x111224: 0xac6021  addu        $t4, $a1, $t4
    ctx->pc = 0x111224u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
    // 0x111228: 0x918c0002  lbu         $t4, 0x2($t4)
    ctx->pc = 0x111228u;
    SET_GPR_ZE32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 2)));
    // 0x11122c: 0xa16c0000  sb          $t4, 0x0($t3)
    ctx->pc = 0x11122cu;
    WRITE8(ADD32(GPR_U32(ctx, 11), 0), (uint8_t)GPR_U32(ctx, 12));
    ctx->pc = 0x111230u;
}
