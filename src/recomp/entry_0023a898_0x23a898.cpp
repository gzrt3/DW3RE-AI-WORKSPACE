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

// Function: entry_0023a898
// Address: 0x23a898 - 0x23a8c4
void entry_0023a898_0x23a898(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023a898_0x23a898");
#endif

    switch (ctx->pc) {
        case 0x23a8b0u: goto label_23a8b0;
        default: break;
    }

    ctx->pc = 0x23a898u;

    // 0x23a898: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23a898u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23a89c: 0x2228004  sllv        $s0, $v0, $s1
    ctx->pc = 0x23a89cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 17) & 0x1F));
    // 0x23a8a0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x23a8a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23a8a4: 0x103080  sll         $a2, $s0, 2
    ctx->pc = 0x23a8a4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x23a8a8: 0xc08dc64  jal         func_237190
    ctx->pc = 0x23A8A8u;
    SET_GPR_U32(ctx, 31, 0x23A8B0u);
    ctx->pc = 0x23A8ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23A8A8u;
    // 0x23a8ac: 0x24c60014  addiu       $a2, $a2, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x237190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x237190u, 0x23A8A8u, 0x23A8B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A8B0u;
label_23a8b0:
    // 0x23a8b0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x23a8b0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23a8b4: 0x50600007  beql        $v1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x23A8B4u;
    {
        const bool branch_taken_0x23a8b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x23a8b4) {
            ctx->pc = 0x23A8B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23A8B4u;
            // 0x23a8b8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23A8D4u;
            return;
        }
    }
    ctx->pc = 0x23A8BCu;
    // 0x23a8bc: 0xac710004  sw          $s1, 0x4($v1)
    ctx->pc = 0x23a8bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 17));
    // 0x23a8c0: 0xac700008  sw          $s0, 0x8($v1)
    ctx->pc = 0x23a8c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 16));
    ctx->pc = 0x23a8c4u;
}
