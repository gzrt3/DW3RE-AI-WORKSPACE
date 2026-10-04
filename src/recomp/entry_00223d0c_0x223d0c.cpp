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

// Function: entry_00223d0c
// Address: 0x223d0c - 0x223d38
void entry_00223d0c_0x223d0c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00223d0c_0x223d0c");
#endif

    ctx->pc = 0x223d0cu;

    // 0x223d0c: 0x90620096  lbu         $v0, 0x96($v1)
    ctx->pc = 0x223d0cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 150)));
    // 0x223d10: 0x14510009  bne         $v0, $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x223D10u;
    {
        const bool branch_taken_0x223d10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x223d10) {
            ctx->pc = 0x223D38u;
            return;
        }
    }
    ctx->pc = 0x223D18u;
    // 0x223d18: 0x9062009d  lbu         $v0, 0x9D($v1)
    ctx->pc = 0x223d18u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 157)));
    // 0x223d1c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x223D1Cu;
    {
        const bool branch_taken_0x223d1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x223D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223D1Cu;
        // 0x223d20: 0x28410080  slti        $at, $v0, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)128) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x223d1c) {
            ctx->pc = 0x223D38u;
            return;
        }
    }
    ctx->pc = 0x223D24u;
    // 0x223d24: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x223D24u;
    {
        const bool branch_taken_0x223d24 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x223d24) {
            ctx->pc = 0x223D38u;
            return;
        }
    }
    ctx->pc = 0x223D2Cu;
    // 0x223d2c: 0x9062009c  lbu         $v0, 0x9C($v1)
    ctx->pc = 0x223d2cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 156)));
    // 0x223d30: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x223d30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x223d34: 0xa062009c  sb          $v0, 0x9C($v1)
    ctx->pc = 0x223d34u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 156), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x223d38u;
}
