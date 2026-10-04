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

// Function: entry_001329c4
// Address: 0x1329c4 - 0x132a00
void entry_001329c4_0x1329c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001329c4_0x1329c4");
#endif

    ctx->pc = 0x1329c4u;

    // 0x1329c4: 0x28e10060  slti        $at, $a3, 0x60
    ctx->pc = 0x1329c4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)96) ? 1 : 0);
    // 0x1329c8: 0x1420000d  bnez        $at, . + 4 + (0xD << 2)
    ctx->pc = 0x1329C8u;
    {
        const bool branch_taken_0x1329c8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1329CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1329C8u;
        // 0x1329cc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1329c8) {
            ctx->pc = 0x132A00u;
            return;
        }
    }
    ctx->pc = 0x1329D0u;
    // 0x1329d0: 0x28e10089  slti        $at, $a3, 0x89
    ctx->pc = 0x1329d0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)137) ? 1 : 0);
    // 0x1329d4: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x1329D4u;
    {
        const bool branch_taken_0x1329d4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1329d4) {
            ctx->pc = 0x132A00u;
            return;
        }
    }
    ctx->pc = 0x1329DCu;
    // 0x1329dc: 0x24e7fff7  addiu       $a3, $a3, -0x9
    ctx->pc = 0x1329dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967287));
    // 0x1329e0: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x1329e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x1329e4: 0x73080  sll         $a2, $a3, 2
    ctx->pc = 0x1329e4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x1329e8: 0x2484a4c0  addiu       $a0, $a0, -0x5B40
    ctx->pc = 0x1329e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943936));
    // 0x1329ec: 0xc73821  addu        $a3, $a2, $a3
    ctx->pc = 0x1329ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x1329f0: 0x73080  sll         $a2, $a3, 2
    ctx->pc = 0x1329f0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x1329f4: 0xe63021  addu        $a2, $a3, $a2
    ctx->pc = 0x1329f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x1329f8: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x1329f8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x1329fc: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x1329fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    ctx->pc = 0x132a00u;
}
