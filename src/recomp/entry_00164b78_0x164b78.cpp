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

// Function: entry_00164b78
// Address: 0x164b78 - 0x164b90
void entry_00164b78_0x164b78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00164b78_0x164b78");
#endif

    ctx->pc = 0x164b78u;

    // 0x164b78: 0x14640005  bne         $v1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x164B78u;
    {
        const bool branch_taken_0x164b78 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x164b78) {
            ctx->pc = 0x164B90u;
            return;
        }
    }
    ctx->pc = 0x164B80u;
    // 0x164b80: 0xa125005f  sb          $a1, 0x5F($t1)
    ctx->pc = 0x164b80u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 95), (uint8_t)GPR_U32(ctx, 5));
    // 0x164b84: 0x95230056  lhu         $v1, 0x56($t1)
    ctx->pc = 0x164b84u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 86)));
    // 0x164b88: 0x3063fffe  andi        $v1, $v1, 0xFFFE
    ctx->pc = 0x164b88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65534);
    // 0x164b8c: 0xa5230056  sh          $v1, 0x56($t1)
    ctx->pc = 0x164b8cu;
    WRITE16(ADD32(GPR_U32(ctx, 9), 86), (uint16_t)GPR_U32(ctx, 3));
    ctx->pc = 0x164b90u;
}
