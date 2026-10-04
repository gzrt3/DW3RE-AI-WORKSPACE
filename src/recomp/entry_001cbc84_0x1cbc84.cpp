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

// Function: entry_001cbc84
// Address: 0x1cbc84 - 0x1cbcd0
void entry_001cbc84_0x1cbc84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cbc84_0x1cbc84");
#endif

    switch (ctx->pc) {
        case 0x1cbcc8u: goto label_1cbcc8;
        default: break;
    }

    ctx->pc = 0x1cbc84u;

    // 0x1cbc84: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x1cbc84u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1cbc88: 0x24638ee0  addiu       $v1, $v1, -0x7120
    ctx->pc = 0x1cbc88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294938336));
    // 0x1cbc8c: 0x61100  sll         $v0, $a2, 4
    ctx->pc = 0x1cbc8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x1cbc90: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x1cbc90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1cbc94: 0x461823  subu        $v1, $v0, $a2
    ctx->pc = 0x1cbc94u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1cbc98: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x1cbc98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1cbc9c: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1cbc9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x1cbca0: 0x24423b80  addiu       $v0, $v0, 0x3B80
    ctx->pc = 0x1cbca0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15232));
    // 0x1cbca4: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1cbca4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1cbca8: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x1cbca8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1cbcac: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1cbcacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x1cbcb0: 0x24422930  addiu       $v0, $v0, 0x2930
    ctx->pc = 0x1cbcb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10544));
    // 0x1cbcb4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1cbcb4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1cbcb8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1cbcb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1cbcbc: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x1cbcbcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cbcc0: 0xc08f20e  jal         func_23C838
    ctx->pc = 0x1CBCC0u;
    SET_GPR_U32(ctx, 31, 0x1CBCC8u);
    ctx->pc = 0x1CBCC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CBCC0u;
    // 0x1cbcc4: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23C838u, 0x1CBCC0u, 0x1CBCC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CBCC8u;
label_1cbcc8:
    // 0x1cbcc8: 0x10000054  b           . + 4 + (0x54 << 2)
    ctx->pc = 0x1CBCC8u;
    {
        const bool branch_taken_0x1cbcc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cbcc8) {
            ctx->pc = 0x1CBE1Cu;
            return;
        }
    }
    ctx->pc = 0x1CBCD0u;
}
