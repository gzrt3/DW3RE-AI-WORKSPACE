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

// Function: entry_0018b718
// Address: 0x18b718 - 0x18b740
void entry_0018b718_0x18b718(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018b718_0x18b718");
#endif

    switch (ctx->pc) {
        case 0x18b738u: goto label_18b738;
        default: break;
    }

    ctx->pc = 0x18b718u;

    // 0x18b718: 0x30830040  andi        $v1, $a0, 0x40
    ctx->pc = 0x18b718u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)64);
    // 0x18b71c: 0x10600066  beqz        $v1, . + 4 + (0x66 << 2)
    ctx->pc = 0x18B71Cu;
    {
        const bool branch_taken_0x18b71c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x18b71c) {
            ctx->pc = 0x18B8B8u;
            return;
        }
    }
    ctx->pc = 0x18B724u;
    // 0x18b724: 0x38820040  xori        $v0, $a0, 0x40
    ctx->pc = 0x18b724u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)64);
    // 0x18b728: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x18b728u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b72c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x18b72cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x18b730: 0xc05482c  jal         func_1520B0
    ctx->pc = 0x18B730u;
    SET_GPR_U32(ctx, 31, 0x18B738u);
    ctx->pc = 0x18B734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18B730u;
    // 0x18b734: 0xa2220240  sb          $v0, 0x240($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 576), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1520B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1520B0u, 0x18B730u, 0x18B738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B738u;
label_18b738:
    // 0x18b738: 0x1000005f  b           . + 4 + (0x5F << 2)
    ctx->pc = 0x18B738u;
    {
        const bool branch_taken_0x18b738 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18b738) {
            ctx->pc = 0x18B8B8u;
            return;
        }
    }
    ctx->pc = 0x18B740u;
}
