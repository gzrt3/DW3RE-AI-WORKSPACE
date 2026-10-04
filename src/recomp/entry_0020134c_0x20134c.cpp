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

// Function: entry_0020134c
// Address: 0x20134c - 0x20136c
void entry_0020134c_0x20134c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020134c_0x20134c");
#endif

    ctx->pc = 0x20134cu;

    // 0x20134c: 0x0  nop
    ctx->pc = 0x20134cu;
    // NOP
    // 0x201350: 0x31ed0004  andi        $t5, $t7, 0x4
    ctx->pc = 0x201350u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)4);
    // 0x201354: 0x11a00005  beqz        $t5, . + 4 + (0x5 << 2)
    ctx->pc = 0x201354u;
    {
        const bool branch_taken_0x201354 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        if (branch_taken_0x201354) {
            ctx->pc = 0x20136Cu;
            return;
        }
    }
    ctx->pc = 0x20135Cu;
    // 0x20135c: 0x916e0001  lbu         $t6, 0x1($t3)
    ctx->pc = 0x20135cu;
    SET_GPR_ZE32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 1)));
    // 0x201360: 0x8cad0004  lw          $t5, 0x4($a1)
    ctx->pc = 0x201360u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x201364: 0x1ae6821  addu        $t5, $t5, $t6
    ctx->pc = 0x201364u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 14)));
    // 0x201368: 0xacad0004  sw          $t5, 0x4($a1)
    ctx->pc = 0x201368u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 13));
    ctx->pc = 0x20136cu;
}
