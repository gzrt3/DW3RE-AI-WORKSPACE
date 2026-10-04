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

// Function: entry_001cf474
// Address: 0x1cf474 - 0x1cf494
void entry_001cf474_0x1cf474(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cf474_0x1cf474");
#endif

    ctx->pc = 0x1cf474u;

    // 0x1cf474: 0x0  nop
    ctx->pc = 0x1cf474u;
    // NOP
    // 0x1cf478: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1cf478u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1cf47c: 0x16030018  bne         $s0, $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x1CF47Cu;
    {
        const bool branch_taken_0x1cf47c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        ctx->pc = 0x1CF480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF47Cu;
        // 0x1cf480: 0x220c0  sll         $a0, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf47c) {
            ctx->pc = 0x1CF4E0u;
            return;
        }
    }
    ctx->pc = 0x1CF484u;
    // 0x1cf484: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CF484u;
    {
        const bool branch_taken_0x1cf484 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x1CF488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF484u;
        // 0x1cf488: 0x41903  sra         $v1, $a0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf484) {
            ctx->pc = 0x1CF494u;
            return;
        }
    }
    ctx->pc = 0x1CF48Cu;
    // 0x1cf48c: 0x2483000f  addiu       $v1, $a0, 0xF
    ctx->pc = 0x1cf48cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 15));
    // 0x1cf490: 0x31903  sra         $v1, $v1, 4
    ctx->pc = 0x1cf490u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 4));
    ctx->pc = 0x1cf494u;
}
