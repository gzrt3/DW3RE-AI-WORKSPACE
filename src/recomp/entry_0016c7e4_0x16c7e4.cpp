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

// Function: entry_0016c7e4
// Address: 0x16c7e4 - 0x16c824
void entry_0016c7e4_0x16c7e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016c7e4_0x16c7e4");
#endif

    ctx->pc = 0x16c7e4u;

    // 0x16c7e4: 0x0  nop
    ctx->pc = 0x16c7e4u;
    // NOP
    // 0x16c7e8: 0x3c032002  lui         $v1, 0x2002
    ctx->pc = 0x16c7e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8194 << 16));
    // 0x16c7ec: 0x2233025  or          $a2, $s1, $v1
    ctx->pc = 0x16c7ecu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 17) | GPR_U64(ctx, 3));
    // 0x16c7f0: 0x8f858710  lw          $a1, -0x78F0($gp)
    ctx->pc = 0x16c7f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
    // 0x16c7f4: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x16c7f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
    // 0x16c7f8: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x16c7f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x16c7fc: 0x2238821  addu        $s1, $s1, $v1
    ctx->pc = 0x16c7fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x16c800: 0x24843ef0  addiu       $a0, $a0, 0x3EF0
    ctx->pc = 0x16c800u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16112));
    // 0x16c804: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x16c804u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x16c808: 0x307000ff  andi        $s0, $v1, 0xFF
    ctx->pc = 0x16c808u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x16c80c: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x16c80cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x16c810: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x16c810u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x16c814: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x16c814u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
    // 0x16c818: 0x8f838710  lw          $v1, -0x78F0($gp)
    ctx->pc = 0x16c818u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
    // 0x16c81c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x16c81cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x16c820: 0xaf838710  sw          $v1, -0x78F0($gp)
    ctx->pc = 0x16c820u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936336), GPR_U32(ctx, 3));
    ctx->pc = 0x16c824u;
}
