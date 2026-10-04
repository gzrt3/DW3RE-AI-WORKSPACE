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

// Function: entry_00164b04
// Address: 0x164b04 - 0x164b20
void entry_00164b04_0x164b04(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00164b04_0x164b04");
#endif

    ctx->pc = 0x164b04u;

    // 0x164b04: 0x0  nop
    ctx->pc = 0x164b04u;
    // NOP
    // 0x164b08: 0x14660005  bne         $v1, $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x164B08u;
    {
        const bool branch_taken_0x164b08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        if (branch_taken_0x164b08) {
            ctx->pc = 0x164B20u;
            return;
        }
    }
    ctx->pc = 0x164B10u;
    // 0x164b10: 0xa1470097  sb          $a3, 0x97($t2)
    ctx->pc = 0x164b10u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 151), (uint8_t)GPR_U32(ctx, 7));
    // 0x164b14: 0x8d430090  lw          $v1, 0x90($t2)
    ctx->pc = 0x164b14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 144)));
    // 0x164b18: 0x34630010  ori         $v1, $v1, 0x10
    ctx->pc = 0x164b18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
    // 0x164b1c: 0xad430090  sw          $v1, 0x90($t2)
    ctx->pc = 0x164b1cu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 144), GPR_U32(ctx, 3));
    ctx->pc = 0x164b20u;
}
