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

// Function: entry_0012b1f8
// Address: 0x12b1f8 - 0x12b214
void entry_0012b1f8_0x12b1f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012b1f8_0x12b1f8");
#endif

    ctx->pc = 0x12b1f8u;

    // 0x12b1f8: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x12b1f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x12b1fc: 0x61040  sll         $v0, $a2, 1
    ctx->pc = 0x12b1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x12b200: 0x461821  addu        $v1, $v0, $a2
    ctx->pc = 0x12b200u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x12b204: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x12B204u;
    {
        const bool branch_taken_0x12b204 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x12B208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B204u;
        // 0x12b208: 0x31083  sra         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b204) {
            ctx->pc = 0x12B214u;
            return;
        }
    }
    ctx->pc = 0x12B20Cu;
    // 0x12b20c: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x12b20cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x12b210: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x12b210u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    ctx->pc = 0x12b214u;
}
