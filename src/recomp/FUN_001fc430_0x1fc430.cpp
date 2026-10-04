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

// Function: FUN_001fc430
// Address: 0x1fc430 - 0x1fc4b8
void FUN_001fc430_0x1fc430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001fc430_0x1fc430");
#endif

    ctx->pc = 0x1fc430u;

    // 0x1fc430: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x1fc430u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x1fc434: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x1fc434u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
    // 0x1fc438: 0xac20a6b4  sw          $zero, -0x594C($at)
    ctx->pc = 0x1fc438u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x53A6B4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A6B4u, _value); } while (0);
    // 0x1fc43c: 0x34630404  ori         $v1, $v1, 0x404
    ctx->pc = 0x1fc43cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1028);
    // 0x1fc440: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x1fc440u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x1fc444: 0xac20a6b8  sw          $zero, -0x5948($at)
    ctx->pc = 0x1fc444u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x53A6B8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A6B8u, _value); } while (0);
    // 0x1fc448: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x1fc448u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x1fc44c: 0xac20a74c  sw          $zero, -0x58B4($at)
    ctx->pc = 0x1fc44cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x53A74Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A74Cu, _value); } while (0);
    // 0x1fc450: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x1fc450u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x1fc454: 0xac23a6b0  sw          $v1, -0x5950($at)
    ctx->pc = 0x1fc454u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x53A6B0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A6B0u, _value); } while (0);
    // 0x1fc458: 0x3c036c09  lui         $v1, 0x6C09
    ctx->pc = 0x1fc458u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)27657 << 16));
    // 0x1fc45c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x1fc45cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x1fc460: 0xac23a6bc  sw          $v1, -0x5944($at)
    ctx->pc = 0x1fc460u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x53A6BCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A6BCu, _value); } while (0);
    // 0x1fc464: 0x24030441  addiu       $v1, $zero, 0x441
    ctx->pc = 0x1fc464u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1089));
    // 0x1fc468: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x1fc468u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x1fc46c: 0xac23a748  sw          $v1, -0x58B8($at)
    ctx->pc = 0x1fc46cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x53A748u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A748u, _value); } while (0);
    // 0x1fc470: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x1fc470u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x1fc474: 0x3c0331a0  lui         $v1, 0x31A0
    ctx->pc = 0x1fc474u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12704 << 16));
    // 0x1fc478: 0xac20a754  sw          $zero, -0x58AC($at)
    ctx->pc = 0x1fc478u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x53A754u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A754u, _value); } while (0);
    // 0x1fc47c: 0x3463c000  ori         $v1, $v1, 0xC000
    ctx->pc = 0x1fc47cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)49152);
    // 0x1fc480: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x1fc480u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x1fc484: 0xac23a744  sw          $v1, -0x58BC($at)
    ctx->pc = 0x1fc484u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x53A744u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A744u, _value); } while (0);
    // 0x1fc488: 0x34038052  ori         $v1, $zero, 0x8052
    ctx->pc = 0x1fc488u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32850);
    // 0x1fc48c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x1fc48cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x1fc490: 0xac23a740  sw          $v1, -0x58C0($at)
    ctx->pc = 0x1fc490u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x53A740u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A740u, _value); } while (0);
    // 0x1fc494: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x1fc494u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x1fc498: 0x3c030300  lui         $v1, 0x300
    ctx->pc = 0x1fc498u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)768 << 16));
    // 0x1fc49c: 0xac20a75c  sw          $zero, -0x58A4($at)
    ctx->pc = 0x1fc49cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x53A75Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A75Cu, _value); } while (0);
    // 0x1fc4a0: 0x34630009  ori         $v1, $v1, 0x9
    ctx->pc = 0x1fc4a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)9);
    // 0x1fc4a4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x1fc4a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x1fc4a8: 0xac23a750  sw          $v1, -0x58B0($at)
    ctx->pc = 0x1fc4a8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x53A750u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A750u, _value); } while (0);
    // 0x1fc4ac: 0x3c030200  lui         $v1, 0x200
    ctx->pc = 0x1fc4acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)512 << 16));
    // 0x1fc4b0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x1fc4b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x1fc4b4: 0x346301f7  ori         $v1, $v1, 0x1F7
    ctx->pc = 0x1fc4b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)503);
    ctx->pc = 0x1fc4b8u;
}
