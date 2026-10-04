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

// Function: FUN_0015a5a0
// Address: 0x15a5a0 - 0x15a624
void FUN_0015a5a0_0x15a5a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0015a5a0_0x15a5a0");
#endif

    ctx->pc = 0x15a5a0u;

    // 0x15a5a0: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x15a5a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x15a5a4: 0x3c060033  lui         $a2, 0x33
    ctx->pc = 0x15a5a4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)51 << 16));
    // 0x15a5a8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x15a5a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x15a5ac: 0x3c07002f  lui         $a3, 0x2F
    ctx->pc = 0x15a5acu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)47 << 16));
    // 0x15a5b0: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x15a5b0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x15a5b4: 0x24c61300  addiu       $a2, $a2, 0x1300
    ctx->pc = 0x15a5b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4864));
    // 0x15a5b8: 0xc45021  addu        $t2, $a2, $a0
    ctx->pc = 0x15a5b8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x15a5bc: 0x24e72570  addiu       $a3, $a3, 0x2570
    ctx->pc = 0x15a5bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 9584));
    // 0x15a5c0: 0x8d483674  lw          $t0, 0x3674($t2)
    ctx->pc = 0x15a5c0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 13940)));
    // 0x15a5c4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x15a5c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x15a5c8: 0x8d46366c  lw          $a2, 0x366C($t2)
    ctx->pc = 0x15a5c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 13932)));
    // 0x15a5cc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x15a5ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15a5d0: 0x82200  sll         $a0, $t0, 8
    ctx->pc = 0x15a5d0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x15a5d4: 0x884823  subu        $t1, $a0, $t0
    ctx->pc = 0x15a5d4u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x15a5d8: 0xa145368a  sb          $a1, 0x368A($t2)
    ctx->pc = 0x15a5d8u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 13962), (uint8_t)GPR_U32(ctx, 5));
    // 0x15a5dc: 0x940c0  sll         $t0, $t1, 3
    ctx->pc = 0x15a5dcu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
    // 0x15a5e0: 0x620c0  sll         $a0, $a2, 3
    ctx->pc = 0x15a5e0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x15a5e4: 0x1284021  addu        $t0, $t1, $t0
    ctx->pc = 0x15a5e4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
    // 0x15a5e8: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x15a5e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x15a5ec: 0x840c0  sll         $t0, $t0, 3
    ctx->pc = 0x15a5ecu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x15a5f0: 0x430c0  sll         $a2, $a0, 3
    ctx->pc = 0x15a5f0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x15a5f4: 0xe82021  addu        $a0, $a3, $t0
    ctx->pc = 0x15a5f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x15a5f8: 0x24840000  addiu       $a0, $a0, 0x0
    ctx->pc = 0x15a5f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 0));
    // 0x15a5fc: 0x863021  addu        $a2, $a0, $a2
    ctx->pc = 0x15a5fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x15a600: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x15a600u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x15a604: 0xa0850010  sb          $a1, 0x10($a0)
    ctx->pc = 0x15a604u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 16), (uint8_t)GPR_U32(ctx, 5));
    // 0x15a608: 0xa0c5002a  sb          $a1, 0x2A($a2)
    ctx->pc = 0x15a608u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 42), (uint8_t)GPR_U32(ctx, 5));
    // 0x15a60c: 0x8144368a  lb          $a0, 0x368A($t2)
    ctx->pc = 0x15a60cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 10), 13962)));
    // 0x15a610: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x15a610u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x15a614: 0xa1443696  sb          $a0, 0x3696($t2)
    ctx->pc = 0x15a614u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 13974), (uint8_t)GPR_U32(ctx, 4));
    // 0x15a618: 0x91443696  lbu         $a0, 0x3696($t2)
    ctx->pc = 0x15a618u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 13974)));
    // 0x15a61c: 0xa1443697  sb          $a0, 0x3697($t2)
    ctx->pc = 0x15a61cu;
    WRITE8(ADD32(GPR_U32(ctx, 10), 13975), (uint8_t)GPR_U32(ctx, 4));
    // 0x15a620: 0x91443696  lbu         $a0, 0x3696($t2)
    ctx->pc = 0x15a620u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 13974)));
    ctx->pc = 0x15a624u;
}
