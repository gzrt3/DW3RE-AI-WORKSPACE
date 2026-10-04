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

// Function: FUN_00234d30
// Address: 0x234d30 - 0x234da8
void FUN_00234d30_0x234d30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00234d30_0x234d30");
#endif

    switch (ctx->pc) {
        case 0x234d58u: goto label_234d58;
        case 0x234d68u: goto label_234d68;
        case 0x234d88u: goto label_234d88;
        case 0x234d94u: goto label_234d94;
        default: break;
    }

    ctx->pc = 0x234d30u;

    // 0x234d30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x234d30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x234d34: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x234d34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x234d38: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x234d38u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234d3c: 0x8f8482e4  lw          $a0, -0x7D1C($gp)
    ctx->pc = 0x234d3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935268)));
    // 0x234d40: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x234d40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x234d44: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x234d44u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234d48: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x234d48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x234d4c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x234d4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x234d50: 0xc08dbf8  jal         func_236FE0
    ctx->pc = 0x234D50u;
    SET_GPR_U32(ctx, 31, 0x234D58u);
    ctx->pc = 0x234D54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234D50u;
    // 0x234d54: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236FE0u, 0x234D50u, 0x234D58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234D58u;
label_234d58:
    // 0x234d58: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x234D58u;
    {
        const bool branch_taken_0x234d58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x234D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234D58u;
        // 0x234d5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234d58) {
            ctx->pc = 0x234D98u;
            goto label_234d98;
        }
    }
    ctx->pc = 0x234D60u;
    // 0x234d60: 0xc08d17c  jal         func_2345F0
    ctx->pc = 0x234D60u;
    SET_GPR_U32(ctx, 31, 0x234D68u);
    ctx->pc = 0x2345F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2345F0u, 0x234D60u, 0x234D68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234D68u;
label_234d68:
    // 0x234d68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x234d68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234d6c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x234d6cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234d70: 0x24050024  addiu       $a1, $zero, 0x24
    ctx->pc = 0x234d70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x234d74: 0x16200005  bnez        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x234D74u;
    {
        const bool branch_taken_0x234d74 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x234D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234D74u;
        // 0x234d78: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234d74) {
            ctx->pc = 0x234D8Cu;
            goto label_234d8c;
        }
    }
    ctx->pc = 0x234D7Cu;
    // 0x234d7c: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x234d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x234d80: 0xc08d192  jal         func_234648
    ctx->pc = 0x234D80u;
    SET_GPR_U32(ctx, 31, 0x234D88u);
    ctx->pc = 0x234D84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234D80u;
    // 0x234d84: 0xac52ad00  sw          $s2, -0x5300($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294946048), GPR_U32(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x234648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x234648u, 0x234D80u, 0x234D88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234D88u;
label_234d88:
    // 0x234d88: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x234d88u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_234d8c:
    // 0x234d8c: 0xc069210  jal         func_1A4840
    ctx->pc = 0x234D8Cu;
    SET_GPR_U32(ctx, 31, 0x234D94u);
    ctx->pc = 0x234D90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234D8Cu;
    // 0x234d90: 0x8f8482e4  lw          $a0, -0x7D1C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935268)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4840u, 0x234D8Cu, 0x234D94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234D94u;
label_234d94:
    // 0x234d94: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x234d94u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_234d98:
    // 0x234d98: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x234d98u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x234d9c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x234d9cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x234da0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x234da0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x234da4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x234da4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    ctx->pc = 0x234da8u;
}
