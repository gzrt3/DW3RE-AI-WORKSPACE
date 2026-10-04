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

// Function: entry_002173fc
// Address: 0x2173fc - 0x217428
void entry_002173fc_0x2173fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002173fc_0x2173fc");
#endif

    ctx->pc = 0x2173fcu;

    // 0x2173fc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2173fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x217400: 0x14830009  bne         $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x217400u;
    {
        const bool branch_taken_0x217400 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x217404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217400u;
        // 0x217404: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217400) {
            ctx->pc = 0x217428u;
            return;
        }
    }
    ctx->pc = 0x217408u;
    // 0x217408: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x217408u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x21740c: 0x3c030059  lui         $v1, 0x59
    ctx->pc = 0x21740cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)89 << 16));
    // 0x217410: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x217410u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x217414: 0x24638680  addiu       $v1, $v1, -0x7980
    ctx->pc = 0x217414u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936192));
    // 0x217418: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x217418u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x21741c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x21741cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x217420: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x217420u;
    {
        const bool branch_taken_0x217420 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x217424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217420u;
        // 0x217424: 0x247001e0  addiu       $s0, $v1, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 480));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217420) {
            ctx->pc = 0x217478u;
            return;
        }
    }
    ctx->pc = 0x217428u;
}
