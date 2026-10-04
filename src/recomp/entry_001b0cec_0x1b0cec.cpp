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

// Function: entry_001b0cec
// Address: 0x1b0cec - 0x1b0d18
void entry_001b0cec_0x1b0cec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b0cec_0x1b0cec");
#endif

    switch (ctx->pc) {
        case 0x1b0d08u: goto label_1b0d08;
        default: break;
    }

    ctx->pc = 0x1b0cecu;

    // 0x1b0cec: 0x3c080037  lui         $t0, 0x37
    ctx->pc = 0x1b0cecu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)55 << 16));
    // 0x1b0cf0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1b0cf0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0cf4: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x1b0cf4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0cf8: 0x250861d8  addiu       $t0, $t0, 0x61D8
    ctx->pc = 0x1b0cf8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 25048));
    // 0x1b0cfc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1b0cfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0d00: 0xc06c38e  jal         func_1B0E38
    ctx->pc = 0x1B0D00u;
    SET_GPR_U32(ctx, 31, 0x1B0D08u);
    ctx->pc = 0x1B0D04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0D00u;
    // 0x1b0d04: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B0E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B0E38u, 0x1B0D00u, 0x1B0D08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0D08u;
label_1b0d08:
    // 0x1b0d08: 0x28402  srl         $s0, $v0, 16
    ctx->pc = 0x1b0d08u;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x1b0d0c: 0x3053ffff  andi        $s3, $v0, 0xFFFF
    ctx->pc = 0x1b0d0cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1b0d10: 0xafd00000  sw          $s0, 0x0($fp)
    ctx->pc = 0x1b0d10u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 16));
    // 0x1b0d14: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x1b0d14u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1b0d18u;
}
