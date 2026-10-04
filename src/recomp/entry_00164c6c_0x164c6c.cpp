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

// Function: entry_00164c6c
// Address: 0x164c6c - 0x164c84
void entry_00164c6c_0x164c6c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00164c6c_0x164c6c");
#endif

    ctx->pc = 0x164c6cu;

    // 0x164c6c: 0x0  nop
    ctx->pc = 0x164c6cu;
    // NOP
    // 0x164c70: 0x14640004  bne         $v1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x164C70u;
    {
        const bool branch_taken_0x164c70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x164c70) {
            ctx->pc = 0x164C84u;
            return;
        }
    }
    ctx->pc = 0x164C78u;
    // 0x164c78: 0x95230056  lhu         $v1, 0x56($t1)
    ctx->pc = 0x164c78u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 86)));
    // 0x164c7c: 0x3063fffe  andi        $v1, $v1, 0xFFFE
    ctx->pc = 0x164c7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65534);
    // 0x164c80: 0xa5230056  sh          $v1, 0x56($t1)
    ctx->pc = 0x164c80u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 86), (uint16_t)GPR_U32(ctx, 3));
    ctx->pc = 0x164c84u;
}
