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

// Function: FUN_001a10a8
// Address: 0x1a10a8 - 0x1a1214
void FUN_001a10a8_0x1a10a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001a10a8_0x1a10a8");
#endif

    switch (ctx->pc) {
        case 0x1a112cu: goto label_1a112c;
        case 0x1a1158u: goto label_1a1158;
        case 0x1a11b8u: goto label_1a11b8;
        case 0x1a11e8u: goto label_1a11e8;
        default: break;
    }

    ctx->pc = 0x1a10a8u;

    // 0x1a10a8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a10a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a10ac: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1a10acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1a10b0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a10b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a10b4: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x1a10b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1a10b8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a10b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1a10bc: 0x3442e010  ori         $v0, $v0, 0xE010
    ctx->pc = 0x1a10bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57360);
    // 0x1a10c0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1a10c0u;
    runtime->Store32(rdram, ctx, 0x1000E010u, GPR_U32(ctx, 3));
    // 0x1a10c4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1a10c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a10c8: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x1a10c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x1a10cc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1a10ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a10d0: 0x3484b020  ori         $a0, $a0, 0xB020
    ctx->pc = 0x1a10d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)45088);
    // 0x1a10d4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1a10d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1a10d8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1a10d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1a10dc: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1a10dcu;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000B020u));
    // 0x1a10e0: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1A10E0u;
    {
        const bool branch_taken_0x1a10e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A10E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A10E0u;
        // 0x1a10e4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a10e0) {
            ctx->pc = 0x1A1100u;
            goto label_1a1100;
        }
    }
    ctx->pc = 0x1A10E8u;
    // 0x1a10e8: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1a10e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1a10ec: 0x3442b000  ori         $v0, $v0, 0xB000
    ctx->pc = 0x1a10ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45056);
    // 0x1a10f0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1a10f0u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000B000u));
    // 0x1a10f4: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x1a10f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x1a10f8: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A10F8u;
    {
        const bool branch_taken_0x1a10f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A10FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A10F8u;
        // 0x1a10fc: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a10f8) {
            ctx->pc = 0x1A110Cu;
            goto label_1a110c;
        }
    }
    ctx->pc = 0x1A1100u;
label_1a1100:
    // 0x1a1100: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1a1100u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1104: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x1A1104u;
    {
        const bool branch_taken_0x1a1104 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1104u;
        // 0x1a1108: 0xae030004  sw          $v1, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1104) {
            ctx->pc = 0x1A120Cu;
            goto label_1a120c;
        }
    }
    ctx->pc = 0x1A110Cu;
label_1a110c:
    // 0x1a110c: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x1a110cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1a1110: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1a1110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a1114: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1a1114u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1a1118: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1a1118u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1a111c: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x1A111Cu;
    {
        const bool branch_taken_0x1a111c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a111c) {
            ctx->pc = 0x1A1190u;
            goto label_1a1190;
        }
    }
    ctx->pc = 0x1A1124u;
    // 0x1a1124: 0xc06b518  jal         func_1AD460
    ctx->pc = 0x1A1124u;
    SET_GPR_U32(ctx, 31, 0x1A112Cu);
    ctx->pc = 0x1AD460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD460u, 0x1A1124u, 0x1A112Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A112Cu;
label_1a112c:
    // 0x1a112c: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x1a112cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1a1130: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1a1130u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1a1134: 0x3442b010  ori         $v0, $v0, 0xB010
    ctx->pc = 0x1a1134u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45072);
    // 0x1a1138: 0x3404ffc0  ori         $a0, $zero, 0xFFC0
    ctx->pc = 0x1a1138u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x1a113c: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x1a113cu;
    runtime->Store32(rdram, ctx, 0x1000B010u, GPR_U32(ctx, 5));
    // 0x1a1140: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x1a1140u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1a1144: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x1a1144u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x1a1148: 0xac24b020  sw          $a0, -0x4FE0($at)
    ctx->pc = 0x1a1148u;
    runtime->Store32(rdram, ctx, 0x1000B020u, GPR_U32(ctx, 4));
    // 0x1a114c: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x1a114cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x1a1150: 0xc06b52a  jal         func_1AD4A8
    ctx->pc = 0x1A1150u;
    SET_GPR_U32(ctx, 31, 0x1A1158u);
    ctx->pc = 0x1A1154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1150u;
    // 0x1a1154: 0xac23b000  sw          $v1, -0x5000($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294946816), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD4A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD4A8u, 0x1A1150u, 0x1A1158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1158u;
