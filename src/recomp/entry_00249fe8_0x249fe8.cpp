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

// Function: entry_00249fe8
// Address: 0x249fe8 - 0x24a050
void entry_00249fe8_0x249fe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00249fe8_0x249fe8");
#endif

    ctx->pc = 0x249fe8u;

    // 0x249fe8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x249fe8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x249fec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x249fecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x249ff0: 0x3e00008  jr          $ra
    ctx->pc = 0x249FF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x249FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249FF0u;
        // 0x249ff4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x249FF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x249FF8u;
    // 0x249ff8: 0x0  nop
    ctx->pc = 0x249ff8u;
    // NOP
    // 0x249ffc: 0x0  nop
    ctx->pc = 0x249ffcu;
    // NOP
    // 0x24a000: 0x8f8792fc  lw          $a3, -0x6D04($gp)
    ctx->pc = 0x24a000u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939388)));
    // 0x24a004: 0x8ce60014  lw          $a2, 0x14($a3)
    ctx->pc = 0x24a004u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x24a008: 0x8ce40008  lw          $a0, 0x8($a3)
    ctx->pc = 0x24a008u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x24a00c: 0x8ce30010  lw          $v1, 0x10($a3)
    ctx->pc = 0x24a00cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x24a010: 0x62880  sll         $a1, $a2, 2
    ctx->pc = 0x24a010u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x24a014: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x24a014u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x24a018: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x24a018u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x24a01c: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x24a01cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x24a020: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x24a020u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x24a024: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x24a024u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x24a028: 0x64182b  sltu        $v1, $v1, $a0
    ctx->pc = 0x24a028u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x24a02c: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x24a02cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x24a030: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x24A030u;
    {
        const bool branch_taken_0x24a030 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A030u;
        // 0x24a034: 0x3c030025  lui         $v1, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a030) {
            ctx->pc = 0x24A040u;
            goto label_24a040;
        }
    }
    ctx->pc = 0x24A038u;
    // 0x24a038: 0x24639c40  addiu       $v1, $v1, -0x63C0
    ctx->pc = 0x24a038u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941760));
    // 0x24a03c: 0xace30018  sw          $v1, 0x18($a3)
    ctx->pc = 0x24a03cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 3));
label_24a040:
    // 0x24a040: 0x3e00008  jr          $ra
    ctx->pc = 0x24A040u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24A040u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24A048u;
    // 0x24a048: 0x0  nop
    ctx->pc = 0x24a048u;
    // NOP
    // 0x24a04c: 0x0  nop
    ctx->pc = 0x24a04cu;
    // NOP
    ctx->pc = 0x24a050u;
}
