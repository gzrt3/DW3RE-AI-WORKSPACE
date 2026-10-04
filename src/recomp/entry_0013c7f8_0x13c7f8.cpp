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

// Function: entry_0013c7f8
// Address: 0x13c7f8 - 0x13c810
void entry_0013c7f8_0x13c7f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013c7f8_0x13c7f8");
#endif

    ctx->pc = 0x13c7f8u;

    // 0x13c7f8: 0x920302e3  lbu         $v1, 0x2E3($s0)
    ctx->pc = 0x13c7f8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 739)));
    // 0x13c7fc: 0x28610080  slti        $at, $v1, 0x80
    ctx->pc = 0x13c7fcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x13c800: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x13C800u;
    {
        const bool branch_taken_0x13c800 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x13c800) {
            ctx->pc = 0x13C810u;
            return;
        }
    }
    ctx->pc = 0x13C808u;
    // 0x13c808: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x13c808u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x13c80c: 0xa20302e3  sb          $v1, 0x2E3($s0)
    ctx->pc = 0x13c80cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 739), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x13c810u;
}
