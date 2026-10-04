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

// Function: entry_0014906c
// Address: 0x14906c - 0x149084
void entry_0014906c_0x14906c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014906c_0x14906c");
#endif

    ctx->pc = 0x14906cu;

    // 0x14906c: 0x92220020  lbu         $v0, 0x20($s1)
    ctx->pc = 0x14906cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x149070: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x149070u;
    {
        const bool branch_taken_0x149070 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x149074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149070u;
        // 0x149074: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149070) {
            ctx->pc = 0x149084u;
            return;
        }
    }
    ctx->pc = 0x149078u;
    // 0x149078: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x149078u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14907c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x14907Cu;
    {
        const bool branch_taken_0x14907c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x149080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14907Cu;
        // 0x149080: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x14907c) {
            ctx->pc = 0x14909Cu;
            return;
        }
    }
    ctx->pc = 0x149084u;
}
