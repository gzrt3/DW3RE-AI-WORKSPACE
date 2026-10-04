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

// Function: FUN_0023d888
// Address: 0x23d888 - 0x23d934
void FUN_0023d888_0x23d888(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0023d888_0x23d888");
#endif

    switch (ctx->pc) {
        case 0x23d8d4u: goto label_23d8d4;
        case 0x23d8ecu: goto label_23d8ec;
        case 0x23d900u: goto label_23d900;
        default: break;
    }

    ctx->pc = 0x23d888u;

    // 0x23d888: 0x27bdfb80  addiu       $sp, $sp, -0x480
    ctx->pc = 0x23d888u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966144));
    // 0x23d88c: 0x240a0400  addiu       $t2, $zero, 0x400
    ctx->pc = 0x23d88cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x23d890: 0xffb00460  sd          $s0, 0x460($sp)
    ctx->pc = 0x23d890u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1120), GPR_U64(ctx, 16));
    // 0x23d894: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x23d894u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d898: 0xffb10468  sd          $s1, 0x468($sp)
    ctx->pc = 0x23d898u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1128), GPR_U64(ctx, 17));
    // 0x23d89c: 0x27ab0060  addiu       $t3, $sp, 0x60
    ctx->pc = 0x23d89cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x23d8a0: 0xffbf0470  sd          $ra, 0x470($sp)
    ctx->pc = 0x23d8a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1136), GPR_U64(ctx, 31));
    // 0x23d8a4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x23d8a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d8a8: 0xafab0010  sw          $t3, 0x10($sp)
    ctx->pc = 0x23d8a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 11));
    // 0x23d8ac: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x23d8acu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x23d8b0: 0x9609000e  lhu         $t1, 0xE($s0)
    ctx->pc = 0x23d8b0u;
    SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x23d8b4: 0x8e080054  lw          $t0, 0x54($s0)
    ctx->pc = 0x23d8b4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x23d8b8: 0x3042fffd  andi        $v0, $v0, 0xFFFD
    ctx->pc = 0x23d8b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65533);
    // 0x23d8bc: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x23d8bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x23d8c0: 0x8e070024  lw          $a3, 0x24($s0)
    ctx->pc = 0x23d8c0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x23d8c4: 0xafa80054  sw          $t0, 0x54($sp)
    ctx->pc = 0x23d8c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 8));
    // 0x23d8c8: 0xa7a2000c  sh          $v0, 0xC($sp)
    ctx->pc = 0x23d8c8u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x23d8cc: 0xa7a9000e  sh          $t1, 0xE($sp)
    ctx->pc = 0x23d8ccu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 14), (uint16_t)GPR_U32(ctx, 9));
    // 0x23d8d0: 0xafa3001c  sw          $v1, 0x1C($sp)
    ctx->pc = 0x23d8d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 3));
label_23d8d4:
    // 0x23d8d4: 0xafa70024  sw          $a3, 0x24($sp)
    ctx->pc = 0x23d8d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 7));
    // 0x23d8d8: 0xafaa0014  sw          $t2, 0x14($sp)
    ctx->pc = 0x23d8d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 10));
    // 0x23d8dc: 0xafab0000  sw          $t3, 0x0($sp)
    ctx->pc = 0x23d8dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 11));
    // 0x23d8e0: 0xafaa0008  sw          $t2, 0x8($sp)
    ctx->pc = 0x23d8e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 10));
    // 0x23d8e4: 0xc08f650  jal         func_23D940
    ctx->pc = 0x23D8E4u;
    SET_GPR_U32(ctx, 31, 0x23D8ECu);
    ctx->pc = 0x23D8E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D8E4u;
    // 0x23d8e8: 0xafa00018  sw          $zero, 0x18($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23D940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D940u, 0x23D8E4u, 0x23D8ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D8ECu;
label_23d8ec:
    // 0x23d8ec: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x23d8ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d8f0: 0x6200005  bltz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x23D8F0u;
    {
        const bool branch_taken_0x23d8f0 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x23D8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D8F0u;
        // 0x23d8f4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d8f0) {
            ctx->pc = 0x23D908u;
            goto label_23d908;
        }
    }
    ctx->pc = 0x23D8F8u;
    // 0x23d8f8: 0xc08e1d2  jal         func_238748
    ctx->pc = 0x23D8F8u;
    SET_GPR_U32(ctx, 31, 0x23D900u);
    ctx->pc = 0x238748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238748u, 0x23D8F8u, 0x23D900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D900u;
label_23d900:
    // 0x23d900: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x23d900u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x23d904: 0x62880b  movn        $s1, $v1, $v0
    ctx->pc = 0x23d904u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 3));
label_23d908:
    // 0x23d908: 0x97a2000c  lhu         $v0, 0xC($sp)
    ctx->pc = 0x23d908u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x23d90c: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x23d90cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x23d910: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x23D910u;
    {
        const bool branch_taken_0x23d910 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23D914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D910u;
        // 0x23d914: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d910) {
            ctx->pc = 0x23D928u;
            goto label_23d928;
        }
    }
    ctx->pc = 0x23D918u;
    // 0x23d918: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x23d918u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x23d91c: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x23d91cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x23d920: 0xa602000c  sh          $v0, 0xC($s0)
    ctx->pc = 0x23d920u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x23d924: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x23d924u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_23d928:
    // 0x23d928: 0xdfb00460  ld          $s0, 0x460($sp)
    ctx->pc = 0x23d928u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 1120)));
    // 0x23d92c: 0xdfb10468  ld          $s1, 0x468($sp)
    ctx->pc = 0x23d92cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 1128)));
    // 0x23d930: 0xdfbf0470  ld          $ra, 0x470($sp)
    ctx->pc = 0x23d930u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1136)));
    ctx->pc = 0x23d934u;
}
