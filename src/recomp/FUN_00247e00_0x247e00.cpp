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

// Function: FUN_00247e00
// Address: 0x247e00 - 0x247e74
void FUN_00247e00_0x247e00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00247e00_0x247e00");
#endif

    switch (ctx->pc) {
        case 0x247e00u: goto label_247e00;
        case 0x247e04u: goto label_247e04;
        case 0x247e08u: goto label_247e08;
        case 0x247e0cu: goto label_247e0c;
        case 0x247e10u: goto label_247e10;
        case 0x247e14u: goto label_247e14;
        case 0x247e18u: goto label_247e18;
        case 0x247e1cu: goto label_247e1c;
        case 0x247e20u: goto label_247e20;
        case 0x247e24u: goto label_247e24;
        case 0x247e28u: goto label_247e28;
        case 0x247e2cu: goto label_247e2c;
        case 0x247e30u: goto label_247e30;
        case 0x247e34u: goto label_247e34;
        case 0x247e38u: goto label_247e38;
        case 0x247e3cu: goto label_247e3c;
        case 0x247e40u: goto label_247e40;
        case 0x247e44u: goto label_247e44;
        case 0x247e48u: goto label_247e48;
        case 0x247e4cu: goto label_247e4c;
        case 0x247e50u: goto label_247e50;
        case 0x247e54u: goto label_247e54;
        case 0x247e58u: goto label_247e58;
        case 0x247e5cu: goto label_247e5c;
        case 0x247e60u: goto label_247e60;
        case 0x247e64u: goto label_247e64;
        case 0x247e68u: goto label_247e68;
        case 0x247e6cu: goto label_247e6c;
        case 0x247e70u: goto label_247e70;
        default: break;
    }

    ctx->pc = 0x247e00u;

label_247e00:
    // 0x247e00: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x247e00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_247e04:
    // 0x247e04: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x247e04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_247e08:
    // 0x247e08: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x247e08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_247e0c:
    // 0x247e0c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x247e0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_247e10:
    // 0x247e10: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x247e10u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_247e14:
    // 0x247e14: 0x8c840040  lw          $a0, 0x40($a0)
    ctx->pc = 0x247e14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
label_247e18:
    // 0x247e18: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x247e18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_247e1c:
    // 0x247e1c: 0x3c050024  lui         $a1, 0x24
    ctx->pc = 0x247e1cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)36 << 16));
label_247e20:
    // 0x247e20: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x247e20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_247e24:
    // 0x247e24: 0x24a57930  addiu       $a1, $a1, 0x7930
    ctx->pc = 0x247e24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31024));
label_247e28:
    // 0x247e28: 0xc18f544  jal         func_63D510
label_247e2c:
    if (ctx->pc == 0x247E2Cu) {
        ctx->pc = 0x247E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247E28u;
        // 0x247e2c: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x247E30u;
        goto label_247e30;
    }
    ctx->pc = 0x247E28u;
    SET_GPR_U32(ctx, 31, 0x247E30u);
    ctx->pc = 0x247E2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247E28u;
    // 0x247e2c: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x63D510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x63D510u, 0x247E28u, 0x247E30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247E30u;
label_247e30:
    // 0x247e30: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x247e30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_247e34:
    // 0x247e34: 0x10c0000e  beqz        $a2, . + 4 + (0xE << 2)
label_247e38:
    if (ctx->pc == 0x247E38u) {
        ctx->pc = 0x247E3Cu;
        goto label_247e3c;
    }
    ctx->pc = 0x247E34u;
    {
        const bool branch_taken_0x247e34 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x247e34) {
            ctx->pc = 0x247E70u;
            goto label_247e70;
        }
    }
    ctx->pc = 0x247E3Cu;
label_247e3c:
    // 0x247e3c: 0x8e231058  lw          $v1, 0x1058($s1)
    ctx->pc = 0x247e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4184)));
label_247e40:
    // 0x247e40: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x247e40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_247e44:
    // 0x247e44: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x247e44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_247e48:
    // 0x247e48: 0xae231058  sw          $v1, 0x1058($s1)
    ctx->pc = 0x247e48u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4184), GPR_U32(ctx, 3));
label_247e4c:
    // 0x247e4c: 0x8e231058  lw          $v1, 0x1058($s1)
    ctx->pc = 0x247e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4184)));
label_247e50:
    // 0x247e50: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
label_247e54:
    if (ctx->pc == 0x247E54u) {
        ctx->pc = 0x247E58u;
        goto label_247e58;
    }
    ctx->pc = 0x247E50u;
    {
        const bool branch_taken_0x247e50 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x247e50) {
            ctx->pc = 0x247E5Cu;
            goto label_247e5c;
        }
    }
    ctx->pc = 0x247E58u;
label_247e58:
    // 0x247e58: 0xae201058  sw          $zero, 0x1058($s1)
    ctx->pc = 0x247e58u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4184), GPR_U32(ctx, 0));
label_247e5c:
    // 0x247e5c: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x247e5cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_247e60:
    // 0x247e60: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x247e60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_247e64:
    // 0x247e64: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x247e64u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_247e68:
    // 0x247e68: 0x320f809  jalr        $t9
label_247e6c:
    if (ctx->pc == 0x247E6Cu) {
        ctx->pc = 0x247E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247E68u;
        // 0x247e6c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x247E70u;
        goto label_247e70;
    }
    ctx->pc = 0x247E68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x247E70u);
        ctx->pc = 0x247E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247E68u;
        // 0x247e6c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x247E68u, 0x247E70u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x247E70u;
label_247e70:
    // 0x247e70: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x247e70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->pc = 0x247e74u;
}
