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

// Function: FUN_001fc320
// Address: 0x1fc320 - 0x1fc36c
void FUN_001fc320_0x1fc320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001fc320_0x1fc320");
#endif

    ctx->pc = 0x1fc320u;

    // 0x1fc320: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1fc320u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1fc324: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x1fc324u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x1fc328: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1fc328u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1fc32c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1fc32cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x1fc330: 0x8c233ffc  lw          $v1, 0x3FFC($at)
    ctx->pc = 0x1fc330u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x70003FFCu));
    // 0x1fc334: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x1fc334u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
    // 0x1fc338: 0x24425340  addiu       $v0, $v0, 0x5340
    ctx->pc = 0x1fc338u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21312));
    // 0x1fc33c: 0x24a550c0  addiu       $a1, $a1, 0x50C0
    ctx->pc = 0x1fc33cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20672));
    // 0x1fc340: 0x452023  subu        $a0, $v0, $a1
    ctx->pc = 0x1fc340u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1fc344: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1fc344u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc348: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1fc348u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x1fc34c: 0x2484000f  addiu       $a0, $a0, 0xF
    ctx->pc = 0x1fc34cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15));
    // 0x1fc350: 0x24421e00  addiu       $v0, $v0, 0x1E00
    ctx->pc = 0x1fc350u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7680));
    // 0x1fc354: 0x43102  srl         $a2, $a0, 4
    ctx->pc = 0x1fc354u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 4), 4));
    // 0x1fc358: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1fc358u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc35c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1fc35cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc360: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x1fc360u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x1fc364: 0xc066c72  jal         func_19B1C8
    ctx->pc = 0x1FC364u;
    SET_GPR_U32(ctx, 31, 0x1FC36Cu);
    ctx->pc = 0x1FC368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FC364u;
    // 0x1fc368: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x1FC364u, 0x1FC36Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FC36Cu;
}
