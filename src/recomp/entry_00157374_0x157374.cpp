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

// Function: entry_00157374
// Address: 0x157374 - 0x1573b4
void entry_00157374_0x157374(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00157374_0x157374");
#endif

    ctx->pc = 0x157374u;

    // 0x157374: 0x0  nop
    ctx->pc = 0x157374u;
    // NOP
    // 0x157378: 0x10d3021  addu        $a2, $t0, $t5
    ctx->pc = 0x157378u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 13)));
    // 0x15737c: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x15737cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x157380: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x157380u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x157384: 0x28640004  slti        $a0, $v1, 0x4
    ctx->pc = 0x157384u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x157388: 0x25ad0004  addiu       $t5, $t5, 0x4
    ctx->pc = 0x157388u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4));
    // 0x15738c: 0x460e0001  sub.s       $f0, $f0, $f14
    ctx->pc = 0x15738cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[14]);
    // 0x157390: 0x1480ffb4  bnez        $a0, . + 4 + (-0x4C << 2)
    ctx->pc = 0x157390u;
    {
        const bool branch_taken_0x157390 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x157394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157390u;
        // 0x157394: 0xe4c00000  swc1        $f0, 0x0($a2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x157390) {
            ctx->pc = 0x157264u;
            return;
        }
    }
    ctx->pc = 0x157398u;
    // 0x157398: 0x240c0003  addiu       $t4, $zero, 0x3
    ctx->pc = 0x157398u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x15739c: 0x240a0030  addiu       $t2, $zero, 0x30
    ctx->pc = 0x15739cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x1573a0: 0x240b000c  addiu       $t3, $zero, 0xC
    ctx->pc = 0x1573a0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1573a4: 0x3c070033  lui         $a3, 0x33
    ctx->pc = 0x1573a4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)51 << 16));
    // 0x1573a8: 0x27a80010  addiu       $t0, $sp, 0x10
    ctx->pc = 0x1573a8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1573ac: 0x24e712c0  addiu       $a3, $a3, 0x12C0
    ctx->pc = 0x1573acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4800));
    // 0x1573b0: 0x27a60000  addiu       $a2, $sp, 0x0
    ctx->pc = 0x1573b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 0));
    ctx->pc = 0x1573b4u;
}
