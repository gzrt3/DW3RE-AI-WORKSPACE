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

// Function: entry_00214eb0
// Address: 0x214eb0 - 0x214f00
void entry_00214eb0_0x214eb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00214eb0_0x214eb0");
#endif

    ctx->pc = 0x214eb0u;

    // 0x214eb0: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x214eb0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x214eb4: 0x2ac30004  slti        $v1, $s6, 0x4
    ctx->pc = 0x214eb4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x214eb8: 0x26f70004  addiu       $s7, $s7, 0x4
    ctx->pc = 0x214eb8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 4));
    // 0x214ebc: 0x26730002  addiu       $s3, $s3, 0x2
    ctx->pc = 0x214ebcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
    // 0x214ec0: 0x26940040  addiu       $s4, $s4, 0x40
    ctx->pc = 0x214ec0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 64));
    // 0x214ec4: 0x1460ffcb  bnez        $v1, . + 4 + (-0x35 << 2)
    ctx->pc = 0x214EC4u;
    {
        const bool branch_taken_0x214ec4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x214EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214EC4u;
        // 0x214ec8: 0x26b50010  addiu       $s5, $s5, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214ec4) {
            ctx->pc = 0x214DF4u;
            return;
        }
    }
    ctx->pc = 0x214ECCu;
    // 0x214ecc: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x214eccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x214ed0: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x214ed0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x214ed4: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x214ed4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x214ed8: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x214ed8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x214edc: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x214edcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x214ee0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x214ee0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x214ee4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x214ee4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x214ee8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x214ee8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x214eec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x214eecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x214ef0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x214ef0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x214ef4: 0x3e00008  jr          $ra
    ctx->pc = 0x214EF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x214EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214EF4u;
        // 0x214ef8: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x214EF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x214EFCu;
    // 0x214efc: 0x0  nop
    ctx->pc = 0x214efcu;
    // NOP
    ctx->pc = 0x214f00u;
}
