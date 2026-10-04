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

// Function: FUN_00191a30
// Address: 0x191a30 - 0x191a5c
void FUN_00191a30_0x191a30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00191a30_0x191a30");
#endif

    ctx->pc = 0x191a30u;

    // 0x191a30: 0x41100  sll         $v0, $a0, 4
    ctx->pc = 0x191a30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x191a34: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x191a34u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x191a38: 0x441823  subu        $v1, $v0, $a0
    ctx->pc = 0x191a38u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x191a3c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x191a3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x191a40: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x191a40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
    // 0x191a44: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x191a44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x191a48: 0x24422cc0  addiu       $v0, $v0, 0x2CC0
    ctx->pc = 0x191a48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11456));
    // 0x191a4c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x191a4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191a50: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x191a50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x191a54: 0xc066e26  jal         func_19B898
    ctx->pc = 0x191A54u;
    SET_GPR_U32(ctx, 31, 0x191A5Cu);
    ctx->pc = 0x191A58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191A54u;
    // 0x191a58: 0x24450030  addiu       $a1, $v0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B898u, 0x191A54u, 0x191A5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191A5Cu;
}
