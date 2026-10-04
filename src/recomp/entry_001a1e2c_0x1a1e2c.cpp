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

// Function: entry_001a1e2c
// Address: 0x1a1e2c - 0x1a1e88
void entry_001a1e2c_0x1a1e2c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a1e2c_0x1a1e2c");
#endif

    switch (ctx->pc) {
        case 0x1a1e34u: goto label_1a1e34;
        case 0x1a1e48u: goto label_1a1e48;
        case 0x1a1e5cu: goto label_1a1e5c;
        default: break;
    }

    ctx->pc = 0x1a1e2cu;

    // 0x1a1e2c: 0xc0685e2  jal         func_1A1788
    ctx->pc = 0x1A1E2Cu;
    SET_GPR_U32(ctx, 31, 0x1A1E34u);
    ctx->pc = 0x1A1E30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1E2Cu;
    // 0x1a1e30: 0x24050018  addiu       $a1, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1788u, 0x1A1E2Cu, 0x1A1E34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1E34u;
label_1a1e34:
    // 0x1a1e34: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a1e34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a1e38: 0x14430013  bne         $v0, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x1A1E38u;
    {
        const bool branch_taken_0x1a1e38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1A1E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1E38u;
        // 0x1a1e3c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1e38) {
            ctx->pc = 0x1A1E88u;
            return;
        }
    }
    ctx->pc = 0x1A1E40u;
    // 0x1a1e40: 0xc0685e2  jal         func_1A1788
    ctx->pc = 0x1A1E40u;
    SET_GPR_U32(ctx, 31, 0x1A1E48u);
    ctx->pc = 0x1A1E44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1E40u;
    // 0x1a1e44: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1788u, 0x1A1E40u, 0x1A1E48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1E48u;
label_1a1e48:
    // 0x1a1e48: 0x240301ba  addiu       $v1, $zero, 0x1BA
    ctx->pc = 0x1a1e48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 442));
    // 0x1a1e4c: 0x1043000e  beq         $v0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x1A1E4Cu;
    {
        const bool branch_taken_0x1a1e4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1A1E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1E4Cu;
        // 0x1a1e50: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1e4c) {
            ctx->pc = 0x1A1E88u;
            return;
        }
    }
    ctx->pc = 0x1A1E54u;
    // 0x1a1e54: 0xc0685e2  jal         func_1A1788
    ctx->pc = 0x1A1E54u;
    SET_GPR_U32(ctx, 31, 0x1A1E5Cu);
    ctx->pc = 0x1A1E58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1E54u;
    // 0x1a1e58: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1788u, 0x1A1E54u, 0x1A1E5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1E5Cu;
label_1a1e5c:
    // 0x1a1e5c: 0x240301b9  addiu       $v1, $zero, 0x1B9
    ctx->pc = 0x1a1e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 441));
    // 0x1a1e60: 0x10430009  beq         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1A1E60u;
    {
        const bool branch_taken_0x1a1e60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1A1E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1E60u;
        // 0x1a1e64: 0x2c0802d  daddu       $s0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1e60) {
            ctx->pc = 0x1A1E88u;
            return;
        }
    }
    ctx->pc = 0x1A1E68u;
    // 0x1a1e68: 0xde230018  ld          $v1, 0x18($s1)
    ctx->pc = 0x1a1e68u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x1a1e6c: 0x70102b  sltu        $v0, $v1, $s0
    ctx->pc = 0x1a1e6cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x1a1e70: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1A1E70u;
    {
        const bool branch_taken_0x1a1e70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1E70u;
        // 0x1a1e74: 0x2c3102b  sltu        $v0, $s6, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1e70) {
            ctx->pc = 0x1A1E90u;
            return;
        }
    }
    ctx->pc = 0x1A1E78u;
    // 0x1a1e78: 0x16a0ffb3  bnez        $s5, . + 4 + (-0x4D << 2)
    ctx->pc = 0x1A1E78u;
    {
        const bool branch_taken_0x1a1e78 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A1E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1E78u;
        // 0x1a1e7c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1e78) {
            ctx->pc = 0x1A1D48u;
            return;
        }
    }
    ctx->pc = 0x1A1E80u;
    // 0x1a1e80: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1A1E80u;
    {
        const bool branch_taken_0x1a1e80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a1e80) {
            ctx->pc = 0x1A1E90u;
            return;
        }
    }
    ctx->pc = 0x1A1E88u;
}
