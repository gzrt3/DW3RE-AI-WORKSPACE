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

// Function: FUN_0016cae0
// Address: 0x16cae0 - 0x16cb7c
void FUN_0016cae0_0x16cae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0016cae0_0x16cae0");
#endif

    switch (ctx->pc) {
        case 0x16cb10u: goto label_16cb10;
        case 0x16cb24u: goto label_16cb24;
        default: break;
    }

    ctx->pc = 0x16cae0u;

    // 0x16cae0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x16cae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x16cae4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x16cae4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x16cae8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x16cae8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x16caec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x16caecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x16caf0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x16caf0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16caf4: 0x8f83817c  lw          $v1, -0x7E84($gp)
    ctx->pc = 0x16caf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934908)));
    // 0x16caf8: 0x1060001f  beqz        $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x16CAF8u;
    {
        const bool branch_taken_0x16caf8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x16CAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CAF8u;
        // 0x16cafc: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16caf8) {
            ctx->pc = 0x16CB78u;
            goto label_16cb78;
        }
    }
    ctx->pc = 0x16CB00u;
    // 0x16cb00: 0x8f838710  lw          $v1, -0x78F0($gp)
    ctx->pc = 0x16cb00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
    // 0x16cb04: 0x2c63007f  sltiu       $v1, $v1, 0x7F
    ctx->pc = 0x16cb04u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)127) ? 1 : 0);
    // 0x16cb08: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x16CB08u;
    {
        const bool branch_taken_0x16cb08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x16CB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CB08u;
        // 0x16cb0c: 0x320300ff  andi        $v1, $s0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x16cb08) {
            ctx->pc = 0x16CB38u;
            goto label_16cb38;
        }
    }
    ctx->pc = 0x16CB10u;
label_16cb10:
    // 0x16cb10: 0x8f858710  lw          $a1, -0x78F0($gp)
    ctx->pc = 0x16cb10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
    // 0x16cb14: 0x3c060036  lui         $a2, 0x36
    ctx->pc = 0x16cb14u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)54 << 16));
    // 0x16cb18: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x16cb18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x16cb1c: 0xc08d61c  jal         func_235870
    ctx->pc = 0x16CB1Cu;
    SET_GPR_U32(ctx, 31, 0x16CB24u);
    ctx->pc = 0x16CB20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16CB1Cu;
    // 0x16cb20: 0x24c63ef0  addiu       $a2, $a2, 0x3EF0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235870u, 0x16CB1Cu, 0x16CB24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16CB24u;
label_16cb24:
    // 0x16cb24: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x16cb24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16cb28: 0x1043fff9  beq         $v0, $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x16CB28u;
    {
        const bool branch_taken_0x16cb28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x16cb28) {
            ctx->pc = 0x16CB10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16cb10;
        }
    }
    ctx->pc = 0x16CB30u;
    // 0x16cb30: 0xaf808710  sw          $zero, -0x78F0($gp)
    ctx->pc = 0x16cb30u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936336), GPR_U32(ctx, 0));
    // 0x16cb34: 0x320300ff  andi        $v1, $s0, 0xFF
    ctx->pc = 0x16cb34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_16cb38:
    // 0x16cb38: 0x112e00  sll         $a1, $s1, 24
    ctx->pc = 0x16cb38u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 17), 24));
    // 0x16cb3c: 0x321c0  sll         $a0, $v1, 7
    ctx->pc = 0x16cb3cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
    // 0x16cb40: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x16cb40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x16cb44: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x16cb44u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x16cb48: 0x3c03000f  lui         $v1, 0xF
    ctx->pc = 0x16cb48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15 << 16));
    // 0x16cb4c: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x16cb4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x16cb50: 0x8f848710  lw          $a0, -0x78F0($gp)
    ctx->pc = 0x16cb50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
    // 0x16cb54: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x16cb54u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x16cb58: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x16cb58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x16cb5c: 0x24633ef0  addiu       $v1, $v1, 0x3EF0
    ctx->pc = 0x16cb5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16112));
    // 0x16cb60: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x16cb60u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x16cb64: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x16cb64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x16cb68: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x16cb68u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x16cb6c: 0x8f838710  lw          $v1, -0x78F0($gp)
    ctx->pc = 0x16cb6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
    // 0x16cb70: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x16cb70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x16cb74: 0xaf838710  sw          $v1, -0x78F0($gp)
    ctx->pc = 0x16cb74u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936336), GPR_U32(ctx, 3));
label_16cb78:
    // 0x16cb78: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x16cb78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->pc = 0x16cb7cu;
}
