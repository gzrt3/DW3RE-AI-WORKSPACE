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

// Function: FUN_00227890
// Address: 0x227890 - 0x2278ec
void FUN_00227890_0x227890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00227890_0x227890");
#endif

    switch (ctx->pc) {
        case 0x2278e4u: goto label_2278e4;
        default: break;
    }

    ctx->pc = 0x227890u;

    // 0x227890: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x227890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x227894: 0x3c05002f  lui         $a1, 0x2F
    ctx->pc = 0x227894u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)47 << 16));
    // 0x227898: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x227898u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x22789c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x22789cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2278a0: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x2278a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2278a4: 0x24a525ae  addiu       $a1, $a1, 0x25AE
    ctx->pc = 0x2278a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9646));
    // 0x2278a8: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2278a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2278ac: 0x8c460008  lw          $a2, 0x8($v0)
    ctx->pc = 0x2278acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2278b0: 0x41200  sll         $v0, $a0, 8
    ctx->pc = 0x2278b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x2278b4: 0x443823  subu        $a3, $v0, $a0
    ctx->pc = 0x2278b4u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2278b8: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x2278b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x2278bc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2278bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2278c0: 0x718c0  sll         $v1, $a3, 3
    ctx->pc = 0x2278c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x2278c4: 0xe33821  addu        $a3, $a3, $v1
    ctx->pc = 0x2278c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x2278c8: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x2278c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2278cc: 0x710c0  sll         $v0, $a3, 3
    ctx->pc = 0x2278ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x2278d0: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x2278d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2278d4: 0x24420000  addiu       $v0, $v0, 0x0
    ctx->pc = 0x2278d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
    // 0x2278d8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2278d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2278dc: 0xc0564fc  jal         func_1593F0
    ctx->pc = 0x2278DCu;
    SET_GPR_U32(ctx, 31, 0x2278E4u);
    ctx->pc = 0x2278E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2278DCu;
    // 0x2278e0: 0x90450000  lbu         $a1, 0x0($v0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1593F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1593F0u, 0x2278DCu, 0x2278E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2278E4u;
label_2278e4:
    // 0x2278e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2278e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2278e8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2278e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2278ecu;
}
