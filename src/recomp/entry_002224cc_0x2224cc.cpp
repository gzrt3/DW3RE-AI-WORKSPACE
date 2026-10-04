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

// Function: entry_002224cc
// Address: 0x2224cc - 0x2224ec
void entry_002224cc_0x2224cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002224cc_0x2224cc");
#endif

    ctx->pc = 0x2224ccu;

    // 0x2224cc: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2224ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2224d0: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x2224d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2224d4: 0x9463000a  lhu         $v1, 0xA($v1)
    ctx->pc = 0x2224d4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 10)));
    // 0x2224d8: 0x1462000d  bne         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2224D8u;
    {
        const bool branch_taken_0x2224d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2224DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2224D8u;
        // 0x2224dc: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2224d8) {
            ctx->pc = 0x222510u;
            return;
        }
    }
    ctx->pc = 0x2224E0u;
    // 0x2224e0: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x2224e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2224e4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2224E4u;
    {
        const bool branch_taken_0x2224e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2224E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2224E4u;
        // 0x2224e8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2224e4) {
            ctx->pc = 0x222510u;
            return;
        }
    }
    ctx->pc = 0x2224ECu;
}
