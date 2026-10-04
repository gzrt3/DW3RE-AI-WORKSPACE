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

// Function: entry_00111504
// Address: 0x111504 - 0x111558
void entry_00111504_0x111504(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00111504_0x111504");
#endif

    ctx->pc = 0x111504u;

    // 0x111504: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x111504u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x111508: 0x16a082a  slt         $at, $t3, $t2
    ctx->pc = 0x111508u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 11) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
    // 0x11150c: 0x14200012  bnez        $at, . + 4 + (0x12 << 2)
    ctx->pc = 0x11150Cu;
    {
        const bool branch_taken_0x11150c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x11150c) {
            ctx->pc = 0x111558u;
            return;
        }
    }
    ctx->pc = 0x111514u;
    // 0x111514: 0x9066000e  lbu         $a2, 0xE($v1)
    ctx->pc = 0x111514u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 14)));
    // 0x111518: 0xca082a  slt         $at, $a2, $t2
    ctx->pc = 0x111518u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
    // 0x11151c: 0x1420000e  bnez        $at, . + 4 + (0xE << 2)
    ctx->pc = 0x11151Cu;
    {
        const bool branch_taken_0x11151c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x11151c) {
            ctx->pc = 0x111558u;
            return;
        }
    }
    ctx->pc = 0x111524u;
    // 0x111524: 0x908a0034  lbu         $t2, 0x34($a0)
    ctx->pc = 0x111524u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x111528: 0x2466000a  addiu       $a2, $v1, 0xA
    ctx->pc = 0x111528u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
    // 0x11152c: 0xca3021  addu        $a2, $a2, $t2
    ctx->pc = 0x11152cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 10)));
    // 0x111530: 0x90c60000  lbu         $a2, 0x0($a2)
    ctx->pc = 0x111530u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x111534: 0x28c1001c  slti        $at, $a2, 0x1C
    ctx->pc = 0x111534u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)28) ? 1 : 0);
    // 0x111538: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x111538u;
    {
        const bool branch_taken_0x111538 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x111538) {
            ctx->pc = 0x111558u;
            return;
        }
    }
    ctx->pc = 0x111540u;
    // 0x111540: 0x906a000a  lbu         $t2, 0xA($v1)
    ctx->pc = 0x111540u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 10)));
    // 0x111544: 0x9066000b  lbu         $a2, 0xB($v1)
    ctx->pc = 0x111544u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 11)));
    // 0x111548: 0x1463021  addu        $a2, $t2, $a2
    ctx->pc = 0x111548u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 6)));
    // 0x11154c: 0x28c10025  slti        $at, $a2, 0x25
    ctx->pc = 0x11154cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)37) ? 1 : 0);
    // 0x111550: 0x14200031  bnez        $at, . + 4 + (0x31 << 2)
    ctx->pc = 0x111550u;
    {
        const bool branch_taken_0x111550 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x111550) {
            ctx->pc = 0x111618u;
            return;
        }
    }
    ctx->pc = 0x111558u;
}
