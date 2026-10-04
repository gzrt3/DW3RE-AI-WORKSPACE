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

// Function: FUN_00235998
// Address: 0x235998 - 0x235a5c
void FUN_00235998_0x235998(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00235998_0x235998");
#endif

    switch (ctx->pc) {
        case 0x2359bcu: goto label_2359bc;
        case 0x235a1cu: goto label_235a1c;
        default: break;
    }

    ctx->pc = 0x235998u;

    // 0x235998: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x235998u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x23599c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x23599cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x2359a0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2359a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2359a4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2359a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2359a8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2359a8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2359ac: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2359acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2359b0: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x2359b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x2359b4: 0xc08d650  jal         func_235940
    ctx->pc = 0x2359B4u;
    SET_GPR_U32(ctx, 31, 0x2359BCu);
    ctx->pc = 0x2359B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2359B4u;
    // 0x2359b8: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235940u, 0x2359B4u, 0x2359BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2359BCu;
label_2359bc:
    // 0x2359bc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2359bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2359c0: 0x32510003  andi        $s1, $s2, 0x3
    ctx->pc = 0x2359c0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)3);
    // 0x2359c4: 0x3c070059  lui         $a3, 0x59
    ctx->pc = 0x2359c4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)89 << 16));
    // 0x2359c8: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x2359c8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2359cc: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x2359ccu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2359d0: 0x32520001  andi        $s2, $s2, 0x1
    ctx->pc = 0x2359d0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
    // 0x2359d4: 0x24f0b100  addiu       $s0, $a3, -0x4F00
    ctx->pc = 0x2359d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 7), 4294947072));
    // 0x2359d8: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x2359D8u;
    {
        const bool branch_taken_0x2359d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2359DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2359D8u;
        // 0x2359dc: 0x3a260001  xori        $a2, $s1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2359d8) {
            ctx->pc = 0x235A4Cu;
            goto label_235a4c;
        }
    }
    ctx->pc = 0x2359E0u;
    // 0x2359e0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2359e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2359e4: 0x3c040059  lui         $a0, 0x59
    ctx->pc = 0x2359e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)89 << 16));
    // 0x2359e8: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x2359e8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2359ec: 0xaf8282ec  sw          $v0, -0x7D14($gp)
    ctx->pc = 0x2359ecu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935276), GPR_U32(ctx, 2));
    // 0x2359f0: 0x2484b168  addiu       $a0, $a0, -0x4E98
    ctx->pc = 0x2359f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947176));
    // 0x2359f4: 0x6302b  sltu        $a2, $zero, $a2
    ctx->pc = 0x2359f4u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x2359f8: 0x16400005  bnez        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x2359F8u;
    {
        const bool branch_taken_0x2359f8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x2359FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2359F8u;
        // 0x2359fc: 0xe0482d  daddu       $t1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2359f8) {
            ctx->pc = 0x235A10u;
            goto label_235a10;
        }
    }
    ctx->pc = 0x235A00u;
    // 0x235a00: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x235a00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x235a04: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x235A04u;
    {
        const bool branch_taken_0x235a04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x235A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235A04u;
        // 0x235a08: 0x244b5930  addiu       $t3, $v0, 0x5930 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), 22832));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235a04) {
            ctx->pc = 0x235A14u;
            goto label_235a14;
        }
    }
    ctx->pc = 0x235A0Cu;
    // 0x235a0c: 0x0  nop
    ctx->pc = 0x235a0cu;
    // NOP
label_235a10:
    // 0x235a10: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x235a10u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_235a14:
    // 0x235a14: 0xc069e2a  jal         func_1A78A8
    ctx->pc = 0x235A14u;
    SET_GPR_U32(ctx, 31, 0x235A1Cu);
    ctx->pc = 0x235A18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235A14u;
    // 0x235a18: 0xafb00000  sw          $s0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A78A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A78A8u, 0x235A14u, 0x235A1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235A1Cu;
label_235a1c:
    // 0x235a1c: 0x2404ff9d  addiu       $a0, $zero, -0x63
    ctx->pc = 0x235a1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967197));
    // 0x235a20: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x235A20u;
    {
        const bool branch_taken_0x235a20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x235A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235A20u;
        // 0x235a24: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235a20) {
            ctx->pc = 0x235A40u;
            goto label_235a40;
        }
    }
    ctx->pc = 0x235A28u;
    // 0x235a28: 0x56230009  bnel        $s1, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x235A28u;
    {
        const bool branch_taken_0x235a28 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        if (branch_taken_0x235a28) {
            ctx->pc = 0x235A2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x235A28u;
            // 0x235a2c: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x235A50u;
            goto label_235a50;
        }
    }
    ctx->pc = 0x235A30u;
    // 0x235a30: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x235a30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x235a34: 0xaf8282ec  sw          $v0, -0x7D14($gp)
    ctx->pc = 0x235a34u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935276), GPR_U32(ctx, 2));
    // 0x235a38: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x235A38u;
    {
        const bool branch_taken_0x235a38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x235a38) {
            ctx->pc = 0x235A48u;
            goto label_235a48;
        }
    }
    ctx->pc = 0x235A40u;
label_235a40:
    // 0x235a40: 0xaf8482ec  sw          $a0, -0x7D14($gp)
    ctx->pc = 0x235a40u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935276), GPR_U32(ctx, 4));
    // 0x235a44: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x235a44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
label_235a48:
    // 0x235a48: 0x8f8282ec  lw          $v0, -0x7D14($gp)
    ctx->pc = 0x235a48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935276)));
label_235a4c:
    // 0x235a4c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x235a4cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_235a50:
    // 0x235a50: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x235a50u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x235a54: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x235a54u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x235a58: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x235a58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    ctx->pc = 0x235a5cu;
}
