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

// Function: entry_00111598
// Address: 0x111598 - 0x1115d8
void entry_00111598_0x111598(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00111598_0x111598");
#endif

    ctx->pc = 0x111598u;

    // 0x111598: 0x908a0034  lbu         $t2, 0x34($a0)
    ctx->pc = 0x111598u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x11159c: 0x2466000a  addiu       $a2, $v1, 0xA
    ctx->pc = 0x11159cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
    // 0x1115a0: 0x908b002a  lbu         $t3, 0x2A($a0)
    ctx->pc = 0x1115a0u;
    SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 42)));
    // 0x1115a4: 0xca3021  addu        $a2, $a2, $t2
    ctx->pc = 0x1115a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 10)));
    // 0x1115a8: 0x90c60000  lbu         $a2, 0x0($a2)
    ctx->pc = 0x1115a8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1115ac: 0xcb3021  addu        $a2, $a2, $t3
    ctx->pc = 0x1115acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 11)));
    // 0x1115b0: 0x28c1001c  slti        $at, $a2, 0x1C
    ctx->pc = 0x1115b0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)28) ? 1 : 0);
    // 0x1115b4: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x1115B4u;
    {
        const bool branch_taken_0x1115b4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1115b4) {
            ctx->pc = 0x1115D8u;
            return;
        }
    }
    ctx->pc = 0x1115BCu;
    // 0x1115bc: 0x906a000a  lbu         $t2, 0xA($v1)
    ctx->pc = 0x1115bcu;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 10)));
    // 0x1115c0: 0x9066000b  lbu         $a2, 0xB($v1)
    ctx->pc = 0x1115c0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 11)));
    // 0x1115c4: 0x1463021  addu        $a2, $t2, $a2
    ctx->pc = 0x1115c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 6)));
    // 0x1115c8: 0x1663021  addu        $a2, $t3, $a2
    ctx->pc = 0x1115c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 6)));
    // 0x1115cc: 0x28c10025  slti        $at, $a2, 0x25
    ctx->pc = 0x1115ccu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)37) ? 1 : 0);
    // 0x1115d0: 0x14200011  bnez        $at, . + 4 + (0x11 << 2)
    ctx->pc = 0x1115D0u;
    {
        const bool branch_taken_0x1115d0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1115d0) {
            ctx->pc = 0x111618u;
            return;
        }
    }
    ctx->pc = 0x1115D8u;
}
