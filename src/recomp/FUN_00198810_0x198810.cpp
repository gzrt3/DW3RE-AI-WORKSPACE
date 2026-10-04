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

// Function: FUN_00198810
// Address: 0x198810 - 0x1988c4
void FUN_00198810_0x198810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00198810_0x198810");
#endif

    switch (ctx->pc) {
        case 0x198824u: goto label_198824;
        default: break;
    }

    ctx->pc = 0x198810u;

    // 0x198810: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x198810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x198814: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x198814u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x198818: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x198818u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x19881c: 0xc06614a  jal         func_198528
    ctx->pc = 0x19881Cu;
    SET_GPR_U32(ctx, 31, 0x198824u);
    ctx->pc = 0x198820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19881Cu;
    // 0x198820: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x198528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x198528u, 0x19881Cu, 0x198824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198824u;
label_198824:
    // 0x198824: 0x84430006  lh          $v1, 0x6($v0)
    ctx->pc = 0x198824u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x198828: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x198828u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19882c: 0x14620011  bne         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x19882Cu;
    {
        const bool branch_taken_0x19882c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x198830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19882Cu;
        // 0x198830: 0xde040000  ld          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19882c) {
            ctx->pc = 0x198874u;
            goto label_198874;
        }
    }
    ctx->pc = 0x198834u;
    // 0x198834: 0x3c021200  lui         $v0, 0x1200
    ctx->pc = 0x198834u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4608 << 16));
    // 0x198838: 0x3c031200  lui         $v1, 0x1200
    ctx->pc = 0x198838u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4608 << 16));
    // 0x19883c: 0x3c061200  lui         $a2, 0x1200
    ctx->pc = 0x19883cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4608 << 16));
    // 0x198840: 0xfc440000  sd          $a0, 0x0($v0)
    ctx->pc = 0x198840u;
    runtime->Store64(rdram, ctx, 0x12000000u, GPR_U64(ctx, 4));
    // 0x198844: 0x34630070  ori         $v1, $v1, 0x70
    ctx->pc = 0x198844u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)112);
    // 0x198848: 0x34c60080  ori         $a2, $a2, 0x80
    ctx->pc = 0x198848u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)128);
    // 0x19884c: 0x3c041200  lui         $a0, 0x1200
    ctx->pc = 0x19884cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4608 << 16));
    // 0x198850: 0xde050010  ld          $a1, 0x10($s0)
    ctx->pc = 0x198850u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x198854: 0x348400c0  ori         $a0, $a0, 0xC0
    ctx->pc = 0x198854u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)192);
    // 0x198858: 0xfc650000  sd          $a1, 0x0($v1)
    ctx->pc = 0x198858u;
    runtime->Store64(rdram, ctx, 0x12000070u, GPR_U64(ctx, 5));
    // 0x19885c: 0xde020018  ld          $v0, 0x18($s0)
    ctx->pc = 0x19885cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x198860: 0xfcc20000  sd          $v0, 0x0($a2)
    ctx->pc = 0x198860u;
    runtime->Store64(rdram, ctx, 0x12000080u, GPR_U64(ctx, 2));
    // 0x198864: 0xde030020  ld          $v1, 0x20($s0)
    ctx->pc = 0x198864u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x198868: 0xfc830000  sd          $v1, 0x0($a0)
    ctx->pc = 0x198868u;
    runtime->Store64(rdram, ctx, 0x120000C0u, GPR_U64(ctx, 3));
    // 0x19886c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x19886Cu;
    {
        const bool branch_taken_0x19886c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x198870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19886Cu;
        // 0x198870: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19886c) {
            ctx->pc = 0x1988C0u;
            goto label_1988c0;
        }
    }
    ctx->pc = 0x198874u;
label_198874:
    // 0x198874: 0x3c031200  lui         $v1, 0x1200
    ctx->pc = 0x198874u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4608 << 16));
    // 0x198878: 0x3c021200  lui         $v0, 0x1200
    ctx->pc = 0x198878u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4608 << 16));
    // 0x19887c: 0x3c061200  lui         $a2, 0x1200
    ctx->pc = 0x19887cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4608 << 16));
    // 0x198880: 0xfc640000  sd          $a0, 0x0($v1)
    ctx->pc = 0x198880u;
    runtime->Store64(rdram, ctx, 0x12000000u, GPR_U64(ctx, 4));
    // 0x198884: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x198884u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
    // 0x198888: 0x34c60090  ori         $a2, $a2, 0x90
    ctx->pc = 0x198888u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)144);
    // 0x19888c: 0x3c051200  lui         $a1, 0x1200
    ctx->pc = 0x19888cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4608 << 16));
    // 0x198890: 0xde030008  ld          $v1, 0x8($s0)
    ctx->pc = 0x198890u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x198894: 0x34a500a0  ori         $a1, $a1, 0xA0
    ctx->pc = 0x198894u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)160);
    // 0x198898: 0x3c041200  lui         $a0, 0x1200
    ctx->pc = 0x198898u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4608 << 16));
    // 0x19889c: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x19889cu;
    runtime->Store64(rdram, ctx, 0x12000020u, GPR_U64(ctx, 3));
    // 0x1988a0: 0x348400e0  ori         $a0, $a0, 0xE0
    ctx->pc = 0x1988a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)224);
    // 0x1988a4: 0xde020010  ld          $v0, 0x10($s0)
    ctx->pc = 0x1988a4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1988a8: 0xfcc20000  sd          $v0, 0x0($a2)
    ctx->pc = 0x1988a8u;
    runtime->Store64(rdram, ctx, 0x12000090u, GPR_U64(ctx, 2));
    // 0x1988ac: 0xde030018  ld          $v1, 0x18($s0)
    ctx->pc = 0x1988acu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1988b0: 0xfca30000  sd          $v1, 0x0($a1)
    ctx->pc = 0x1988b0u;
    runtime->Store64(rdram, ctx, 0x120000A0u, GPR_U64(ctx, 3));
    // 0x1988b4: 0xde020020  ld          $v0, 0x20($s0)
    ctx->pc = 0x1988b4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1988b8: 0xfc820000  sd          $v0, 0x0($a0)
    ctx->pc = 0x1988b8u;
    runtime->Store64(rdram, ctx, 0x120000E0u, GPR_U64(ctx, 2));
    // 0x1988bc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1988bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1988c0:
    // 0x1988c0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1988c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x1988c4u;
}
