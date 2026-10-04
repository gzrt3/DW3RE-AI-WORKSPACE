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

// Function: entry_0010e664
// Address: 0x10e664 - 0x10e690
void entry_0010e664_0x10e664(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010e664_0x10e664");
#endif

    ctx->pc = 0x10e664u;

    // 0x10e664: 0xa065024a  sb          $a1, 0x24A($v1)
    ctx->pc = 0x10e664u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 586), (uint8_t)GPR_U32(ctx, 5));
    // 0x10e668: 0x3c070025  lui         $a3, 0x25
    ctx->pc = 0x10e668u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)37 << 16));
    // 0x10e66c: 0x9549000a  lhu         $t1, 0xA($t2)
    ctx->pc = 0x10e66cu;
    SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 10)));
    // 0x10e670: 0x3c0551eb  lui         $a1, 0x51EB
    ctx->pc = 0x10e670u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)20971 << 16));
    // 0x10e674: 0x34a6851f  ori         $a2, $a1, 0x851F
    ctx->pc = 0x10e674u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)34079);
    // 0x10e678: 0x24e73b86  addiu       $a3, $a3, 0x3B86
    ctx->pc = 0x10e678u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 15238));
    // 0x10e67c: 0x9065024c  lbu         $a1, 0x24C($v1)
    ctx->pc = 0x10e67cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 588)));
    // 0x10e680: 0x94100  sll         $t0, $t1, 4
    ctx->pc = 0x10e680u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
    // 0x10e684: 0x1094023  subu        $t0, $t0, $t1
    ctx->pc = 0x10e684u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x10e688: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x10e688u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x10e68c: 0x90e70000  lbu         $a3, 0x0($a3)
    ctx->pc = 0x10e68cu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    ctx->pc = 0x10e690u;
}
