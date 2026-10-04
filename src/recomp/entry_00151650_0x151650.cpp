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

// Function: entry_00151650
// Address: 0x151650 - 0x151670
void entry_00151650_0x151650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00151650_0x151650");
#endif

    ctx->pc = 0x151650u;

    // 0x151650: 0x8f83863c  lw          $v1, -0x79C4($gp)
    ctx->pc = 0x151650u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936124)));
    // 0x151654: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x151654u;
    {
        const bool branch_taken_0x151654 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x151658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151654u;
        // 0x151658: 0x92040248  lbu         $a0, 0x248($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 584)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151654) {
            ctx->pc = 0x151670u;
            return;
        }
    }
    ctx->pc = 0x15165Cu;
    // 0x15165c: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x15165cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x151660: 0x90234af3  lbu         $v1, 0x4AF3($at)
    ctx->pc = 0x151660u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x334AF3u));
    // 0x151664: 0x3063001f  andi        $v1, $v1, 0x1F
    ctx->pc = 0x151664u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
    // 0x151668: 0x1460004b  bnez        $v1, . + 4 + (0x4B << 2)
    ctx->pc = 0x151668u;
    {
        const bool branch_taken_0x151668 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x151668) {
            ctx->pc = 0x151798u;
            return;
        }
    }
    ctx->pc = 0x151670u;
}
