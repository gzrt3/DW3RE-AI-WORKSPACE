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

// Function: FUN_001d5b70
// Address: 0x1d5b70 - 0x1d5bd4
void FUN_001d5b70_0x1d5b70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001d5b70_0x1d5b70");
#endif

    switch (ctx->pc) {
        case 0x1d5b8cu: goto label_1d5b8c;
        case 0x1d5bacu: goto label_1d5bac;
        default: break;
    }

    ctx->pc = 0x1d5b70u;

    // 0x1d5b70: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d5b70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d5b74: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d5b74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d5b78: 0x90830232  lbu         $v1, 0x232($a0)
    ctx->pc = 0x1d5b78u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 562)));
    // 0x1d5b7c: 0x14600013  bnez        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x1D5B7Cu;
    {
        const bool branch_taken_0x1d5b7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d5b7c) {
            ctx->pc = 0x1D5BCCu;
            goto label_1d5bcc;
        }
    }
    ctx->pc = 0x1D5B84u;
    // 0x1d5b84: 0xc0439cc  jal         func_10E730
    ctx->pc = 0x1D5B84u;
    SET_GPR_U32(ctx, 31, 0x1D5B8Cu);
    ctx->pc = 0x10E730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E730u, 0x1D5B84u, 0x1D5B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5B8Cu;
label_1d5b8c:
    // 0x1d5b8c: 0x220c0  sll         $a0, $v0, 3
    ctx->pc = 0x1d5b8cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1d5b90: 0x3c03004b  lui         $v1, 0x4B
    ctx->pc = 0x1d5b90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)75 << 16));
    // 0x1d5b94: 0x822023  subu        $a0, $a0, $v0
    ctx->pc = 0x1d5b94u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1d5b98: 0x246303a0  addiu       $v1, $v1, 0x3A0
    ctx->pc = 0x1d5b98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 928));
    // 0x1d5b9c: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x1d5b9cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x1d5ba0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1d5ba0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5ba4: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x1d5ba4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1d5ba8: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x1d5ba8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1d5bac:
    // 0x1d5bac: 0x0  nop
    ctx->pc = 0x1d5bacu;
    // NOP
    // 0x1d5bb0: 0xa61821  addu        $v1, $a1, $a2
    ctx->pc = 0x1d5bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1d5bb4: 0xa0640068  sb          $a0, 0x68($v1)
    ctx->pc = 0x1d5bb4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 104), (uint8_t)GPR_U32(ctx, 4));
    // 0x1d5bb8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1d5bb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1d5bbc: 0x28c30002  slti        $v1, $a2, 0x2
    ctx->pc = 0x1d5bbcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1d5bc0: 0x0  nop
    ctx->pc = 0x1d5bc0u;
    // NOP
    // 0x1d5bc4: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1D5BC4u;
    {
        const bool branch_taken_0x1d5bc4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d5bc4) {
            ctx->pc = 0x1D5BACu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d5bac;
        }
    }
    ctx->pc = 0x1D5BCCu;
label_1d5bcc:
    // 0x1d5bcc: 0x0  nop
    ctx->pc = 0x1d5bccu;
    // NOP
    // 0x1d5bd0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d5bd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x1d5bd4u;
}
