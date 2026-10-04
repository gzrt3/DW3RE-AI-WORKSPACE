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

// Function: entry_00164b40
// Address: 0x164b40 - 0x164b78
void entry_00164b40_0x164b40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00164b40_0x164b40");
#endif

    ctx->pc = 0x164b40u;

    // 0x164b40: 0x9123005d  lbu         $v1, 0x5D($t1)
    ctx->pc = 0x164b40u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 93)));
    // 0x164b44: 0x14660012  bne         $v1, $a2, . + 4 + (0x12 << 2)
    ctx->pc = 0x164B44u;
    {
        const bool branch_taken_0x164b44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        if (branch_taken_0x164b44) {
            ctx->pc = 0x164B90u;
            return;
        }
    }
    ctx->pc = 0x164B4Cu;
    // 0x164b4c: 0x9123005b  lbu         $v1, 0x5B($t1)
    ctx->pc = 0x164b4cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 91)));
    // 0x164b50: 0x1460000f  bnez        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x164B50u;
    {
        const bool branch_taken_0x164b50 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x164b50) {
            ctx->pc = 0x164B90u;
            return;
        }
    }
    ctx->pc = 0x164B58u;
    // 0x164b58: 0x9123005f  lbu         $v1, 0x5F($t1)
    ctx->pc = 0x164b58u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 95)));
    // 0x164b5c: 0x14650006  bne         $v1, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x164B5Cu;
    {
        const bool branch_taken_0x164b5c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x164b5c) {
            ctx->pc = 0x164B78u;
            return;
        }
    }
    ctx->pc = 0x164B64u;
    // 0x164b64: 0xa124005f  sb          $a0, 0x5F($t1)
    ctx->pc = 0x164b64u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 95), (uint8_t)GPR_U32(ctx, 4));
    // 0x164b68: 0x95230056  lhu         $v1, 0x56($t1)
    ctx->pc = 0x164b68u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 86)));
    // 0x164b6c: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x164b6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x164b70: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x164B70u;
    {
        const bool branch_taken_0x164b70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x164B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164B70u;
        // 0x164b74: 0xa5230056  sh          $v1, 0x56($t1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 9), 86), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164b70) {
            ctx->pc = 0x164B90u;
            return;
        }
    }
    ctx->pc = 0x164B78u;
}
