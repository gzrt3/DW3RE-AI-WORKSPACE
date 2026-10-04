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

// Function: entry_00158cfc
// Address: 0x158cfc - 0x158d20
void entry_00158cfc_0x158cfc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00158cfc_0x158cfc");
#endif

    ctx->pc = 0x158cfcu;

    // 0x158cfc: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x158cfcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x158d00: 0xa42349a2  sh          $v1, 0x49A2($at)
    ctx->pc = 0x158d00u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x3349A2u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x3349A2u, _value); } while (0);
    // 0x158d04: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x158d04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x158d08: 0xa4234a32  sh          $v1, 0x4A32($at)
    ctx->pc = 0x158d08u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x334A32u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x334A32u, _value); } while (0);
    // 0x158d0c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x158d0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x158d10: 0x3e00008  jr          $ra
    ctx->pc = 0x158D10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x158D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158D10u;
        // 0x158d14: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x158D10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x158D18u;
    // 0x158d18: 0x0  nop
    ctx->pc = 0x158d18u;
    // NOP
    // 0x158d1c: 0x0  nop
    ctx->pc = 0x158d1cu;
    // NOP
    ctx->pc = 0x158d20u;
}
