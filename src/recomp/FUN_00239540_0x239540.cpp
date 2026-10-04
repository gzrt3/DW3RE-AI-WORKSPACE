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

// Function: FUN_00239540
// Address: 0x239540 - 0x239578
void FUN_00239540_0x239540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00239540_0x239540");
#endif

    switch (ctx->pc) {
        case 0x239570u: goto label_239570;
        default: break;
    }

    ctx->pc = 0x239540u;

    // 0x239540: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x239540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x239544: 0x3c02005a  lui         $v0, 0x5A
    ctx->pc = 0x239544u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)90 << 16));
    // 0x239548: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x239548u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x23954c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x23954cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239550: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x239550u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x239554: 0x245159c8  addiu       $s1, $v0, 0x59C8
    ctx->pc = 0x239554u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 22984));
    // 0x239558: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x239558u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23955c: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x23955cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239560: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x239560u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239564: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x239564u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x239568: 0xc0693c6  jal         func_1A4F18
    ctx->pc = 0x239568u;
    SET_GPR_U32(ctx, 31, 0x239570u);
    ctx->pc = 0x23956Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239568u;
    // 0x23956c: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4F18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4F18u, 0x239568u, 0x239570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239570u;
label_239570:
    // 0x239570: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x239570u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239574: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x239574u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x239578u;
}
