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

// Function: entry_00168198
// Address: 0x168198 - 0x1681bc
void entry_00168198_0x168198(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00168198_0x168198");
#endif

    ctx->pc = 0x168198u;

    // 0x168198: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x168198u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16819c: 0x44803000  mtc1        $zero, $f6
    ctx->pc = 0x16819cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x1681a0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1681a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1681a4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1681A4u;
    {
        const bool branch_taken_0x1681a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1681A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1681A4u;
        // 0x1681a8: 0x198880  sll         $s1, $t9, 2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 25), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1681a4) {
            ctx->pc = 0x1681BCu;
            return;
        }
    }
    ctx->pc = 0x1681ACu;
    // 0x1681ac: 0x0  nop
    ctx->pc = 0x1681acu;
    // NOP
    // 0x1681b0: 0x2118021  addu        $s0, $s0, $s1
    ctx->pc = 0x1681b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x1681b4: 0x46000186  mov.s       $f6, $f0
    ctx->pc = 0x1681b4u;
    ctx->f[6] = FPU_MOV_S(ctx->f[0]);
    // 0x1681b8: 0x1b96821  addu        $t5, $t5, $t9
    ctx->pc = 0x1681b8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 25)));
    ctx->pc = 0x1681bcu;
}
