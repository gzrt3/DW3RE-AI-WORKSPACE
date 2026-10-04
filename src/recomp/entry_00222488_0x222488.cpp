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

// Function: entry_00222488
// Address: 0x222488 - 0x2224ac
void entry_00222488_0x222488(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00222488_0x222488");
#endif

    ctx->pc = 0x222488u;

    // 0x222488: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x222488u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x22248c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x22248cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x222490: 0x9463000a  lhu         $v1, 0xA($v1)
    ctx->pc = 0x222490u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 10)));
    // 0x222494: 0x1462001e  bne         $v1, $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x222494u;
    {
        const bool branch_taken_0x222494 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x222494) {
            ctx->pc = 0x222510u;
            return;
        }
    }
    ctx->pc = 0x22249Cu;
    // 0x22249c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x22249cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2224a0: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x2224a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2224a4: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x2224A4u;
    {
        const bool branch_taken_0x2224a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2224A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2224A4u;
        // 0x2224a8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2224a4) {
            ctx->pc = 0x222510u;
            return;
        }
    }
    ctx->pc = 0x2224ACu;
}
