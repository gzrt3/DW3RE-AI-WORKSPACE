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

// Function: entry_0012816c
// Address: 0x12816c - 0x1281a4
void entry_0012816c_0x12816c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012816c_0x12816c");
#endif

    ctx->pc = 0x12816cu;

    // 0x12816c: 0x948302fa  lhu         $v1, 0x2FA($a0)
    ctx->pc = 0x12816cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 762)));
    // 0x128170: 0xc3182a  slt         $v1, $a2, $v1
    ctx->pc = 0x128170u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x128174: 0x1460003e  bnez        $v1, . + 4 + (0x3E << 2)
    ctx->pc = 0x128174u;
    {
        const bool branch_taken_0x128174 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x128174) {
            ctx->pc = 0x128270u;
            return;
        }
    }
    ctx->pc = 0x12817Cu;
    // 0x12817c: 0x948702fc  lhu         $a3, 0x2FC($a0)
    ctx->pc = 0x12817cu;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 764)));
    // 0x128180: 0xc7082a  slt         $at, $a2, $a3
    ctx->pc = 0x128180u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x128184: 0x10200036  beqz        $at, . + 4 + (0x36 << 2)
    ctx->pc = 0x128184u;
    {
        const bool branch_taken_0x128184 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x128184) {
            ctx->pc = 0x128260u;
            return;
        }
    }
    ctx->pc = 0x12818Cu;
    // 0x12818c: 0x908302e3  lbu         $v1, 0x2E3($a0)
    ctx->pc = 0x12818cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 739)));
    // 0x128190: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x128190u;
    {
        const bool branch_taken_0x128190 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x128194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128190u;
        // 0x128194: 0x32842  srl         $a1, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128190) {
            ctx->pc = 0x1281A4u;
            return;
        }
    }
    ctx->pc = 0x128198u;
    // 0x128198: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x128198u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12819c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x12819Cu;
    {
        const bool branch_taken_0x12819c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1281A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12819Cu;
        // 0x1281a0: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12819c) {
            ctx->pc = 0x1281BCu;
            return;
        }
    }
    ctx->pc = 0x1281A4u;
}
