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

// Function: entry_00286f4c
// Address: 0x286f4c - 0x286f68
void entry_00286f4c_0x286f4c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00286f4c_0x286f4c");
#endif

    ctx->pc = 0x286f4cu;

    // 0x286f4c: 0x3c028007  lui         $v0, 0x8007
    ctx->pc = 0x286f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32775 << 16));
    // 0x286f50: 0x220b02d  daddu       $s6, $s1, $zero
    ctx->pc = 0x286f50u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286f54: 0x24546740  addiu       $s4, $v0, 0x6740
    ctx->pc = 0x286f54u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 26432));
    // 0x286f58: 0x24130014  addiu       $s3, $zero, 0x14
    ctx->pc = 0x286f58u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x286f5c: 0x3c158007  lui         $s5, 0x8007
    ctx->pc = 0x286f5cu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)32775 << 16));
    // 0x286f60: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x286F60u;
    {
        const bool branch_taken_0x286f60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x286F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286F60u;
        // 0x286f64: 0x24170001  addiu       $s7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286f60) {
            ctx->pc = 0x286F74u;
            return;
        }
    }
    ctx->pc = 0x286F68u;
}
