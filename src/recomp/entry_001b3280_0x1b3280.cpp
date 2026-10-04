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

// Function: entry_001b3280
// Address: 0x1b3280 - 0x1b32b8
void entry_001b3280_0x1b3280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b3280_0x1b3280");
#endif

    ctx->pc = 0x1b3280u;

    // 0x1b3280: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1b3280u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1b3284: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x1b3284u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x1b3288: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1B3288u;
    {
        const bool branch_taken_0x1b3288 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B328Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3288u;
        // 0x1b328c: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3288) {
            ctx->pc = 0x1B32BCu;
            return;
        }
    }
    ctx->pc = 0x1B3290u;
    // 0x1b3290: 0x101dc3  sra         $v1, $s0, 23
    ctx->pc = 0x1b3290u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 16), 23));
    // 0x1b3294: 0x24020096  addiu       $v0, $zero, 0x96
    ctx->pc = 0x1b3294u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 150));
    // 0x1b3298: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1b3298u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b329c: 0x502007  srav        $a0, $s0, $v0
    ctx->pc = 0x1b329cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x1b32a0: 0x441004  sllv        $v0, $a0, $v0
    ctx->pc = 0x1b32a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 2) & 0x1F));
    // 0x1b32a4: 0x14500005  bne         $v0, $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B32A4u;
    {
        const bool branch_taken_0x1b32a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x1B32A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B32A4u;
        // 0x1b32a8: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b32a4) {
            ctx->pc = 0x1B32BCu;
            return;
        }
    }
    ctx->pc = 0x1B32ACu;
    // 0x1b32ac: 0x30830001  andi        $v1, $a0, 0x1
    ctx->pc = 0x1b32acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x1b32b0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1b32b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b32b4: 0x43a023  subu        $s4, $v0, $v1
    ctx->pc = 0x1b32b4u;
    SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->pc = 0x1b32b8u;
}
