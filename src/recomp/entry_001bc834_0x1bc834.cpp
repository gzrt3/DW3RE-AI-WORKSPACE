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

// Function: entry_001bc834
// Address: 0x1bc834 - 0x1bc870
void entry_001bc834_0x1bc834(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bc834_0x1bc834");
#endif

    ctx->pc = 0x1bc834u;

    // 0x1bc834: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x1bc834u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x1bc838: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x1bc838u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
    // 0x1bc83c: 0x92250064  lbu         $a1, 0x64($s1)
    ctx->pc = 0x1bc83cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 100)));
    // 0x1bc840: 0x248453b8  addiu       $a0, $a0, 0x53B8
    ctx->pc = 0x1bc840u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21432));
    // 0x1bc844: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1bc844u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bc848: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x1bc848u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x1bc84c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1bc84cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1bc850: 0x84840000  lh          $a0, 0x0($a0)
    ctx->pc = 0x1bc850u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1bc854: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1bc854u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1bc858: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x1bc858u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x1bc85c: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1bc85cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1bc860: 0x286100fb  slti        $at, $v1, 0xFB
    ctx->pc = 0x1bc860u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)251) ? 1 : 0);
    // 0x1bc864: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1BC864u;
    {
        const bool branch_taken_0x1bc864 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bc864) {
            ctx->pc = 0x1BC870u;
            return;
        }
    }
    ctx->pc = 0x1BC86Cu;
    // 0x1bc86c: 0x240300fa  addiu       $v1, $zero, 0xFA
    ctx->pc = 0x1bc86cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 250));
    ctx->pc = 0x1bc870u;
}
