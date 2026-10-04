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

// Function: entry_00148ef8
// Address: 0x148ef8 - 0x148f10
void entry_00148ef8_0x148ef8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00148ef8_0x148ef8");
#endif

    ctx->pc = 0x148ef8u;

    // 0x148ef8: 0x92220020  lbu         $v0, 0x20($s1)
    ctx->pc = 0x148ef8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x148efc: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x148EFCu;
    {
        const bool branch_taken_0x148efc = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x148F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148EFCu;
        // 0x148f00: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148efc) {
            ctx->pc = 0x148F10u;
            return;
        }
    }
    ctx->pc = 0x148F04u;
    // 0x148f04: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x148f04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x148f08: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x148F08u;
    {
        const bool branch_taken_0x148f08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x148F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148F08u;
        // 0x148f0c: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x148f08) {
            ctx->pc = 0x148F28u;
            return;
        }
    }
    ctx->pc = 0x148F10u;
}
