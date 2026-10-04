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

// Function: FUN_00187860
// Address: 0x187860 - 0x187930
void FUN_00187860_0x187860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00187860_0x187860");
#endif

    switch (ctx->pc) {
        case 0x1878d0u: goto label_1878d0;
        case 0x187914u: goto label_187914;
        case 0x18792cu: goto label_18792c;
        default: break;
    }

    ctx->pc = 0x187860u;

    // 0x187860: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x187860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x187864: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x187864u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x187868: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x187868u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x18786c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18786cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x187870: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x187870u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187874: 0x9086023d  lbu         $a2, 0x23D($a0)
    ctx->pc = 0x187874u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 573)));
    // 0x187878: 0x30c30002  andi        $v1, $a2, 0x2
    ctx->pc = 0x187878u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)2);
    // 0x18787c: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x18787Cu;
    {
        const bool branch_taken_0x18787c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x187880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18787Cu;
        // 0x187880: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18787c) {
            ctx->pc = 0x1878B8u;
            goto label_1878b8;
        }
    }
    ctx->pc = 0x187884u;
    // 0x187884: 0x86230224  lh          $v1, 0x224($s1)
    ctx->pc = 0x187884u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 548)));
    // 0x187888: 0x2463fff8  addiu       $v1, $v1, -0x8
    ctx->pc = 0x187888u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967288));
    // 0x18788c: 0xa6230224  sh          $v1, 0x224($s1)
    ctx->pc = 0x18788cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 548), (uint16_t)GPR_U32(ctx, 3));
    // 0x187890: 0xa620019e  sh          $zero, 0x19E($s1)
    ctx->pc = 0x187890u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 414), (uint16_t)GPR_U32(ctx, 0));
    // 0x187894: 0xa620019c  sh          $zero, 0x19C($s1)
    ctx->pc = 0x187894u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 412), (uint16_t)GPR_U32(ctx, 0));
    // 0x187898: 0x86230224  lh          $v1, 0x224($s1)
    ctx->pc = 0x187898u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 548)));
    // 0x18789c: 0x1c600023  bgtz        $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x18789Cu;
    {
        const bool branch_taken_0x18789c = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x18789c) {
            ctx->pc = 0x18792Cu;
            goto label_18792c;
        }
    }
    ctx->pc = 0x1878A4u;
    // 0x1878a4: 0x8223023d  lb          $v1, 0x23D($s1)
    ctx->pc = 0x1878a4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 573)));
    // 0x1878a8: 0x306300fd  andi        $v1, $v1, 0xFD
    ctx->pc = 0x1878a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)253);
    // 0x1878ac: 0xa223023d  sb          $v1, 0x23D($s1)
    ctx->pc = 0x1878acu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 573), (uint8_t)GPR_U32(ctx, 3));
    // 0x1878b0: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x1878B0u;
    {
        const bool branch_taken_0x1878b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1878B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1878B0u;
        // 0x1878b4: 0xa6200224  sh          $zero, 0x224($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 548), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1878b0) {
            ctx->pc = 0x18792Cu;
            goto label_18792c;
        }
    }
    ctx->pc = 0x1878B8u;
label_1878b8:
    // 0x1878b8: 0x30c30008  andi        $v1, $a2, 0x8
    ctx->pc = 0x1878b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)8);
    // 0x1878bc: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x1878BCu;
    {
        const bool branch_taken_0x1878bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1878bc) {
            ctx->pc = 0x187900u;
            goto label_187900;
        }
    }
    ctx->pc = 0x1878C4u;
    // 0x1878c4: 0xa620019e  sh          $zero, 0x19E($s1)
    ctx->pc = 0x1878c4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 414), (uint16_t)GPR_U32(ctx, 0));
    // 0x1878c8: 0xc062400  jal         func_189000
    ctx->pc = 0x1878C8u;
    SET_GPR_U32(ctx, 31, 0x1878D0u);
    ctx->pc = 0x1878CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1878C8u;
    // 0x1878cc: 0xa620019c  sh          $zero, 0x19C($s1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 17), 412), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x189000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x189000u, 0x1878C8u, 0x1878D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1878D0u;
label_1878d0:
    // 0x1878d0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1878D0u;
    {
        const bool branch_taken_0x1878d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1878d0) {
            ctx->pc = 0x1878F0u;
            goto label_1878f0;
        }
    }
    ctx->pc = 0x1878D8u;
    // 0x1878d8: 0x8e240194  lw          $a0, 0x194($s1)
    ctx->pc = 0x1878d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 404)));
    // 0x1878dc: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x1878dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x1878e0: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x1878e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x1878e4: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1878e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1878e8: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1878E8u;
    {
        const bool branch_taken_0x1878e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1878ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1878E8u;
        // 0x1878ec: 0xae230194  sw          $v1, 0x194($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 404), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1878e8) {
            ctx->pc = 0x18792Cu;
            goto label_18792c;
        }
    }
    ctx->pc = 0x1878F0u;
label_1878f0:
    // 0x1878f0: 0x8223023d  lb          $v1, 0x23D($s1)
    ctx->pc = 0x1878f0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 573)));
    // 0x1878f4: 0x306300f7  andi        $v1, $v1, 0xF7
    ctx->pc = 0x1878f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)247);
    // 0x1878f8: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1878F8u;
    {
        const bool branch_taken_0x1878f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1878FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1878F8u;
        // 0x1878fc: 0xa223023d  sb          $v1, 0x23D($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 573), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1878f8) {
            ctx->pc = 0x18792Cu;
            goto label_18792c;
        }
    }
    ctx->pc = 0x187900u;
label_187900:
    // 0x187900: 0x86230224  lh          $v1, 0x224($s1)
    ctx->pc = 0x187900u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 548)));
    // 0x187904: 0x1c600003  bgtz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x187904u;
    {
        const bool branch_taken_0x187904 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x187904) {
            ctx->pc = 0x187914u;
            goto label_187914;
        }
    }
    ctx->pc = 0x18790Cu;
    // 0x18790c: 0xc061e50  jal         func_187940
    ctx->pc = 0x18790Cu;
    SET_GPR_U32(ctx, 31, 0x187914u);
    ctx->pc = 0x187940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187940u, 0x18790Cu, 0x187914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187914u;
label_187914:
    // 0x187914: 0x9223023d  lbu         $v1, 0x23D($s1)
    ctx->pc = 0x187914u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 573)));
    // 0x187918: 0x3063000a  andi        $v1, $v1, 0xA
    ctx->pc = 0x187918u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)10);
    // 0x18791c: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x18791Cu;
    {
        const bool branch_taken_0x18791c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x187920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18791Cu;
        // 0x187920: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18791c) {
            ctx->pc = 0x18792Cu;
            goto label_18792c;
        }
    }
    ctx->pc = 0x187924u;
    // 0x187924: 0xc061f98  jal         func_187E60
    ctx->pc = 0x187924u;
    SET_GPR_U32(ctx, 31, 0x18792Cu);
    ctx->pc = 0x187928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187924u;
    // 0x187928: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x187E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187E60u, 0x187924u, 0x18792Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18792Cu;
label_18792c:
    // 0x18792c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x18792cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->pc = 0x187930u;
}
