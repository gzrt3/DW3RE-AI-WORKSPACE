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

// Function: entry_0020146c
// Address: 0x20146c - 0x201484
void entry_0020146c_0x20146c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020146c_0x20146c");
#endif

    ctx->pc = 0x20146cu;

    // 0x20146c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x20146Cu;
    {
        const bool branch_taken_0x20146c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x20146c) {
            ctx->pc = 0x201484u;
            return;
        }
    }
    ctx->pc = 0x201474u;
    // 0x201474: 0x90e40001  lbu         $a0, 0x1($a3)
    ctx->pc = 0x201474u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 1)));
    // 0x201478: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x201478u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x20147c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x20147cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x201480: 0xaca3000c  sw          $v1, 0xC($a1)
    ctx->pc = 0x201480u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 3));
    ctx->pc = 0x201484u;
}
