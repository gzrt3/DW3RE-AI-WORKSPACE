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

// Function: FUN_0023a918
// Address: 0x23a918 - 0x23aa18
void FUN_0023a918_0x23a918(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0023a918_0x23a918");
#endif

    switch (ctx->pc) {
        case 0x23a950u: goto label_23a950;
        case 0x23a9bcu: goto label_23a9bc;
        case 0x23a9d8u: goto label_23a9d8;
        case 0x23a9e8u: goto label_23a9e8;
        default: break;
    }

    ctx->pc = 0x23a918u;

    // 0x23a918: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x23a918u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x23a91c: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x23a91cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23a920: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x23a920u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x23a924: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x23a924u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23a928: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x23a928u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x23a92c: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x23a92cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23a930: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x23a930u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x23a934: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x23a934u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23a938: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23a938u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x23a93c: 0x26270014  addiu       $a3, $s1, 0x14
    ctx->pc = 0x23a93cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x23a940: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x23a940u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x23a944: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x23a944u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23a948: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x23a948u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x23a94c: 0x8e320010  lw          $s2, 0x10($s1)
    ctx->pc = 0x23a94cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_23a950:
    // 0x23a950: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x23a950u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x23a954: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x23a954u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x23a958: 0x132302a  slt         $a2, $t1, $s2
    ctx->pc = 0x23a958u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x23a95c: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x23a95cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x23a960: 0x31c02  srl         $v1, $v1, 16
    ctx->pc = 0x23a960u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
    // 0x23a964: 0x881018  mult        $v0, $a0, $t0
    ctx->pc = 0x23a964u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x23a968: 0x681818  mult        $v1, $v1, $t0
    ctx->pc = 0x23a968u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x23a96c: 0x532021  addu        $a0, $v0, $s3
    ctx->pc = 0x23a96cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x23a970: 0x42c02  srl         $a1, $a0, 16
    ctx->pc = 0x23a970u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), 16));
    // 0x23a974: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x23a974u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x23a978: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x23a978u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x23a97c: 0x31400  sll         $v0, $v1, 16
    ctx->pc = 0x23a97cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x23a980: 0x39c02  srl         $s3, $v1, 16
    ctx->pc = 0x23a980u;
    SET_GPR_S32(ctx, 19, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
    // 0x23a984: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x23a984u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x23a988: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x23a988u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x23a98c: 0x14c0fff0  bnez        $a2, . + 4 + (-0x10 << 2)
    ctx->pc = 0x23A98Cu;
    {
        const bool branch_taken_0x23a98c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x23A990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A98Cu;
        // 0x23a990: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a98c) {
            ctx->pc = 0x23A950u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23a950;
        }
    }
    ctx->pc = 0x23A994u;
    // 0x23a994: 0x1260001a  beqz        $s3, . + 4 + (0x1A << 2)
    ctx->pc = 0x23A994u;
    {
        const bool branch_taken_0x23a994 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A994u;
        // 0x23a998: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a994) {
            ctx->pc = 0x23AA00u;
            goto label_23aa00;
        }
    }
    ctx->pc = 0x23A99Cu;
    // 0x23a99c: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x23a99cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x23a9a0: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x23a9a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x23a9a4: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x23A9A4u;
    {
        const bool branch_taken_0x23a9a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23A9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A9A4u;
        // 0x23a9a8: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a9a4) {
            ctx->pc = 0x23A9ECu;
            goto label_23a9ec;
        }
    }
    ctx->pc = 0x23A9ACu;
    // 0x23a9ac: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x23a9acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x23a9b0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x23a9b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23a9b4: 0xc08ea10  jal         func_23A840
    ctx->pc = 0x23A9B4u;
    SET_GPR_U32(ctx, 31, 0x23A9BCu);
    ctx->pc = 0x23A9B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23A9B4u;
    // 0x23a9b8: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A840u, 0x23A9B4u, 0x23A9BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A9BCu;
label_23a9bc:
    // 0x23a9bc: 0x8e260010  lw          $a2, 0x10($s1)
    ctx->pc = 0x23a9bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x23a9c0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x23a9c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23a9c4: 0x2625000c  addiu       $a1, $s1, 0xC
    ctx->pc = 0x23a9c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    // 0x23a9c8: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x23a9c8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x23a9cc: 0x2604000c  addiu       $a0, $s0, 0xC
    ctx->pc = 0x23a9ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x23a9d0: 0xc08e93e  jal         func_23A4F8
    ctx->pc = 0x23A9D0u;
    SET_GPR_U32(ctx, 31, 0x23A9D8u);
    ctx->pc = 0x23A9D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23A9D0u;
    // 0x23a9d4: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A4F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A4F8u, 0x23A9D0u, 0x23A9D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A9D8u;
label_23a9d8:
    // 0x23a9d8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x23a9d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23a9dc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x23a9dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23a9e0: 0xc08ea3a  jal         func_23A8E8
    ctx->pc = 0x23A9E0u;
    SET_GPR_U32(ctx, 31, 0x23A9E8u);
    ctx->pc = 0x23A9E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23A9E0u;
    // 0x23a9e4: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A8E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A8E8u, 0x23A9E0u, 0x23A9E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A9E8u;
label_23a9e8:
    // 0x23a9e8: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x23a9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_23a9ec:
    // 0x23a9ec: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x23a9ecu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x23a9f0: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x23a9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x23a9f4: 0xac530014  sw          $s3, 0x14($v0)
    ctx->pc = 0x23a9f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 19));
    // 0x23a9f8: 0xae320010  sw          $s2, 0x10($s1)
    ctx->pc = 0x23a9f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 18));
    // 0x23a9fc: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x23a9fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_23aa00:
    // 0x23aa00: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23aa00u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23aa04: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x23aa04u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x23aa08: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x23aa08u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23aa0c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x23aa0cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x23aa10: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x23aa10u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23aa14: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x23aa14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    ctx->pc = 0x23aa18u;
}
