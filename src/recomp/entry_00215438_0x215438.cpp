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

// Function: entry_00215438
// Address: 0x215438 - 0x215468
void entry_00215438_0x215438(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00215438_0x215438");
#endif

    ctx->pc = 0x215438u;

    // 0x215438: 0xaf8491e8  sw          $a0, -0x6E18($gp)
    ctx->pc = 0x215438u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939112), GPR_U32(ctx, 4));
    // 0x21543c: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x21543cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x215440: 0x24040060  addiu       $a0, $zero, 0x60
    ctx->pc = 0x215440u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x215444: 0xac2878dc  sw          $t0, 0x78DC($at)
    ctx->pc = 0x215444u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 8)); ps2TraceGuestWrite(rdram, 0x5878DCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5878DCu, _value); } while (0);
    // 0x215448: 0xaf8491ec  sw          $a0, -0x6E14($gp)
    ctx->pc = 0x215448u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939116), GPR_U32(ctx, 4));
    // 0x21544c: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x21544cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x215450: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x215450u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x215454: 0xac2478d0  sw          $a0, 0x78D0($at)
    ctx->pc = 0x215454u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x5878D0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5878D0u, _value); } while (0);
    // 0x215458: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x215458u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x21545c: 0xac2478d4  sw          $a0, 0x78D4($at)
    ctx->pc = 0x21545cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x5878D4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5878D4u, _value); } while (0);
    // 0x215460: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x215460u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x215464: 0xac2478d8  sw          $a0, 0x78D8($at)
    ctx->pc = 0x215464u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x5878D8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5878D8u, _value); } while (0);
    ctx->pc = 0x215468u;
}
