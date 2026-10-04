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

// Function: FUN_0023b7e8
// Address: 0x23b7e8 - 0x23b850
void FUN_0023b7e8_0x23b7e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0023b7e8_0x23b7e8");
#endif

    switch (ctx->pc) {
        case 0x23b828u: goto label_23b828;
        case 0x23b838u: goto label_23b838;
        default: break;
    }

    ctx->pc = 0x23b7e8u;

    // 0x23b7e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x23b7e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x23b7ec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23b7ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x23b7f0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x23b7f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23b7f4: 0x2a020018  slti        $v0, $s0, 0x18
    ctx->pc = 0x23b7f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)24) ? 1 : 0);
    // 0x23b7f8: 0x3404ffc0  ori         $a0, $zero, 0xFFC0
    ctx->pc = 0x23b7f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x23b7fc: 0x423bc  dsll32      $a0, $a0, 14
    ctx->pc = 0x23b7fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 14));
    // 0x23b800: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x23B800u;
    {
        const bool branch_taken_0x23b800 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B800u;
        // 0x23b804: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b800) {
            ctx->pc = 0x23B820u;
            goto label_23b820;
        }
    }
    ctx->pc = 0x23B808u;
    // 0x23b808: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x23b808u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x23b80c: 0x3c02002d  lui         $v0, 0x2D
    ctx->pc = 0x23b80cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
    // 0x23b810: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x23b810u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x23b814: 0xdc42e3b8  ld          $v0, -0x1C48($v0)
    ctx->pc = 0x23b814u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 4294960056)));
    // 0x23b818: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x23B818u;
    {
        const bool branch_taken_0x23b818 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B818u;
        // 0x23b81c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b818) {
            ctx->pc = 0x23B84Cu;
            goto label_23b84c;
        }
    }
    ctx->pc = 0x23B820u;
label_23b820:
    // 0x23b820: 0x1a000008  blez        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x23B820u;
    {
        const bool branch_taken_0x23b820 = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x23b820) {
            ctx->pc = 0x23B844u;
            goto label_23b844;
        }
    }
    ctx->pc = 0x23B828u;
label_23b828:
    // 0x23b828: 0x34058048  ori         $a1, $zero, 0x8048
    ctx->pc = 0x23b828u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32840);
    // 0x23b82c: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x23b82cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x23b830: 0xc06dda4  jal         func_1B7690
    ctx->pc = 0x23B830u;
    SET_GPR_U32(ctx, 31, 0x23B838u);
    ctx->pc = 0x23B834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B830u;
    // 0x23b834: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7690u, 0x23B830u, 0x23B838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B838u;
label_23b838:
    // 0x23b838: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x23b838u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23b83c: 0x1e00fffa  bgtz        $s0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x23B83Cu;
    {
        const bool branch_taken_0x23b83c = (GPR_S32(ctx, 16) > 0);
        if (branch_taken_0x23b83c) {
            ctx->pc = 0x23B828u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23b828;
        }
    }
    ctx->pc = 0x23B844u;
label_23b844:
    // 0x23b844: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x23b844u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23b848: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23b848u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_23b84c:
    // 0x23b84c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x23b84cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    ctx->pc = 0x23b850u;
}
