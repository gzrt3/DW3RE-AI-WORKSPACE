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

// Function: entry_0010042c
// Address: 0x10042c - 0x10046c
void entry_0010042c_0x10042c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010042c_0x10042c");
#endif

    switch (ctx->pc) {
        case 0x100464u: goto label_100464;
        default: break;
    }

    ctx->pc = 0x10042cu;

    // 0x10042c: 0x1483000f  bne         $a0, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x10042Cu;
    {
        const bool branch_taken_0x10042c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x10042c) {
            ctx->pc = 0x10046Cu;
            return;
        }
    }
    ctx->pc = 0x100434u;
    // 0x100434: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x100434u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x100438: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x100438u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
    // 0x10043c: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x10043cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x100440: 0x24a5ee00  addiu       $a1, $a1, -0x1200
    ctx->pc = 0x100440u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962688));
    // 0x100444: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x100444u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x100448: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x100448u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10044c: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x10044cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x100450: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x100450u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100454: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x100454u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100458: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x100458u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10045c: 0xc066c72  jal         func_19B1C8
    ctx->pc = 0x10045Cu;
    SET_GPR_U32(ctx, 31, 0x100464u);
    ctx->pc = 0x100460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10045Cu;
    // 0x100460: 0x23102  srl         $a2, $v0, 4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x10045Cu, 0x100464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100464u;
label_100464:
    // 0x100464: 0x10000052  b           . + 4 + (0x52 << 2)
    ctx->pc = 0x100464u;
    {
        const bool branch_taken_0x100464 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x100464) {
            ctx->pc = 0x1005B0u;
            return;
        }
    }
    ctx->pc = 0x10046Cu;
}
