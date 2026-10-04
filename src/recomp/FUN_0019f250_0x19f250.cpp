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

// Function: FUN_0019f250
// Address: 0x19f250 - 0x19f274
void FUN_0019f250_0x19f250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0019f250_0x19f250");
#endif

    ctx->pc = 0x19f250u;

    // 0x19f250: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x19f250u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x19f254: 0x53702  srl         $a2, $a1, 28
    ctx->pc = 0x19f254u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 5), 28));
    // 0x19f258: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x19f258u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x19f25c: 0x3c030028  lui         $v1, 0x28
    ctx->pc = 0x19f25cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40 << 16));
    // 0x19f260: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x19f260u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x19f264: 0x24635910  addiu       $v1, $v1, 0x5910
    ctx->pc = 0x19f264u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 22800));
    // 0x19f268: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x19f268u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x19f26c: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x19f26cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x19f270: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x19f270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    ctx->pc = 0x19f274u;
}
