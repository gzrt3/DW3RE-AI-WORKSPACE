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

// Function: entry_0013650c
// Address: 0x13650c - 0x136540
void entry_0013650c_0x13650c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013650c_0x13650c");
#endif

    ctx->pc = 0x13650cu;

    // 0x13650c: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x13650cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x136510: 0x2463fffd  addiu       $v1, $v1, -0x3
    ctx->pc = 0x136510u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967293));
    // 0x136514: 0x8c24a424  lw          $a0, -0x5BDC($at)
    ctx->pc = 0x136514u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x30A424u));
    // 0x136518: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x136518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x13651c: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x13651cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x136520: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x136520u;
    {
        const bool branch_taken_0x136520 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x136524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136520u;
        // 0x136524: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136520) {
            ctx->pc = 0x136540u;
            return;
        }
    }
    ctx->pc = 0x136528u;
    // 0x136528: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x136528u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x13652c: 0x24820004  addiu       $v0, $a0, 0x4
    ctx->pc = 0x13652cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x136530: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x136530u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x136534: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x136534u;
    {
        const bool branch_taken_0x136534 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x136538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136534u;
        // 0x136538: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136534) {
            ctx->pc = 0x136540u;
            return;
        }
    }
    ctx->pc = 0x13653Cu;
    // 0x13653c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x13653cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x136540u;
}
