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

// Function: entry_0022af10
// Address: 0x22af10 - 0x22af58
void entry_0022af10_0x22af10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022af10_0x22af10");
#endif

    switch (ctx->pc) {
        case 0x22af50u: goto label_22af50;
        default: break;
    }

    ctx->pc = 0x22af10u;

    // 0x22af10: 0x94860014  lhu         $a2, 0x14($a0)
    ctx->pc = 0x22af10u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x22af14: 0x3c030030  lui         $v1, 0x30
    ctx->pc = 0x22af14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48 << 16));
    // 0x22af18: 0x246352f4  addiu       $v1, $v1, 0x52F4
    ctx->pc = 0x22af18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 21236));
    // 0x22af1c: 0x628c0  sll         $a1, $a2, 3
    ctx->pc = 0x22af1cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x22af20: 0xa63023  subu        $a2, $a1, $a2
    ctx->pc = 0x22af20u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x22af24: 0x62880  sll         $a1, $a2, 2
    ctx->pc = 0x22af24u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x22af28: 0xa62823  subu        $a1, $a1, $a2
    ctx->pc = 0x22af28u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x22af2c: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x22af2cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x22af30: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x22af30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x22af34: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x22af34u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x22af38: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x22AF38u;
    {
        const bool branch_taken_0x22af38 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x22af38) {
            ctx->pc = 0x22AF58u;
            return;
        }
    }
    ctx->pc = 0x22AF40u;
    // 0x22af40: 0x9202009c  lbu         $v0, 0x9C($s0)
    ctx->pc = 0x22af40u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 156)));
    // 0x22af44: 0x304200df  andi        $v0, $v0, 0xDF
    ctx->pc = 0x22af44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)223);
    // 0x22af48: 0xc0591f4  jal         func_1647D0
    ctx->pc = 0x22AF48u;
    SET_GPR_U32(ctx, 31, 0x22AF50u);
    ctx->pc = 0x22AF4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22AF48u;
    // 0x22af4c: 0xa202009c  sb          $v0, 0x9C($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 156), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1647D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1647D0u, 0x22AF48u, 0x22AF50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22AF50u;
label_22af50:
    // 0x22af50: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x22AF50u;
    {
        const bool branch_taken_0x22af50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22af50) {
            ctx->pc = 0x22AFBCu;
            return;
        }
    }
    ctx->pc = 0x22AF58u;
}
