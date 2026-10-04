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

// Function: FUN_0016bfd0
// Address: 0x16bfd0 - 0x16c080
void FUN_0016bfd0_0x16bfd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0016bfd0_0x16bfd0");
#endif

    switch (ctx->pc) {
        case 0x16c010u: goto label_16c010;
        case 0x16c024u: goto label_16c024;
        default: break;
    }

    ctx->pc = 0x16bfd0u;

    // 0x16bfd0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x16bfd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x16bfd4: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x16bfd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x16bfd8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x16bfd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x16bfdc: 0x28610020  slti        $at, $v1, 0x20
    ctx->pc = 0x16bfdcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x16bfe0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x16bfe0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x16bfe4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x16bfe4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x16bfe8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x16bfe8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16bfec: 0x10200023  beqz        $at, . + 4 + (0x23 << 2)
    ctx->pc = 0x16BFECu;
    {
        const bool branch_taken_0x16bfec = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x16BFF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BFECu;
        // 0x16bff0: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16bfec) {
            ctx->pc = 0x16C07Cu;
            goto label_16c07c;
        }
    }
    ctx->pc = 0x16BFF4u;
    // 0x16bff4: 0x8f83817c  lw          $v1, -0x7E84($gp)
    ctx->pc = 0x16bff4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934908)));
    // 0x16bff8: 0x10600020  beqz        $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x16BFF8u;
    {
        const bool branch_taken_0x16bff8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x16bff8) {
            ctx->pc = 0x16C07Cu;
            goto label_16c07c;
        }
    }
    ctx->pc = 0x16C000u;
    // 0x16c000: 0x8f838710  lw          $v1, -0x78F0($gp)
    ctx->pc = 0x16c000u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
    // 0x16c004: 0x2c63007f  sltiu       $v1, $v1, 0x7F
    ctx->pc = 0x16c004u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)127) ? 1 : 0);
    // 0x16c008: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x16C008u;
    {
        const bool branch_taken_0x16c008 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x16C00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C008u;
        // 0x16c00c: 0x26030040  addiu       $v1, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c008) {
            ctx->pc = 0x16C038u;
            goto label_16c038;
        }
    }
    ctx->pc = 0x16C010u;
label_16c010:
    // 0x16c010: 0x8f858710  lw          $a1, -0x78F0($gp)
    ctx->pc = 0x16c010u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
    // 0x16c014: 0x3c060036  lui         $a2, 0x36
    ctx->pc = 0x16c014u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)54 << 16));
    // 0x16c018: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x16c018u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x16c01c: 0xc08d61c  jal         func_235870
    ctx->pc = 0x16C01Cu;
    SET_GPR_U32(ctx, 31, 0x16C024u);
    ctx->pc = 0x16C020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C01Cu;
    // 0x16c020: 0x24c63ef0  addiu       $a2, $a2, 0x3EF0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235870u, 0x16C01Cu, 0x16C024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C024u;
label_16c024:
    // 0x16c024: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x16c024u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16c028: 0x1043fff9  beq         $v0, $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x16C028u;
    {
        const bool branch_taken_0x16c028 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x16c028) {
            ctx->pc = 0x16C010u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16c010;
        }
    }
    ctx->pc = 0x16C030u;
    // 0x16c030: 0xaf808710  sw          $zero, -0x78F0($gp)
    ctx->pc = 0x16c030u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936336), GPR_U32(ctx, 0));
    // 0x16c034: 0x26030040  addiu       $v1, $s0, 0x40
    ctx->pc = 0x16c034u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
label_16c038:
    // 0x16c038: 0x112600  sll         $a0, $s1, 24
    ctx->pc = 0x16c038u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 24));
    // 0x16c03c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x16c03cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x16c040: 0x3c05000f  lui         $a1, 0xF
    ctx->pc = 0x16c040u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)15 << 16));
    // 0x16c044: 0x331c0  sll         $a2, $v1, 7
    ctx->pc = 0x16c044u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
    // 0x16c048: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x16c048u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x16c04c: 0xc52825  or          $a1, $a2, $a1
    ctx->pc = 0x16c04cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x16c050: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x16c050u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x16c054: 0x8f848710  lw          $a0, -0x78F0($gp)
    ctx->pc = 0x16c054u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
    // 0x16c058: 0x652825  or          $a1, $v1, $a1
    ctx->pc = 0x16c058u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x16c05c: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x16c05cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x16c060: 0x24633ef0  addiu       $v1, $v1, 0x3EF0
    ctx->pc = 0x16c060u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16112));
    // 0x16c064: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x16c064u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x16c068: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x16c068u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x16c06c: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x16c06cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x16c070: 0x8f838710  lw          $v1, -0x78F0($gp)
    ctx->pc = 0x16c070u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
    // 0x16c074: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x16c074u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x16c078: 0xaf838710  sw          $v1, -0x78F0($gp)
    ctx->pc = 0x16c078u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936336), GPR_U32(ctx, 3));
label_16c07c:
    // 0x16c07c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x16c07cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->pc = 0x16c080u;
}
