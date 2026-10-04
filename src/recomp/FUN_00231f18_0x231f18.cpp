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

// Function: FUN_00231f18
// Address: 0x231f18 - 0x231f54
void FUN_00231f18_0x231f18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00231f18_0x231f18");
#endif

    ctx->pc = 0x231f18u;

    // 0x231f18: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x231f18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x231f1c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x231f1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231f20: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x231f20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x231f24: 0x8ca20048  lw          $v0, 0x48($a1)
    ctx->pc = 0x231f24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 72)));
    // 0x231f28: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x231F28u;
    {
        const bool branch_taken_0x231f28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x231F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231F28u;
        // 0x231f2c: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231f28) {
            ctx->pc = 0x231F50u;
            goto label_231f50;
        }
    }
    ctx->pc = 0x231F30u;
    // 0x231f30: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x231f30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x231f34: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x231f34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x231f38: 0x14440005  bne         $v0, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x231F38u;
    {
        const bool branch_taken_0x231f38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x231F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231F38u;
        // 0x231f3c: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231f38) {
            ctx->pc = 0x231F50u;
            goto label_231f50;
        }
    }
    ctx->pc = 0x231F40u;
    // 0x231f40: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x231f40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x231f44: 0x808dbb8  j           func_236EE0
    ctx->pc = 0x231F44u;
    ctx->pc = 0x231F48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231F44u;
    // 0x231f48: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236EE0u;
    FUN_00236ee0_0x236ee0(rdram, ctx, runtime); return;
    ctx->pc = 0x231F4Cu;
    // 0x231f4c: 0x0  nop
    ctx->pc = 0x231f4cu;
    // NOP
label_231f50:
    // 0x231f50: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x231f50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x231f54u;
}
