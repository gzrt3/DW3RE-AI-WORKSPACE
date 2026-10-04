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

// Function: FUN_001b0820
// Address: 0x1b0820 - 0x1b08d0
void FUN_001b0820_0x1b0820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001b0820_0x1b0820");
#endif

    switch (ctx->pc) {
        case 0x1b0838u: goto label_1b0838;
        case 0x1b0884u: goto label_1b0884;
        case 0x1b0898u: goto label_1b0898;
        case 0x1b08c0u: goto label_1b08c0;
        default: break;
    }

    ctx->pc = 0x1b0820u;

    // 0x1b0820: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1b0820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1b0824: 0x2404001e  addiu       $a0, $zero, 0x1E
    ctx->pc = 0x1b0824u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x1b0828: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1b0828u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1b082c: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x1b082cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x1b0830: 0xc06bf26  jal         func_1AFC98
    ctx->pc = 0x1B0830u;
    SET_GPR_U32(ctx, 31, 0x1B0838u);
    ctx->pc = 0x1B0834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0830u;
    // 0x1b0834: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AFC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AFC98u, 0x1B0830u, 0x1B0838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0838u;
label_1b0838:
    // 0x1b0838: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B0838u;
    {
        const bool branch_taken_0x1b0838 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B083Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0838u;
        // 0x1b083c: 0x3c020029  lui         $v0, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0838) {
            ctx->pc = 0x1B0848u;
            goto label_1b0848;
        }
    }
    ctx->pc = 0x1B0840u;
    // 0x1b0840: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x1B0840u;
    {
        const bool branch_taken_0x1b0840 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0840u;
        // 0x1b0844: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0840) {
            ctx->pc = 0x1B08C4u;
            goto label_1b08c4;
        }
    }
    ctx->pc = 0x1B0848u;
label_1b0848:
    // 0x1b0848: 0x3c100028  lui         $s0, 0x28
    ctx->pc = 0x1b0848u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)40 << 16));
    // 0x1b084c: 0x24518480  addiu       $s1, $v0, -0x7B80
    ctx->pc = 0x1b084cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935680));
    // 0x1b0850: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x1b0850u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1b0854: 0x3c040029  lui         $a0, 0x29
    ctx->pc = 0x1b0854u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)41 << 16));
    // 0x1b0858: 0xae0372d4  sw          $v1, 0x72D4($s0)
    ctx->pc = 0x1b0858u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x2872D4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x2872D4u, _value); } while (0);
    // 0x1b085c: 0x24848cc8  addiu       $a0, $a0, -0x7338
    ctx->pc = 0x1b085cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937800));
    // 0x1b0860: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1b0860u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1b0864: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x1b0864u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x1b0868: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b0868u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b086c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1b086cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0870: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1b0870u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0874: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x1b0874u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0878: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1b0878u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1b087c: 0xc069e2a  jal         func_1A78A8
    ctx->pc = 0x1B087Cu;
    SET_GPR_U32(ctx, 31, 0x1B0884u);
    ctx->pc = 0x1B0880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B087Cu;
    // 0x1b0880: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A78A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A78A8u, 0x1B087Cu, 0x1B0884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0884u;
label_1b0884:
    // 0x1b0884: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B0884u;
    {
        const bool branch_taken_0x1b0884 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1B0888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0884u;
        // 0x1b0888: 0x3c020028  lui         $v0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0884) {
            ctx->pc = 0x1B08A4u;
            goto label_1b08a4;
        }
    }
    ctx->pc = 0x1B088Cu;
    // 0x1b088c: 0x8c4472ac  lw          $a0, 0x72AC($v0)
    ctx->pc = 0x1b088cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29356)));
    // 0x1b0890: 0xc069210  jal         func_1A4840
    ctx->pc = 0x1B0890u;
    SET_GPR_U32(ctx, 31, 0x1B0898u);
    ctx->pc = 0x1A4840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4840u, 0x1B0890u, 0x1B0898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0898u;
label_1b0898:
    // 0x1b0898: 0xae0072d4  sw          $zero, 0x72D4($s0)
    ctx->pc = 0x1b0898u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 29396), GPR_U32(ctx, 0));
    // 0x1b089c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1B089Cu;
    {
        const bool branch_taken_0x1b089c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B08A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B089Cu;
        // 0x1b08a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b089c) {
            ctx->pc = 0x1B08C4u;
            goto label_1b08c4;
        }
    }
    ctx->pc = 0x1B08A4u;
label_1b08a4:
    // 0x1b08a4: 0xae0072d4  sw          $zero, 0x72D4($s0)
    ctx->pc = 0x1b08a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 29396), GPR_U32(ctx, 0));
    // 0x1b08a8: 0x3c030028  lui         $v1, 0x28
    ctx->pc = 0x1b08a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40 << 16));
    // 0x1b08ac: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x1b08acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x1b08b0: 0x2221025  or          $v0, $s1, $v0
    ctx->pc = 0x1b08b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
    // 0x1b08b4: 0x8c6472ac  lw          $a0, 0x72AC($v1)
    ctx->pc = 0x1b08b4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x2872ACu));
    // 0x1b08b8: 0xc069210  jal         func_1A4840
    ctx->pc = 0x1B08B8u;
    SET_GPR_U32(ctx, 31, 0x1B08C0u);
    ctx->pc = 0x1B08BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B08B8u;
    // 0x1b08bc: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4840u, 0x1B08B8u, 0x1B08C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B08C0u;
label_1b08c0:
    // 0x1b08c0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1b08c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b08c4:
    // 0x1b08c4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1b08c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b08c8: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x1b08c8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b08cc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1b08ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->pc = 0x1b08d0u;
}
