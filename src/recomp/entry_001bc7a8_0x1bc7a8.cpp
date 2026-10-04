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

// Function: entry_001bc7a8
// Address: 0x1bc7a8 - 0x1bc80c
void entry_001bc7a8_0x1bc7a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bc7a8_0x1bc7a8");
#endif

    ctx->pc = 0x1bc7a8u;

    // 0x1bc7a8: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x1bc7a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
    // 0x1bc7ac: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x1bc7acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
    // 0x1bc7b0: 0x246353a0  addiu       $v1, $v1, 0x53A0
    ctx->pc = 0x1bc7b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 21408));
    // 0x1bc7b4: 0x24845374  addiu       $a0, $a0, 0x5374
    ctx->pc = 0x1bc7b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21364));
    // 0x1bc7b8: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x1bc7b8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x1bc7bc: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1bc7bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1bc7c0: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x1bc7c0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1bc7c4: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x1bc7c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x1bc7c8: 0x92250067  lbu         $a1, 0x67($s1)
    ctx->pc = 0x1bc7c8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 103)));
    // 0x1bc7cc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1bc7ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1bc7d0: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1bc7d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1bc7d4: 0x90840000  lbu         $a0, 0x0($a0)
    ctx->pc = 0x1bc7d4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1bc7d8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1bc7d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1bc7dc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x1bc7dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x1bc7e0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1bc7e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1bc7e4: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x1bc7e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x1bc7e8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1bc7e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1bc7ec: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1bc7ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1bc7f0: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1bc7f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1bc7f4: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x1bc7f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x1bc7f8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1bc7f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1bc7fc: 0x28610191  slti        $at, $v1, 0x191
    ctx->pc = 0x1bc7fcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)401) ? 1 : 0);
    // 0x1bc800: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1BC800u;
    {
        const bool branch_taken_0x1bc800 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bc800) {
            ctx->pc = 0x1BC80Cu;
            return;
        }
    }
    ctx->pc = 0x1BC808u;
    // 0x1bc808: 0x24030190  addiu       $v1, $zero, 0x190
    ctx->pc = 0x1bc808u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
    ctx->pc = 0x1bc80cu;
}
