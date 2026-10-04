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

// Function: FUN_00234bb0
// Address: 0x234bb0 - 0x234c28
void FUN_00234bb0_0x234bb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00234bb0_0x234bb0");
#endif

    switch (ctx->pc) {
        case 0x234bd8u: goto label_234bd8;
        case 0x234be8u: goto label_234be8;
        case 0x234c08u: goto label_234c08;
        case 0x234c14u: goto label_234c14;
        default: break;
    }

    ctx->pc = 0x234bb0u;

    // 0x234bb0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x234bb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x234bb4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x234bb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x234bb8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x234bb8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234bbc: 0x8f8482e4  lw          $a0, -0x7D1C($gp)
    ctx->pc = 0x234bbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935268)));
    // 0x234bc0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x234bc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x234bc4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x234bc4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234bc8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x234bc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x234bcc: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x234bccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x234bd0: 0xc08dbf8  jal         func_236FE0
    ctx->pc = 0x234BD0u;
    SET_GPR_U32(ctx, 31, 0x234BD8u);
    ctx->pc = 0x234BD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234BD0u;
    // 0x234bd4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236FE0u, 0x234BD0u, 0x234BD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234BD8u;
label_234bd8:
    // 0x234bd8: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x234BD8u;
    {
        const bool branch_taken_0x234bd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x234BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234BD8u;
        // 0x234bdc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234bd8) {
            ctx->pc = 0x234C18u;
            goto label_234c18;
        }
    }
    ctx->pc = 0x234BE0u;
    // 0x234be0: 0xc08d17c  jal         func_2345F0
    ctx->pc = 0x234BE0u;
    SET_GPR_U32(ctx, 31, 0x234BE8u);
    ctx->pc = 0x2345F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2345F0u, 0x234BE0u, 0x234BE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234BE8u;
label_234be8:
    // 0x234be8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x234be8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234bec: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x234becu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234bf0: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x234bf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x234bf4: 0x16200005  bnez        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x234BF4u;
    {
        const bool branch_taken_0x234bf4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x234BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234BF4u;
        // 0x234bf8: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234bf4) {
            ctx->pc = 0x234C0Cu;
            goto label_234c0c;
        }
    }
    ctx->pc = 0x234BFCu;
    // 0x234bfc: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x234bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x234c00: 0xc08d192  jal         func_234648
    ctx->pc = 0x234C00u;
    SET_GPR_U32(ctx, 31, 0x234C08u);
    ctx->pc = 0x234C04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234C00u;
    // 0x234c04: 0xac52ad00  sw          $s2, -0x5300($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294946048), GPR_U32(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x234648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x234648u, 0x234C00u, 0x234C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234C08u;
label_234c08:
    // 0x234c08: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x234c08u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_234c0c:
    // 0x234c0c: 0xc069210  jal         func_1A4840
    ctx->pc = 0x234C0Cu;
    SET_GPR_U32(ctx, 31, 0x234C14u);
    ctx->pc = 0x234C10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234C0Cu;
    // 0x234c10: 0x8f8482e4  lw          $a0, -0x7D1C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935268)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4840u, 0x234C0Cu, 0x234C14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234C14u;
label_234c14:
    // 0x234c14: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x234c14u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_234c18:
    // 0x234c18: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x234c18u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x234c1c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x234c1cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x234c20: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x234c20u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x234c24: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x234c24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    ctx->pc = 0x234c28u;
}
