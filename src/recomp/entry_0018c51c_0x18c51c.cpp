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

// Function: entry_0018c51c
// Address: 0x18c51c - 0x18c548
void entry_0018c51c_0x18c51c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018c51c_0x18c51c");
#endif

    ctx->pc = 0x18c51cu;

    // 0x18c51c: 0x3c0443fa  lui         $a0, 0x43FA
    ctx->pc = 0x18c51cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17402 << 16));
    // 0x18c520: 0xae0300b0  sw          $v1, 0xB0($s0)
    ctx->pc = 0x18c520u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 3));
    // 0x18c524: 0x3c033d0e  lui         $v1, 0x3D0E
    ctx->pc = 0x18c524u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15630 << 16));
    // 0x18c528: 0xae0400b4  sw          $a0, 0xB4($s0)
    ctx->pc = 0x18c528u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 4));
    // 0x18c52c: 0x3463fa35  ori         $v1, $v1, 0xFA35
    ctx->pc = 0x18c52cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64053);
    // 0x18c530: 0xae0300b8  sw          $v1, 0xB8($s0)
    ctx->pc = 0x18c530u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 184), GPR_U32(ctx, 3));
    // 0x18c534: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x18c534u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18c538: 0x3c034226  lui         $v1, 0x4226
    ctx->pc = 0x18c538u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16934 << 16));
    // 0x18c53c: 0x346327f0  ori         $v1, $v1, 0x27F0
    ctx->pc = 0x18c53cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)10224);
    // 0x18c540: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x18c540u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x18c544: 0xae030098  sw          $v1, 0x98($s0)
    ctx->pc = 0x18c544u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 152), GPR_U32(ctx, 3));
    ctx->pc = 0x18c548u;
}
