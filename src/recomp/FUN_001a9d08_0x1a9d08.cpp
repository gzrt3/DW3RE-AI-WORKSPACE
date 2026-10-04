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

// Function: FUN_001a9d08
// Address: 0x1a9d08 - 0x1a9d50
void FUN_001a9d08_0x1a9d08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001a9d08_0x1a9d08");
#endif

    ctx->pc = 0x1a9d08u;

    // 0x1a9d08: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x1a9d08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x1a9d0c: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x1a9d0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x1a9d10: 0xffb600a0  sd          $s6, 0xA0($sp)
    ctx->pc = 0x1a9d10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
    // 0x1a9d14: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a9d14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9d18: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x1a9d18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x1a9d1c: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x1a9d1cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9d20: 0xffb10050  sd          $s1, 0x50($sp)
    ctx->pc = 0x1a9d20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    // 0x1a9d24: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1a9d24u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9d28: 0xffb700b0  sd          $s7, 0xB0($sp)
    ctx->pc = 0x1a9d28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 23));
    // 0x1a9d2c: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x1a9d2cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9d30: 0xffb30070  sd          $s3, 0x70($sp)
    ctx->pc = 0x1a9d30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
    // 0x1a9d34: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x1a9d34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1a9d38: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x1a9d38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
    // 0x1a9d3c: 0x3c170037  lui         $s7, 0x37
    ctx->pc = 0x1a9d3cu;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)55 << 16));
    // 0x1a9d40: 0xffb50090  sd          $s5, 0x90($sp)
    ctx->pc = 0x1a9d40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 21));
    // 0x1a9d44: 0x26f33240  addiu       $s3, $s7, 0x3240
    ctx->pc = 0x1a9d44u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 23), 12864));
    // 0x1a9d48: 0xc06a14c  jal         func_1A8530
    ctx->pc = 0x1A9D48u;
    SET_GPR_U32(ctx, 31, 0x1A9D50u);
    ctx->pc = 0x1A9D4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9D48u;
    // 0x1a9d4c: 0xffb40080  sd          $s4, 0x80($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8530u, 0x1A9D48u, 0x1A9D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9D50u;
}
