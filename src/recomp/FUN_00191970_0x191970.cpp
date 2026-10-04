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

// Function: FUN_00191970
// Address: 0x191970 - 0x19199c
void FUN_00191970_0x191970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00191970_0x191970");
#endif

    ctx->pc = 0x191970u;

    // 0x191970: 0x41100  sll         $v0, $a0, 4
    ctx->pc = 0x191970u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x191974: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x191974u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x191978: 0x441823  subu        $v1, $v0, $a0
    ctx->pc = 0x191978u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x19197c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19197cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x191980: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x191980u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
    // 0x191984: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x191984u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x191988: 0x24422cc0  addiu       $v0, $v0, 0x2CC0
    ctx->pc = 0x191988u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11456));
    // 0x19198c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x19198cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191990: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x191990u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x191994: 0xc066e26  jal         func_19B898
    ctx->pc = 0x191994u;
    SET_GPR_U32(ctx, 31, 0x19199Cu);
    ctx->pc = 0x191998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191994u;
    // 0x191998: 0x24450020  addiu       $a1, $v0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B898u, 0x191994u, 0x19199Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19199Cu;
}
