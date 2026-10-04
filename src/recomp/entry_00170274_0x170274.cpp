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

// Function: entry_00170274
// Address: 0x170274 - 0x170298
void entry_00170274_0x170274(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00170274_0x170274");
#endif

    ctx->pc = 0x170274u;

    // 0x170274: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x170274u;
    {
        const bool branch_taken_0x170274 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x170274) {
            ctx->pc = 0x170298u;
            return;
        }
    }
    ctx->pc = 0x17027Cu;
    // 0x17027c: 0x3102ffff  andi        $v0, $t0, 0xFFFF
    ctx->pc = 0x17027cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
    // 0x170280: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x170280u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x170284: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x170284u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x170288: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x170288u;
    {
        const bool branch_taken_0x170288 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x170288) {
            ctx->pc = 0x170298u;
            return;
        }
    }
    ctx->pc = 0x170290u;
    // 0x170290: 0x31420008  andi        $v0, $t2, 0x8
    ctx->pc = 0x170290u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)8);
    // 0x170294: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x170294u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    ctx->pc = 0x170298u;
}
