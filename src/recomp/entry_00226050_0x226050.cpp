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

// Function: entry_00226050
// Address: 0x226050 - 0x2260ac
void entry_00226050_0x226050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00226050_0x226050");
#endif

    switch (ctx->pc) {
        case 0x2260a4u: goto label_2260a4;
        default: break;
    }

    ctx->pc = 0x226050u;

    // 0x226050: 0x246349b0  addiu       $v1, $v1, 0x49B0
    ctx->pc = 0x226050u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 18864));
    // 0x226054: 0x9062005c  lbu         $v0, 0x5C($v1)
    ctx->pc = 0x226054u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 92)));
    // 0x226058: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x226058u;
    {
        const bool branch_taken_0x226058 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22605Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226058u;
        // 0x22605c: 0x3c04002f  lui         $a0, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)47 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226058) {
            ctx->pc = 0x2260ACu;
            return;
        }
    }
    ctx->pc = 0x226060u;
    // 0x226060: 0x8c660054  lw          $a2, 0x54($v1)
    ctx->pc = 0x226060u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
    // 0x226064: 0x3c05002f  lui         $a1, 0x2F
    ctx->pc = 0x226064u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)47 << 16));
    // 0x226068: 0x24a52570  addiu       $a1, $a1, 0x2570
    ctx->pc = 0x226068u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9584));
    // 0x22606c: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x22606cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x226070: 0x8c63004c  lw          $v1, 0x4C($v1)
    ctx->pc = 0x226070u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
    // 0x226074: 0x61200  sll         $v0, $a2, 8
    ctx->pc = 0x226074u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
    // 0x226078: 0x463023  subu        $a2, $v0, $a2
    ctx->pc = 0x226078u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x22607c: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x22607cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x226080: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x226080u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x226084: 0x618c0  sll         $v1, $a2, 3
    ctx->pc = 0x226084u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x226088: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x226088u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x22608c: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x22608cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x226090: 0x610c0  sll         $v0, $a2, 3
    ctx->pc = 0x226090u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x226094: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x226094u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x226098: 0x24420000  addiu       $v0, $v0, 0x0
    ctx->pc = 0x226098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
    // 0x22609c: 0xc05da58  jal         func_176960
    ctx->pc = 0x22609Cu;
    SET_GPR_U32(ctx, 31, 0x2260A4u);
    ctx->pc = 0x2260A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22609Cu;
    // 0x2260a0: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x176960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176960u, 0x22609Cu, 0x2260A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2260A4u;
label_2260a4:
    // 0x2260a4: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x2260A4u;
    {
        const bool branch_taken_0x2260a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2260a4) {
            ctx->pc = 0x226134u;
            return;
        }
    }
    ctx->pc = 0x2260ACu;
}
