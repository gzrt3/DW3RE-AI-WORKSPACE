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

// Function: FUN_001b1470
// Address: 0x1b1470 - 0x1b149c
void FUN_001b1470_0x1b1470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001b1470_0x1b1470");
#endif

    switch (ctx->pc) {
        case 0x1b1480u: goto label_1b1480;
        default: break;
    }

    ctx->pc = 0x1b1470u;

    // 0x1b1470: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b1470u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b1474: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b1474u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b1478: 0xc06c4d2  jal         func_1B1348
    ctx->pc = 0x1B1478u;
    SET_GPR_U32(ctx, 31, 0x1B1480u);
    ctx->pc = 0x1B147Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1478u;
    // 0x1b147c: 0x24070040  addiu       $a3, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1348u, 0x1B1478u, 0x1B1480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1480u;
label_1b1480:
    // 0x1b1480: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1b1480u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1484: 0x14800004  bnez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B1484u;
    {
        const bool branch_taken_0x1b1484 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B1488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1484u;
        // 0x1b1488: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1484) {
            ctx->pc = 0x1B1498u;
            goto label_1b1498;
        }
    }
    ctx->pc = 0x1B148Cu;
    // 0x1b148c: 0x3c030029  lui         $v1, 0x29
    ctx->pc = 0x1b148cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
    // 0x1b1490: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x1b1490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x1b1494: 0xac628d08  sw          $v0, -0x72F8($v1)
    ctx->pc = 0x1b1494u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x288D08u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x288D08u, _value); } while (0);
label_1b1498:
    // 0x1b1498: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1b1498u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1b149cu;
}
