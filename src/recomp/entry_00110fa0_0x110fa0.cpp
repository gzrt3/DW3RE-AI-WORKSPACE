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

// Function: entry_00110fa0
// Address: 0x110fa0 - 0x110fb8
void entry_00110fa0_0x110fa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00110fa0_0x110fa0");
#endif

    ctx->pc = 0x110fa0u;

    // 0x110fa0: 0x14830006  bne         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x110FA0u;
    {
        const bool branch_taken_0x110fa0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x110FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110FA0u;
        // 0x110fa4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110fa0) {
            ctx->pc = 0x110FBCu;
            return;
        }
    }
    ctx->pc = 0x110FA8u;
    // 0x110fa8: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x110fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x110fac: 0x3c01002f  lui         $at, 0x2F
    ctx->pc = 0x110facu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)47 << 16));
    // 0x110fb0: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x110fb0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x110fb4: 0xa0232498  sb          $v1, 0x2498($at)
    ctx->pc = 0x110fb4u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x2F2498u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x2F2498u, _value); } while (0);
    ctx->pc = 0x110fb8u;
}
