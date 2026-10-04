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

// Function: entry_0022aae0
// Address: 0x22aae0 - 0x22ab08
void entry_0022aae0_0x22aae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022aae0_0x22aae0");
#endif

    ctx->pc = 0x22aae0u;

    // 0x22aae0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x22aae0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x22aae4: 0xe620000c  swc1        $f0, 0xC($s1)
    ctx->pc = 0x22aae4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    // 0x22aae8: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x22aae8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x22aaec: 0xe6200014  swc1        $f0, 0x14($s1)
    ctx->pc = 0x22aaecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
    // 0x22aaf0: 0x96020002  lhu         $v0, 0x2($s0)
    ctx->pc = 0x22aaf0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x22aaf4: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x22AAF4u;
    {
        const bool branch_taken_0x22aaf4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x22AAF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AAF4u;
        // 0x22aaf8: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22aaf4) {
            ctx->pc = 0x22AB08u;
            return;
        }
    }
    ctx->pc = 0x22AAFCu;
    // 0x22aafc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22aafcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22ab00: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x22AB00u;
    {
        const bool branch_taken_0x22ab00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22AB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AB00u;
        // 0x22ab04: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ab00) {
            ctx->pc = 0x22AB20u;
            return;
        }
    }
    ctx->pc = 0x22AB08u;
}
