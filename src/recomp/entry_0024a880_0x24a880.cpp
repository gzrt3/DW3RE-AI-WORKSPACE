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

// Function: entry_0024a880
// Address: 0x24a880 - 0x24a8d4
void entry_0024a880_0x24a880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0024a880_0x24a880");
#endif

    switch (ctx->pc) {
        case 0x24a89cu: goto label_24a89c;
        case 0x24a8c4u: goto label_24a8c4;
        default: break;
    }

    ctx->pc = 0x24a880u;

label_24a880:
    // 0x24a880: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x24a880u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
label_24a884:
    // 0x24a884: 0x34633ffc  ori         $v1, $v1, 0x3FFC
    ctx->pc = 0x24a884u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16380);
label_24a888:
    // 0x24a888: 0x24421e00  addiu       $v0, $v0, 0x1E00
    ctx->pc = 0x24a888u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7680));
label_24a88c:
    // 0x24a88c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x24a88cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_24a890:
    // 0x24a890: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x24a890u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_24a894:
    // 0x24a894: 0xc066c42  jal         func_19B108
label_24a898:
    if (ctx->pc == 0x24A898u) {
        ctx->pc = 0x24A898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A894u;
        // 0x24a898: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24A89Cu;
        goto label_24a89c;
    }
    ctx->pc = 0x24A894u;
    SET_GPR_U32(ctx, 31, 0x24A89Cu);
    ctx->pc = 0x24A898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A894u;
    // 0x24a898: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B108u, 0x24A894u, 0x24A89Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A89Cu;
label_24a89c:
    // 0x24a89c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x24a89cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_24a8a0:
    // 0x24a8a0: 0x8f8392fc  lw          $v1, -0x6D04($gp)
    ctx->pc = 0x24a8a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939388)));
label_24a8a4:
    // 0x24a8a4: 0x8c223ffc  lw          $v0, 0x3FFC($at)
    ctx->pc = 0x24a8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_24a8a8:
    // 0x24a8a8: 0x8c650018  lw          $a1, 0x18($v1)
    ctx->pc = 0x24a8a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_24a8ac:
    // 0x24a8ac: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x24a8acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_24a8b0:
    // 0x24a8b0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x24a8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_24a8b4:
    // 0x24a8b4: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
label_24a8b8:
    if (ctx->pc == 0x24A8B8u) {
        ctx->pc = 0x24A8B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A8B4u;
        // 0x24a8b8: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24A8BCu;
        goto label_24a8bc;
    }
    ctx->pc = 0x24A8B4u;
    {
        const bool branch_taken_0x24a8b4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A8B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A8B4u;
        // 0x24a8b8: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a8b4) {
            ctx->pc = 0x24A8D4u;
            return;
        }
    }
    ctx->pc = 0x24A8BCu;
label_24a8bc:
    // 0x24a8bc: 0xa0f809  jalr        $a1
label_24a8c0:
    if (ctx->pc == 0x24A8C0u) {
        ctx->pc = 0x24A8C4u;
        goto label_24a8c4;
    }
    ctx->pc = 0x24A8BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x24A8C4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24A8BCu, 0x24A8C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24A8C4u;
label_24a8c4:
    // 0x24a8c4: 0x8f8392fc  lw          $v1, -0x6D04($gp)
    ctx->pc = 0x24a8c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939388)));
label_24a8c8:
    // 0x24a8c8: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x24a8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_24a8cc:
    // 0x24a8cc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x24a8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_24a8d0:
    // 0x24a8d0: 0xac620010  sw          $v0, 0x10($v1)
    ctx->pc = 0x24a8d0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
    ctx->pc = 0x24a8d4u;
}
