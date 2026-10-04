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

// Function: entry_00130174
// Address: 0x130174 - 0x130190
void entry_00130174_0x130174(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00130174_0x130174");
#endif

    ctx->pc = 0x130174u;

    // 0x130174: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x130174u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x130178: 0x2403fbff  addiu       $v1, $zero, -0x401
    ctx->pc = 0x130178u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966271));
    // 0x13017c: 0x8c24a3e0  lw          $a0, -0x5C20($at)
    ctx->pc = 0x13017cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x30A3E0u));
    // 0x130180: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x130180u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x130184: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x130184u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x130188: 0xac23a3e0  sw          $v1, -0x5C20($at)
    ctx->pc = 0x130188u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x30A3E0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x30A3E0u, _value); } while (0);
    // 0x13018c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13018cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x130190u;
}
