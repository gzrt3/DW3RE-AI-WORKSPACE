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

// Function: entry_0016cb38
// Address: 0x16cb38 - 0x16cb78
void entry_0016cb38_0x16cb38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016cb38_0x16cb38");
#endif

    ctx->pc = 0x16cb38u;

    // 0x16cb38: 0x112e00  sll         $a1, $s1, 24
    ctx->pc = 0x16cb38u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 17), 24));
    // 0x16cb3c: 0x321c0  sll         $a0, $v1, 7
    ctx->pc = 0x16cb3cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
    // 0x16cb40: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x16cb40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x16cb44: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x16cb44u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x16cb48: 0x3c03000f  lui         $v1, 0xF
    ctx->pc = 0x16cb48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15 << 16));
    // 0x16cb4c: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x16cb4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x16cb50: 0x8f848710  lw          $a0, -0x78F0($gp)
    ctx->pc = 0x16cb50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
    // 0x16cb54: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x16cb54u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x16cb58: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x16cb58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x16cb5c: 0x24633ef0  addiu       $v1, $v1, 0x3EF0
    ctx->pc = 0x16cb5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16112));
    // 0x16cb60: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x16cb60u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x16cb64: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x16cb64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x16cb68: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x16cb68u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x16cb6c: 0x8f838710  lw          $v1, -0x78F0($gp)
    ctx->pc = 0x16cb6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
    // 0x16cb70: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x16cb70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x16cb74: 0xaf838710  sw          $v1, -0x78F0($gp)
    ctx->pc = 0x16cb74u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936336), GPR_U32(ctx, 3));
    ctx->pc = 0x16cb78u;
}
