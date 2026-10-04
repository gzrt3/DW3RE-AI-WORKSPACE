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

// Function: FUN_0016d9b0
// Address: 0x16d9b0 - 0x16da0c
void FUN_0016d9b0_0x16d9b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0016d9b0_0x16d9b0");
#endif

    ctx->pc = 0x16d9b0u;

    // 0x16d9b0: 0x480000b  bltz        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x16D9B0u;
    {
        const bool branch_taken_0x16d9b0 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x16D9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D9B0u;
        // 0x16d9b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d9b0) {
            ctx->pc = 0x16D9E0u;
            goto label_16d9e0;
        }
    }
    ctx->pc = 0x16D9B8u;
    // 0x16d9b8: 0x28810015  slti        $at, $a0, 0x15
    ctx->pc = 0x16d9b8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)21) ? 1 : 0);
    // 0x16d9bc: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x16D9BCu;
    {
        const bool branch_taken_0x16d9bc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x16d9bc) {
            ctx->pc = 0x16D9DCu;
            goto label_16d9dc;
        }
    }
    ctx->pc = 0x16D9C4u;
    // 0x16d9c4: 0x4a00005  bltz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x16D9C4u;
    {
        const bool branch_taken_0x16d9c4 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x16D9C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D9C4u;
        // 0x16d9c8: 0x28a10002  slti        $at, $a1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d9c4) {
            ctx->pc = 0x16D9DCu;
            goto label_16d9dc;
        }
    }
    ctx->pc = 0x16D9CCu;
    // 0x16d9cc: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x16D9CCu;
    {
        const bool branch_taken_0x16d9cc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x16d9cc) {
            ctx->pc = 0x16D9DCu;
            goto label_16d9dc;
        }
    }
    ctx->pc = 0x16D9D4u;
    // 0x16d9d4: 0x4c10004  bgez        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x16D9D4u;
    {
        const bool branch_taken_0x16d9d4 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x16D9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D9D4u;
        // 0x16d9d8: 0x418c0  sll         $v1, $a0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d9d4) {
            ctx->pc = 0x16D9E8u;
            goto label_16d9e8;
        }
    }
    ctx->pc = 0x16D9DCu;
label_16d9dc:
    // 0x16d9dc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x16d9dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16d9e0:
    // 0x16d9e0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x16D9E0u;
    {
        const bool branch_taken_0x16d9e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16d9e0) {
            ctx->pc = 0x16DA0Cu;
            return;
        }
    }
    ctx->pc = 0x16D9E8u;
label_16d9e8:
    // 0x16d9e8: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x16d9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
    // 0x16d9ec: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x16d9ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x16d9f0: 0x24421850  addiu       $v0, $v0, 0x1850
    ctx->pc = 0x16d9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6224));
    // 0x16d9f4: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x16d9f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x16d9f8: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x16d9f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x16d9fc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x16d9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x16da00: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x16da00u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16da04: 0x24421038  addiu       $v0, $v0, 0x1038
    ctx->pc = 0x16da04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4152));
    // 0x16da08: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x16da08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->pc = 0x16da0cu;
}
