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

// Function: entry_00164c38
// Address: 0x164c38 - 0x164c6c
void entry_00164c38_0x164c38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00164c38_0x164c38");
#endif

    ctx->pc = 0x164c38u;

    // 0x164c38: 0x9123005d  lbu         $v1, 0x5D($t1)
    ctx->pc = 0x164c38u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 93)));
    // 0x164c3c: 0x14660011  bne         $v1, $a2, . + 4 + (0x11 << 2)
    ctx->pc = 0x164C3Cu;
    {
        const bool branch_taken_0x164c3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        if (branch_taken_0x164c3c) {
            ctx->pc = 0x164C84u;
            return;
        }
    }
    ctx->pc = 0x164C44u;
    // 0x164c44: 0x9123005b  lbu         $v1, 0x5B($t1)
    ctx->pc = 0x164c44u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 91)));
    // 0x164c48: 0x1460000e  bnez        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x164C48u;
    {
        const bool branch_taken_0x164c48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x164c48) {
            ctx->pc = 0x164C84u;
            return;
        }
    }
    ctx->pc = 0x164C50u;
    // 0x164c50: 0x9123005f  lbu         $v1, 0x5F($t1)
    ctx->pc = 0x164c50u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 95)));
    // 0x164c54: 0x14650005  bne         $v1, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x164C54u;
    {
        const bool branch_taken_0x164c54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x164c54) {
            ctx->pc = 0x164C6Cu;
            return;
        }
    }
    ctx->pc = 0x164C5Cu;
    // 0x164c5c: 0x95230056  lhu         $v1, 0x56($t1)
    ctx->pc = 0x164c5cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 86)));
    // 0x164c60: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x164c60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x164c64: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x164C64u;
    {
        const bool branch_taken_0x164c64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x164C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164C64u;
        // 0x164c68: 0xa5230056  sh          $v1, 0x56($t1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 9), 86), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164c64) {
            ctx->pc = 0x164C84u;
            return;
        }
    }
    ctx->pc = 0x164C6Cu;
}
