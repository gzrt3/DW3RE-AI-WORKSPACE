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

// Function: FUN_002388c0
// Address: 0x2388c0 - 0x238930
void FUN_002388c0_0x2388c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_002388c0_0x2388c0");
#endif

    switch (ctx->pc) {
        case 0x2388f4u: goto label_2388f4;
        case 0x23891cu: goto label_23891c;
        default: break;
    }

    ctx->pc = 0x2388c0u;

    // 0x2388c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2388c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2388c4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2388c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2388c8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2388c8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2388cc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2388ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2388d0: 0x128040  sll         $s0, $s2, 1
    ctx->pc = 0x2388d0u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x2388d4: 0x2128021  addu        $s0, $s0, $s2
    ctx->pc = 0x2388d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x2388d8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2388d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2388dc: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x2388dcu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2388e0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2388e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2388e4: 0x2128023  subu        $s0, $s0, $s2
    ctx->pc = 0x2388e4u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x2388e8: 0x1080c0  sll         $s0, $s0, 3
    ctx->pc = 0x2388e8u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x2388ec: 0xc08e708  jal         func_239C20
    ctx->pc = 0x2388ECu;
    SET_GPR_U32(ctx, 31, 0x2388F4u);
    ctx->pc = 0x2388F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2388ECu;
    // 0x2388f0: 0x2605000c  addiu       $a1, $s0, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x239C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x239C20u, 0x2388ECu, 0x2388F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2388F4u;
label_2388f4:
    // 0x2388f4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2388f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2388f8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2388f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2388fc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2388fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238900: 0x2623000c  addiu       $v1, $s1, 0xC
    ctx->pc = 0x238900u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    // 0x238904: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x238904u;
    {
        const bool branch_taken_0x238904 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x238908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238904u;
        // 0x238908: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238904) {
            ctx->pc = 0x238920u;
            goto label_238920;
        }
    }
    ctx->pc = 0x23890Cu;
    // 0x23890c: 0xae320004  sw          $s2, 0x4($s1)
    ctx->pc = 0x23890cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 18));
    // 0x238910: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x238910u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x238914: 0xc08e9ac  jal         func_23A6B0
    ctx->pc = 0x238914u;
    SET_GPR_U32(ctx, 31, 0x23891Cu);
    ctx->pc = 0x238918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238914u;
    // 0x238918: 0xae230008  sw          $v1, 0x8($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A6B0u, 0x238914u, 0x23891Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23891Cu;
label_23891c:
    // 0x23891c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x23891cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_238920:
    // 0x238920: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x238920u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x238924: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x238924u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x238928: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x238928u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23892c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x23892cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    ctx->pc = 0x238930u;
}
