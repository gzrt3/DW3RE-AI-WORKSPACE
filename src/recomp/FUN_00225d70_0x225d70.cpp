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

// Function: FUN_00225d70
// Address: 0x225d70 - 0x225dc0
void FUN_00225d70_0x225d70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00225d70_0x225d70");
#endif

    ctx->pc = 0x225d70u;

    // 0x225d70: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x225d70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x225d74: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x225d74u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x225d78: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x225d78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x225d7c: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x225d7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
    // 0x225d80: 0x802351ed  lb          $v1, 0x51ED($at)
    ctx->pc = 0x225d80u;
    SET_GPR_S32(ctx, 3, (int8_t)FAST_READ8(0x3651EDu));
    // 0x225d84: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x225d84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x225d88: 0x84860000  lh          $a2, 0x0($a0)
    ctx->pc = 0x225d88u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x225d8c: 0x24a55090  addiu       $a1, $a1, 0x5090
    ctx->pc = 0x225d8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20624));
    // 0x225d90: 0x24425092  addiu       $v0, $v0, 0x5092
    ctx->pc = 0x225d90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20626));
    // 0x225d94: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x225d94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x225d98: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x225d98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
    // 0x225d9c: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x225d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x225da0: 0xa4660000  sh          $a2, 0x0($v1)
    ctx->pc = 0x225da0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 6));
    // 0x225da4: 0x802351ed  lb          $v1, 0x51ED($at)
    ctx->pc = 0x225da4u;
    SET_GPR_S32(ctx, 3, (int8_t)FAST_READ8(0x3651EDu));
    // 0x225da8: 0x84860004  lh          $a2, 0x4($a0)
    ctx->pc = 0x225da8u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x225dac: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x225dacu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x225db0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x225db0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x225db4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x225db4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x225db8: 0xc05d970  jal         func_1765C0
    ctx->pc = 0x225DB8u;
    SET_GPR_U32(ctx, 31, 0x225DC0u);
    ctx->pc = 0x225DBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225DB8u;
    // 0x225dbc: 0xa4460000  sh          $a2, 0x0($v0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1765C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1765C0u, 0x225DB8u, 0x225DC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225DC0u;
}
