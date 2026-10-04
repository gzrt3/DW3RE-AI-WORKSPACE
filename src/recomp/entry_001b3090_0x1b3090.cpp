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

// Function: entry_001b3090
// Address: 0x1b3090 - 0x1b30c8
void entry_001b3090_0x1b3090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b3090_0x1b3090");
#endif

    ctx->pc = 0x1b3090u;

    // 0x1b3090: 0xa6102a  slt         $v0, $a1, $a2
    ctx->pc = 0x1b3090u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x1b3094: 0x14400058  bnez        $v0, . + 4 + (0x58 << 2)
    ctx->pc = 0x1B3094u;
    {
        const bool branch_taken_0x1b3094 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b3094) {
            ctx->pc = 0x1B31F8u;
            return;
        }
    }
    ctx->pc = 0x1B309Cu;
    // 0x1b309c: 0x10a60030  beq         $a1, $a2, . + 4 + (0x30 << 2)
    ctx->pc = 0x1B309Cu;
    {
        const bool branch_taken_0x1b309c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 6));
        ctx->pc = 0x1B30A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B309Cu;
        // 0x1b30a0: 0x515c3  sra         $v0, $a1, 23 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 5), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b309c) {
            ctx->pc = 0x1B3160u;
            return;
        }
    }
    ctx->pc = 0x1B30A4u;
    // 0x1b30a4: 0x2448ff81  addiu       $t0, $v0, -0x7F
    ctx->pc = 0x1b30a4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967169));
    // 0x1b30a8: 0x61dc3  sra         $v1, $a2, 23
    ctx->pc = 0x1b30a8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 6), 23));
    // 0x1b30ac: 0x2902ff82  slti        $v0, $t0, -0x7E
    ctx->pc = 0x1b30acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)4294967170) ? 1 : 0);
    // 0x1b30b0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B30B0u;
    {
        const bool branch_taken_0x1b30b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B30B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B30B0u;
        // 0x1b30b4: 0x2467ff81  addiu       $a3, $v1, -0x7F (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967169));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b30b0) {
            ctx->pc = 0x1B30C8u;
            return;
        }
    }
    ctx->pc = 0x1B30B8u;
    // 0x1b30b8: 0xa41824  and         $v1, $a1, $a0
    ctx->pc = 0x1b30b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x1b30bc: 0x3c020080  lui         $v0, 0x80
    ctx->pc = 0x1b30bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)128 << 16));
    // 0x1b30c0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1B30C0u;
    {
        const bool branch_taken_0x1b30c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B30C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B30C0u;
        // 0x1b30c4: 0x622825  or          $a1, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b30c0) {
            ctx->pc = 0x1B30D4u;
            return;
        }
    }
    ctx->pc = 0x1B30C8u;
}
