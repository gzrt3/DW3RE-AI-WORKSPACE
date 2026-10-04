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

// Function: entry_00116ee4
// Address: 0x116ee4 - 0x116efc
void entry_00116ee4_0x116ee4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00116ee4_0x116ee4");
#endif

    ctx->pc = 0x116ee4u;

    // 0x116ee4: 0x0  nop
    ctx->pc = 0x116ee4u;
    // NOP
    // 0x116ee8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x116ee8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x116eec: 0x2a23002f  slti        $v1, $s1, 0x2F
    ctx->pc = 0x116eecu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)47) ? 1 : 0);
    // 0x116ef0: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x116EF0u;
    {
        const bool branch_taken_0x116ef0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x116EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116EF0u;
        // 0x116ef4: 0x26100070  addiu       $s0, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116ef0) {
            ctx->pc = 0x116ECCu;
            return;
        }
    }
    ctx->pc = 0x116EF8u;
    // 0x116ef8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x116ef8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->pc = 0x116efcu;
}
