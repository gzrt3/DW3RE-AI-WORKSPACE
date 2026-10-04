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

// Function: entry_0017be84
// Address: 0x17be84 - 0x17bebc
void entry_0017be84_0x17be84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017be84_0x17be84");
#endif

    ctx->pc = 0x17be84u;

    // 0x17be84: 0x0  nop
    ctx->pc = 0x17be84u;
    // NOP
    // 0x17be88: 0x30e50200  andi        $a1, $a3, 0x200
    ctx->pc = 0x17be88u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)512);
    // 0x17be8c: 0x10a00015  beqz        $a1, . + 4 + (0x15 << 2)
    ctx->pc = 0x17BE8Cu;
    {
        const bool branch_taken_0x17be8c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x17be8c) {
            ctx->pc = 0x17BEE4u;
            return;
        }
    }
    ctx->pc = 0x17BE94u;
    // 0x17be94: 0xac8a003c  sw          $t2, 0x3C($a0)
    ctx->pc = 0x17be94u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 10));
    // 0x17be98: 0xac890030  sw          $t1, 0x30($a0)
    ctx->pc = 0x17be98u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 9));
    // 0x17be9c: 0xac880034  sw          $t0, 0x34($a0)
    ctx->pc = 0x17be9cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 8));
    // 0x17bea0: 0xac800024  sw          $zero, 0x24($a0)
    ctx->pc = 0x17bea0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
    // 0x17bea4: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x17bea4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x17bea8: 0x4a00004  bltz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x17BEA8u;
    {
        const bool branch_taken_0x17bea8 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x17BEACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BEA8u;
        // 0x17beac: 0x53842  srl         $a3, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17bea8) {
            ctx->pc = 0x17BEBCu;
            return;
        }
    }
    ctx->pc = 0x17BEB0u;
    // 0x17beb0: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x17beb0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x17beb4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x17BEB4u;
    {
        const bool branch_taken_0x17beb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17BEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BEB4u;
        // 0x17beb8: 0x468008a0  cvt.s.w     $f2, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x17beb4) {
            ctx->pc = 0x17BED4u;
            return;
        }
    }
    ctx->pc = 0x17BEBCu;
}
