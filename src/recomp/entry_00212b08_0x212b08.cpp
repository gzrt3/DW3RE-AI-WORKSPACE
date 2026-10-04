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

// Function: entry_00212b08
// Address: 0x212b08 - 0x212b44
void entry_00212b08_0x212b08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00212b08_0x212b08");
#endif

    switch (ctx->pc) {
        case 0x212b28u: goto label_212b28;
        case 0x212b38u: goto label_212b38;
        default: break;
    }

    ctx->pc = 0x212b08u;

    // 0x212b08: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x212b08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x212b0c: 0x1622000d  bne         $s1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x212B0Cu;
    {
        const bool branch_taken_0x212b0c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x212B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212B0Cu;
        // 0x212b10: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212b0c) {
            ctx->pc = 0x212B44u;
            return;
        }
    }
    ctx->pc = 0x212B14u;
    // 0x212b14: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x212b14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x212b18: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x212b18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x212b1c: 0x8c264900  lw          $a2, 0x4900($at)
    ctx->pc = 0x212b1cu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x334900u));
    // 0x212b20: 0xc0900a8  jal         func_2402A0
    ctx->pc = 0x212B20u;
    SET_GPR_U32(ctx, 31, 0x212B28u);
    ctx->pc = 0x212B24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x212B20u;
    // 0x212b24: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2402A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2402A0u, 0x212B20u, 0x212B28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212B28u;
label_212b28:
    // 0x212b28: 0x14400024  bnez        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x212B28u;
    {
        const bool branch_taken_0x212b28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x212b28) {
            ctx->pc = 0x212BBCu;
            return;
        }
    }
    ctx->pc = 0x212B30u;
    // 0x212b30: 0xc07aebc  jal         func_1EBAF0
    ctx->pc = 0x212B30u;
    SET_GPR_U32(ctx, 31, 0x212B38u);
    ctx->pc = 0x1EBAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EBAF0u, 0x212B30u, 0x212B38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212B38u;
label_212b38:
    // 0x212b38: 0x3c01002a  lui         $at, 0x2A
    ctx->pc = 0x212b38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)42 << 16));
    // 0x212b3c: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x212B3Cu;
    {
        const bool branch_taken_0x212b3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x212B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212B3Cu;
        // 0x212b40: 0xac22ccd4  sw          $v0, -0x332C($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294954196), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212b3c) {
            ctx->pc = 0x212BBCu;
            return;
        }
    }
    ctx->pc = 0x212B44u;
}
