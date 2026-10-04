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

// Function: entry_001713c4
// Address: 0x1713c4 - 0x1713e4
void entry_001713c4_0x1713c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001713c4_0x1713c4");
#endif

    ctx->pc = 0x1713c4u;

    // 0x1713c4: 0x94831132  lhu         $v1, 0x1132($a0)
    ctx->pc = 0x1713c4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4402)));
    // 0x1713c8: 0x2861000b  slti        $at, $v1, 0xB
    ctx->pc = 0x1713c8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)11) ? 1 : 0);
    // 0x1713cc: 0x14200006  bnez        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x1713CCu;
    {
        const bool branch_taken_0x1713cc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1713D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1713CCu;
        // 0x1713d0: 0x28a10004  slti        $at, $a1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1713cc) {
            ctx->pc = 0x1713E8u;
            return;
        }
    }
    ctx->pc = 0x1713D4u;
    // 0x1713d4: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x1713D4u;
    {
        const bool branch_taken_0x1713d4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1713D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1713D4u;
        // 0x1713d8: 0x24a3fffc  addiu       $v1, $a1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1713d4) {
            ctx->pc = 0x1713E4u;
            return;
        }
    }
    ctx->pc = 0x1713DCu;
    // 0x1713dc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1713DCu;
    {
        const bool branch_taken_0x1713dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1713E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1713DCu;
        // 0x1713e0: 0xa4801130  sh          $zero, 0x1130($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 4400), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1713dc) {
            ctx->pc = 0x1713E8u;
            return;
        }
    }
    ctx->pc = 0x1713E4u;
}
