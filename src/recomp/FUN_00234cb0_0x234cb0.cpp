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

// Function: FUN_00234cb0
// Address: 0x234cb0 - 0x234d28
void FUN_00234cb0_0x234cb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00234cb0_0x234cb0");
#endif

    switch (ctx->pc) {
        case 0x234cd8u: goto label_234cd8;
        case 0x234ce8u: goto label_234ce8;
        case 0x234d08u: goto label_234d08;
        case 0x234d14u: goto label_234d14;
        default: break;
    }

    ctx->pc = 0x234cb0u;

    // 0x234cb0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x234cb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x234cb4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x234cb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x234cb8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x234cb8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234cbc: 0x8f8482e4  lw          $a0, -0x7D1C($gp)
    ctx->pc = 0x234cbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935268)));
    // 0x234cc0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x234cc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x234cc4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x234cc4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234cc8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x234cc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x234ccc: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x234cccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x234cd0: 0xc08dbf8  jal         func_236FE0
    ctx->pc = 0x234CD0u;
    SET_GPR_U32(ctx, 31, 0x234CD8u);
    ctx->pc = 0x234CD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234CD0u;
    // 0x234cd4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236FE0u, 0x234CD0u, 0x234CD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234CD8u;
label_234cd8:
    // 0x234cd8: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x234CD8u;
    {
        const bool branch_taken_0x234cd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x234CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234CD8u;
        // 0x234cdc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234cd8) {
            ctx->pc = 0x234D18u;
            goto label_234d18;
        }
    }
    ctx->pc = 0x234CE0u;
    // 0x234ce0: 0xc08d17c  jal         func_2345F0
    ctx->pc = 0x234CE0u;
    SET_GPR_U32(ctx, 31, 0x234CE8u);
    ctx->pc = 0x2345F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2345F0u, 0x234CE0u, 0x234CE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234CE8u;
label_234ce8:
    // 0x234ce8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x234ce8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234cec: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x234cecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234cf0: 0x24050023  addiu       $a1, $zero, 0x23
    ctx->pc = 0x234cf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x234cf4: 0x16200005  bnez        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x234CF4u;
    {
        const bool branch_taken_0x234cf4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x234CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234CF4u;
        // 0x234cf8: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234cf4) {
            ctx->pc = 0x234D0Cu;
            goto label_234d0c;
        }
    }
    ctx->pc = 0x234CFCu;
    // 0x234cfc: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x234cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x234d00: 0xc08d192  jal         func_234648
    ctx->pc = 0x234D00u;
    SET_GPR_U32(ctx, 31, 0x234D08u);
    ctx->pc = 0x234D04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234D00u;
    // 0x234d04: 0xac52ad00  sw          $s2, -0x5300($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294946048), GPR_U32(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x234648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x234648u, 0x234D00u, 0x234D08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234D08u;
label_234d08:
    // 0x234d08: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x234d08u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_234d0c:
    // 0x234d0c: 0xc069210  jal         func_1A4840
    ctx->pc = 0x234D0Cu;
    SET_GPR_U32(ctx, 31, 0x234D14u);
    ctx->pc = 0x234D10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234D0Cu;
    // 0x234d10: 0x8f8482e4  lw          $a0, -0x7D1C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935268)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4840u, 0x234D0Cu, 0x234D14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234D14u;
label_234d14:
    // 0x234d14: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x234d14u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_234d18:
    // 0x234d18: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x234d18u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x234d1c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x234d1cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x234d20: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x234d20u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x234d24: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x234d24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    ctx->pc = 0x234d28u;
}
