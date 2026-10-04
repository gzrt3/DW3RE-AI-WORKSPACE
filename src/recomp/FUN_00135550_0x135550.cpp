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

// Function: FUN_00135550
// Address: 0x135550 - 0x135594
void FUN_00135550_0x135550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00135550_0x135550");
#endif

    ctx->pc = 0x135550u;

    // 0x135550: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x135550u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x135554: 0x3c040031  lui         $a0, 0x31
    ctx->pc = 0x135554u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49 << 16));
    // 0x135558: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x135558u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x13555c: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x13555cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x135560: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x135560u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x135564: 0x24849f20  addiu       $a0, $a0, -0x60E0
    ctx->pc = 0x135564u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942496));
    // 0x135568: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x135568u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x13556c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x13556cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135570: 0xac20a414  sw          $zero, -0x5BEC($at)
    ctx->pc = 0x135570u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x30A414u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x30A414u, _value); } while (0);
    // 0x135574: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x135574u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x135578: 0xac20a418  sw          $zero, -0x5BE8($at)
    ctx->pc = 0x135578u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x30A418u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x30A418u, _value); } while (0);
    // 0x13557c: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x13557cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x135580: 0xac20a41c  sw          $zero, -0x5BE4($at)
    ctx->pc = 0x135580u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x30A41Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x30A41Cu, _value); } while (0);
    // 0x135584: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x135584u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x135588: 0x8c30a410  lw          $s0, -0x5BF0($at)
    ctx->pc = 0x135588u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x30A410u));
    // 0x13558c: 0xc08e9ac  jal         func_23A6B0
    ctx->pc = 0x13558Cu;
    SET_GPR_U32(ctx, 31, 0x135594u);
    ctx->pc = 0x135590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13558Cu;
    // 0x135590: 0x24060540  addiu       $a2, $zero, 0x540 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1344));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A6B0u, 0x13558Cu, 0x135594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135594u;
}
