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

// Function: entry_00171604
// Address: 0x171604 - 0x17161c
void entry_00171604_0x171604(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00171604_0x171604");
#endif

    ctx->pc = 0x171604u;

    // 0x171604: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x171604u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171608: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x171608u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x17160c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x17160cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171610: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x171610u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171614: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x171614u;
    {
        const bool branch_taken_0x171614 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x171618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171614u;
        // 0x171618: 0x3c063f80  lui         $a2, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171614) {
            ctx->pc = 0x171748u;
            return;
        }
    }
    ctx->pc = 0x17161Cu;
}
