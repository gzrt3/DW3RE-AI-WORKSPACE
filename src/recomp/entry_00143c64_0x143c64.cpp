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

// Function: entry_00143c64
// Address: 0x143c64 - 0x143c94
void entry_00143c64_0x143c64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00143c64_0x143c64");
#endif

    ctx->pc = 0x143c64u;

    // 0x143c64: 0x1083000b  beq         $a0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x143C64u;
    {
        const bool branch_taken_0x143c64 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x143C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143C64u;
        // 0x143c68: 0x2883004c  slti        $v1, $a0, 0x4C (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)76) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x143c64) {
            ctx->pc = 0x143C94u;
            return;
        }
    }
    ctx->pc = 0x143C6Cu;
    // 0x143c6c: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x143C6Cu;
    {
        const bool branch_taken_0x143c6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x143C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143C6Cu;
        // 0x143c70: 0x2881005a  slti        $at, $a0, 0x5A (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)90) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x143c6c) {
            ctx->pc = 0x143C94u;
            return;
        }
    }
    ctx->pc = 0x143C74u;
    // 0x143c74: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x143C74u;
    {
        const bool branch_taken_0x143c74 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x143c74) {
            ctx->pc = 0x143C94u;
            return;
        }
    }
    ctx->pc = 0x143C7Cu;
    // 0x143c7c: 0x8ca60038  lw          $a2, 0x38($a1)
    ctx->pc = 0x143c7cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 56)));
    // 0x143c80: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x143c80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x143c84: 0x80c6021f  lb          $a2, 0x21F($a2)
    ctx->pc = 0x143c84u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 543)));
    // 0x143c88: 0x14c30002  bne         $a2, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x143C88u;
    {
        const bool branch_taken_0x143c88 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        if (branch_taken_0x143c88) {
            ctx->pc = 0x143C94u;
            return;
        }
    }
    ctx->pc = 0x143C90u;
    // 0x143c90: 0x2484000e  addiu       $a0, $a0, 0xE
    ctx->pc = 0x143c90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14));
    ctx->pc = 0x143c94u;
}
