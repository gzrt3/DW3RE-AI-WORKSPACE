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

// Function: entry_0024a418
// Address: 0x24a418 - 0x24a480
void entry_0024a418_0x24a418(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0024a418_0x24a418");
#endif

    ctx->pc = 0x24a418u;

    // 0x24a418: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x24a418u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24a41c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x24a41cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24a420: 0x3e00008  jr          $ra
    ctx->pc = 0x24A420u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24A424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A420u;
        // 0x24a424: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24A420u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24A428u;
    // 0x24a428: 0x0  nop
    ctx->pc = 0x24a428u;
    // NOP
    // 0x24a42c: 0x0  nop
    ctx->pc = 0x24a42cu;
    // NOP
    // 0x24a430: 0x8f8792fc  lw          $a3, -0x6D04($gp)
    ctx->pc = 0x24a430u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939388)));
    // 0x24a434: 0x8ce60014  lw          $a2, 0x14($a3)
    ctx->pc = 0x24a434u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x24a438: 0x8ce40008  lw          $a0, 0x8($a3)
    ctx->pc = 0x24a438u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x24a43c: 0x8ce30010  lw          $v1, 0x10($a3)
    ctx->pc = 0x24a43cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x24a440: 0x62880  sll         $a1, $a2, 2
    ctx->pc = 0x24a440u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x24a444: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x24a444u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x24a448: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x24a448u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x24a44c: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x24a44cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x24a450: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x24a450u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x24a454: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x24a454u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x24a458: 0x64182b  sltu        $v1, $v1, $a0
    ctx->pc = 0x24a458u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x24a45c: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x24a45cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x24a460: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x24A460u;
    {
        const bool branch_taken_0x24a460 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A460u;
        // 0x24a464: 0x3c030025  lui         $v1, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a460) {
            ctx->pc = 0x24A470u;
            goto label_24a470;
        }
    }
    ctx->pc = 0x24A468u;
    // 0x24a468: 0x2463a050  addiu       $v1, $v1, -0x5FB0
    ctx->pc = 0x24a468u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294942800));
    // 0x24a46c: 0xace30018  sw          $v1, 0x18($a3)
    ctx->pc = 0x24a46cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 3));
label_24a470:
    // 0x24a470: 0x3e00008  jr          $ra
    ctx->pc = 0x24A470u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24A470u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24A478u;
    // 0x24a478: 0x0  nop
    ctx->pc = 0x24a478u;
    // NOP
    // 0x24a47c: 0x0  nop
    ctx->pc = 0x24a47cu;
    // NOP
    ctx->pc = 0x24a480u;
}
