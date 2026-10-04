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

// Function: entry_0022ae28
// Address: 0x22ae28 - 0x22ae44
void entry_0022ae28_0x22ae28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022ae28_0x22ae28");
#endif

    ctx->pc = 0x22ae28u;

    // 0x22ae28: 0x92030096  lbu         $v1, 0x96($s0)
    ctx->pc = 0x22ae28u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 150)));
    // 0x22ae2c: 0x14640005  bne         $v1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x22AE2Cu;
    {
        const bool branch_taken_0x22ae2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x22ae2c) {
            ctx->pc = 0x22AE44u;
            return;
        }
    }
    ctx->pc = 0x22AE34u;
    // 0x22ae34: 0x9203009c  lbu         $v1, 0x9C($s0)
    ctx->pc = 0x22ae34u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 156)));
    // 0x22ae38: 0x30630020  andi        $v1, $v1, 0x20
    ctx->pc = 0x22ae38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x22ae3c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x22AE3Cu;
    {
        const bool branch_taken_0x22ae3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x22ae3c) {
            ctx->pc = 0x22AE54u;
            return;
        }
    }
    ctx->pc = 0x22AE44u;
}
