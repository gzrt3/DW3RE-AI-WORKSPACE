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

// Function: entry_00185b88
// Address: 0x185b88 - 0x185bc0
void entry_00185b88_0x185b88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00185b88_0x185b88");
#endif

    switch (ctx->pc) {
        case 0x185b98u: goto label_185b98;
        default: break;
    }

    ctx->pc = 0x185b88u;

    // 0x185b88: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x185B88u;
    {
        const bool branch_taken_0x185b88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x185B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185B88u;
        // 0x185b8c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185b88) {
            ctx->pc = 0x185BD0u;
            return;
        }
    }
    ctx->pc = 0x185B90u;
    // 0x185b90: 0xc062210  jal         func_188840
    ctx->pc = 0x185B90u;
    SET_GPR_U32(ctx, 31, 0x185B98u);
    ctx->pc = 0x185B94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185B90u;
    // 0x185b94: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x188840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x188840u, 0x185B90u, 0x185B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185B98u;
label_185b98:
    // 0x185b98: 0x9223023d  lbu         $v1, 0x23D($s1)
    ctx->pc = 0x185b98u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 573)));
    // 0x185b9c: 0x30630010  andi        $v1, $v1, 0x10
    ctx->pc = 0x185b9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x185ba0: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x185BA0u;
    {
        const bool branch_taken_0x185ba0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x185BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185BA0u;
        // 0x185ba4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185ba0) {
            ctx->pc = 0x185BC0u;
            return;
        }
    }
    ctx->pc = 0x185BA8u;
    // 0x185ba8: 0xa620019e  sh          $zero, 0x19E($s1)
    ctx->pc = 0x185ba8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 414), (uint16_t)GPR_U32(ctx, 0));
    // 0x185bac: 0xa620019c  sh          $zero, 0x19C($s1)
    ctx->pc = 0x185bacu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 412), (uint16_t)GPR_U32(ctx, 0));
    // 0x185bb0: 0x8e230194  lw          $v1, 0x194($s1)
    ctx->pc = 0x185bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 404)));
    // 0x185bb4: 0x34634010  ori         $v1, $v1, 0x4010
    ctx->pc = 0x185bb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16400);
    // 0x185bb8: 0x10000352  b           . + 4 + (0x352 << 2)
    ctx->pc = 0x185BB8u;
    {
        const bool branch_taken_0x185bb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x185BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185BB8u;
        // 0x185bbc: 0xae230194  sw          $v1, 0x194($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 404), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185bb8) {
            ctx->pc = 0x186904u;
            return;
        }
    }
    ctx->pc = 0x185BC0u;
}
