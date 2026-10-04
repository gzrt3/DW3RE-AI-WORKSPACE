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

// Function: entry_001c035c
// Address: 0x1c035c - 0x1c0398
void entry_001c035c_0x1c035c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c035c_0x1c035c");
#endif

    ctx->pc = 0x1c035cu;

    // 0x1c035c: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1c035cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1c0360: 0x14600023  bnez        $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x1C0360u;
    {
        const bool branch_taken_0x1c0360 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c0360) {
            ctx->pc = 0x1C03F0u;
            return;
        }
    }
    ctx->pc = 0x1C0368u;
    // 0x1c0368: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1c0368u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1c036c: 0x8c45000c  lw          $a1, 0xC($v0)
    ctx->pc = 0x1c036cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1c0370: 0x65082b  sltu        $at, $v1, $a1
    ctx->pc = 0x1c0370u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x1c0374: 0x1020001e  beqz        $at, . + 4 + (0x1E << 2)
    ctx->pc = 0x1C0374u;
    {
        const bool branch_taken_0x1c0374 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c0374) {
            ctx->pc = 0x1C03F0u;
            return;
        }
    }
    ctx->pc = 0x1C037Cu;
    // 0x1c037c: 0xa33023  subu        $a2, $a1, $v1
    ctx->pc = 0x1c037cu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1c0380: 0x2cc10011  sltiu       $at, $a2, 0x11
    ctx->pc = 0x1c0380u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)17) ? 1 : 0);
    // 0x1c0384: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C0384u;
    {
        const bool branch_taken_0x1c0384 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c0384) {
            ctx->pc = 0x1C0398u;
            return;
        }
    }
    ctx->pc = 0x1C038Cu;
    // 0x1c038c: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x1c038cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x1c0390: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1C0390u;
    {
        const bool branch_taken_0x1c0390 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0390u;
        // 0x1c0394: 0x8c450004  lw          $a1, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0390) {
            ctx->pc = 0x1C03CCu;
            return;
        }
    }
    ctx->pc = 0x1C0398u;
}
