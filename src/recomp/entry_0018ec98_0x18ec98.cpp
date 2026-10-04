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

// Function: entry_0018ec98
// Address: 0x18ec98 - 0x18ecc0
void entry_0018ec98_0x18ec98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018ec98_0x18ec98");
#endif

    ctx->pc = 0x18ec98u;

    // 0x18ec98: 0x0  nop
    ctx->pc = 0x18ec98u;
    // NOP
    // 0x18ec9c: 0xae8000a4  sw          $zero, 0xA4($s4)
    ctx->pc = 0x18ec9cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 164), GPR_U32(ctx, 0));
    // 0x18eca0: 0x3c02002d  lui         $v0, 0x2D
    ctx->pc = 0x18eca0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
    // 0x18eca4: 0x8f83884c  lw          $v1, -0x77B4($gp)
    ctx->pc = 0x18eca4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936652)));
    // 0x18eca8: 0x244262e0  addiu       $v0, $v0, 0x62E0
    ctx->pc = 0x18eca8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25312));
    // 0x18ecac: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x18ecacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x18ecb0: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x18ecb0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18ecb4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x18ecb4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x18ecb8: 0xc066e26  jal         func_19B898
    ctx->pc = 0x18ECB8u;
    SET_GPR_U32(ctx, 31, 0x18ECC0u);
    ctx->pc = 0x18ECBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18ECB8u;
    // 0x18ecbc: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B898u, 0x18ECB8u, 0x18ECC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18ECC0u;
}
