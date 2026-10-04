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

// Function: entry_0016cbdc
// Address: 0x16cbdc - 0x16cc10
void entry_0016cbdc_0x16cbdc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016cbdc_0x16cbdc");
#endif

    ctx->pc = 0x16cbdcu;

    // 0x16cbdc: 0x8f848710  lw          $a0, -0x78F0($gp)
    ctx->pc = 0x16cbdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
    // 0x16cbe0: 0x3c03400f  lui         $v1, 0x400F
    ctx->pc = 0x16cbe0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16399 << 16));
    // 0x16cbe4: 0x102e00  sll         $a1, $s0, 24
    ctx->pc = 0x16cbe4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 24));
    // 0x16cbe8: 0x34633f80  ori         $v1, $v1, 0x3F80
    ctx->pc = 0x16cbe8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16256);
    // 0x16cbec: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x16cbecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x16cbf0: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x16cbf0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x16cbf4: 0x24633ef0  addiu       $v1, $v1, 0x3EF0
    ctx->pc = 0x16cbf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16112));
    // 0x16cbf8: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x16cbf8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x16cbfc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x16cbfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x16cc00: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x16cc00u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x16cc04: 0x8f838710  lw          $v1, -0x78F0($gp)
    ctx->pc = 0x16cc04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
    // 0x16cc08: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x16cc08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x16cc0c: 0xaf838710  sw          $v1, -0x78F0($gp)
    ctx->pc = 0x16cc0cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936336), GPR_U32(ctx, 3));
    ctx->pc = 0x16cc10u;
}
