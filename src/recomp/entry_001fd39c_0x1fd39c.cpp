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

// Function: entry_001fd39c
// Address: 0x1fd39c - 0x1fd3f0
void entry_001fd39c_0x1fd39c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fd39c_0x1fd39c");
#endif

    ctx->pc = 0x1fd39cu;

    // 0x1fd39c: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x1fd39cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x1fd3a0: 0x8ca90000  lw          $t1, 0x0($a1)
    ctx->pc = 0x1fd3a0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1fd3a4: 0x3c041062  lui         $a0, 0x1062
    ctx->pc = 0x1fd3a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4194 << 16));
    // 0x1fd3a8: 0x34864dd3  ori         $a2, $a0, 0x4DD3
    ctx->pc = 0x1fd3a8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19923);
    // 0x1fd3ac: 0x2464000c  addiu       $a0, $v1, 0xC
    ctx->pc = 0x1fd3acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
    // 0x1fd3b0: 0x93900  sll         $a3, $t1, 4
    ctx->pc = 0x1fd3b0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
    // 0x1fd3b4: 0xe93821  addu        $a3, $a3, $t1
    ctx->pc = 0x1fd3b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x1fd3b8: 0x738c0  sll         $a3, $a3, 3
    ctx->pc = 0x1fd3b8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x1fd3bc: 0xc70018  mult        $zero, $a2, $a3
    ctx->pc = 0x1fd3bcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1fd3c0: 0x0  nop
    ctx->pc = 0x1fd3c0u;
    // NOP
    // 0x1fd3c4: 0x0  nop
    ctx->pc = 0x1fd3c4u;
    // NOP
    // 0x1fd3c8: 0x3010  mfhi        $a2
    ctx->pc = 0x1fd3c8u;
    SET_GPR_U64(ctx, 6, ctx->hi);
    // 0x1fd3cc: 0x73fc2  srl         $a3, $a3, 31
    ctx->pc = 0x1fd3ccu;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 7), 31));
    // 0x1fd3d0: 0x63103  sra         $a2, $a2, 4
    ctx->pc = 0x1fd3d0u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 4));
    // 0x1fd3d4: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x1fd3d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x1fd3d8: 0xaca60000  sw          $a2, 0x0($a1)
    ctx->pc = 0x1fd3d8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
    // 0x1fd3dc: 0x92460009  lbu         $a2, 0x9($s2)
    ctx->pc = 0x1fd3dcu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 9)));
    // 0x1fd3e0: 0x8fa5009c  lw          $a1, 0x9C($sp)
    ctx->pc = 0x1fd3e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 156)));
    // 0x1fd3e4: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x1fd3e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x1fd3e8: 0xac65000c  sw          $a1, 0xC($v1)
    ctx->pc = 0x1fd3e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 5));
    // 0x1fd3ec: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x1fd3ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    ctx->pc = 0x1fd3f0u;
}
