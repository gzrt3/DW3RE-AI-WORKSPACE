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

// Function: FUN_001a8898
// Address: 0x1a8898 - 0x1a88bc
void FUN_001a8898_0x1a8898(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001a8898_0x1a8898");
#endif

    ctx->pc = 0x1a8898u;

    // 0x1a8898: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a8898u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a889c: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x1a889cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
    // 0x1a88a0: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x1a88a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x1a88a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a88a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a88a8: 0xac405bf8  sw          $zero, 0x5BF8($v0)
    ctx->pc = 0x1a88a8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x285BF8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x285BF8u, _value); } while (0);
    // 0x1a88ac: 0x24844528  addiu       $a0, $a0, 0x4528
    ctx->pc = 0x1a88acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17704));
    // 0x1a88b0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a88b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a88b4: 0xc08e9ac  jal         func_23A6B0
    ctx->pc = 0x1A88B4u;
    SET_GPR_U32(ctx, 31, 0x1A88BCu);
    ctx->pc = 0x1A88B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A88B4u;
    // 0x1a88b8: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A6B0u, 0x1A88B4u, 0x1A88BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A88BCu;
}
