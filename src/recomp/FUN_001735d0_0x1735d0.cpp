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

// Function: FUN_001735d0
// Address: 0x1735d0 - 0x17361c
void FUN_001735d0_0x1735d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001735d0_0x1735d0");
#endif

    ctx->pc = 0x1735d0u;

    // 0x1735d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1735d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1735d4: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x1735d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x1735d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1735d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1735dc: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1735dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x1735e0: 0x8c233ffc  lw          $v1, 0x3FFC($at)
    ctx->pc = 0x1735e0u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x70003FFCu));
    // 0x1735e4: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x1735e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
    // 0x1735e8: 0x244250b0  addiu       $v0, $v0, 0x50B0
    ctx->pc = 0x1735e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20656));
    // 0x1735ec: 0x24a54e00  addiu       $a1, $a1, 0x4E00
    ctx->pc = 0x1735ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19968));
    // 0x1735f0: 0x452023  subu        $a0, $v0, $a1
    ctx->pc = 0x1735f0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1735f4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1735f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1735f8: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1735f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x1735fc: 0x2484000f  addiu       $a0, $a0, 0xF
    ctx->pc = 0x1735fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15));
    // 0x173600: 0x24421e00  addiu       $v0, $v0, 0x1E00
    ctx->pc = 0x173600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7680));
    // 0x173604: 0x43102  srl         $a2, $a0, 4
    ctx->pc = 0x173604u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 4), 4));
    // 0x173608: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x173608u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17360c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x17360cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173610: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x173610u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x173614: 0xc066c72  jal         func_19B1C8
    ctx->pc = 0x173614u;
    SET_GPR_U32(ctx, 31, 0x17361Cu);
    ctx->pc = 0x173618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173614u;
    // 0x173618: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x173614u, 0x17361Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17361Cu;
}
