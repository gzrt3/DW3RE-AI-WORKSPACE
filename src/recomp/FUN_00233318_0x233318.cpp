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

// Function: FUN_00233318
// Address: 0x233318 - 0x233410
void FUN_00233318_0x233318(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00233318_0x233318");
#endif

    switch (ctx->pc) {
        case 0x233354u: goto label_233354;
        case 0x23336cu: goto label_23336c;
        case 0x233384u: goto label_233384;
        case 0x23339cu: goto label_23339c;
        case 0x2333b4u: goto label_2333b4;
        case 0x2333ccu: goto label_2333cc;
        case 0x2333d4u: goto label_2333d4;
        case 0x2333f0u: goto label_2333f0;
        default: break;
    }

    ctx->pc = 0x233318u;

    // 0x233318: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x233318u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x23331c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23331cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x233320: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x233320u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233324: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x233324u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x233328: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x233328u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23332c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x23332cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x233330: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x233330u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233334: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x233334u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x233338: 0x120982d  daddu       $s3, $t1, $zero
    ctx->pc = 0x233338u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23333c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x23333cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x233340: 0x140a02d  daddu       $s4, $t2, $zero
    ctx->pc = 0x233340u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233344: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x233344u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x233348: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x233348u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x23334c: 0xc068a02  jal         func_1A2808
    ctx->pc = 0x23334Cu;
    SET_GPR_U32(ctx, 31, 0x233354u);
    ctx->pc = 0x233350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23334Cu;
    // 0x233350: 0x160a82d  daddu       $s5, $t3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2808u, 0x23334Cu, 0x233354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233354u;
label_233354:
    // 0x233354: 0x3c060023  lui         $a2, 0x23
    ctx->pc = 0x233354u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)35 << 16));
    // 0x233358: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x233358u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23335c: 0x24c63b08  addiu       $a2, $a2, 0x3B08
    ctx->pc = 0x23335cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 15112));
    // 0x233360: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x233360u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233364: 0xc068b08  jal         func_1A2C20
    ctx->pc = 0x233364u;
    SET_GPR_U32(ctx, 31, 0x23336Cu);
    ctx->pc = 0x233368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233364u;
    // 0x233368: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2C20u, 0x233364u, 0x23336Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23336Cu;
label_23336c:
    // 0x23336c: 0x3c060023  lui         $a2, 0x23
    ctx->pc = 0x23336cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)35 << 16));
    // 0x233370: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x233370u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233374: 0x24c63b48  addiu       $a2, $a2, 0x3B48
    ctx->pc = 0x233374u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 15176));
    // 0x233378: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x233378u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23337c: 0xc068b08  jal         func_1A2C20
    ctx->pc = 0x23337Cu;
    SET_GPR_U32(ctx, 31, 0x233384u);
    ctx->pc = 0x233380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23337Cu;
    // 0x233380: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2C20u, 0x23337Cu, 0x233384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233384u;
label_233384:
    // 0x233384: 0x3c060023  lui         $a2, 0x23
    ctx->pc = 0x233384u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)35 << 16));
    // 0x233388: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x233388u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23338c: 0x24c63b80  addiu       $a2, $a2, 0x3B80
    ctx->pc = 0x23338cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 15232));
    // 0x233390: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x233390u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x233394: 0xc068b08  jal         func_1A2C20
    ctx->pc = 0x233394u;
    SET_GPR_U32(ctx, 31, 0x23339Cu);
    ctx->pc = 0x233398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233394u;
    // 0x233398: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2C20u, 0x233394u, 0x23339Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23339Cu;
label_23339c:
    // 0x23339c: 0x3c060023  lui         $a2, 0x23
    ctx->pc = 0x23339cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)35 << 16));
    // 0x2333a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2333a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2333a4: 0x24c63bb0  addiu       $a2, $a2, 0x3BB0
    ctx->pc = 0x2333a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 15280));
    // 0x2333a8: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2333a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2333ac: 0xc068b08  jal         func_1A2C20
    ctx->pc = 0x2333ACu;
    SET_GPR_U32(ctx, 31, 0x2333B4u);
    ctx->pc = 0x2333B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2333ACu;
    // 0x2333b0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2C20u, 0x2333ACu, 0x2333B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2333B4u;
label_2333b4:
    // 0x2333b4: 0x3c060023  lui         $a2, 0x23
    ctx->pc = 0x2333b4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)35 << 16));
    // 0x2333b8: 0x24c63be0  addiu       $a2, $a2, 0x3BE0
    ctx->pc = 0x2333b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 15328));
    // 0x2333bc: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x2333bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2333c0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2333c0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2333c4: 0xc068b08  jal         func_1A2C20
    ctx->pc = 0x2333C4u;
    SET_GPR_U32(ctx, 31, 0x2333CCu);
    ctx->pc = 0x2333C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2333C4u;
    // 0x2333c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2C20u, 0x2333C4u, 0x2333CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2333CCu;
label_2333cc:
    // 0x2333cc: 0xc08cd20  jal         func_233480
    ctx->pc = 0x2333CCu;
    SET_GPR_U32(ctx, 31, 0x2333D4u);
    ctx->pc = 0x2333D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2333CCu;
    // 0x2333d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x233480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x233480u, 0x2333CCu, 0x2333D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2333D4u;
label_2333d4:
    // 0x2333d4: 0x26040048  addiu       $a0, $s0, 0x48
    ctx->pc = 0x2333d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 72));
    // 0x2333d8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2333d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2333dc: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2333dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2333e0: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x2333e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2333e4: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x2333e4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2333e8: 0xc08c930  jal         func_2324C0
    ctx->pc = 0x2333E8u;
    SET_GPR_U32(ctx, 31, 0x2333F0u);
    ctx->pc = 0x2333ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2333E8u;
    // 0x2333ec: 0x2a0482d  daddu       $t1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2324C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2324C0u, 0x2333E8u, 0x2333F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2333F0u;
label_2333f0:
    // 0x2333f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2333f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2333f4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2333f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2333f8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2333f8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2333fc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2333fcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x233400: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x233400u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x233404: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x233404u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x233408: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x233408u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23340c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x23340cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    ctx->pc = 0x233410u;
}
