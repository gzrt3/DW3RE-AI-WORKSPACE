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

// Function: FUN_0020ef40
// Address: 0x20ef40 - 0x20ef68
void FUN_0020ef40_0x20ef40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0020ef40_0x20ef40");
#endif

    ctx->pc = 0x20ef40u;

    // 0x20ef40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x20ef40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x20ef44: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x20ef44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x20ef48: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x20ef48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x20ef4c: 0x451821  addu        $v1, $v0, $a1
    ctx->pc = 0x20ef4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x20ef50: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x20ef50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x20ef54: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x20ef54u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x20ef58: 0x8f8291a0  lw          $v0, -0x6E60($gp)
    ctx->pc = 0x20ef58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939040)));
    // 0x20ef5c: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x20ef5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x20ef60: 0xc066d0a  jal         func_19B428
    ctx->pc = 0x20EF60u;
    SET_GPR_U32(ctx, 31, 0x20EF68u);
    ctx->pc = 0x20EF64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20EF60u;
    // 0x20ef64: 0x438021  addu        $s0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B428u, 0x20EF60u, 0x20EF68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20EF68u;
}
