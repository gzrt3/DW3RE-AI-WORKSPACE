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

// Function: entry_00195a3c
// Address: 0x195a3c - 0x195a90
void entry_00195a3c_0x195a3c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00195a3c_0x195a3c");
#endif

    switch (ctx->pc) {
        case 0x195a8cu: goto label_195a8c;
        default: break;
    }

    ctx->pc = 0x195a3cu;

    // 0x195a3c: 0x0  nop
    ctx->pc = 0x195a3cu;
    // NOP
    // 0x195a40: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x195a40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x195a44: 0x10830012  beq         $a0, $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x195A44u;
    {
        const bool branch_taken_0x195a44 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x195A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195A44u;
        // 0x195a48: 0x43080  sll         $a2, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195a44) {
            ctx->pc = 0x195A90u;
            return;
        }
    }
    ctx->pc = 0x195A4Cu;
    // 0x195a4c: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x195a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
    // 0x195a50: 0xc42821  addu        $a1, $a2, $a0
    ctx->pc = 0x195a50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x195a54: 0x2463a4c0  addiu       $v1, $v1, -0x5B40
    ctx->pc = 0x195a54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943936));
    // 0x195a58: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x195a58u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x195a5c: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x195a5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x195a60: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x195a60u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x195a64: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x195a64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x195a68: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x195a68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x195a6c: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x195A6Cu;
    {
        const bool branch_taken_0x195a6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x195a6c) {
            ctx->pc = 0x195A90u;
            return;
        }
    }
    ctx->pc = 0x195A74u;
    // 0x195a74: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x195a74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
    // 0x195a78: 0x24850008  addiu       $a1, $a0, 0x8
    ctx->pc = 0x195a78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x195a7c: 0x24423070  addiu       $v0, $v0, 0x3070
    ctx->pc = 0x195a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12400));
    // 0x195a80: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x195a80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x195a84: 0xc0415a4  jal         func_105690
    ctx->pc = 0x195A84u;
    SET_GPR_U32(ctx, 31, 0x195A8Cu);
    ctx->pc = 0x195A88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195A84u;
    // 0x195a88: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105690u, 0x195A84u, 0x195A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195A8Cu;
label_195a8c:
    // 0x195a8c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x195a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x195a90u;
}
