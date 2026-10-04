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

// Function: entry_001a5290
// Address: 0x1a5290 - 0x1a52c0
void entry_001a5290_0x1a5290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a5290_0x1a5290");
#endif

    switch (ctx->pc) {
        case 0x1a52a4u: goto label_1a52a4;
        default: break;
    }

    ctx->pc = 0x1a5290u;

    // 0x1a5290: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x1a5290u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x1a5294: 0x3484ffc0  ori         $a0, $a0, 0xFFC0
    ctx->pc = 0x1a5294u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65472);
    // 0x1a5298: 0x2242824  and         $a1, $s1, $a0
    ctx->pc = 0x1a5298u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) & GPR_U64(ctx, 4));
    // 0x1a529c: 0xc06946c  jal         func_1A51B0
    ctx->pc = 0x1A529Cu;
    SET_GPR_U32(ctx, 31, 0x1A52A4u);
    ctx->pc = 0x1A52A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A529Cu;
    // 0x1a52a0: 0x2442024  and         $a0, $s2, $a0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) & GPR_U64(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A51B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A51B0u, 0x1A529Cu, 0x1A52A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A52A4u;
label_1a52a4:
    // 0x1a52a4: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A52A4u;
    {
        const bool branch_taken_0x1a52a4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A52A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A52A4u;
        // 0x1a52a8: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a52a4) {
            ctx->pc = 0x1A52C0u;
            return;
        }
    }
    ctx->pc = 0x1A52ACu;
    // 0x1a52ac: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1a52acu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a52b0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1a52b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a52b4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a52b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a52b8: 0x806b52a  j           func_1AD4A8
    ctx->pc = 0x1A52B8u;
    ctx->pc = 0x1A52BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A52B8u;
    // 0x1a52bc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD4A8u;
    FUN_001ad4a8_0x1ad4a8(rdram, ctx, runtime); return;
    ctx->pc = 0x1A52C0u;
}