label_1a1158:
    // 0x1a1158: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1a1158u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1a115c: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x1a115cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x1a1160: 0x34632000  ori         $v1, $v1, 0x2000
    ctx->pc = 0x1a1160u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8192);
    // 0x1a1164: 0x344203ff  ori         $v0, $v0, 0x3FF
    ctx->pc = 0x1a1164u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1023);
    // 0x1a1168: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1a1168u;
    runtime->Store32(rdram, ctx, 0x10002000u, GPR_U32(ctx, 2));
    // 0x1a116c: 0x3c04000f  lui         $a0, 0xF
    ctx->pc = 0x1a116cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15 << 16));
    // 0x1a1170: 0x3484fc00  ori         $a0, $a0, 0xFC00
    ctx->pc = 0x1a1170u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)64512);
    // 0x1a1174: 0x3c030fff  lui         $v1, 0xFFF
    ctx->pc = 0x1a1174u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4095 << 16));
    // 0x1a1178: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1a1178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1a117c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1a117cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1a1180: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1a1180u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1a1184: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1a1184u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1a1188: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x1A1188u;
    {
        const bool branch_taken_0x1a1188 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A118Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1188u;
        // 0x1a118c: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1188) {
            ctx->pc = 0x1A1200u;
            goto label_1a1200;
        }
    }
    ctx->pc = 0x1A1190u;
label_1a1190:
    // 0x1a1190: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1a1190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a1194: 0x1443001a  bne         $v0, $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x1A1194u;
    {
        const bool branch_taken_0x1a1194 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1a1194) {
            ctx->pc = 0x1A1200u;
            goto label_1a1200;
        }
    }
    ctx->pc = 0x1A119Cu;
    // 0x1a119c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1a119cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a11a0: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1a11a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1a11a4: 0x41280  sll         $v0, $a0, 10
    ctx->pc = 0x1a11a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 10));
    // 0x1a11a8: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x1a11a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1a11ac: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x1a11acu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1a11b0: 0xc06b518  jal         func_1AD460
    ctx->pc = 0x1A11B0u;
    SET_GPR_U32(ctx, 31, 0x1A11B8u);
    ctx->pc = 0x1A11B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A11B0u;
    // 0x1a11b4: 0xae030008  sw          $v1, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD460u, 0x1A11B0u, 0x1A11B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A11B8u;
label_1a11b8:
    // 0x1a11b8: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1a11b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1a11bc: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1a11bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1a11c0: 0x3463b010  ori         $v1, $v1, 0xB010
    ctx->pc = 0x1a11c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)45072);
    // 0x1a11c4: 0x24050100  addiu       $a1, $zero, 0x100
    ctx->pc = 0x1a11c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1a11c8: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1a11c8u;
    runtime->Store32(rdram, ctx, 0x1000B010u, GPR_U32(ctx, 4));
    // 0x1a11cc: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1a11ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1a11d0: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x1a11d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x1a11d4: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x1a11d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x1a11d8: 0xac22b020  sw          $v0, -0x4FE0($at)
    ctx->pc = 0x1a11d8u;
    runtime->Store32(rdram, ctx, 0x1000B020u, GPR_U32(ctx, 2));
    // 0x1a11dc: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x1a11dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x1a11e0: 0xc06b52a  jal         func_1AD4A8
    ctx->pc = 0x1A11E0u;
    SET_GPR_U32(ctx, 31, 0x1A11E8u);
    ctx->pc = 0x1A11E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A11E0u;
    // 0x1a11e4: 0xac25b000  sw          $a1, -0x5000($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294946816), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD4A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD4A8u, 0x1A11E0u, 0x1A11E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A11E8u;
label_1a11e8:
    // 0x1a11e8: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1a11e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1a11ec: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1a11ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1a11f0: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x1a11f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x1a11f4: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x1a11f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x1a11f8: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1a11f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1a11fc: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1a11fcu;
    runtime->Store32(rdram, ctx, 0x10002000u, GPR_U32(ctx, 3));
label_1a1200:
    // 0x1a1200: 0xf  sync
    ctx->pc = 0x1a1200u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x1a1204: 0x42000038  ei
    ctx->pc = 0x1a1204u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x1a1208: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1a1208u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a120c:
    // 0x1a120c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a120cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a1210: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a1210u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x1a1214u;
}
