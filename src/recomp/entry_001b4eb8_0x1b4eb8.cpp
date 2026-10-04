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

// Function: entry_001b4eb8
// Address: 0x1b4eb8 - 0x1b4f14
void entry_001b4eb8_0x1b4eb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b4eb8_0x1b4eb8");
#endif

    ctx->pc = 0x1b4eb8u;

    // 0x1b4eb8: 0x3c02401b  lui         $v0, 0x401B
    ctx->pc = 0x1b4eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16411 << 16));
    // 0x1b4ebc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1b4ebcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1b4ec0: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x1b4ec0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x1b4ec4: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x1B4EC4u;
    {
        const bool branch_taken_0x1b4ec4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b4ec4) {
            ctx->pc = 0x1B4EC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B4EC4u;
            // 0x1b4ec8: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B4F00u;
            goto label_1b4f00;
        }
    }
    ctx->pc = 0x1B4ECCu;
    // 0x1b4ecc: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x1b4eccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x1b4ed0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b4ed0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b4ed4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1b4ed4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1b4ed8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1b4ed8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1b4edc: 0x46006842  mul.s       $f1, $f13, $f0
    ctx->pc = 0x1b4edcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[13], ctx->f[0]);
    // 0x1b4ee0: 0x46006801  sub.s       $f0, $f13, $f0
    ctx->pc = 0x1b4ee0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[13], ctx->f[0]);
    // 0x1b4ee4: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1b4ee4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x1b4ee8: 0x0  nop
    ctx->pc = 0x1b4ee8u;
    // NOP
    // 0x1b4eec: 0x0  nop
    ctx->pc = 0x1b4eecu;
    // NOP
    // 0x1b4ef0: 0x46010343  div.s       $f13, $f0, $f1
    ctx->pc = 0x1b4ef0u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[13] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[13] = ctx->f[0] / ctx->f[1];
    // 0x1b4ef4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1B4EF4u;
    {
        const bool branch_taken_0x1b4ef4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4EF4u;
        // 0x1b4ef8: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4ef4) {
            ctx->pc = 0x1B4F14u;
            return;
        }
    }
    ctx->pc = 0x1B4EFCu;
    // 0x1b4efc: 0x0  nop
    ctx->pc = 0x1b4efcu;
    // NOP
label_1b4f00:
    // 0x1b4f00: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x1b4f00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x1b4f04: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b4f04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b4f08: 0x0  nop
    ctx->pc = 0x1b4f08u;
    // NOP
    // 0x1b4f0c: 0x0  nop
    ctx->pc = 0x1b4f0cu;
    // NOP
    // 0x1b4f10: 0x460d0343  div.s       $f13, $f0, $f13
    ctx->pc = 0x1b4f10u;
    if (ctx->f[13] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[13] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[13] = ctx->f[0] / ctx->f[13];
    ctx->pc = 0x1b4f14u;
}
