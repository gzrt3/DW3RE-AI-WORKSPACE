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

// Function: entry_0023d68c
// Address: 0x23d68c - 0x23d6a0
void entry_0023d68c_0x23d68c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023d68c_0x23d68c");
#endif

    ctx->pc = 0x23d68cu;

    // 0x23d68c: 0x16600004  bnez        $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x23D68Cu;
    {
        const bool branch_taken_0x23d68c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x23D690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D68Cu;
        // 0x23d690: 0x2403000a  addiu       $v1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d68c) {
            ctx->pc = 0x23D6A0u;
            return;
        }
    }
    ctx->pc = 0x23D694u;
    // 0x23d694: 0x24130008  addiu       $s3, $zero, 0x8
    ctx->pc = 0x23d694u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x23d698: 0x3a220030  xori        $v0, $s1, 0x30
    ctx->pc = 0x23d698u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)48);
    // 0x23d69c: 0x62980b  movn        $s3, $v1, $v0
    ctx->pc = 0x23d69cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 3));
    ctx->pc = 0x23d6a0u;
}
