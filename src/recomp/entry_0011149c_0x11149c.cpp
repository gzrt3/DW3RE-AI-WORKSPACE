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

// Function: entry_0011149c
// Address: 0x11149c - 0x1114fc
void entry_0011149c_0x11149c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011149c_0x11149c");
#endif

    ctx->pc = 0x11149cu;

    // 0x11149c: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x11149cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x1114a0: 0x16a082a  slt         $at, $t3, $t2
    ctx->pc = 0x1114a0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 11) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
    // 0x1114a4: 0x14200015  bnez        $at, . + 4 + (0x15 << 2)
    ctx->pc = 0x1114A4u;
    {
        const bool branch_taken_0x1114a4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1114a4) {
            ctx->pc = 0x1114FCu;
            return;
        }
    }
    ctx->pc = 0x1114ACu;
    // 0x1114ac: 0x9066000e  lbu         $a2, 0xE($v1)
    ctx->pc = 0x1114acu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 14)));
    // 0x1114b0: 0xca082a  slt         $at, $a2, $t2
    ctx->pc = 0x1114b0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
    // 0x1114b4: 0x14200011  bnez        $at, . + 4 + (0x11 << 2)
    ctx->pc = 0x1114B4u;
    {
        const bool branch_taken_0x1114b4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1114b4) {
            ctx->pc = 0x1114FCu;
            return;
        }
    }
    ctx->pc = 0x1114BCu;
    // 0x1114bc: 0x908a0034  lbu         $t2, 0x34($a0)
    ctx->pc = 0x1114bcu;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x1114c0: 0x2466000a  addiu       $a2, $v1, 0xA
    ctx->pc = 0x1114c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
    // 0x1114c4: 0x908b002a  lbu         $t3, 0x2A($a0)
    ctx->pc = 0x1114c4u;
    SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 42)));
    // 0x1114c8: 0xca3021  addu        $a2, $a2, $t2
    ctx->pc = 0x1114c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 10)));
    // 0x1114cc: 0x90c60000  lbu         $a2, 0x0($a2)
    ctx->pc = 0x1114ccu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1114d0: 0xcb3021  addu        $a2, $a2, $t3
    ctx->pc = 0x1114d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 11)));
    // 0x1114d4: 0x28c1001c  slti        $at, $a2, 0x1C
    ctx->pc = 0x1114d4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)28) ? 1 : 0);
    // 0x1114d8: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x1114D8u;
    {
        const bool branch_taken_0x1114d8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1114d8) {
            ctx->pc = 0x1114FCu;
            return;
        }
    }
    ctx->pc = 0x1114E0u;
    // 0x1114e0: 0x906a000a  lbu         $t2, 0xA($v1)
    ctx->pc = 0x1114e0u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 10)));
    // 0x1114e4: 0x9066000b  lbu         $a2, 0xB($v1)
    ctx->pc = 0x1114e4u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 11)));
    // 0x1114e8: 0x1463021  addu        $a2, $t2, $a2
    ctx->pc = 0x1114e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 6)));
    // 0x1114ec: 0x1663021  addu        $a2, $t3, $a2
    ctx->pc = 0x1114ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 6)));
    // 0x1114f0: 0x28c10025  slti        $at, $a2, 0x25
    ctx->pc = 0x1114f0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)37) ? 1 : 0);
    // 0x1114f4: 0x14200048  bnez        $at, . + 4 + (0x48 << 2)
    ctx->pc = 0x1114F4u;
    {
        const bool branch_taken_0x1114f4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1114f4) {
            ctx->pc = 0x111618u;
            return;
        }
    }
    ctx->pc = 0x1114FCu;
}
