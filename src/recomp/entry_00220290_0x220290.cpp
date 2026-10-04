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

// Function: entry_00220290
// Address: 0x220290 - 0x2202ac
void entry_00220290_0x220290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00220290_0x220290");
#endif

    ctx->pc = 0x220290u;

    // 0x220290: 0x9504000c  lhu         $a0, 0xC($t0)
    ctx->pc = 0x220290u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 12)));
    // 0x220294: 0x288300fa  slti        $v1, $a0, 0xFA
    ctx->pc = 0x220294u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)250) ? 1 : 0);
    // 0x220298: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x220298u;
    {
        const bool branch_taken_0x220298 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x22029Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220298u;
        // 0x22029c: 0x2881010f  slti        $at, $a0, 0x10F (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)271) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x220298) {
            ctx->pc = 0x2202ACu;
            return;
        }
    }
    ctx->pc = 0x2202A0u;
    // 0x2202a0: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x2202A0u;
    {
        const bool branch_taken_0x2202a0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2202A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2202A0u;
        // 0x2202a4: 0x851821  addu        $v1, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2202a0) {
            ctx->pc = 0x2202ACu;
            return;
        }
    }
    ctx->pc = 0x2202A8u;
    // 0x2202a8: 0xa503000c  sh          $v1, 0xC($t0)
    ctx->pc = 0x2202a8u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 12), (uint16_t)GPR_U32(ctx, 3));
    ctx->pc = 0x2202acu;
}
