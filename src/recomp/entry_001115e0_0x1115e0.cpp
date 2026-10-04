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

// Function: entry_001115e0
// Address: 0x1115e0 - 0x111614
void entry_001115e0_0x1115e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001115e0_0x1115e0");
#endif

    ctx->pc = 0x1115e0u;

    // 0x1115e0: 0x908a0034  lbu         $t2, 0x34($a0)
    ctx->pc = 0x1115e0u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x1115e4: 0x2466000a  addiu       $a2, $v1, 0xA
    ctx->pc = 0x1115e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
    // 0x1115e8: 0xca3021  addu        $a2, $a2, $t2
    ctx->pc = 0x1115e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 10)));
    // 0x1115ec: 0x90c60000  lbu         $a2, 0x0($a2)
    ctx->pc = 0x1115ecu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1115f0: 0x28c1001c  slti        $at, $a2, 0x1C
    ctx->pc = 0x1115f0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)28) ? 1 : 0);
    // 0x1115f4: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x1115F4u;
    {
        const bool branch_taken_0x1115f4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1115f4) {
            ctx->pc = 0x111614u;
            return;
        }
    }
    ctx->pc = 0x1115FCu;
    // 0x1115fc: 0x906a000a  lbu         $t2, 0xA($v1)
    ctx->pc = 0x1115fcu;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 10)));
    // 0x111600: 0x9066000b  lbu         $a2, 0xB($v1)
    ctx->pc = 0x111600u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 11)));
    // 0x111604: 0x1463021  addu        $a2, $t2, $a2
    ctx->pc = 0x111604u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 6)));
    // 0x111608: 0x28c10025  slti        $at, $a2, 0x25
    ctx->pc = 0x111608u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)37) ? 1 : 0);
    // 0x11160c: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x11160Cu;
    {
        const bool branch_taken_0x11160c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x11160c) {
            ctx->pc = 0x111618u;
            return;
        }
    }
    ctx->pc = 0x111614u;
}
