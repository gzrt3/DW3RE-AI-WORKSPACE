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

// Function: entry_0016d0d8
// Address: 0x16d0d8 - 0x16d12c
void entry_0016d0d8_0x16d0d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016d0d8_0x16d0d8");
#endif

    ctx->pc = 0x16d0d8u;

    // 0x16d0d8: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x16d0d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x16d0dc: 0x321000ff  andi        $s0, $s0, 0xFF
    ctx->pc = 0x16d0dcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x16d0e0: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x16d0e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x16d0e4: 0x1021c0  sll         $a0, $s0, 7
    ctx->pc = 0x16d0e4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 7));
    // 0x16d0e8: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x16d0e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x16d0ec: 0xa42025  or          $a0, $a1, $a0
    ctx->pc = 0x16d0ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x16d0f0: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x16d0f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x16d0f4: 0x832825  or          $a1, $a0, $v1
    ctx->pc = 0x16d0f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x16d0f8: 0x8f848710  lw          $a0, -0x78F0($gp)
    ctx->pc = 0x16d0f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
    // 0x16d0fc: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x16d0fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x16d100: 0x24633ef0  addiu       $v1, $v1, 0x3EF0
    ctx->pc = 0x16d100u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16112));
    // 0x16d104: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x16d104u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x16d108: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x16d108u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x16d10c: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x16d10cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x16d110: 0x8f838710  lw          $v1, -0x78F0($gp)
    ctx->pc = 0x16d110u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
    // 0x16d114: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x16d114u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x16d118: 0xaf838710  sw          $v1, -0x78F0($gp)
    ctx->pc = 0x16d118u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936336), GPR_U32(ctx, 3));
    // 0x16d11c: 0x8f838710  lw          $v1, -0x78F0($gp)
    ctx->pc = 0x16d11cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
    // 0x16d120: 0x2c63007f  sltiu       $v1, $v1, 0x7F
    ctx->pc = 0x16d120u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)127) ? 1 : 0);
    // 0x16d124: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x16D124u;
    {
        const bool branch_taken_0x16d124 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x16d124) {
            ctx->pc = 0x16D150u;
            return;
        }
    }
    ctx->pc = 0x16D12Cu;
}
