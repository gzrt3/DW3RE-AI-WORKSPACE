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

// Function: FUN_0016cb90
// Address: 0x16cb90 - 0x16cc14
void FUN_0016cb90_0x16cb90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0016cb90_0x16cb90");
#endif

    switch (ctx->pc) {
        case 0x16cbb8u: goto label_16cbb8;
        case 0x16cbccu: goto label_16cbcc;
        default: break;
    }

    ctx->pc = 0x16cb90u;

    // 0x16cb90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x16cb90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16cb94: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x16cb94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x16cb98: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x16cb98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x16cb9c: 0x8f83817c  lw          $v1, -0x7E84($gp)
    ctx->pc = 0x16cb9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934908)));
    // 0x16cba0: 0x1060001b  beqz        $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x16CBA0u;
    {
        const bool branch_taken_0x16cba0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x16CBA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CBA0u;
        // 0x16cba4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16cba0) {
            ctx->pc = 0x16CC10u;
            goto label_16cc10;
        }
    }
    ctx->pc = 0x16CBA8u;
    // 0x16cba8: 0x8f838710  lw          $v1, -0x78F0($gp)
    ctx->pc = 0x16cba8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
    // 0x16cbac: 0x2c63007f  sltiu       $v1, $v1, 0x7F
    ctx->pc = 0x16cbacu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)127) ? 1 : 0);
    // 0x16cbb0: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x16CBB0u;
    {
        const bool branch_taken_0x16cbb0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x16cbb0) {
            ctx->pc = 0x16CBDCu;
            goto label_16cbdc;
        }
    }
    ctx->pc = 0x16CBB8u;
label_16cbb8:
    // 0x16cbb8: 0x8f858710  lw          $a1, -0x78F0($gp)
    ctx->pc = 0x16cbb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
    // 0x16cbbc: 0x3c060036  lui         $a2, 0x36
    ctx->pc = 0x16cbbcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)54 << 16));
    // 0x16cbc0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x16cbc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x16cbc4: 0xc08d61c  jal         func_235870
    ctx->pc = 0x16CBC4u;
    SET_GPR_U32(ctx, 31, 0x16CBCCu);
    ctx->pc = 0x16CBC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16CBC4u;
    // 0x16cbc8: 0x24c63ef0  addiu       $a2, $a2, 0x3EF0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235870u, 0x16CBC4u, 0x16CBCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16CBCCu;
label_16cbcc:
    // 0x16cbcc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x16cbccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16cbd0: 0x1043fff9  beq         $v0, $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x16CBD0u;
    {
        const bool branch_taken_0x16cbd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x16cbd0) {
            ctx->pc = 0x16CBB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16cbb8;
        }
    }
    ctx->pc = 0x16CBD8u;
    // 0x16cbd8: 0xaf808710  sw          $zero, -0x78F0($gp)
    ctx->pc = 0x16cbd8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936336), GPR_U32(ctx, 0));
label_16cbdc:
    // 0x16cbdc: 0x8f848710  lw          $a0, -0x78F0($gp)
    ctx->pc = 0x16cbdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
    // 0x16cbe0: 0x3c03400f  lui         $v1, 0x400F
    ctx->pc = 0x16cbe0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16399 << 16));
    // 0x16cbe4: 0x102e00  sll         $a1, $s0, 24
    ctx->pc = 0x16cbe4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 24));
    // 0x16cbe8: 0x34633f80  ori         $v1, $v1, 0x3F80
    ctx->pc = 0x16cbe8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16256);
    // 0x16cbec: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x16cbecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x16cbf0: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x16cbf0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x16cbf4: 0x24633ef0  addiu       $v1, $v1, 0x3EF0
    ctx->pc = 0x16cbf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16112));
    // 0x16cbf8: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x16cbf8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x16cbfc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x16cbfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x16cc00: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x16cc00u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x16cc04: 0x8f838710  lw          $v1, -0x78F0($gp)
    ctx->pc = 0x16cc04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
    // 0x16cc08: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x16cc08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x16cc0c: 0xaf838710  sw          $v1, -0x78F0($gp)
    ctx->pc = 0x16cc0cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936336), GPR_U32(ctx, 3));
label_16cc10:
    // 0x16cc10: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x16cc10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->pc = 0x16cc14u;
}
