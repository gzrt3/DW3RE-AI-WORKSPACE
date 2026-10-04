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

// Function: entry_0013726c
// Address: 0x13726c - 0x137284
void entry_0013726c_0x13726c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013726c_0x13726c");
#endif

    ctx->pc = 0x13726cu;

    // 0x13726c: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x13726cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x137270: 0x9423a3e4  lhu         $v1, -0x5C1C($at)
    ctx->pc = 0x137270u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x30A3E4u));
    // 0x137274: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x137274u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x137278: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x137278u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x13727c: 0xa423a3e4  sh          $v1, -0x5C1C($at)
    ctx->pc = 0x13727cu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x30A3E4u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x30A3E4u, _value); } while (0);
    // 0x137280: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x137280u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->pc = 0x137284u;
}
