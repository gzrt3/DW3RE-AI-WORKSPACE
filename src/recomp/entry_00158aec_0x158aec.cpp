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

// Function: entry_00158aec
// Address: 0x158aec - 0x158b04
void entry_00158aec_0x158aec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00158aec_0x158aec");
#endif

    ctx->pc = 0x158aecu;

    // 0x158aec: 0x14830005  bne         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x158AECu;
    {
        const bool branch_taken_0x158aec = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x158AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158AECu;
        // 0x158af0: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158aec) {
            ctx->pc = 0x158B04u;
            return;
        }
    }
    ctx->pc = 0x158AF4u;
    // 0x158af4: 0x90234af7  lbu         $v1, 0x4AF7($at)
    ctx->pc = 0x158af4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 19191)));
    // 0x158af8: 0x34630008  ori         $v1, $v1, 0x8
    ctx->pc = 0x158af8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
    // 0x158afc: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x158afcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x158b00: 0xa0234af7  sb          $v1, 0x4AF7($at)
    ctx->pc = 0x158b00u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x334AF7u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x334AF7u, _value); } while (0);
    ctx->pc = 0x158b04u;
}
