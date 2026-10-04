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

// Function: entry_0010fad4
// Address: 0x10fad4 - 0x10faf0
void entry_0010fad4_0x10fad4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010fad4_0x10fad4");
#endif

    ctx->pc = 0x10fad4u;

    // 0x10fad4: 0x0  nop
    ctx->pc = 0x10fad4u;
    // NOP
    // 0x10fad8: 0x14640005  bne         $v1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x10FAD8u;
    {
        const bool branch_taken_0x10fad8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x10FADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FAD8u;
        // 0x10fadc: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fad8) {
            ctx->pc = 0x10FAF0u;
            return;
        }
    }
    ctx->pc = 0x10FAE0u;
    // 0x10fae0: 0x84234ae0  lh          $v1, 0x4AE0($at)
    ctx->pc = 0x10fae0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 19168)));
    // 0x10fae4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x10fae4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x10fae8: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x10fae8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x10faec: 0xa4234ae0  sh          $v1, 0x4AE0($at)
    ctx->pc = 0x10faecu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x334AE0u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x334AE0u, _value); } while (0);
    ctx->pc = 0x10faf0u;
}
