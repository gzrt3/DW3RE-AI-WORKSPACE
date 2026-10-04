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

// Function: entry_00110f70
// Address: 0x110f70 - 0x110f90
void entry_00110f70_0x110f70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00110f70_0x110f70");
#endif

    ctx->pc = 0x110f70u;

    // 0x110f70: 0x2483fff8  addiu       $v1, $a0, -0x8
    ctx->pc = 0x110f70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967288));
    // 0x110f74: 0x2c610002  sltiu       $at, $v1, 0x2
    ctx->pc = 0x110f74u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x110f78: 0x14200005  bnez        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x110F78u;
    {
        const bool branch_taken_0x110f78 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x110F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110F78u;
        // 0x110f7c: 0x2403000a  addiu       $v1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110f78) {
            ctx->pc = 0x110F90u;
            return;
        }
    }
    ctx->pc = 0x110F80u;
    // 0x110f80: 0x2403000d  addiu       $v1, $zero, 0xD
    ctx->pc = 0x110f80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x110f84: 0x14830006  bne         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x110F84u;
    {
        const bool branch_taken_0x110f84 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x110F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110F84u;
        // 0x110f88: 0x24030011  addiu       $v1, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110f84) {
            ctx->pc = 0x110FA0u;
            return;
        }
    }
    ctx->pc = 0x110F8Cu;
    // 0x110f8c: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x110f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->pc = 0x110f90u;
}
