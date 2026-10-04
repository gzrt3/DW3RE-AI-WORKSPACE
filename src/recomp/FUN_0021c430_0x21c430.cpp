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

// Function: FUN_0021c430
// Address: 0x21c430 - 0x21c4d0
void FUN_0021c430_0x21c430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0021c430_0x21c430");
#endif

    switch (ctx->pc) {
        case 0x21c4c0u: goto label_21c4c0;
        default: break;
    }

    ctx->pc = 0x21c430u;

    // 0x21c430: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x21c430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x21c434: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x21c434u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x21c438: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x21c438u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x21c43c: 0x8f8392d0  lw          $v1, -0x6D30($gp)
    ctx->pc = 0x21c43cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939344)));
    // 0x21c440: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x21c440u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c444: 0x10700021  beq         $v1, $s0, . + 4 + (0x21 << 2)
    ctx->pc = 0x21C444u;
    {
        const bool branch_taken_0x21c444 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        ctx->pc = 0x21C448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C444u;
        // 0x21c448: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c444) {
            ctx->pc = 0x21C4CCu;
            goto label_21c4cc;
        }
    }
    ctx->pc = 0x21C44Cu;
    // 0x21c44c: 0x2a010029  slti        $at, $s0, 0x29
    ctx->pc = 0x21c44cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)41) ? 1 : 0);
    // 0x21c450: 0x10200013  beqz        $at, . + 4 + (0x13 << 2)
    ctx->pc = 0x21C450u;
    {
        const bool branch_taken_0x21c450 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x21C454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C450u;
        // 0x21c454: 0x28610029  slti        $at, $v1, 0x29 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)41) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c450) {
            ctx->pc = 0x21C4A0u;
            goto label_21c4a0;
        }
    }
    ctx->pc = 0x21C458u;
    // 0x21c458: 0x28610029  slti        $at, $v1, 0x29
    ctx->pc = 0x21c458u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)41) ? 1 : 0);
    // 0x21c45c: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x21C45Cu;
    {
        const bool branch_taken_0x21c45c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x21C460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C45Cu;
        // 0x21c460: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c45c) {
            ctx->pc = 0x21C46Cu;
            goto label_21c46c;
        }
    }
    ctx->pc = 0x21C464u;
    // 0x21c464: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x21C464u;
    {
        const bool branch_taken_0x21c464 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21C468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C464u;
        // 0x21c468: 0xaf8292cc  sw          $v0, -0x6D34($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939340), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c464) {
            ctx->pc = 0x21C4C4u;
            goto label_21c4c4;
        }
    }
    ctx->pc = 0x21C46Cu;
label_21c46c:
    // 0x21c46c: 0x8f8292c8  lw          $v0, -0x6D38($gp)
    ctx->pc = 0x21c46cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939336)));
    // 0x21c470: 0x14500004  bne         $v0, $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x21C470u;
    {
        const bool branch_taken_0x21c470 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x21C474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C470u;
        // 0x21c474: 0x28410029  slti        $at, $v0, 0x29 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)41) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c470) {
            ctx->pc = 0x21C484u;
            goto label_21c484;
        }
    }
    ctx->pc = 0x21C478u;
    // 0x21c478: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x21c478u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x21c47c: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x21C47Cu;
    {
        const bool branch_taken_0x21c47c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21C480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C47Cu;
        // 0x21c480: 0xaf8292cc  sw          $v0, -0x6D34($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939340), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c47c) {
            ctx->pc = 0x21C4C4u;
            goto label_21c4c4;
        }
    }
    ctx->pc = 0x21C484u;
label_21c484:
    // 0x21c484: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x21C484u;
    {
        const bool branch_taken_0x21c484 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x21C488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C484u;
        // 0x21c488: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c484) {
            ctx->pc = 0x21C498u;
            goto label_21c498;
        }
    }
    ctx->pc = 0x21C48Cu;
    // 0x21c48c: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x21c48cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x21c490: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x21C490u;
    {
        const bool branch_taken_0x21c490 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21C494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C490u;
        // 0x21c494: 0xaf8292cc  sw          $v0, -0x6D34($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939340), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c490) {
            ctx->pc = 0x21C4C4u;
            goto label_21c4c4;
        }
    }
    ctx->pc = 0x21C498u;
label_21c498:
    // 0x21c498: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x21C498u;
    {
        const bool branch_taken_0x21c498 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21C49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C498u;
        // 0x21c49c: 0xaf8292cc  sw          $v0, -0x6D34($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939340), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c498) {
            ctx->pc = 0x21C4C4u;
            goto label_21c4c4;
        }
    }
    ctx->pc = 0x21C4A0u;
label_21c4a0:
    // 0x21c4a0: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x21C4A0u;
    {
        const bool branch_taken_0x21c4a0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x21c4a0) {
            ctx->pc = 0x21C4C0u;
            goto label_21c4c0;
        }
    }
    ctx->pc = 0x21C4A8u;
    // 0x21c4a8: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x21c4a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
    // 0x21c4ac: 0x90228ea2  lbu         $v0, -0x715E($at)
    ctx->pc = 0x21c4acu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x588EA2u));
    // 0x21c4b0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x21C4B0u;
    {
        const bool branch_taken_0x21c4b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21C4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C4B0u;
        // 0x21c4b4: 0x3c040059  lui         $a0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c4b0) {
            ctx->pc = 0x21C4C0u;
            goto label_21c4c0;
        }
    }
    ctx->pc = 0x21C4B8u;
    // 0x21c4b8: 0xc0452cc  jal         func_114B30
    ctx->pc = 0x21C4B8u;
    SET_GPR_U32(ctx, 31, 0x21C4C0u);
    ctx->pc = 0x21C4BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C4B8u;
    // 0x21c4bc: 0x24848d00  addiu       $a0, $a0, -0x7300 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937856));
    ctx->in_delay_slot = false;
    ctx->pc = 0x114B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114B30u, 0x21C4B8u, 0x21C4C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C4C0u;
label_21c4c0:
    // 0x21c4c0: 0xaf8092cc  sw          $zero, -0x6D34($gp)
    ctx->pc = 0x21c4c0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939340), GPR_U32(ctx, 0));
label_21c4c4:
    // 0x21c4c4: 0xaf9092d0  sw          $s0, -0x6D30($gp)
    ctx->pc = 0x21c4c4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939344), GPR_U32(ctx, 16));
    // 0x21c4c8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21c4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21c4cc:
    // 0x21c4cc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x21c4ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->pc = 0x21c4d0u;
}
