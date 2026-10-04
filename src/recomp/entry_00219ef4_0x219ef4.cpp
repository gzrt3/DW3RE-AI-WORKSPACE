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

// Function: entry_00219ef4
// Address: 0x219ef4 - 0x219f34
void entry_00219ef4_0x219ef4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00219ef4_0x219ef4");
#endif

    switch (ctx->pc) {
        case 0x219efcu: goto label_219efc;
        case 0x219f04u: goto label_219f04;
        default: break;
    }

    ctx->pc = 0x219ef4u;

    // 0x219ef4: 0xc08683c  jal         func_21A0F0
    ctx->pc = 0x219EF4u;
    SET_GPR_U32(ctx, 31, 0x219EFCu);
    ctx->pc = 0x21A0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A0F0u, 0x219EF4u, 0x219EFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219EFCu;
label_219efc:
    // 0x219efc: 0xc086920  jal         func_21A480
    ctx->pc = 0x219EFCu;
    SET_GPR_U32(ctx, 31, 0x219F04u);
    ctx->pc = 0x21A480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A480u, 0x219EFCu, 0x219F04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219F04u;
label_219f04:
    // 0x219f04: 0x8f8492bc  lw          $a0, -0x6D44($gp)
    ctx->pc = 0x219f04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939324)));
    // 0x219f08: 0x8f8292b8  lw          $v0, -0x6D48($gp)
    ctx->pc = 0x219f08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939320)));
    // 0x219f0c: 0x10820020  beq         $a0, $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x219F0Cu;
    {
        const bool branch_taken_0x219f0c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x219F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219F0Cu;
        // 0x219f10: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219f0c) {
            ctx->pc = 0x219F90u;
            return;
        }
    }
    ctx->pc = 0x219F14u;
    // 0x219f14: 0x1443000a  bne         $v0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x219F14u;
    {
        const bool branch_taken_0x219f14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x219f14) {
            ctx->pc = 0x219F40u;
            return;
        }
    }
    ctx->pc = 0x219F1Cu;
    // 0x219f1c: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x219F1Cu;
    {
        const bool branch_taken_0x219f1c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x219F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219F1Cu;
        // 0x219f20: 0x24020015  addiu       $v0, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219f1c) {
            ctx->pc = 0x219F34u;
            return;
        }
    }
    ctx->pc = 0x219F24u;
    // 0x219f24: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x219f24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x219f28: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x219f28u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x219f2c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x219F2Cu;
    {
        const bool branch_taken_0x219f2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x219F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219F2Cu;
        // 0x219f30: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219f2c) {
            ctx->pc = 0x219F90u;
            return;
        }
    }
    ctx->pc = 0x219F34u;
}
