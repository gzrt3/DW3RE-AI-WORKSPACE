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

// Function: FUN_001a6fb8
// Address: 0x1a6fb8 - 0x1a7014
void FUN_001a6fb8_0x1a6fb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001a6fb8_0x1a6fb8");
#endif

    switch (ctx->pc) {
        case 0x1a6fecu: goto label_1a6fec;
        default: break;
    }

    ctx->pc = 0x1a6fb8u;

    // 0x1a6fb8: 0x3c19ffff  lui         $t9, 0xFFFF
    ctx->pc = 0x1a6fb8u;
    SET_GPR_S32(ctx, 25, (int32_t)((uint32_t)65535 << 16));
    // 0x1a6fbc: 0x3739ffc0  ori         $t9, $t9, 0xFFC0
    ctx->pc = 0x1a6fbcu;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 25) | (uint64_t)(uint16_t)65472);
    // 0x1a6fc0: 0x18a00026  blez        $a1, . + 4 + (0x26 << 2)
    ctx->pc = 0x1A6FC0u;
    {
        const bool branch_taken_0x1a6fc0 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x1A6FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6FC0u;
        // 0x1a6fc4: 0x855021  addu        $t2, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6fc0) {
            ctx->pc = 0x1A705Cu;
            return;
        }
    }
    ctx->pc = 0x1A6FC8u;
    // 0x1a6fc8: 0x994024  and         $t0, $a0, $t9
    ctx->pc = 0x1a6fc8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) & GPR_U64(ctx, 25));
    // 0x1a6fcc: 0x254affff  addiu       $t2, $t2, -0x1
    ctx->pc = 0x1a6fccu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
    // 0x1a6fd0: 0x1594824  and         $t1, $t2, $t9
    ctx->pc = 0x1a6fd0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 10) & GPR_U64(ctx, 25));
    // 0x1a6fd4: 0x1285023  subu        $t2, $t1, $t0
    ctx->pc = 0x1a6fd4u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
    // 0x1a6fd8: 0xa5982  srl         $t3, $t2, 6
    ctx->pc = 0x1a6fd8u;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 10), 6));
    // 0x1a6fdc: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x1a6fdcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x1a6fe0: 0x31690007  andi        $t1, $t3, 0x7
    ctx->pc = 0x1a6fe0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)7);
    // 0x1a6fe4: 0x11200008  beqz        $t1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1A6FE4u;
    {
        const bool branch_taken_0x1a6fe4 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6FE4u;
        // 0x1a6fe8: 0xb50c2  srl         $t2, $t3, 3 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 11), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6fe4) {
            ctx->pc = 0x1A7008u;
            goto label_1a7008;
        }
    }
    ctx->pc = 0x1A6FECu;
label_1a6fec:
    // 0x1a6fec: 0xf  sync
    ctx->pc = 0x1a6fecu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x1a6ff0: 0xbd180000  cache       0x18, 0x0($t0)
    ctx->pc = 0x1a6ff0u;
    // CACHE instruction (ignored)
    // 0x1a6ff4: 0xf  sync
    ctx->pc = 0x1a6ff4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x1a6ff8: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x1a6ff8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x1a6ffc: 0x0  nop
    ctx->pc = 0x1a6ffcu;
    // NOP
    // 0x1a7000: 0x1d20fffa  bgtz        $t1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1A7000u;
    {
        const bool branch_taken_0x1a7000 = (GPR_S32(ctx, 9) > 0);
        ctx->pc = 0x1A7004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7000u;
        // 0x1a7004: 0x25080040  addiu       $t0, $t0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7000) {
            ctx->pc = 0x1A6FECu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a6fec;
        }
    }
    ctx->pc = 0x1A7008u;
label_1a7008:
    // 0x1a7008: 0x11400014  beqz        $t2, . + 4 + (0x14 << 2)
    ctx->pc = 0x1A7008u;
    {
        const bool branch_taken_0x1a7008 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A700Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7008u;
        // 0x1a700c: 0x254affff  addiu       $t2, $t2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7008) {
            ctx->pc = 0x1A705Cu;
            return;
        }
    }
    ctx->pc = 0x1A7010u;
    // 0x1a7010: 0xf  sync
    ctx->pc = 0x1a7010u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    ctx->pc = 0x1a7014u;
}
