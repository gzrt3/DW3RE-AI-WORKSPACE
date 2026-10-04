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

// Function: entry_00136540
// Address: 0x136540 - 0x136570
void entry_00136540_0x136540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00136540_0x136540");
#endif

    ctx->pc = 0x136540u;

    // 0x136540: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x136540u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x136544: 0xac22a3cc  sw          $v0, -0x5C34($at)
    ctx->pc = 0x136544u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x30A3CCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x30A3CCu, _value); } while (0);
    // 0x136548: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x136548u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x13654c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x13654cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x136550: 0xac20a3d0  sw          $zero, -0x5C30($at)
    ctx->pc = 0x136550u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x30A3D0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x30A3D0u, _value); } while (0);
    // 0x136554: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x136554u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x136558: 0x9023a400  lbu         $v1, -0x5C00($at)
    ctx->pc = 0x136558u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x30A400u));
    // 0x13655c: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x13655Cu;
    {
        const bool branch_taken_0x13655c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x13655c) {
            ctx->pc = 0x136570u;
            return;
        }
    }
    ctx->pc = 0x136564u;
    // 0x136564: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x136564u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x136568: 0xc04cfc4  jal         func_133F10
    ctx->pc = 0x136568u;
    SET_GPR_U32(ctx, 31, 0x136570u);
    ctx->pc = 0x13656Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136568u;
    // 0x13656c: 0x8c24a3cc  lw          $a0, -0x5C34($at) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294943692)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x133F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x133F10u, 0x136568u, 0x136570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136570u;
}
