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

// Function: FUN_00234fa0
// Address: 0x234fa0 - 0x235058
void FUN_00234fa0_0x234fa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00234fa0_0x234fa0");
#endif

    switch (ctx->pc) {
        case 0x234fe8u: goto label_234fe8;
        case 0x234ff8u: goto label_234ff8;
        case 0x235028u: goto label_235028;
        case 0x235034u: goto label_235034;
        default: break;
    }

    ctx->pc = 0x234fa0u;

    // 0x234fa0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x234fa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x234fa4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x234fa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x234fa8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x234fa8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234fac: 0x8f8482e4  lw          $a0, -0x7D1C($gp)
    ctx->pc = 0x234facu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935268)));
    // 0x234fb0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x234fb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x234fb4: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x234fb4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234fb8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x234fb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234fbc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x234fbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x234fc0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x234fc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x234fc4: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x234fc4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234fc8: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x234fc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x234fcc: 0x30f500ff  andi        $s5, $a3, 0xFF
    ctx->pc = 0x234fccu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x234fd0: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x234fd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x234fd4: 0x311600ff  andi        $s6, $t0, 0xFF
    ctx->pc = 0x234fd4u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
    // 0x234fd8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x234fd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x234fdc: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x234fdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x234fe0: 0xc08dbf8  jal         func_236FE0
    ctx->pc = 0x234FE0u;
    SET_GPR_U32(ctx, 31, 0x234FE8u);
    ctx->pc = 0x234FE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234FE0u;
    // 0x234fe4: 0x313200ff  andi        $s2, $t1, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x236FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236FE0u, 0x234FE0u, 0x234FE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234FE8u;
label_234fe8:
    // 0x234fe8: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x234FE8u;
    {
        const bool branch_taken_0x234fe8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x234FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234FE8u;
        // 0x234fec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234fe8) {
            ctx->pc = 0x235038u;
            goto label_235038;
        }
    }
    ctx->pc = 0x234FF0u;
    // 0x234ff0: 0xc08d17c  jal         func_2345F0
    ctx->pc = 0x234FF0u;
    SET_GPR_U32(ctx, 31, 0x234FF8u);
    ctx->pc = 0x2345F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2345F0u, 0x234FF0u, 0x234FF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234FF8u;
label_234ff8:
    // 0x234ff8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x234ff8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234ffc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x234ffcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235000: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x235000u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x235004: 0x2442ad00  addiu       $v0, $v0, -0x5300
    ctx->pc = 0x235004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946048));
    // 0x235008: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x235008u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23500c: 0x16000007  bnez        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x23500Cu;
    {
        const bool branch_taken_0x23500c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x235010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23500Cu;
        // 0x235010: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23500c) {
            ctx->pc = 0x23502Cu;
            goto label_23502c;
        }
    }
    ctx->pc = 0x235014u;
    // 0x235014: 0xac52000c  sw          $s2, 0xC($v0)
    ctx->pc = 0x235014u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 18));
    // 0x235018: 0xac540000  sw          $s4, 0x0($v0)
    ctx->pc = 0x235018u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 20));
    // 0x23501c: 0xac550004  sw          $s5, 0x4($v0)
    ctx->pc = 0x23501cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 21));
    // 0x235020: 0xc08d192  jal         func_234648
    ctx->pc = 0x235020u;
    SET_GPR_U32(ctx, 31, 0x235028u);
    ctx->pc = 0x235024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235020u;
    // 0x235024: 0xac560008  sw          $s6, 0x8($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 22));
    ctx->in_delay_slot = false;
    ctx->pc = 0x234648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x234648u, 0x235020u, 0x235028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235028u;
label_235028:
    // 0x235028: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x235028u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23502c:
    // 0x23502c: 0xc069210  jal         func_1A4840
    ctx->pc = 0x23502Cu;
    SET_GPR_U32(ctx, 31, 0x235034u);
    ctx->pc = 0x235030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23502Cu;
    // 0x235030: 0x8f8482e4  lw          $a0, -0x7D1C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935268)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4840u, 0x23502Cu, 0x235034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235034u;
label_235034:
    // 0x235034: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x235034u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_235038:
    // 0x235038: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x235038u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23503c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x23503cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x235040: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x235040u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x235044: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x235044u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x235048: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x235048u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23504c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x23504cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x235050: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x235050u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x235054: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x235054u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    ctx->pc = 0x235058u;
}
