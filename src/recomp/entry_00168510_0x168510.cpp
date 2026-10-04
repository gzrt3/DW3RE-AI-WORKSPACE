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

// Function: entry_00168510
// Address: 0x168510 - 0x168534
void entry_00168510_0x168510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00168510_0x168510");
#endif

    ctx->pc = 0x168510u;

    // 0x168510: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x168510u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168514: 0x44803000  mtc1        $zero, $f6
    ctx->pc = 0x168514u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x168518: 0xc82d  daddu       $t9, $zero, $zero
    ctx->pc = 0x168518u;
    SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16851c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x16851Cu;
    {
        const bool branch_taken_0x16851c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x168520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16851Cu;
        // 0x168520: 0x48080  sll         $s0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16851c) {
            ctx->pc = 0x168534u;
            return;
        }
    }
    ctx->pc = 0x168524u;
    // 0x168524: 0x0  nop
    ctx->pc = 0x168524u;
    // NOP
    // 0x168528: 0x330c821  addu        $t9, $t9, $s0
    ctx->pc = 0x168528u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 16)));
    // 0x16852c: 0x46000186  mov.s       $f6, $f0
    ctx->pc = 0x16852cu;
    ctx->f[6] = FPU_MOV_S(ctx->f[0]);
    // 0x168530: 0x1a46821  addu        $t5, $t5, $a0
    ctx->pc = 0x168530u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 4)));
    ctx->pc = 0x168534u;
}
