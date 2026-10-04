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

// Function: FUN_001a9180
// Address: 0x1a9180 - 0x1a91cc
void FUN_001a9180_0x1a9180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001a9180_0x1a9180");
#endif

    switch (ctx->pc) {
        case 0x1a91c0u: goto label_1a91c0;
        default: break;
    }

    ctx->pc = 0x1a9180u;

    // 0x1a9180: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x1a9180u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x1a9184: 0xffb50090  sd          $s5, 0x90($sp)
    ctx->pc = 0x1a9184u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 21));
    // 0x1a9188: 0xffb10050  sd          $s1, 0x50($sp)
    ctx->pc = 0x1a9188u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    // 0x1a918c: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x1a918cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9190: 0xffb700b0  sd          $s7, 0xB0($sp)
    ctx->pc = 0x1a9190u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 23));
    // 0x1a9194: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1a9194u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9198: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x1a9198u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x1a919c: 0x3c170037  lui         $s7, 0x37
    ctx->pc = 0x1a919cu;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)55 << 16));
    // 0x1a91a0: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x1a91a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x1a91a4: 0x26f23240  addiu       $s2, $s7, 0x3240
    ctx->pc = 0x1a91a4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 23), 12864));
    // 0x1a91a8: 0xffbf00d0  sd          $ra, 0xD0($sp)
    ctx->pc = 0x1a91a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 31));
    // 0x1a91ac: 0xffbe00c0  sd          $fp, 0xC0($sp)
    ctx->pc = 0x1a91acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 30));
    // 0x1a91b0: 0xffb600a0  sd          $s6, 0xA0($sp)
    ctx->pc = 0x1a91b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
    // 0x1a91b4: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x1a91b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x1a91b8: 0xc06a02c  jal         func_1A80B0
    ctx->pc = 0x1A91B8u;
    SET_GPR_U32(ctx, 31, 0x1A91C0u);
    ctx->pc = 0x1A91BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A91B8u;
    // 0x1a91bc: 0xffb30070  sd          $s3, 0x70($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A80B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A80B0u, 0x1A91B8u, 0x1A91C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A91C0u;
label_1a91c0:
    // 0x1a91c0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1a91c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a91c4: 0xc06a14c  jal         func_1A8530
    ctx->pc = 0x1A91C4u;
    SET_GPR_U32(ctx, 31, 0x1A91CCu);
    ctx->pc = 0x1A91C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A91C4u;
    // 0x1a91c8: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8530u, 0x1A91C4u, 0x1A91CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A91CCu;
}
