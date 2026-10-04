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

// Function: entry_002124f8
// Address: 0x2124f8 - 0x212564
void entry_002124f8_0x2124f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002124f8_0x2124f8");
#endif

    ctx->pc = 0x2124f8u;

    // 0x2124f8: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x2124f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x2124fc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2124fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212500: 0xa0204af0  sb          $zero, 0x4AF0($at)
    ctx->pc = 0x212500u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x334AF0u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x334AF0u, _value); } while (0);
    // 0x212504: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x212504u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212508: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x212508u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x21250c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x21250cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212510: 0xa0207561  sb          $zero, 0x7561($at)
    ctx->pc = 0x212510u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x587561u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x587561u, _value); } while (0);
    // 0x212514: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x212514u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x212518: 0xac207564  sw          $zero, 0x7564($at)
    ctx->pc = 0x212518u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x587564u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x587564u, _value); } while (0);
    // 0x21251c: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x21251cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x212520: 0x80254970  lb          $a1, 0x4970($at)
    ctx->pc = 0x212520u;
    SET_GPR_S32(ctx, 5, (int8_t)FAST_READ8(0x334970u));
    // 0x212524: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x212524u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x212528: 0x90244999  lbu         $a0, 0x4999($at)
    ctx->pc = 0x212528u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)FAST_READ8(0x334999u));
    // 0x21252c: 0x3c01002a  lui         $at, 0x2A
    ctx->pc = 0x21252cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)42 << 16));
    // 0x212530: 0x8023caec  lb          $v1, -0x3514($at)
    ctx->pc = 0x212530u;
    SET_GPR_S32(ctx, 3, (int8_t)FAST_READ8(0x29CAECu));
    // 0x212534: 0x3c01002a  lui         $at, 0x2A
    ctx->pc = 0x212534u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)42 << 16));
    // 0x212538: 0x8022caf0  lb          $v0, -0x3510($at)
    ctx->pc = 0x212538u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x29CAF0u));
    // 0x21253c: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x21253cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x212540: 0xa0257560  sb          $a1, 0x7560($at)
    ctx->pc = 0x212540u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x587560u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x587560u, _value); } while (0);
    // 0x212544: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x212544u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x212548: 0xa0247701  sb          $a0, 0x7701($at)
    ctx->pc = 0x212548u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x587701u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x587701u, _value); } while (0);
    // 0x21254c: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x21254cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x212550: 0xa0237702  sb          $v1, 0x7702($at)
    ctx->pc = 0x212550u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x587702u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x587702u, _value); } while (0);
    // 0x212554: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x212554u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x212558: 0xa0227703  sb          $v0, 0x7703($at)
    ctx->pc = 0x212558u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x587703u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x587703u, _value); } while (0);
    // 0x21255c: 0x3c030058  lui         $v1, 0x58
    ctx->pc = 0x21255cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)88 << 16));
    // 0x212560: 0x24637560  addiu       $v1, $v1, 0x7560
    ctx->pc = 0x212560u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30048));
    ctx->pc = 0x212564u;
}
