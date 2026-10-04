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

// Function: FUN_001737a0
// Address: 0x1737a0 - 0x1737f8
void FUN_001737a0_0x1737a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001737a0_0x1737a0");
#endif

    ctx->pc = 0x1737a0u;

    // 0x1737a0: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x1737a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
    // 0x1737a4: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x1737a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
    // 0x1737a8: 0xac2045d4  sw          $zero, 0x45D4($at)
    ctx->pc = 0x1737a8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3645D4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3645D4u, _value); } while (0);
    // 0x1737ac: 0x34630404  ori         $v1, $v1, 0x404
    ctx->pc = 0x1737acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1028);
    // 0x1737b0: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x1737b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
    // 0x1737b4: 0xac2045d8  sw          $zero, 0x45D8($at)
    ctx->pc = 0x1737b4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3645D8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3645D8u, _value); } while (0);
    // 0x1737b8: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x1737b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
    // 0x1737bc: 0xac204664  sw          $zero, 0x4664($at)
    ctx->pc = 0x1737bcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x364664u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x364664u, _value); } while (0);
    // 0x1737c0: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x1737c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
    // 0x1737c4: 0xac2345d0  sw          $v1, 0x45D0($at)
    ctx->pc = 0x1737c4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x3645D0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3645D0u, _value); } while (0);
    // 0x1737c8: 0x3c036c08  lui         $v1, 0x6C08
    ctx->pc = 0x1737c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)27656 << 16));
    // 0x1737cc: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x1737ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
    // 0x1737d0: 0xac2345dc  sw          $v1, 0x45DC($at)
    ctx->pc = 0x1737d0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x3645DCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3645DCu, _value); } while (0);
    // 0x1737d4: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x1737d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
    // 0x1737d8: 0x3c030300  lui         $v1, 0x300
    ctx->pc = 0x1737d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)768 << 16));
    // 0x1737dc: 0xac20466c  sw          $zero, 0x466C($at)
    ctx->pc = 0x1737dcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x36466Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x36466Cu, _value); } while (0);
    // 0x1737e0: 0x3463000e  ori         $v1, $v1, 0xE
    ctx->pc = 0x1737e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)14);
    // 0x1737e4: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x1737e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
    // 0x1737e8: 0xac234660  sw          $v1, 0x4660($at)
    ctx->pc = 0x1737e8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x364660u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x364660u, _value); } while (0);
    // 0x1737ec: 0x3c030200  lui         $v1, 0x200
    ctx->pc = 0x1737ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)512 << 16));
    // 0x1737f0: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x1737f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
    // 0x1737f4: 0x346301f7  ori         $v1, $v1, 0x1F7
    ctx->pc = 0x1737f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)503);
    ctx->pc = 0x1737f8u;
}
