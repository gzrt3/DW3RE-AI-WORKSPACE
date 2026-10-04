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

// Function: entry_0020fc58
// Address: 0x20fc58 - 0x20fc70
void entry_0020fc58_0x20fc58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020fc58_0x20fc58");
#endif

    ctx->pc = 0x20fc58u;

    // 0x20fc58: 0x90e4000a  lbu         $a0, 0xA($a3)
    ctx->pc = 0x20fc58u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 10)));
    // 0x20fc5c: 0xa0c4000a  sb          $a0, 0xA($a2)
    ctx->pc = 0x20fc5cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 10), (uint8_t)GPR_U32(ctx, 4));
    // 0x20fc60: 0x90e4000b  lbu         $a0, 0xB($a3)
    ctx->pc = 0x20fc60u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 11)));
    // 0x20fc64: 0x14830002  bne         $a0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x20FC64u;
    {
        const bool branch_taken_0x20fc64 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x20fc64) {
            ctx->pc = 0x20FC70u;
            return;
        }
    }
    ctx->pc = 0x20FC6Cu;
    // 0x20fc6c: 0x240400ab  addiu       $a0, $zero, 0xAB
    ctx->pc = 0x20fc6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 171));
    ctx->pc = 0x20fc70u;
}
