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

// Function: entry_00140334
// Address: 0x140334 - 0x140360
void entry_00140334_0x140334(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00140334_0x140334");
#endif

    ctx->pc = 0x140334u;

    // 0x140334: 0x8e04002c  lw          $a0, 0x2C($s0)
    ctx->pc = 0x140334u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x140338: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x140338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x14033c: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x14033cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x140340: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x140340u;
    {
        const bool branch_taken_0x140340 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x140340) {
            ctx->pc = 0x1403D0u;
            return;
        }
    }
    ctx->pc = 0x140348u;
    // 0x140348: 0x9082000c  lbu         $v0, 0xC($a0)
    ctx->pc = 0x140348u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x14034c: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x14034Cu;
    {
        const bool branch_taken_0x14034c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x140350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14034Cu;
        // 0x140350: 0xc6010000  lwc1        $f1, 0x0($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x14034c) {
            ctx->pc = 0x140360u;
            return;
        }
    }
    ctx->pc = 0x140354u;
    // 0x140354: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x140354u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x140358: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x140358u;
    {
        const bool branch_taken_0x140358 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14035Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140358u;
        // 0x14035c: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x140358) {
            ctx->pc = 0x14037Cu;
            return;
        }
    }
    ctx->pc = 0x140360u;
}
