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

// Function: entry_00209e4c
// Address: 0x209e4c - 0x209e70
void entry_00209e4c_0x209e4c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00209e4c_0x209e4c");
#endif

    ctx->pc = 0x209e4cu;

    // 0x209e4c: 0x8f839100  lw          $v1, -0x6F00($gp)
    ctx->pc = 0x209e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938880)));
    // 0x209e50: 0xac655724  sw          $a1, 0x5724($v1)
    ctx->pc = 0x209e50u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 22308), GPR_U32(ctx, 5));
    // 0x209e54: 0x8f849100  lw          $a0, -0x6F00($gp)
    ctx->pc = 0x209e54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938880)));
    // 0x209e58: 0x8c835724  lw          $v1, 0x5724($a0)
    ctx->pc = 0x209e58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 22308)));
    // 0x209e5c: 0x2863000c  slti        $v1, $v1, 0xC
    ctx->pc = 0x209e5cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x209e60: 0x14600017  bnez        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x209E60u;
    {
        const bool branch_taken_0x209e60 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x209e60) {
            ctx->pc = 0x209EC0u;
            return;
        }
    }
    ctx->pc = 0x209E68u;
    // 0x209e68: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x209E68u;
    {
        const bool branch_taken_0x209e68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x209E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209E68u;
        // 0x209e6c: 0xac805720  sw          $zero, 0x5720($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 22304), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209e68) {
            ctx->pc = 0x209EC0u;
            return;
        }
    }
    ctx->pc = 0x209E70u;
}
