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

// Function: entry_00188794
// Address: 0x188794 - 0x1887b4
void entry_00188794_0x188794(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00188794_0x188794");
#endif

    ctx->pc = 0x188794u;

    // 0x188794: 0x8e240194  lw          $a0, 0x194($s1)
    ctx->pc = 0x188794u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 404)));
    // 0x188798: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x188798u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x18879c: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x18879cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x1887a0: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1887a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1887a4: 0xae230194  sw          $v1, 0x194($s1)
    ctx->pc = 0x1887a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 404), GPR_U32(ctx, 3));
    // 0x1887a8: 0xa620019e  sh          $zero, 0x19E($s1)
    ctx->pc = 0x1887a8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 414), (uint16_t)GPR_U32(ctx, 0));
    // 0x1887ac: 0xa620019c  sh          $zero, 0x19C($s1)
    ctx->pc = 0x1887acu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 412), (uint16_t)GPR_U32(ctx, 0));
    // 0x1887b0: 0x86230224  lh          $v1, 0x224($s1)
    ctx->pc = 0x1887b0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 548)));
    ctx->pc = 0x1887b4u;
}
