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

// Function: entry_00230ca8
// Address: 0x230ca8 - 0x230ce4
void entry_00230ca8_0x230ca8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00230ca8_0x230ca8");
#endif

    switch (ctx->pc) {
        case 0x230cccu: goto label_230ccc;
        default: break;
    }

    ctx->pc = 0x230ca8u;

label_230ca8:
    // 0x230ca8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x230ca8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_230cac:
    // 0x230cac: 0x3c070009  lui         $a3, 0x9
    ctx->pc = 0x230cacu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)9 << 16));
label_230cb0:
    // 0x230cb0: 0xe63821  addu        $a3, $a3, $a2
    ctx->pc = 0x230cb0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
label_230cb4:
    // 0x230cb4: 0x8ce71274  lw          $a3, 0x1274($a3)
    ctx->pc = 0x230cb4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4724)));
label_230cb8:
    // 0x230cb8: 0x3c050009  lui         $a1, 0x9
    ctx->pc = 0x230cb8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)9 << 16));
label_230cbc:
    // 0x230cbc: 0x34a51158  ori         $a1, $a1, 0x1158
    ctx->pc = 0x230cbcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4440);
label_230cc0:
    // 0x230cc0: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x230cc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_230cc4:
    // 0x230cc4: 0xc08c358  jal         func_230D60
label_230cc8:
    if (ctx->pc == 0x230CC8u) {
        ctx->pc = 0x230CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230CC4u;
        // 0x230cc8: 0x24c61100  addiu       $a2, $a2, 0x1100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4352));
        ctx->in_delay_slot = false;
        ctx->pc = 0x230CCCu;
        goto label_230ccc;
    }
    ctx->pc = 0x230CC4u;
    SET_GPR_U32(ctx, 31, 0x230CCCu);
    ctx->pc = 0x230CC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230CC4u;
    // 0x230cc8: 0x24c61100  addiu       $a2, $a2, 0x1100 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4352));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230D60u, 0x230CC4u, 0x230CCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230CCCu;
label_230ccc:
    // 0x230ccc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x230cccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_230cd0:
    // 0x230cd0: 0x8e420028  lw          $v0, 0x28($s2)
    ctx->pc = 0x230cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
label_230cd4:
    // 0x230cd4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_230cd8:
    if (ctx->pc == 0x230CD8u) {
        ctx->pc = 0x230CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230CD4u;
        // 0x230cd8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x230CDCu;
        goto label_230cdc;
    }
    ctx->pc = 0x230CD4u;
    {
        const bool branch_taken_0x230cd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x230CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230CD4u;
        // 0x230cd8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230cd4) {
            ctx->pc = 0x230CE4u;
            return;
        }
    }
    ctx->pc = 0x230CDCu;
label_230cdc:
    // 0x230cdc: 0x40f809  jalr        $v0
label_230ce0:
    if (ctx->pc == 0x230CE0u) {
        ctx->pc = 0x230CE4u;
        goto label_fallthrough_0x230cdc;
    }
    ctx->pc = 0x230CDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x230CE4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x230CDCu, 0x230CE4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x230cdc:
    ctx->pc = 0x230CE4u;
}
