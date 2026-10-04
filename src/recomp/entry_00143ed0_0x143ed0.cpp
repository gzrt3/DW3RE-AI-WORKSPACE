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

// Function: entry_00143ed0
// Address: 0x143ed0 - 0x143f00
void entry_00143ed0_0x143ed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00143ed0_0x143ed0");
#endif

    ctx->pc = 0x143ed0u;

    // 0x143ed0: 0x8487021c  lh          $a3, 0x21C($a0)
    ctx->pc = 0x143ed0u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 540)));
    // 0x143ed4: 0x3c036666  lui         $v1, 0x6666
    ctx->pc = 0x143ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)26214 << 16));
    // 0x143ed8: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x143ed8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x143edc: 0x34636667  ori         $v1, $v1, 0x6667
    ctx->pc = 0x143edcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)26215);
    // 0x143ee0: 0xa487021e  sh          $a3, 0x21E($a0)
    ctx->pc = 0x143ee0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 542), (uint16_t)GPR_U32(ctx, 7));
    // 0x143ee4: 0x8488021c  lh          $t0, 0x21C($a0)
    ctx->pc = 0x143ee4u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 540)));
    // 0x143ee8: 0x8489028c  lh          $t1, 0x28C($a0)
    ctx->pc = 0x143ee8u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 652)));
    // 0x143eec: 0x83880  sll         $a3, $t0, 2
    ctx->pc = 0x143eecu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x143ef0: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x143ef0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x143ef4: 0x73840  sll         $a3, $a3, 1
    ctx->pc = 0x143ef4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x143ef8: 0x1273821  addu        $a3, $t1, $a3
    ctx->pc = 0x143ef8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 7)));
    // 0x143efc: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x143efcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    ctx->pc = 0x143f00u;
}
