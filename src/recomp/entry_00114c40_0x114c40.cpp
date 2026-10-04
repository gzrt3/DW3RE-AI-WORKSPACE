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

// Function: entry_00114c40
// Address: 0x114c40 - 0x114c84
void entry_00114c40_0x114c40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00114c40_0x114c40");
#endif

    ctx->pc = 0x114c40u;

    // 0x114c40: 0x82050029  lb          $a1, 0x29($s0)
    ctx->pc = 0x114c40u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 41)));
    // 0x114c44: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x114c44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x114c48: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x114c48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x114c4c: 0xa31804  sllv        $v1, $v1, $a1
    ctx->pc = 0x114c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 5) & 0x1F));
    // 0x114c50: 0x386500ff  xori        $a1, $v1, 0xFF
    ctx->pc = 0x114c50u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)255);
    // 0x114c54: 0x908301a2  lbu         $v1, 0x1A2($a0)
    ctx->pc = 0x114c54u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 418)));
    // 0x114c58: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x114c58u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x114c5c: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x114c5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x114c60: 0xa08301a2  sb          $v1, 0x1A2($a0)
    ctx->pc = 0x114c60u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 418), (uint8_t)GPR_U32(ctx, 3));
    // 0x114c64: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x114c64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x114c68: 0x906301a2  lbu         $v1, 0x1A2($v1)
    ctx->pc = 0x114c68u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 418)));
    // 0x114c6c: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x114C6Cu;
    {
        const bool branch_taken_0x114c6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x114c6c) {
            ctx->pc = 0x114C84u;
            return;
        }
    }
    ctx->pc = 0x114C74u;
    // 0x114c74: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x114c74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x114c78: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x114c78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x114c7c: 0xac600034  sw          $zero, 0x34($v1)
    ctx->pc = 0x114c7cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 52), GPR_U32(ctx, 0));
    // 0x114c80: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x114c80u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    ctx->pc = 0x114c84u;
}
