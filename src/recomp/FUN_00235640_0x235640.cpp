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

// Function: FUN_00235640
// Address: 0x235640 - 0x235724
void FUN_00235640_0x235640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00235640_0x235640");
#endif

    switch (ctx->pc) {
        case 0x23567cu: goto label_23567c;
        case 0x23568cu: goto label_23568c;
        case 0x2356d0u: goto label_2356d0;
        case 0x2356f8u: goto label_2356f8;
        case 0x235704u: goto label_235704;
        default: break;
    }

    ctx->pc = 0x235640u;

    // 0x235640: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x235640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x235644: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x235644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x235648: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x235648u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23564c: 0x8f8482e4  lw          $a0, -0x7D1C($gp)
    ctx->pc = 0x23564cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935268)));
    // 0x235650: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x235650u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x235654: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x235654u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235658: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x235658u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23565c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x23565cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x235660: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x235660u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x235664: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x235664u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235668: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x235668u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x23566c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x23566cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x235670: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x235670u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x235674: 0xc08dbf8  jal         func_236FE0
    ctx->pc = 0x235674u;
    SET_GPR_U32(ctx, 31, 0x23567Cu);
    ctx->pc = 0x235678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235674u;
    // 0x235678: 0xe0902d  daddu       $s2, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236FE0u, 0x235674u, 0x23567Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23567Cu;
label_23567c:
    // 0x23567c: 0x14400022  bnez        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x23567Cu;
    {
        const bool branch_taken_0x23567c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x235680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23567Cu;
        // 0x235680: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23567c) {
            ctx->pc = 0x235708u;
            goto label_235708;
        }
    }
    ctx->pc = 0x235684u;
    // 0x235684: 0xc08d17c  jal         func_2345F0
    ctx->pc = 0x235684u;
    SET_GPR_U32(ctx, 31, 0x23568Cu);
    ctx->pc = 0x2345F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2345F0u, 0x235684u, 0x23568Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23568Cu;
label_23568c:
    // 0x23568c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x23568cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235690: 0x1600001a  bnez        $s0, . + 4 + (0x1A << 2)
    ctx->pc = 0x235690u;
    {
        const bool branch_taken_0x235690 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x235694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235690u;
        // 0x235694: 0x2e420040  sltiu       $v0, $s2, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)64) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x235690) {
            ctx->pc = 0x2356FCu;
            goto label_2356fc;
        }
    }
    ctx->pc = 0x235698u;
    // 0x235698: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x235698u;
    {
        const bool branch_taken_0x235698 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x235698) {
            ctx->pc = 0x2356A8u;
            goto label_2356a8;
        }
    }
    ctx->pc = 0x2356A0u;
    // 0x2356a0: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x2356A0u;
    {
        const bool branch_taken_0x2356a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2356A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2356A0u;
        // 0x2356a4: 0x2410ff9d  addiu       $s0, $zero, -0x63 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967197));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2356a0) {
            ctx->pc = 0x2356FCu;
            goto label_2356fc;
        }
    }
    ctx->pc = 0x2356A8u;
label_2356a8:
    // 0x2356a8: 0x12400014  beqz        $s2, . + 4 + (0x14 << 2)
    ctx->pc = 0x2356A8u;
    {
        const bool branch_taken_0x2356a8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2356ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2356A8u;
        // 0x2356ac: 0x1288c0  sll         $s1, $s2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2356a8) {
            ctx->pc = 0x2356FCu;
            goto label_2356fc;
        }
    }
    ctx->pc = 0x2356B0u;
    // 0x2356b0: 0x3c100059  lui         $s0, 0x59
    ctx->pc = 0x2356b0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)89 << 16));
    // 0x2356b4: 0x2610ad00  addiu       $s0, $s0, -0x5300
    ctx->pc = 0x2356b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294946048));
    // 0x2356b8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2356b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2356bc: 0xae120000  sw          $s2, 0x0($s0)
    ctx->pc = 0x2356bcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x58AD00u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x58AD00u, _value); } while (0);
    // 0x2356c0: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x2356c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x2356c4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2356c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2356c8: 0xc08e93e  jal         func_23A4F8
    ctx->pc = 0x2356C8u;
    SET_GPR_U32(ctx, 31, 0x2356D0u);
    ctx->pc = 0x2356CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2356C8u;
    // 0x2356cc: 0x26100204  addiu       $s0, $s0, 0x204 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 516));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A4F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A4F8u, 0x2356C8u, 0x2356D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2356D0u;
label_2356d0:
    // 0x2356d0: 0x3c030029  lui         $v1, 0x29
    ctx->pc = 0x2356d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
    // 0x2356d4: 0x24630518  addiu       $v1, $v1, 0x518
    ctx->pc = 0x2356d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1304));
    // 0x2356d8: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x2356d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x2356dc: 0xac750004  sw          $s5, 0x4($v1)
    ctx->pc = 0x2356dcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 21));
    // 0x2356e0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2356e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2356e4: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x2356e4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
    // 0x2356e8: 0x26260004  addiu       $a2, $s1, 0x4
    ctx->pc = 0x2356e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x2356ec: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x2356ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x2356f0: 0xc08d192  jal         func_234648
    ctx->pc = 0x2356F0u;
    SET_GPR_U32(ctx, 31, 0x2356F8u);
    ctx->pc = 0x2356F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2356F0u;
    // 0x2356f4: 0x2405002e  addiu       $a1, $zero, 0x2E (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
    ctx->in_delay_slot = false;
    ctx->pc = 0x234648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x234648u, 0x2356F0u, 0x2356F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2356F8u;
label_2356f8:
    // 0x2356f8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2356f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2356fc:
    // 0x2356fc: 0xc069210  jal         func_1A4840
    ctx->pc = 0x2356FCu;
    SET_GPR_U32(ctx, 31, 0x235704u);
    ctx->pc = 0x235700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2356FCu;
    // 0x235700: 0x8f8482e4  lw          $a0, -0x7D1C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935268)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4840u, 0x2356FCu, 0x235704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235704u;
label_235704:
    // 0x235704: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x235704u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_235708:
    // 0x235708: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x235708u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23570c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x23570cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x235710: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x235710u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x235714: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x235714u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x235718: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x235718u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23571c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x23571cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x235720: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x235720u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    ctx->pc = 0x235724u;
}
