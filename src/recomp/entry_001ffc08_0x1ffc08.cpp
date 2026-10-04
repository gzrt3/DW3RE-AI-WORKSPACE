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

// Function: entry_001ffc08
// Address: 0x1ffc08 - 0x1ffc24
void entry_001ffc08_0x1ffc08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ffc08_0x1ffc08");
#endif

    ctx->pc = 0x1ffc08u;

    // 0x1ffc08: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x1FFC08u;
    {
        const bool branch_taken_0x1ffc08 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FFC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFC08u;
        // 0x1ffc0c: 0x24020040  addiu       $v0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ffc08) {
            ctx->pc = 0x1FFC2Cu;
            return;
        }
    }
    ctx->pc = 0x1FFC10u;
    // 0x1ffc10: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x1ffc10u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x1ffc14: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FFC14u;
    {
        const bool branch_taken_0x1ffc14 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1FFC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFC14u;
        // 0x1ffc18: 0x31143  sra         $v0, $v1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ffc14) {
            ctx->pc = 0x1FFC24u;
            return;
        }
    }
    ctx->pc = 0x1FFC1Cu;
    // 0x1ffc1c: 0x2462001f  addiu       $v0, $v1, 0x1F
    ctx->pc = 0x1ffc1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 31));
    // 0x1ffc20: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x1ffc20u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
    ctx->pc = 0x1ffc24u;
}
