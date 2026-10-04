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

// Function: FUN_0016c450
// Address: 0x16c450 - 0x16c524
void FUN_0016c450_0x16c450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0016c450_0x16c450");
#endif

    switch (ctx->pc) {
        case 0x16c4c8u: goto label_16c4c8;
        case 0x16c4dcu: goto label_16c4dc;
        default: break;
    }

    ctx->pc = 0x16c450u;

    // 0x16c450: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x16c450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16c454: 0x30a600ff  andi        $a2, $a1, 0xFF
    ctx->pc = 0x16c454u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x16c458: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x16c458u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x16c45c: 0x28c10020  slti        $at, $a2, 0x20
    ctx->pc = 0x16c45cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x16c460: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x16c460u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x16c464: 0x1020002e  beqz        $at, . + 4 + (0x2E << 2)
    ctx->pc = 0x16C464u;
    {
        const bool branch_taken_0x16c464 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x16C468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C464u;
        // 0x16c468: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c464) {
            ctx->pc = 0x16C520u;
            goto label_16c520;
        }
    }
    ctx->pc = 0x16C46Cu;
    // 0x16c46c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x16c46cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16c470: 0x42880  sll         $a1, $a0, 2
    ctx->pc = 0x16c470u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x16c474: 0xc33004  sllv        $a2, $v1, $a2
    ctx->pc = 0x16c474u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 6) & 0x1F));
    // 0x16c478: 0x3c030028  lui         $v1, 0x28
    ctx->pc = 0x16c478u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40 << 16));
    // 0x16c47c: 0x24631ed8  addiu       $v1, $v1, 0x1ED8
    ctx->pc = 0x16c47cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7896));
    // 0x16c480: 0x653821  addu        $a3, $v1, $a1
    ctx->pc = 0x16c480u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x16c484: 0x8ce50000  lw          $a1, 0x0($a3)
    ctx->pc = 0x16c484u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x16c488: 0xc51824  and         $v1, $a2, $a1
    ctx->pc = 0x16c488u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
    // 0x16c48c: 0x10600024  beqz        $v1, . + 4 + (0x24 << 2)
    ctx->pc = 0x16C48Cu;
    {
        const bool branch_taken_0x16c48c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x16c48c) {
            ctx->pc = 0x16C520u;
            goto label_16c520;
        }
    }
    ctx->pc = 0x16C494u;
    // 0x16c494: 0xc01827  not         $v1, $a2
    ctx->pc = 0x16c494u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 6) | GPR_U64(ctx, 0)));
    // 0x16c498: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x16c498u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x16c49c: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x16c49cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x16c4a0: 0x8f83817c  lw          $v1, -0x7E84($gp)
    ctx->pc = 0x16c4a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934908)));
    // 0x16c4a4: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x16c4a4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x16c4a8: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x16c4a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x16c4ac: 0x2042021  addu        $a0, $s0, $a0
    ctx->pc = 0x16c4acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x16c4b0: 0x1060001b  beqz        $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x16C4B0u;
    {
        const bool branch_taken_0x16c4b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x16C4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C4B0u;
        // 0x16c4b4: 0x309000ff  andi        $s0, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c4b0) {
            ctx->pc = 0x16C520u;
            goto label_16c520;
        }
    }
    ctx->pc = 0x16C4B8u;
    // 0x16c4b8: 0x8f838710  lw          $v1, -0x78F0($gp)
    ctx->pc = 0x16c4b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
    // 0x16c4bc: 0x2c63007f  sltiu       $v1, $v1, 0x7F
    ctx->pc = 0x16c4bcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)127) ? 1 : 0);
    // 0x16c4c0: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x16C4C0u;
    {
        const bool branch_taken_0x16c4c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x16C4C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C4C0u;
        // 0x16c4c4: 0x320400ff  andi        $a0, $s0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c4c0) {
            ctx->pc = 0x16C4F0u;
            goto label_16c4f0;
        }
    }
    ctx->pc = 0x16C4C8u;
label_16c4c8:
    // 0x16c4c8: 0x8f858710  lw          $a1, -0x78F0($gp)
    ctx->pc = 0x16c4c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
    // 0x16c4cc: 0x3c060036  lui         $a2, 0x36
    ctx->pc = 0x16c4ccu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)54 << 16));
    // 0x16c4d0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x16c4d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x16c4d4: 0xc08d61c  jal         func_235870
    ctx->pc = 0x16C4D4u;
    SET_GPR_U32(ctx, 31, 0x16C4DCu);
    ctx->pc = 0x16C4D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C4D4u;
    // 0x16c4d8: 0x24c63ef0  addiu       $a2, $a2, 0x3EF0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235870u, 0x16C4D4u, 0x16C4DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C4DCu;
label_16c4dc:
    // 0x16c4dc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x16c4dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16c4e0: 0x1043fff9  beq         $v0, $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x16C4E0u;
    {
        const bool branch_taken_0x16c4e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x16c4e0) {
            ctx->pc = 0x16C4C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16c4c8;
        }
    }
    ctx->pc = 0x16C4E8u;
    // 0x16c4e8: 0xaf808710  sw          $zero, -0x78F0($gp)
    ctx->pc = 0x16c4e8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936336), GPR_U32(ctx, 0));
    // 0x16c4ec: 0x320400ff  andi        $a0, $s0, 0xFF
    ctx->pc = 0x16c4ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_16c4f0:
    // 0x16c4f0: 0x3c03460f  lui         $v1, 0x460F
    ctx->pc = 0x16c4f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17935 << 16));
    // 0x16c4f4: 0x429c0  sll         $a1, $a0, 7
    ctx->pc = 0x16c4f4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 7));
    // 0x16c4f8: 0x8f848710  lw          $a0, -0x78F0($gp)
    ctx->pc = 0x16c4f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
    // 0x16c4fc: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x16c4fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x16c500: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x16c500u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x16c504: 0x24633ef0  addiu       $v1, $v1, 0x3EF0
    ctx->pc = 0x16c504u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16112));
    // 0x16c508: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x16c508u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x16c50c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x16c50cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x16c510: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x16c510u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x16c514: 0x8f838710  lw          $v1, -0x78F0($gp)
    ctx->pc = 0x16c514u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
    // 0x16c518: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x16c518u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x16c51c: 0xaf838710  sw          $v1, -0x78F0($gp)
    ctx->pc = 0x16c51cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936336), GPR_U32(ctx, 3));
label_16c520:
    // 0x16c520: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x16c520u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->pc = 0x16c524u;
}
