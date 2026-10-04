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

// Function: entry_00158bbc
// Address: 0x158bbc - 0x158bd8
void entry_00158bbc_0x158bbc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00158bbc_0x158bbc");
#endif

    ctx->pc = 0x158bbcu;

    // 0x158bbc: 0x14a30006  bne         $a1, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x158BBCu;
    {
        const bool branch_taken_0x158bbc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x158bbc) {
            ctx->pc = 0x158BD8u;
            return;
        }
    }
    ctx->pc = 0x158BC4u;
    // 0x158bc4: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x158bc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x158bc8: 0x90234af7  lbu         $v1, 0x4AF7($at)
    ctx->pc = 0x158bc8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x334AF7u));
    // 0x158bcc: 0x34630010  ori         $v1, $v1, 0x10
    ctx->pc = 0x158bccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
    // 0x158bd0: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x158bd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x158bd4: 0xa0234af7  sb          $v1, 0x4AF7($at)
    ctx->pc = 0x158bd4u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x334AF7u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x334AF7u, _value); } while (0);
    ctx->pc = 0x158bd8u;
}
