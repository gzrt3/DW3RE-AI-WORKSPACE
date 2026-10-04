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

// Function: FUN_0023a840
// Address: 0x23a840 - 0x23a8dc
void FUN_0023a840_0x23a840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0023a840_0x23a840");
#endif

    switch (ctx->pc) {
        case 0x23a86cu: goto label_23a86c;
        case 0x23a8b0u: goto label_23a8b0;
        default: break;
    }

    ctx->pc = 0x23a840u;

    // 0x23a840: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x23a840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x23a844: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23a844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x23a848: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x23a848u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23a84c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x23a84cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x23a850: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x23a850u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23a854: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x23a854u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x23a858: 0x8e03004c  lw          $v1, 0x4C($s0)
    ctx->pc = 0x23a858u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x23a85c: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x23A85Cu;
    {
        const bool branch_taken_0x23a85c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x23A860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A85Cu;
        // 0x23a860: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a85c) {
            ctx->pc = 0x23A878u;
            goto label_23a878;
        }
    }
    ctx->pc = 0x23A864u;
    // 0x23a864: 0xc08dc64  jal         func_237190
    ctx->pc = 0x23A864u;
    SET_GPR_U32(ctx, 31, 0x23A86Cu);
    ctx->pc = 0x23A868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23A864u;
    // 0x23a868: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x237190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x237190u, 0x23A864u, 0x23A86Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A86Cu;
label_23a86c:
    // 0x23a86c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x23a86cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23a870: 0x10600017  beqz        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x23A870u;
    {
        const bool branch_taken_0x23a870 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A870u;
        // 0x23a874: 0xae03004c  sw          $v1, 0x4C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a870) {
            ctx->pc = 0x23A8D0u;
            goto label_23a8d0;
        }
    }
    ctx->pc = 0x23A878u;
label_23a878:
    // 0x23a878: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x23a878u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x23a87c: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x23a87cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x23a880: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x23a880u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x23a884: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x23A884u;
    {
        const bool branch_taken_0x23a884 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A884u;
        // 0x23a888: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a884) {
            ctx->pc = 0x23A898u;
            goto label_23a898;
        }
    }
    ctx->pc = 0x23A88Cu;
    // 0x23a88c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x23a88cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x23a890: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x23A890u;
    {
        const bool branch_taken_0x23a890 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A890u;
        // 0x23a894: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a890) {
            ctx->pc = 0x23A8C4u;
            goto label_23a8c4;
        }
    }
    ctx->pc = 0x23A898u;
label_23a898:
    // 0x23a898: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23a898u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23a89c: 0x2228004  sllv        $s0, $v0, $s1
    ctx->pc = 0x23a89cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 17) & 0x1F));
    // 0x23a8a0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x23a8a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23a8a4: 0x103080  sll         $a2, $s0, 2
    ctx->pc = 0x23a8a4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x23a8a8: 0xc08dc64  jal         func_237190
    ctx->pc = 0x23A8A8u;
    SET_GPR_U32(ctx, 31, 0x23A8B0u);
    ctx->pc = 0x23A8ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23A8A8u;
    // 0x23a8ac: 0x24c60014  addiu       $a2, $a2, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x237190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x237190u, 0x23A8A8u, 0x23A8B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A8B0u;
label_23a8b0:
    // 0x23a8b0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x23a8b0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23a8b4: 0x50600007  beql        $v1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x23A8B4u;
    {
        const bool branch_taken_0x23a8b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x23a8b4) {
            ctx->pc = 0x23A8B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23A8B4u;
            // 0x23a8b8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23A8D4u;
            goto label_23a8d4;
        }
    }
    ctx->pc = 0x23A8BCu;
    // 0x23a8bc: 0xac710004  sw          $s1, 0x4($v1)
    ctx->pc = 0x23a8bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 17));
    // 0x23a8c0: 0xac700008  sw          $s0, 0x8($v1)
    ctx->pc = 0x23a8c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 16));
label_23a8c4:
    // 0x23a8c4: 0xac600010  sw          $zero, 0x10($v1)
    ctx->pc = 0x23a8c4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 0));
    // 0x23a8c8: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x23a8c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23a8cc: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x23a8ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
label_23a8d0:
    // 0x23a8d0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23a8d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_23a8d4:
    // 0x23a8d4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x23a8d4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x23a8d8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x23a8d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->pc = 0x23a8dcu;
}
