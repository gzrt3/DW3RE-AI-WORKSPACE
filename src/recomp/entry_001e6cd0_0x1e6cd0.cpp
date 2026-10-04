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

// Function: entry_001e6cd0
// Address: 0x1e6cd0 - 0x1e6d18
void entry_001e6cd0_0x1e6cd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e6cd0_0x1e6cd0");
#endif

    ctx->pc = 0x1e6cd0u;

    // 0x1e6cd0: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x1E6CD0u;
    {
        const bool branch_taken_0x1e6cd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e6cd0) {
            ctx->pc = 0x1E6D50u;
            return;
        }
    }
    ctx->pc = 0x1E6CD8u;
    // 0x1e6cd8: 0x8f848dcc  lw          $a0, -0x7234($gp)
    ctx->pc = 0x1e6cd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938060)));
    // 0x1e6cdc: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1e6cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x1e6ce0: 0x24423420  addiu       $v0, $v0, 0x3420
    ctx->pc = 0x1e6ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13344));
    // 0x1e6ce4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1e6ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1e6ce8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1e6ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1e6cec: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x1e6cecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e6cf0: 0x1043000c  beq         $v0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x1E6CF0u;
    {
        const bool branch_taken_0x1e6cf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1e6cf0) {
            ctx->pc = 0x1E6D24u;
            return;
        }
    }
    ctx->pc = 0x1E6CF8u;
    // 0x1e6cf8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1e6cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e6cfc: 0x10430009  beq         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1E6CFCu;
    {
        const bool branch_taken_0x1e6cfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1e6cfc) {
            ctx->pc = 0x1E6D24u;
            return;
        }
    }
    ctx->pc = 0x1E6D04u;
    // 0x1e6d04: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E6D04u;
    {
        const bool branch_taken_0x1e6d04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E6D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6D04u;
        // 0x1e6d08: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6d04) {
            ctx->pc = 0x1E6D18u;
            return;
        }
    }
    ctx->pc = 0x1E6D0Cu;
    // 0x1e6d0c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1E6D0Cu;
    {
        const bool branch_taken_0x1e6d0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E6D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6D0Cu;
        // 0x1e6d10: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6d0c) {
            ctx->pc = 0x1E6D24u;
            return;
        }
    }
    ctx->pc = 0x1E6D14u;
    // 0x1e6d14: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1e6d14u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1e6d18u;
}
