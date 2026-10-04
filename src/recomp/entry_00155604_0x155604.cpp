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

// Function: entry_00155604
// Address: 0x155604 - 0x1556d0
void entry_00155604_0x155604(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00155604_0x155604");
#endif

    ctx->pc = 0x155604u;

    // 0x155604: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x155604u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x155608: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x155608u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x15560c: 0xac20ba18  sw          $zero, -0x45E8($at)
    ctx->pc = 0x15560cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x32BA18u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x32BA18u, _value); } while (0);
    // 0x155610: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x155610u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x155614: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x155614u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x155618: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x155618u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x15561c: 0xac23ba10  sw          $v1, -0x45F0($at)
    ctx->pc = 0x15561cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x32BA10u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x32BA10u, _value); } while (0);
    // 0x155620: 0x2484b970  addiu       $a0, $a0, -0x4690
    ctx->pc = 0x155620u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949232));
    // 0x155624: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x155624u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x155628: 0xac22ba14  sw          $v0, -0x45EC($at)
    ctx->pc = 0x155628u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x32BA14u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x32BA14u, _value); } while (0);
    // 0x15562c: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x15562cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x155630: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x155630u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155634: 0xac20ba1c  sw          $zero, -0x45E4($at)
    ctx->pc = 0x155634u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x32BA1Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x32BA1Cu, _value); } while (0);
    // 0x155638: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x155638u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x15563c: 0xac23b9cc  sw          $v1, -0x4634($at)
    ctx->pc = 0x15563cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x32B9CCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x32B9CCu, _value); } while (0);
    // 0x155640: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x155640u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x155644: 0xac23b9ec  sw          $v1, -0x4614($at)
    ctx->pc = 0x155644u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x32B9ECu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x32B9ECu, _value); } while (0);
    // 0x155648: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x155648u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x15564c: 0xac20b9dc  sw          $zero, -0x4624($at)
    ctx->pc = 0x15564cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x32B9DCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x32B9DCu, _value); } while (0);
    // 0x155650: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x155650u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x155654: 0xac20b9fc  sw          $zero, -0x4604($at)
    ctx->pc = 0x155654u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x32B9FCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x32B9FCu, _value); } while (0);
    // 0x155658: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x155658u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
    // 0x15565c: 0xc4202fa0  lwc1        $f0, 0x2FA0($at)
    ctx->pc = 0x15565cu;
    { uint32_t bits = FAST_READ32(0x282FA0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x155660: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x155660u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
    // 0x155664: 0xc4212fa4  lwc1        $f1, 0x2FA4($at)
    ctx->pc = 0x155664u;
    { uint32_t bits = FAST_READ32(0x282FA4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x155668: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x155668u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
    // 0x15566c: 0xc4222fa8  lwc1        $f2, 0x2FA8($at)
    ctx->pc = 0x15566cu;
    { uint32_t bits = FAST_READ32(0x282FA8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x155670: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x155670u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x155674: 0xe420b9c0  swc1        $f0, -0x4640($at)
    ctx->pc = 0x155674u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x32B9C0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x32B9C0u, _value); } while (0); }
    // 0x155678: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x155678u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x15567c: 0xe421b9c4  swc1        $f1, -0x463C($at)
    ctx->pc = 0x15567cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x32B9C4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x32B9C4u, _value); } while (0); }
    // 0x155680: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x155680u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x155684: 0xe422b9c8  swc1        $f2, -0x4638($at)
    ctx->pc = 0x155684u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x32B9C8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x32B9C8u, _value); } while (0); }
    // 0x155688: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x155688u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x15568c: 0xe420b9d0  swc1        $f0, -0x4630($at)
    ctx->pc = 0x15568cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x32B9D0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x32B9D0u, _value); } while (0); }
    // 0x155690: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x155690u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x155694: 0xe421b9d4  swc1        $f1, -0x462C($at)
    ctx->pc = 0x155694u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x32B9D4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x32B9D4u, _value); } while (0); }
    // 0x155698: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x155698u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x15569c: 0xe422b9d8  swc1        $f2, -0x4628($at)
    ctx->pc = 0x15569cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x32B9D8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x32B9D8u, _value); } while (0); }
    // 0x1556a0: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1556a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x1556a4: 0xe420b9e0  swc1        $f0, -0x4620($at)
    ctx->pc = 0x1556a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x32B9E0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x32B9E0u, _value); } while (0); }
    // 0x1556a8: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1556a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x1556ac: 0xe420b9f0  swc1        $f0, -0x4610($at)
    ctx->pc = 0x1556acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x32B9F0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x32B9F0u, _value); } while (0); }
    // 0x1556b0: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1556b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x1556b4: 0xe421b9e4  swc1        $f1, -0x461C($at)
    ctx->pc = 0x1556b4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x32B9E4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x32B9E4u, _value); } while (0); }
    // 0x1556b8: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1556b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x1556bc: 0xe421b9f4  swc1        $f1, -0x460C($at)
    ctx->pc = 0x1556bcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x32B9F4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x32B9F4u, _value); } while (0); }
    // 0x1556c0: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1556c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x1556c4: 0xe422b9e8  swc1        $f2, -0x4618($at)
    ctx->pc = 0x1556c4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x32B9E8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x32B9E8u, _value); } while (0); }
    // 0x1556c8: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1556c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x1556cc: 0xe422b9f8  swc1        $f2, -0x4608($at)
    ctx->pc = 0x1556ccu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x32B9F8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x32B9F8u, _value); } while (0); }
    ctx->pc = 0x1556d0u;
}
