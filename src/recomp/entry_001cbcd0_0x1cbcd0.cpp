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

// Function: entry_001cbcd0
// Address: 0x1cbcd0 - 0x1cbd40
void entry_001cbcd0_0x1cbcd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cbcd0_0x1cbcd0");
#endif

    switch (ctx->pc) {
        case 0x1cbd38u: goto label_1cbd38;
        default: break;
    }

    ctx->pc = 0x1cbcd0u;

    // 0x1cbcd0: 0x1020001b  beqz        $at, . + 4 + (0x1B << 2)
    ctx->pc = 0x1CBCD0u;
    {
        const bool branch_taken_0x1cbcd0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CBCD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBCD0u;
        // 0x1cbcd4: 0x61900  sll         $v1, $a2, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbcd0) {
            ctx->pc = 0x1CBD40u;
            return;
        }
    }
    ctx->pc = 0x1CBCD8u;
    // 0x1cbcd8: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x1cbcd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
    // 0x1cbcdc: 0x3c070025  lui         $a3, 0x25
    ctx->pc = 0x1cbcdcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)37 << 16));
    // 0x1cbce0: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x1cbce0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1cbce4: 0x24428ee0  addiu       $v0, $v0, -0x7120
    ctx->pc = 0x1cbce4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938336));
    // 0x1cbce8: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1cbce8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1cbcec: 0x24e72930  addiu       $a3, $a3, 0x2930
    ctx->pc = 0x1cbcecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 10544));
    // 0x1cbcf0: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x1cbcf0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1cbcf4: 0x61100  sll         $v0, $a2, 4
    ctx->pc = 0x1cbcf4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x1cbcf8: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x1cbcf8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1cbcfc: 0x3c060025  lui         $a2, 0x25
    ctx->pc = 0x1cbcfcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)37 << 16));
    // 0x1cbd00: 0x24c63b80  addiu       $a2, $a2, 0x3B80
    ctx->pc = 0x1cbd00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 15232));
    // 0x1cbd04: 0xc21821  addu        $v1, $a2, $v0
    ctx->pc = 0x1cbd04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x1cbd08: 0x111100  sll         $v0, $s1, 4
    ctx->pc = 0x1cbd08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x1cbd0c: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x1cbd0cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1cbd10: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x1cbd10u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1cbd14: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x1cbd14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x1cbd18: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x1cbd18u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cbd1c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1cbd1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1cbd20: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x1cbd20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x1cbd24: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cbd24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cbd28: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x1cbd28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x1cbd2c: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x1cbd2cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cbd30: 0xc08f20e  jal         func_23C838
    ctx->pc = 0x1CBD30u;
    SET_GPR_U32(ctx, 31, 0x1CBD38u);
    ctx->pc = 0x1CBD34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CBD30u;
    // 0x1cbd34: 0x8c660000  lw          $a2, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23C838u, 0x1CBD30u, 0x1CBD38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CBD38u;
label_1cbd38:
    // 0x1cbd38: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x1CBD38u;
    {
        const bool branch_taken_0x1cbd38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cbd38) {
            ctx->pc = 0x1CBE1Cu;
            return;
        }
    }
    ctx->pc = 0x1CBD40u;
}
