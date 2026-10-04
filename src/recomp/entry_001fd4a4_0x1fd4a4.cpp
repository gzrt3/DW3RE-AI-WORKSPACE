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

// Function: entry_001fd4a4
// Address: 0x1fd4a4 - 0x1fd4e8
void entry_001fd4a4_0x1fd4a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fd4a4_0x1fd4a4");
#endif

    switch (ctx->pc) {
        case 0x1fd4c4u: goto label_1fd4c4;
        default: break;
    }

    ctx->pc = 0x1fd4a4u;

    // 0x1fd4a4: 0x0  nop
    ctx->pc = 0x1fd4a4u;
    // NOP
    // 0x1fd4a8: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x1fd4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x1fd4ac: 0x2442a780  addiu       $v0, $v0, -0x5880
    ctx->pc = 0x1fd4acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944640));
    // 0x1fd4b0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1fd4b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd4b4: 0x53a021  addu        $s4, $v0, $s3
    ctx->pc = 0x1fd4b4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1fd4b8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1fd4b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd4bc: 0xc06f1d4  jal         func_1BC750
    ctx->pc = 0x1FD4BCu;
    SET_GPR_U32(ctx, 31, 0x1FD4C4u);
    ctx->pc = 0x1FD4C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD4BCu;
    // 0x1fd4c0: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BC750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BC750u, 0x1FD4BCu, 0x1FD4C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD4C4u;
label_1fd4c4:
    // 0x1fd4c4: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x1fd4c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1fd4c8: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x1fd4c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1fd4cc: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1fd4ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1fd4d0: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x1fd4d0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
    // 0x1fd4d4: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x1fd4d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1fd4d8: 0x28610191  slti        $at, $v1, 0x191
    ctx->pc = 0x1fd4d8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)401) ? 1 : 0);
    // 0x1fd4dc: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1FD4DCu;
    {
        const bool branch_taken_0x1fd4dc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fd4dc) {
            ctx->pc = 0x1FD4E8u;
            return;
        }
    }
    ctx->pc = 0x1FD4E4u;
    // 0x1fd4e4: 0x24030190  addiu       $v1, $zero, 0x190
    ctx->pc = 0x1fd4e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
    ctx->pc = 0x1fd4e8u;
}
