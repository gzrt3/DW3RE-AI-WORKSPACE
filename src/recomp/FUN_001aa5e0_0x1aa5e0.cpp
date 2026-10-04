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

// Function: FUN_001aa5e0
// Address: 0x1aa5e0 - 0x1aa628
void FUN_001aa5e0_0x1aa5e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001aa5e0_0x1aa5e0");
#endif

    ctx->pc = 0x1aa5e0u;

    // 0x1aa5e0: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x1aa5e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x1aa5e4: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x1aa5e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x1aa5e8: 0xffb700b0  sd          $s7, 0xB0($sp)
    ctx->pc = 0x1aa5e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 23));
    // 0x1aa5ec: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1aa5ecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa5f0: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x1aa5f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x1aa5f4: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x1aa5f4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa5f8: 0xffbe00c0  sd          $fp, 0xC0($sp)
    ctx->pc = 0x1aa5f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 30));
    // 0x1aa5fc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1aa5fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa600: 0xffb30070  sd          $s3, 0x70($sp)
    ctx->pc = 0x1aa600u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
    // 0x1aa604: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x1aa604u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1aa608: 0xffbf00d0  sd          $ra, 0xD0($sp)
    ctx->pc = 0x1aa608u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 31));
    // 0x1aa60c: 0x3c1e0037  lui         $fp, 0x37
    ctx->pc = 0x1aa60cu;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)55 << 16));
    // 0x1aa610: 0xffb600a0  sd          $s6, 0xA0($sp)
    ctx->pc = 0x1aa610u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
    // 0x1aa614: 0x27d33240  addiu       $s3, $fp, 0x3240
    ctx->pc = 0x1aa614u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 30), 12864));
    // 0x1aa618: 0xffb50090  sd          $s5, 0x90($sp)
    ctx->pc = 0x1aa618u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 21));
    // 0x1aa61c: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x1aa61cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x1aa620: 0xc06a14c  jal         func_1A8530
    ctx->pc = 0x1AA620u;
    SET_GPR_U32(ctx, 31, 0x1AA628u);
    ctx->pc = 0x1AA624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA620u;
    // 0x1aa624: 0xffb10050  sd          $s1, 0x50($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8530u, 0x1AA620u, 0x1AA628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AA628u;
}
