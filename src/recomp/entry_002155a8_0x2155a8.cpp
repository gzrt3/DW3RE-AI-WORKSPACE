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

// Function: entry_002155a8
// Address: 0x2155a8 - 0x21560c
void entry_002155a8_0x2155a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002155a8_0x2155a8");
#endif

    ctx->pc = 0x2155a8u;

    // 0x2155a8: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x2155a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x2155ac: 0x43080  sll         $a2, $a0, 2
    ctx->pc = 0x2155acu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2155b0: 0xac2078f0  sw          $zero, 0x78F0($at)
    ctx->pc = 0x2155b0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 30960), GPR_U32(ctx, 0));
    // 0x2155b4: 0x24040120  addiu       $a0, $zero, 0x120
    ctx->pc = 0x2155b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 288));
    // 0x2155b8: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x2155b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x2155bc: 0x862823  subu        $a1, $a0, $a2
    ctx->pc = 0x2155bcu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x2155c0: 0xac2078f4  sw          $zero, 0x78F4($at)
    ctx->pc = 0x2155c0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 30964), GPR_U32(ctx, 0));
    // 0x2155c4: 0x24c400a0  addiu       $a0, $a2, 0xA0
    ctx->pc = 0x2155c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 160));
    // 0x2155c8: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x2155c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x2155cc: 0xaf8491fc  sw          $a0, -0x6E04($gp)
    ctx->pc = 0x2155ccu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939132), GPR_U32(ctx, 4));
    // 0x2155d0: 0xac2578fc  sw          $a1, 0x78FC($at)
    ctx->pc = 0x2155d0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x5878FCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5878FCu, _value); } while (0);
    // 0x2155d4: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x2155d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2155d8: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x2155d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x2155dc: 0x24050280  addiu       $a1, $zero, 0x280
    ctx->pc = 0x2155dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
    // 0x2155e0: 0xac2478ec  sw          $a0, 0x78EC($at)
    ctx->pc = 0x2155e0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x5878ECu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5878ECu, _value); } while (0);
    // 0x2155e4: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x2155e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x2155e8: 0xaf8591f8  sw          $a1, -0x6E08($gp)
    ctx->pc = 0x2155e8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939128), GPR_U32(ctx, 5));
    // 0x2155ec: 0xac2078f8  sw          $zero, 0x78F8($at)
    ctx->pc = 0x2155ecu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5878F8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5878F8u, _value); } while (0);
    // 0x2155f0: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x2155f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2155f4: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x2155f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x2155f8: 0xac2578e0  sw          $a1, 0x78E0($at)
    ctx->pc = 0x2155f8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x5878E0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5878E0u, _value); } while (0);
    // 0x2155fc: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x2155fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x215600: 0xac2578e4  sw          $a1, 0x78E4($at)
    ctx->pc = 0x215600u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x5878E4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5878E4u, _value); } while (0);
    // 0x215604: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x215604u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x215608: 0xac2578e8  sw          $a1, 0x78E8($at)
    ctx->pc = 0x215608u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x5878E8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5878E8u, _value); } while (0);
    ctx->pc = 0x21560cu;
}
