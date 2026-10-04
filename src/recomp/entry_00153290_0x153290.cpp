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

// Function: entry_00153290
// Address: 0x153290 - 0x1532ac
void entry_00153290_0x153290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00153290_0x153290");
#endif

    ctx->pc = 0x153290u;

    // 0x153290: 0x24c30080  addiu       $v1, $a2, 0x80
    ctx->pc = 0x153290u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 128));
    // 0x153294: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x153294u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x153298: 0x28630400  slti        $v1, $v1, 0x400
    ctx->pc = 0x153298u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)1024) ? 1 : 0);
    // 0x15329c: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x15329Cu;
    {
        const bool branch_taken_0x15329c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1532A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15329Cu;
        // 0x1532a0: 0x24040080  addiu       $a0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15329c) {
            ctx->pc = 0x1532ACu;
            return;
        }
    }
    ctx->pc = 0x1532A4u;
    // 0x1532a4: 0x240303ff  addiu       $v1, $zero, 0x3FF
    ctx->pc = 0x1532a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
    // 0x1532a8: 0x662023  subu        $a0, $v1, $a2
    ctx->pc = 0x1532a8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    ctx->pc = 0x1532acu;
}
