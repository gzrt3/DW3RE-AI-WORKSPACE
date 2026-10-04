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

// Function: entry_002367e8
// Address: 0x2367e8 - 0x236860
void entry_002367e8_0x2367e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002367e8_0x2367e8");
#endif

    switch (ctx->pc) {
        case 0x2367f0u: goto label_2367f0;
        default: break;
    }

    ctx->pc = 0x2367e8u;

    // 0x2367e8: 0xc069a54  jal         func_1A6950
    ctx->pc = 0x2367E8u;
    SET_GPR_U32(ctx, 31, 0x2367F0u);
    ctx->pc = 0x2367ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2367E8u;
    // 0x2367ec: 0x24040019  addiu       $a0, $zero, 0x19 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6950u, 0x2367E8u, 0x2367F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2367F0u;
label_2367f0:
    // 0x2367f0: 0x3c03000f  lui         $v1, 0xF
    ctx->pc = 0x2367f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15 << 16));
    // 0x2367f4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2367f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x2367f8: 0x22502  srl         $a0, $v0, 20
    ctx->pc = 0x2367f8u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 20));
    // 0x2367fc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2367fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x236800: 0x422c0  sll         $a0, $a0, 11
    ctx->pc = 0x236800u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 11));
    // 0x236804: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x236804u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x236808: 0x56000001  bnel        $s0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x236808u;
    {
        const bool branch_taken_0x236808 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x236808) {
            ctx->pc = 0x23680Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x236808u;
            // 0x23680c: 0xae040000  sw          $a0, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x236810u;
            goto label_236810;
        }
    }
    ctx->pc = 0x236810u;
label_236810:
    // 0x236810: 0x56200001  bnel        $s1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x236810u;
    {
        const bool branch_taken_0x236810 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x236810) {
            ctx->pc = 0x236814u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x236810u;
            // 0x236814: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x236818u;
            goto label_236818;
        }
    }
    ctx->pc = 0x236818u;
label_236818:
    // 0x236818: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x236818u;
    {
        const bool branch_taken_0x236818 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x23681Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236818u;
        // 0x23681c: 0x31040  sll         $v0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236818) {
            ctx->pc = 0x236848u;
            goto label_236848;
        }
    }
    ctx->pc = 0x236820u;
    // 0x236820: 0x50800001  beql        $a0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x236820u;
    {
        const bool branch_taken_0x236820 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x236820) {
            ctx->pc = 0x236824u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x236820u;
            // 0x236824: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x236828u;
            goto label_236828;
        }
    }
    ctx->pc = 0x236828u;
label_236828:
    // 0x236828: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x236828u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x23682c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x23682cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x236830: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x236830u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x236834: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x236834u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x236838: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x236838u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x23683c: 0x1012  mflo        $v0
    ctx->pc = 0x23683cu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x236840: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x236840u;
    {
        const bool branch_taken_0x236840 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x236844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236840u;
        // 0x236844: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236840) {
            ctx->pc = 0x236850u;
            goto label_236850;
        }
    }
    ctx->pc = 0x236848u;
label_236848:
    // 0x236848: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x236848u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23684c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23684cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_236850:
    // 0x236850: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x236850u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x236854: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x236854u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x236858: 0x3e00008  jr          $ra
    ctx->pc = 0x236858u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23685Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236858u;
        // 0x23685c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x236858u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x236860u;
}
