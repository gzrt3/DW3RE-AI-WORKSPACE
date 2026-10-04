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

// Function: entry_00145430
// Address: 0x145430 - 0x14545c
void entry_00145430_0x145430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00145430_0x145430");
#endif

    ctx->pc = 0x145430u;

    // 0x145430: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x145430u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x145434: 0x9022497c  lbu         $v0, 0x497C($at)
    ctx->pc = 0x145434u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x33497Cu));
    // 0x145438: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x145438u;
    {
        const bool branch_taken_0x145438 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14543Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145438u;
        // 0x14543c: 0xaf808590  sw          $zero, -0x7A70($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935952), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145438) {
            ctx->pc = 0x14545Cu;
            return;
        }
    }
    ctx->pc = 0x145440u;
    // 0x145440: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x145440u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x145444: 0x90224a0c  lbu         $v0, 0x4A0C($at)
    ctx->pc = 0x145444u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x334A0Cu));
    // 0x145448: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x145448u;
    {
        const bool branch_taken_0x145448 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x145448) {
            ctx->pc = 0x14545Cu;
            return;
        }
    }
    ctx->pc = 0x145450u;
    // 0x145450: 0x8f828590  lw          $v0, -0x7A70($gp)
    ctx->pc = 0x145450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
    // 0x145454: 0x34420400  ori         $v0, $v0, 0x400
    ctx->pc = 0x145454u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1024);
    // 0x145458: 0xaf828590  sw          $v0, -0x7A70($gp)
    ctx->pc = 0x145458u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935952), GPR_U32(ctx, 2));
    ctx->pc = 0x14545cu;
}
