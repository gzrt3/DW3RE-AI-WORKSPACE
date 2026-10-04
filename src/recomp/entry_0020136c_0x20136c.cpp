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

// Function: entry_0020136c
// Address: 0x20136c - 0x20138c
void entry_0020136c_0x20136c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020136c_0x20136c");
#endif

    ctx->pc = 0x20136cu;

    // 0x20136c: 0x0  nop
    ctx->pc = 0x20136cu;
    // NOP
    // 0x201370: 0x31ed0010  andi        $t5, $t7, 0x10
    ctx->pc = 0x201370u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)16);
    // 0x201374: 0x11a00005  beqz        $t5, . + 4 + (0x5 << 2)
    ctx->pc = 0x201374u;
    {
        const bool branch_taken_0x201374 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        if (branch_taken_0x201374) {
            ctx->pc = 0x20138Cu;
            return;
        }
    }
    ctx->pc = 0x20137Cu;
    // 0x20137c: 0x916e0001  lbu         $t6, 0x1($t3)
    ctx->pc = 0x20137cu;
    SET_GPR_ZE32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 1)));
    // 0x201380: 0x8cad0008  lw          $t5, 0x8($a1)
    ctx->pc = 0x201380u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x201384: 0x1ae6821  addu        $t5, $t5, $t6
    ctx->pc = 0x201384u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 14)));
    // 0x201388: 0xacad0008  sw          $t5, 0x8($a1)
    ctx->pc = 0x201388u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 13));
    ctx->pc = 0x20138cu;
}
