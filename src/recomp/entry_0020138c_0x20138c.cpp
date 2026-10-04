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

// Function: entry_0020138c
// Address: 0x20138c - 0x2013ac
void entry_0020138c_0x20138c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020138c_0x20138c");
#endif

    ctx->pc = 0x20138cu;

    // 0x20138c: 0x0  nop
    ctx->pc = 0x20138cu;
    // NOP
    // 0x201390: 0x31ed0020  andi        $t5, $t7, 0x20
    ctx->pc = 0x201390u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)32);
    // 0x201394: 0x11a00005  beqz        $t5, . + 4 + (0x5 << 2)
    ctx->pc = 0x201394u;
    {
        const bool branch_taken_0x201394 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        if (branch_taken_0x201394) {
            ctx->pc = 0x2013ACu;
            return;
        }
    }
    ctx->pc = 0x20139Cu;
    // 0x20139c: 0x916d0001  lbu         $t5, 0x1($t3)
    ctx->pc = 0x20139cu;
    SET_GPR_ZE32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 1)));
    // 0x2013a0: 0x8cab000c  lw          $t3, 0xC($a1)
    ctx->pc = 0x2013a0u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x2013a4: 0x16d5821  addu        $t3, $t3, $t5
    ctx->pc = 0x2013a4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 13)));
    // 0x2013a8: 0xacab000c  sw          $t3, 0xC($a1)
    ctx->pc = 0x2013a8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 11));
    ctx->pc = 0x2013acu;
}
