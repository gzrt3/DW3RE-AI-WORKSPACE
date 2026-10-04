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

// Function: entry_002156e8
// Address: 0x2156e8 - 0x215740
void entry_002156e8_0x2156e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002156e8_0x2156e8");
#endif

    ctx->pc = 0x2156e8u;

    // 0x2156e8: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x2156e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x2156ec: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2156ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2156f0: 0xac277920  sw          $a3, 0x7920($at)
    ctx->pc = 0x2156f0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x587920u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x587920u, _value); } while (0);
    // 0x2156f4: 0x240600df  addiu       $a2, $zero, 0xDF
    ctx->pc = 0x2156f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 223));
    // 0x2156f8: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x2156f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x2156fc: 0xaf849214  sw          $a0, -0x6DEC($gp)
    ctx->pc = 0x2156fcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939156), GPR_U32(ctx, 4));
    // 0x215700: 0xac277928  sw          $a3, 0x7928($at)
    ctx->pc = 0x215700u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x587928u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x587928u, _value); } while (0);
    // 0x215704: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x215704u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x215708: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x215708u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x21570c: 0xaf859210  sw          $a1, -0x6DF0($gp)
    ctx->pc = 0x21570cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939152), GPR_U32(ctx, 5));
    // 0x215710: 0xac24791c  sw          $a0, 0x791C($at)
    ctx->pc = 0x215710u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x58791Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x58791Cu, _value); } while (0);
    // 0x215714: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x215714u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x215718: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x215718u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x21571c: 0xac267924  sw          $a2, 0x7924($at)
    ctx->pc = 0x21571cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x587924u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x587924u, _value); } while (0);
    // 0x215720: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x215720u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x215724: 0xac26792c  sw          $a2, 0x792C($at)
    ctx->pc = 0x215724u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x58792Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x58792Cu, _value); } while (0);
    // 0x215728: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x215728u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x21572c: 0xac257910  sw          $a1, 0x7910($at)
    ctx->pc = 0x21572cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x587910u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x587910u, _value); } while (0);
    // 0x215730: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x215730u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x215734: 0xac257914  sw          $a1, 0x7914($at)
    ctx->pc = 0x215734u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x587914u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x587914u, _value); } while (0);
    // 0x215738: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x215738u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x21573c: 0xac257918  sw          $a1, 0x7918($at)
    ctx->pc = 0x21573cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x587918u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x587918u, _value); } while (0);
    ctx->pc = 0x215740u;
}
