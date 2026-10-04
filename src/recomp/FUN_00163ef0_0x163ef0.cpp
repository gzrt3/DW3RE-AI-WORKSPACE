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

// Function: FUN_00163ef0
// Address: 0x163ef0 - 0x163f5c
void FUN_00163ef0_0x163ef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00163ef0_0x163ef0");
#endif

    switch (ctx->pc) {
        case 0x163ef0u: goto label_163ef0;
        case 0x163ef4u: goto label_163ef4;
        case 0x163ef8u: goto label_163ef8;
        case 0x163efcu: goto label_163efc;
        case 0x163f00u: goto label_163f00;
        case 0x163f04u: goto label_163f04;
        case 0x163f08u: goto label_163f08;
        case 0x163f0cu: goto label_163f0c;
        case 0x163f10u: goto label_163f10;
        case 0x163f14u: goto label_163f14;
        case 0x163f18u: goto label_163f18;
        case 0x163f1cu: goto label_163f1c;
        case 0x163f20u: goto label_163f20;
        case 0x163f24u: goto label_163f24;
        case 0x163f28u: goto label_163f28;
        case 0x163f2cu: goto label_163f2c;
        case 0x163f30u: goto label_163f30;
        case 0x163f34u: goto label_163f34;
        case 0x163f38u: goto label_163f38;
        case 0x163f3cu: goto label_163f3c;
        case 0x163f40u: goto label_163f40;
        case 0x163f44u: goto label_163f44;
        case 0x163f48u: goto label_163f48;
        case 0x163f4cu: goto label_163f4c;
        case 0x163f50u: goto label_163f50;
        case 0x163f54u: goto label_163f54;
        case 0x163f58u: goto label_163f58;
        default: break;
    }

    ctx->pc = 0x163ef0u;

label_163ef0:
    // 0x163ef0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x163ef0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_163ef4:
    // 0x163ef4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x163ef4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_163ef8:
    // 0x163ef8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x163ef8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_163efc:
    // 0x163efc: 0x8f908698  lw          $s0, -0x7968($gp)
    ctx->pc = 0x163efcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936216)));
label_163f00:
    // 0x163f00: 0x12000014  beqz        $s0, . + 4 + (0x14 << 2)
label_163f04:
    if (ctx->pc == 0x163F04u) {
        ctx->pc = 0x163F08u;
        goto label_163f08;
    }
    ctx->pc = 0x163F00u;
    {
        const bool branch_taken_0x163f00 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x163f00) {
            ctx->pc = 0x163F54u;
            goto label_163f54;
        }
    }
    ctx->pc = 0x163F08u;
label_163f08:
    // 0x163f08: 0x96040000  lhu         $a0, 0x0($s0)
    ctx->pc = 0x163f08u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_163f0c:
    // 0x163f0c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x163f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_163f10:
    // 0x163f10: 0x14830005  bne         $a0, $v1, . + 4 + (0x5 << 2)
label_163f14:
    if (ctx->pc == 0x163F14u) {
        ctx->pc = 0x163F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163F10u;
        // 0x163f14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163F18u;
        goto label_163f18;
    }
    ctx->pc = 0x163F10u;
    {
        const bool branch_taken_0x163f10 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x163F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163F10u;
        // 0x163f14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163f10) {
            ctx->pc = 0x163F28u;
            goto label_163f28;
        }
    }
    ctx->pc = 0x163F18u;
label_163f18:
    // 0x163f18: 0xc0591f8  jal         func_1647E0
label_163f1c:
    if (ctx->pc == 0x163F1Cu) {
        ctx->pc = 0x163F20u;
        goto label_163f20;
    }
    ctx->pc = 0x163F18u;
    SET_GPR_U32(ctx, 31, 0x163F20u);
    ctx->pc = 0x1647E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1647E0u, 0x163F18u, 0x163F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163F20u;
label_163f20:
    // 0x163f20: 0x10000009  b           . + 4 + (0x9 << 2)
label_163f24:
    if (ctx->pc == 0x163F24u) {
        ctx->pc = 0x163F28u;
        goto label_163f28;
    }
    ctx->pc = 0x163F20u;
    {
        const bool branch_taken_0x163f20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x163f20) {
            ctx->pc = 0x163F48u;
            goto label_163f48;
        }
    }
    ctx->pc = 0x163F28u;
label_163f28:
    // 0x163f28: 0x8e030364  lw          $v1, 0x364($s0)
    ctx->pc = 0x163f28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 868)));
label_163f2c:
    // 0x163f2c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_163f30:
    if (ctx->pc == 0x163F30u) {
        ctx->pc = 0x163F34u;
        goto label_163f34;
    }
    ctx->pc = 0x163F2Cu;
    {
        const bool branch_taken_0x163f2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x163f2c) {
            ctx->pc = 0x163F48u;
            goto label_163f48;
        }
    }
    ctx->pc = 0x163F34u;
label_163f34:
    // 0x163f34: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x163f34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_163f38:
    // 0x163f38: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x163f38u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
label_163f3c:
    // 0x163f3c: 0x8e020364  lw          $v0, 0x364($s0)
    ctx->pc = 0x163f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 868)));
label_163f40:
    // 0x163f40: 0x40f809  jalr        $v0
label_163f44:
    if (ctx->pc == 0x163F44u) {
        ctx->pc = 0x163F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163F40u;
        // 0x163f44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163F48u;
        goto label_163f48;
    }
    ctx->pc = 0x163F40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x163F48u);
        ctx->pc = 0x163F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163F40u;
        // 0x163f44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x163F40u, 0x163F48u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x163F48u;
label_163f48:
    // 0x163f48: 0x8e100008  lw          $s0, 0x8($s0)
    ctx->pc = 0x163f48u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_163f4c:
    // 0x163f4c: 0x1600ffee  bnez        $s0, . + 4 + (-0x12 << 2)
label_163f50:
    if (ctx->pc == 0x163F50u) {
        ctx->pc = 0x163F54u;
        goto label_163f54;
    }
    ctx->pc = 0x163F4Cu;
    {
        const bool branch_taken_0x163f4c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x163f4c) {
            ctx->pc = 0x163F08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_163f08;
        }
    }
    ctx->pc = 0x163F54u;
label_163f54:
    // 0x163f54: 0x0  nop
    ctx->pc = 0x163f54u;
    // NOP
label_163f58:
    // 0x163f58: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x163f58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->pc = 0x163f5cu;
}
