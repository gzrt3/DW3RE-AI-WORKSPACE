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

// Function: entry_0010fdc4
// Address: 0x10fdc4 - 0x10fde8
void entry_0010fdc4_0x10fdc4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010fdc4_0x10fdc4");
#endif

    ctx->pc = 0x10fdc4u;

    // 0x10fdc4: 0x0  nop
    ctx->pc = 0x10fdc4u;
    // NOP
    // 0x10fdc8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x10fdc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x10fdcc: 0x28cf00ff  slti        $t7, $a2, 0xFF
    ctx->pc = 0x10fdccu;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)255) ? 1 : 0);
    // 0x10fdd0: 0x15e0ff9a  bnez        $t7, . + 4 + (-0x66 << 2)
    ctx->pc = 0x10FDD0u;
    {
        const bool branch_taken_0x10fdd0 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x10FDD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FDD0u;
        // 0x10fdd4: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fdd0) {
            ctx->pc = 0x10FC3Cu;
            return;
        }
    }
    ctx->pc = 0x10FDD8u;
    // 0x10fdd8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x10fdd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x10fddc: 0x28a60002  slti        $a2, $a1, 0x2
    ctx->pc = 0x10fddcu;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x10fde0: 0x14c0ff96  bnez        $a2, . + 4 + (-0x6A << 2)
    ctx->pc = 0x10FDE0u;
    {
        const bool branch_taken_0x10fde0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x10FDE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FDE0u;
        // 0x10fde4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fde0) {
            ctx->pc = 0x10FC3Cu;
            return;
        }
    }
    ctx->pc = 0x10FDE8u;
}
