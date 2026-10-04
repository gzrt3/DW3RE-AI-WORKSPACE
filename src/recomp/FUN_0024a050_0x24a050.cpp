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

// Function: FUN_0024a050
// Address: 0x24a050 - 0x24a41c
void FUN_0024a050_0x24a050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0024a050_0x24a050");
#endif

    switch (ctx->pc) {
        case 0x24a084u: goto label_24a084;
        case 0x24a0acu: goto label_24a0ac;
        case 0x24a14cu: goto label_24a14c;
        case 0x24a1d4u: goto label_24a1d4;
        case 0x24a330u: goto label_24a330;
        default: break;
    }

    ctx->pc = 0x24a050u;

    // 0x24a050: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x24a050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x24a054: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x24a054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x24a058: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x24a058u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x24a05c: 0x8f8292fc  lw          $v0, -0x6D04($gp)
    ctx->pc = 0x24a05cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939388)));
    // 0x24a060: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x24a060u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a064: 0x8c440014  lw          $a0, 0x14($v0)
    ctx->pc = 0x24a064u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x24a068: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x24a068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x24a06c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x24a06cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x24a070: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x24a070u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x24a074: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x24a074u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x24a078: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x24a078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x24a07c: 0xc08f3d6  jal         func_23CF58
    ctx->pc = 0x24A07Cu;
    SET_GPR_U32(ctx, 31, 0x24A084u);
    ctx->pc = 0x24A080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A07Cu;
    // 0x24a080: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23CF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23CF58u, 0x24A07Cu, 0x24A084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A084u;
label_24a084:
    // 0x24a084: 0x8f8692fc  lw          $a2, -0x6D04($gp)
    ctx->pc = 0x24a084u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939388)));
    // 0x24a088: 0x90c4001d  lbu         $a0, 0x1D($a2)
    ctx->pc = 0x24a088u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 29)));
    // 0x24a08c: 0x24830080  addiu       $v1, $a0, 0x80
    ctx->pc = 0x24a08cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 128));
    // 0x24a090: 0x28610080  slti        $at, $v1, 0x80
    ctx->pc = 0x24a090u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x24a094: 0x10200021  beqz        $at, . + 4 + (0x21 << 2)
    ctx->pc = 0x24A094u;
    {
        const bool branch_taken_0x24a094 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A094u;
        // 0x24a098: 0x24c5001d  addiu       $a1, $a2, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 29));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a094) {
            ctx->pc = 0x24A11Cu;
            goto label_24a11c;
        }
    }
    ctx->pc = 0x24A09Cu;
    // 0x24a09c: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x24a09cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x24a0a0: 0x10200019  beqz        $at, . + 4 + (0x19 << 2)
    ctx->pc = 0x24A0A0u;
    {
        const bool branch_taken_0x24a0a0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A0A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A0A0u;
        // 0x24a0a4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a0a0) {
            ctx->pc = 0x24A108u;
            goto label_24a108;
        }
    }
    ctx->pc = 0x24A0A8u;
    // 0x24a0a8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x24a0a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24a0ac:
    // 0x24a0ac: 0x8f8492fc  lw          $a0, -0x6D04($gp)
    ctx->pc = 0x24a0acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939388)));
    // 0x24a0b0: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x24a0b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x24a0b4: 0x2063821  addu        $a3, $s0, $a2
    ctx->pc = 0x24a0b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
    // 0x24a0b8: 0x3421a010  ori         $at, $at, 0xA010
    ctx->pc = 0x24a0b8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)40976);
    // 0x24a0bc: 0xe11821  addu        $v1, $a3, $at
    ctx->pc = 0x24a0bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 1)));
    // 0x24a0c0: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x24A0C0u;
    {
        const bool branch_taken_0x24a0c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A0C0u;
        // 0x24a0c4: 0x9084001d  lbu         $a0, 0x1D($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 29)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a0c0) {
            ctx->pc = 0x24A0F8u;
            goto label_24a0f8;
        }
    }
    ctx->pc = 0x24A0C8u;
    // 0x24a0c8: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x24a0c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x24a0cc: 0xe10821  addu        $at, $a3, $at
    ctx->pc = 0x24a0ccu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 1)));
    // 0x24a0d0: 0xa024a083  sb          $a0, -0x5F7D($at)
    ctx->pc = 0x24a0d0u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294942851), (uint8_t)GPR_U32(ctx, 4));
    // 0x24a0d4: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x24a0d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x24a0d8: 0xe10821  addu        $at, $a3, $at
    ctx->pc = 0x24a0d8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 1)));
    // 0x24a0dc: 0xa024a09b  sb          $a0, -0x5F65($at)
    ctx->pc = 0x24a0dcu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294942875), (uint8_t)GPR_U32(ctx, 4));
    // 0x24a0e0: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x24a0e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x24a0e4: 0xe10821  addu        $at, $a3, $at
    ctx->pc = 0x24a0e4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 1)));
    // 0x24a0e8: 0xa024a0b3  sb          $a0, -0x5F4D($at)
    ctx->pc = 0x24a0e8u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294942899), (uint8_t)GPR_U32(ctx, 4));
    // 0x24a0ec: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x24a0ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x24a0f0: 0xe10821  addu        $at, $a3, $at
    ctx->pc = 0x24a0f0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 1)));
    // 0x24a0f4: 0xa024a0cb  sb          $a0, -0x5F35($at)
    ctx->pc = 0x24a0f4u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294942923), (uint8_t)GPR_U32(ctx, 4));
label_24a0f8:
    // 0x24a0f8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x24a0f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x24a0fc: 0xa2182a  slt         $v1, $a1, $v0
    ctx->pc = 0x24a0fcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x24a100: 0x1460ffea  bnez        $v1, . + 4 + (-0x16 << 2)
    ctx->pc = 0x24A100u;
    {
        const bool branch_taken_0x24a100 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x24A104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A100u;
        // 0x24a104: 0x24c600d0  addiu       $a2, $a2, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 208));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a100) {
            ctx->pc = 0x24A0ACu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24a0ac;
        }
    }
    ctx->pc = 0x24A108u;
label_24a108:
    // 0x24a108: 0x8f8492fc  lw          $a0, -0x6D04($gp)
    ctx->pc = 0x24a108u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939388)));
    // 0x24a10c: 0x9083001d  lbu         $v1, 0x1D($a0)
    ctx->pc = 0x24a10cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 29)));
    // 0x24a110: 0x24630080  addiu       $v1, $v1, 0x80
    ctx->pc = 0x24a110u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x24a114: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x24A114u;
    {
        const bool branch_taken_0x24a114 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A114u;
        // 0x24a118: 0xa083001d  sb          $v1, 0x1D($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 29), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a114) {
            ctx->pc = 0x24A1A8u;
            goto label_24a1a8;
        }
    }
    ctx->pc = 0x24A11Cu;
label_24a11c:
    // 0x24a11c: 0x28810080  slti        $at, $a0, 0x80
    ctx->pc = 0x24a11cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x24a120: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x24A120u;
    {
        const bool branch_taken_0x24a120 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A120u;
        // 0x24a124: 0x3c030025  lui         $v1, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a120) {
            ctx->pc = 0x24A134u;
            goto label_24a134;
        }
    }
    ctx->pc = 0x24A128u;
    // 0x24a128: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x24a128u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x24a12c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x24A12Cu;
    {
        const bool branch_taken_0x24a12c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A12Cu;
        // 0x24a130: 0xa0a30000  sb          $v1, 0x0($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a12c) {
            ctx->pc = 0x24A13Cu;
            goto label_24a13c;
        }
    }
    ctx->pc = 0x24A134u;
label_24a134:
    // 0x24a134: 0x2463a000  addiu       $v1, $v1, -0x6000
    ctx->pc = 0x24a134u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294942720));
    // 0x24a138: 0xacc30018  sw          $v1, 0x18($a2)
    ctx->pc = 0x24a138u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 3));
label_24a13c:
    // 0x24a13c: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x24a13cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x24a140: 0x10200019  beqz        $at, . + 4 + (0x19 << 2)
    ctx->pc = 0x24A140u;
    {
        const bool branch_taken_0x24a140 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A140u;
        // 0x24a144: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a140) {
            ctx->pc = 0x24A1A8u;
            goto label_24a1a8;
        }
    }
    ctx->pc = 0x24A148u;
    // 0x24a148: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x24a148u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24a14c:
    // 0x24a14c: 0x8f8492fc  lw          $a0, -0x6D04($gp)
    ctx->pc = 0x24a14cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939388)));
    // 0x24a150: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x24a150u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x24a154: 0x2053021  addu        $a2, $s0, $a1
    ctx->pc = 0x24a154u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x24a158: 0x3421a010  ori         $at, $at, 0xA010
    ctx->pc = 0x24a158u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)40976);
    // 0x24a15c: 0xc11821  addu        $v1, $a2, $at
    ctx->pc = 0x24a15cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 1)));
    // 0x24a160: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x24A160u;
    {
        const bool branch_taken_0x24a160 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A160u;
        // 0x24a164: 0x9084001d  lbu         $a0, 0x1D($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 29)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a160) {
            ctx->pc = 0x24A198u;
            goto label_24a198;
        }
    }
    ctx->pc = 0x24A168u;
    // 0x24a168: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x24a168u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x24a16c: 0xc10821  addu        $at, $a2, $at
    ctx->pc = 0x24a16cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 1)));
    // 0x24a170: 0xa024a083  sb          $a0, -0x5F7D($at)
    ctx->pc = 0x24a170u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294942851), (uint8_t)GPR_U32(ctx, 4));
    // 0x24a174: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x24a174u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x24a178: 0xc10821  addu        $at, $a2, $at
    ctx->pc = 0x24a178u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 1)));
    // 0x24a17c: 0xa024a09b  sb          $a0, -0x5F65($at)
    ctx->pc = 0x24a17cu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294942875), (uint8_t)GPR_U32(ctx, 4));
    // 0x24a180: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x24a180u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x24a184: 0xc10821  addu        $at, $a2, $at
    ctx->pc = 0x24a184u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 1)));
    // 0x24a188: 0xa024a0b3  sb          $a0, -0x5F4D($at)
    ctx->pc = 0x24a188u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294942899), (uint8_t)GPR_U32(ctx, 4));
    // 0x24a18c: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x24a18cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x24a190: 0xc10821  addu        $at, $a2, $at
    ctx->pc = 0x24a190u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 1)));
    // 0x24a194: 0xa024a0cb  sb          $a0, -0x5F35($at)
    ctx->pc = 0x24a194u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294942923), (uint8_t)GPR_U32(ctx, 4));
label_24a198:
    // 0x24a198: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x24a198u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x24a19c: 0xe2182a  slt         $v1, $a3, $v0
    ctx->pc = 0x24a19cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x24a1a0: 0x1460ffea  bnez        $v1, . + 4 + (-0x16 << 2)
    ctx->pc = 0x24A1A0u;
    {
        const bool branch_taken_0x24a1a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x24A1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A1A0u;
        // 0x24a1a4: 0x24a500d0  addiu       $a1, $a1, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 208));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a1a0) {
            ctx->pc = 0x24A14Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24a14c;
        }
    }
    ctx->pc = 0x24A1A8u;
label_24a1a8:
    // 0x24a1a8: 0x8f8392fc  lw          $v1, -0x6D04($gp)
    ctx->pc = 0x24a1a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939388)));
    // 0x24a1ac: 0x9064001c  lbu         $a0, 0x1C($v1)
    ctx->pc = 0x24a1acu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x24a1b0: 0x2465001c  addiu       $a1, $v1, 0x1C
    ctx->pc = 0x24a1b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 28));
    // 0x24a1b4: 0x24830080  addiu       $v1, $a0, 0x80
    ctx->pc = 0x24a1b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 128));
    // 0x24a1b8: 0x28610080  slti        $at, $v1, 0x80
    ctx->pc = 0x24a1b8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x24a1bc: 0x10200055  beqz        $at, . + 4 + (0x55 << 2)
    ctx->pc = 0x24A1BCu;
    {
        const bool branch_taken_0x24a1bc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A1BCu;
        // 0x24a1c0: 0x28810080  slti        $at, $a0, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)128) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a1bc) {
            ctx->pc = 0x24A314u;
            goto label_24a314;
        }
    }
    ctx->pc = 0x24A1C4u;
    // 0x24a1c4: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x24a1c4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x24a1c8: 0x1020004d  beqz        $at, . + 4 + (0x4D << 2)
    ctx->pc = 0x24A1C8u;
    {
        const bool branch_taken_0x24a1c8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A1C8u;
        // 0x24a1cc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a1c8) {
            ctx->pc = 0x24A300u;
            goto label_24a300;
        }
    }
    ctx->pc = 0x24A1D0u;
    // 0x24a1d0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x24a1d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24a1d4:
    // 0x24a1d4: 0x8f8492fc  lw          $a0, -0x6D04($gp)
    ctx->pc = 0x24a1d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939388)));
    // 0x24a1d8: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x24a1d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x24a1dc: 0x2053021  addu        $a2, $s0, $a1
    ctx->pc = 0x24a1dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x24a1e0: 0x3421a010  ori         $at, $at, 0xA010
    ctx->pc = 0x24a1e0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)40976);
    // 0x24a1e4: 0xc11821  addu        $v1, $a2, $at
    ctx->pc = 0x24a1e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 1)));
    // 0x24a1e8: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x24A1E8u;
    {
        const bool branch_taken_0x24a1e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A1E8u;
        // 0x24a1ec: 0x9084001c  lbu         $a0, 0x1C($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a1e8) {
            ctx->pc = 0x24A220u;
            goto label_24a220;
        }
    }
    ctx->pc = 0x24A1F0u;
    // 0x24a1f0: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x24a1f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x24a1f4: 0xc10821  addu        $at, $a2, $at
    ctx->pc = 0x24a1f4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 1)));
    // 0x24a1f8: 0xa024a083  sb          $a0, -0x5F7D($at)
    ctx->pc = 0x24a1f8u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294942851), (uint8_t)GPR_U32(ctx, 4));
    // 0x24a1fc: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x24a1fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x24a200: 0xc10821  addu        $at, $a2, $at
    ctx->pc = 0x24a200u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 1)));
    // 0x24a204: 0xa024a09b  sb          $a0, -0x5F65($at)
    ctx->pc = 0x24a204u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294942875), (uint8_t)GPR_U32(ctx, 4));
    // 0x24a208: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x24a208u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x24a20c: 0xc10821  addu        $at, $a2, $at
    ctx->pc = 0x24a20cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 1)));
    // 0x24a210: 0xa024a0b3  sb          $a0, -0x5F4D($at)
    ctx->pc = 0x24a210u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294942899), (uint8_t)GPR_U32(ctx, 4));
    // 0x24a214: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x24a214u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x24a218: 0xc10821  addu        $at, $a2, $at
    ctx->pc = 0x24a218u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 1)));
    // 0x24a21c: 0xa024a0cb  sb          $a0, -0x5F35($at)
    ctx->pc = 0x24a21cu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294942923), (uint8_t)GPR_U32(ctx, 4));
label_24a220:
    // 0x24a220: 0x8f8492fc  lw          $a0, -0x6D04($gp)
    ctx->pc = 0x24a220u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939388)));
    // 0x24a224: 0x24c36810  addiu       $v1, $a2, 0x6810
    ctx->pc = 0x24a224u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 26640));
    // 0x24a228: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x24A228u;
    {
        const bool branch_taken_0x24a228 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A228u;
        // 0x24a22c: 0x9084001c  lbu         $a0, 0x1C($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a228) {
            ctx->pc = 0x24A240u;
            goto label_24a240;
        }
    }
    ctx->pc = 0x24A230u;
    // 0x24a230: 0xa0c46883  sb          $a0, 0x6883($a2)
    ctx->pc = 0x24a230u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 26755), (uint8_t)GPR_U32(ctx, 4));
    // 0x24a234: 0xa0c4689b  sb          $a0, 0x689B($a2)
    ctx->pc = 0x24a234u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 26779), (uint8_t)GPR_U32(ctx, 4));
    // 0x24a238: 0xa0c468b3  sb          $a0, 0x68B3($a2)
    ctx->pc = 0x24a238u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 26803), (uint8_t)GPR_U32(ctx, 4));
    // 0x24a23c: 0xa0c468cb  sb          $a0, 0x68CB($a2)
    ctx->pc = 0x24a23cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 26827), (uint8_t)GPR_U32(ctx, 4));
label_24a240:
    // 0x24a240: 0x8f8492fc  lw          $a0, -0x6D04($gp)
    ctx->pc = 0x24a240u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939388)));
    // 0x24a244: 0x24c30010  addiu       $v1, $a2, 0x10
    ctx->pc = 0x24a244u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x24a248: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x24A248u;
    {
        const bool branch_taken_0x24a248 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A248u;
        // 0x24a24c: 0x9084001c  lbu         $a0, 0x1C($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a248) {
            ctx->pc = 0x24A260u;
            goto label_24a260;
        }
    }
    ctx->pc = 0x24A250u;
    // 0x24a250: 0xa0c40083  sb          $a0, 0x83($a2)
    ctx->pc = 0x24a250u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 131), (uint8_t)GPR_U32(ctx, 4));
    // 0x24a254: 0xa0c4009b  sb          $a0, 0x9B($a2)
    ctx->pc = 0x24a254u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 155), (uint8_t)GPR_U32(ctx, 4));
    // 0x24a258: 0xa0c400b3  sb          $a0, 0xB3($a2)
    ctx->pc = 0x24a258u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 179), (uint8_t)GPR_U32(ctx, 4));
    // 0x24a25c: 0xa0c400cb  sb          $a0, 0xCB($a2)
    ctx->pc = 0x24a25cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 203), (uint8_t)GPR_U32(ctx, 4));
label_24a260:
    // 0x24a260: 0x8f8492fc  lw          $a0, -0x6D04($gp)
    ctx->pc = 0x24a260u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939388)));
    // 0x24a264: 0x3401d010  ori         $at, $zero, 0xD010
    ctx->pc = 0x24a264u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)53264);
    // 0x24a268: 0xc11821  addu        $v1, $a2, $at
    ctx->pc = 0x24a268u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 1)));
    // 0x24a26c: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x24A26Cu;
    {
        const bool branch_taken_0x24a26c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A26Cu;
        // 0x24a270: 0x9084001c  lbu         $a0, 0x1C($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a26c) {
            ctx->pc = 0x24A2A4u;
            goto label_24a2a4;
        }
    }
    ctx->pc = 0x24A274u;
    // 0x24a274: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x24a274u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x24a278: 0xc10821  addu        $at, $a2, $at
    ctx->pc = 0x24a278u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 1)));
    // 0x24a27c: 0xa024d083  sb          $a0, -0x2F7D($at)
    ctx->pc = 0x24a27cu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294955139), (uint8_t)GPR_U32(ctx, 4));
    // 0x24a280: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x24a280u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x24a284: 0xc10821  addu        $at, $a2, $at
    ctx->pc = 0x24a284u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 1)));
    // 0x24a288: 0xa024d09b  sb          $a0, -0x2F65($at)
    ctx->pc = 0x24a288u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294955163), (uint8_t)GPR_U32(ctx, 4));
    // 0x24a28c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x24a28cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x24a290: 0xc10821  addu        $at, $a2, $at
    ctx->pc = 0x24a290u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 1)));
    // 0x24a294: 0xa024d0b3  sb          $a0, -0x2F4D($at)
    ctx->pc = 0x24a294u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294955187), (uint8_t)GPR_U32(ctx, 4));
    // 0x24a298: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x24a298u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x24a29c: 0xc10821  addu        $at, $a2, $at
    ctx->pc = 0x24a29cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 1)));
    // 0x24a2a0: 0xa024d0cb  sb          $a0, -0x2F35($at)
    ctx->pc = 0x24a2a0u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294955211), (uint8_t)GPR_U32(ctx, 4));
label_24a2a4:
    // 0x24a2a4: 0x0  nop
    ctx->pc = 0x24a2a4u;
    // NOP
    // 0x24a2a8: 0x8f8492fc  lw          $a0, -0x6D04($gp)
    ctx->pc = 0x24a2a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939388)));
    // 0x24a2ac: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x24a2acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x24a2b0: 0x34213810  ori         $at, $at, 0x3810
    ctx->pc = 0x24a2b0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)14352);
    // 0x24a2b4: 0xc11821  addu        $v1, $a2, $at
    ctx->pc = 0x24a2b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 1)));
    // 0x24a2b8: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x24A2B8u;
    {
        const bool branch_taken_0x24a2b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A2B8u;
        // 0x24a2bc: 0x9084001c  lbu         $a0, 0x1C($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a2b8) {
            ctx->pc = 0x24A2F0u;
            goto label_24a2f0;
        }
    }
    ctx->pc = 0x24A2C0u;
    // 0x24a2c0: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x24a2c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x24a2c4: 0xc10821  addu        $at, $a2, $at
    ctx->pc = 0x24a2c4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 1)));
    // 0x24a2c8: 0xa0243883  sb          $a0, 0x3883($at)
    ctx->pc = 0x24a2c8u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 14467), (uint8_t)GPR_U32(ctx, 4));
    // 0x24a2cc: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x24a2ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x24a2d0: 0xc10821  addu        $at, $a2, $at
    ctx->pc = 0x24a2d0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 1)));
    // 0x24a2d4: 0xa024389b  sb          $a0, 0x389B($at)
    ctx->pc = 0x24a2d4u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 14491), (uint8_t)GPR_U32(ctx, 4));
    // 0x24a2d8: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x24a2d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x24a2dc: 0xc10821  addu        $at, $a2, $at
    ctx->pc = 0x24a2dcu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 1)));
    // 0x24a2e0: 0xa02438b3  sb          $a0, 0x38B3($at)
    ctx->pc = 0x24a2e0u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 14515), (uint8_t)GPR_U32(ctx, 4));
    // 0x24a2e4: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x24a2e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x24a2e8: 0xc10821  addu        $at, $a2, $at
    ctx->pc = 0x24a2e8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 1)));
    // 0x24a2ec: 0xa02438cb  sb          $a0, 0x38CB($at)
    ctx->pc = 0x24a2ecu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 14539), (uint8_t)GPR_U32(ctx, 4));
label_24a2f0:
    // 0x24a2f0: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x24a2f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x24a2f4: 0xe2182a  slt         $v1, $a3, $v0
    ctx->pc = 0x24a2f4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x24a2f8: 0x1460ffb6  bnez        $v1, . + 4 + (-0x4A << 2)
    ctx->pc = 0x24A2F8u;
    {
        const bool branch_taken_0x24a2f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x24A2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A2F8u;
        // 0x24a2fc: 0x24a500d0  addiu       $a1, $a1, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 208));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a2f8) {
            ctx->pc = 0x24A1D4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24a1d4;
        }
    }
    ctx->pc = 0x24A300u;
label_24a300:
    // 0x24a300: 0x8f8492fc  lw          $a0, -0x6D04($gp)
    ctx->pc = 0x24a300u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939388)));
    // 0x24a304: 0x9083001c  lbu         $v1, 0x1C($a0)
    ctx->pc = 0x24a304u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x24a308: 0x24630080  addiu       $v1, $v1, 0x80
    ctx->pc = 0x24a308u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x24a30c: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x24A30Cu;
    {
        const bool branch_taken_0x24a30c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A30Cu;
        // 0x24a310: 0xa083001c  sb          $v1, 0x1C($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 28), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a30c) {
            ctx->pc = 0x24A418u;
            goto label_24a418;
        }
    }
    ctx->pc = 0x24A314u;
label_24a314:
    // 0x24a314: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x24A314u;
    {
        const bool branch_taken_0x24a314 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A314u;
        // 0x24a318: 0x24030080  addiu       $v1, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a314) {
            ctx->pc = 0x24A320u;
            goto label_24a320;
        }
    }
    ctx->pc = 0x24A31Cu;
    // 0x24a31c: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x24a31cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
label_24a320:
    // 0x24a320: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x24a320u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x24a324: 0x1020003c  beqz        $at, . + 4 + (0x3C << 2)
    ctx->pc = 0x24A324u;
    {
        const bool branch_taken_0x24a324 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A324u;
        // 0x24a328: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a324) {
            ctx->pc = 0x24A418u;
            goto label_24a418;
        }
    }
    ctx->pc = 0x24A32Cu;
    // 0x24a32c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x24a32cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24a330:
    // 0x24a330: 0x8f8492fc  lw          $a0, -0x6D04($gp)
    ctx->pc = 0x24a330u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939388)));
    // 0x24a334: 0x2053021  addu        $a2, $s0, $a1
    ctx->pc = 0x24a334u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x24a338: 0x24c36810  addiu       $v1, $a2, 0x6810
    ctx->pc = 0x24a338u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 26640));
    // 0x24a33c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x24A33Cu;
    {
        const bool branch_taken_0x24a33c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A33Cu;
        // 0x24a340: 0x9084001c  lbu         $a0, 0x1C($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a33c) {
            ctx->pc = 0x24A354u;
            goto label_24a354;
        }
    }
    ctx->pc = 0x24A344u;
    // 0x24a344: 0xa0c46883  sb          $a0, 0x6883($a2)
    ctx->pc = 0x24a344u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 26755), (uint8_t)GPR_U32(ctx, 4));
    // 0x24a348: 0xa0c4689b  sb          $a0, 0x689B($a2)
    ctx->pc = 0x24a348u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 26779), (uint8_t)GPR_U32(ctx, 4));
    // 0x24a34c: 0xa0c468b3  sb          $a0, 0x68B3($a2)
    ctx->pc = 0x24a34cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 26803), (uint8_t)GPR_U32(ctx, 4));
    // 0x24a350: 0xa0c468cb  sb          $a0, 0x68CB($a2)
    ctx->pc = 0x24a350u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 26827), (uint8_t)GPR_U32(ctx, 4));
label_24a354:
    // 0x24a354: 0x0  nop
    ctx->pc = 0x24a354u;
    // NOP
    // 0x24a358: 0x8f8492fc  lw          $a0, -0x6D04($gp)
    ctx->pc = 0x24a358u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939388)));
    // 0x24a35c: 0x24c30010  addiu       $v1, $a2, 0x10
    ctx->pc = 0x24a35cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x24a360: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x24A360u;
    {
        const bool branch_taken_0x24a360 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A360u;
        // 0x24a364: 0x9084001c  lbu         $a0, 0x1C($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a360) {
            ctx->pc = 0x24A378u;
            goto label_24a378;
        }
    }
    ctx->pc = 0x24A368u;
    // 0x24a368: 0xa0c40083  sb          $a0, 0x83($a2)
    ctx->pc = 0x24a368u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 131), (uint8_t)GPR_U32(ctx, 4));
    // 0x24a36c: 0xa0c4009b  sb          $a0, 0x9B($a2)
    ctx->pc = 0x24a36cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 155), (uint8_t)GPR_U32(ctx, 4));
    // 0x24a370: 0xa0c400b3  sb          $a0, 0xB3($a2)
    ctx->pc = 0x24a370u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 179), (uint8_t)GPR_U32(ctx, 4));
    // 0x24a374: 0xa0c400cb  sb          $a0, 0xCB($a2)
    ctx->pc = 0x24a374u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 203), (uint8_t)GPR_U32(ctx, 4));
label_24a378:
    // 0x24a378: 0x8f8492fc  lw          $a0, -0x6D04($gp)
    ctx->pc = 0x24a378u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939388)));
    // 0x24a37c: 0x3401d010  ori         $at, $zero, 0xD010
    ctx->pc = 0x24a37cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)53264);
    // 0x24a380: 0xc11821  addu        $v1, $a2, $at
    ctx->pc = 0x24a380u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 1)));
    // 0x24a384: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x24A384u;
    {
        const bool branch_taken_0x24a384 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A384u;
        // 0x24a388: 0x9084001c  lbu         $a0, 0x1C($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a384) {
            ctx->pc = 0x24A3BCu;
            goto label_24a3bc;
        }
    }
    ctx->pc = 0x24A38Cu;
    // 0x24a38c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x24a38cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x24a390: 0xc10821  addu        $at, $a2, $at
    ctx->pc = 0x24a390u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 1)));
    // 0x24a394: 0xa024d083  sb          $a0, -0x2F7D($at)
    ctx->pc = 0x24a394u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294955139), (uint8_t)GPR_U32(ctx, 4));
    // 0x24a398: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x24a398u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x24a39c: 0xc10821  addu        $at, $a2, $at
    ctx->pc = 0x24a39cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 1)));
    // 0x24a3a0: 0xa024d09b  sb          $a0, -0x2F65($at)
    ctx->pc = 0x24a3a0u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294955163), (uint8_t)GPR_U32(ctx, 4));
    // 0x24a3a4: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x24a3a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x24a3a8: 0xc10821  addu        $at, $a2, $at
    ctx->pc = 0x24a3a8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 1)));
    // 0x24a3ac: 0xa024d0b3  sb          $a0, -0x2F4D($at)
    ctx->pc = 0x24a3acu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294955187), (uint8_t)GPR_U32(ctx, 4));
    // 0x24a3b0: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x24a3b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x24a3b4: 0xc10821  addu        $at, $a2, $at
    ctx->pc = 0x24a3b4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 1)));
    // 0x24a3b8: 0xa024d0cb  sb          $a0, -0x2F35($at)
    ctx->pc = 0x24a3b8u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294955211), (uint8_t)GPR_U32(ctx, 4));
label_24a3bc:
    // 0x24a3bc: 0x0  nop
    ctx->pc = 0x24a3bcu;
    // NOP
    // 0x24a3c0: 0x8f8492fc  lw          $a0, -0x6D04($gp)
    ctx->pc = 0x24a3c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939388)));
    // 0x24a3c4: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x24a3c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x24a3c8: 0x34213810  ori         $at, $at, 0x3810
    ctx->pc = 0x24a3c8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)14352);
    // 0x24a3cc: 0xc11821  addu        $v1, $a2, $at
    ctx->pc = 0x24a3ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 1)));
    // 0x24a3d0: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x24A3D0u;
    {
        const bool branch_taken_0x24a3d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A3D0u;
        // 0x24a3d4: 0x9084001c  lbu         $a0, 0x1C($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a3d0) {
            ctx->pc = 0x24A408u;
            goto label_24a408;
        }
    }
    ctx->pc = 0x24A3D8u;
    // 0x24a3d8: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x24a3d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x24a3dc: 0xc10821  addu        $at, $a2, $at
    ctx->pc = 0x24a3dcu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 1)));
    // 0x24a3e0: 0xa0243883  sb          $a0, 0x3883($at)
    ctx->pc = 0x24a3e0u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 14467), (uint8_t)GPR_U32(ctx, 4));
    // 0x24a3e4: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x24a3e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x24a3e8: 0xc10821  addu        $at, $a2, $at
    ctx->pc = 0x24a3e8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 1)));
    // 0x24a3ec: 0xa024389b  sb          $a0, 0x389B($at)
    ctx->pc = 0x24a3ecu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 14491), (uint8_t)GPR_U32(ctx, 4));
    // 0x24a3f0: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x24a3f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x24a3f4: 0xc10821  addu        $at, $a2, $at
    ctx->pc = 0x24a3f4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 1)));
    // 0x24a3f8: 0xa02438b3  sb          $a0, 0x38B3($at)
    ctx->pc = 0x24a3f8u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 14515), (uint8_t)GPR_U32(ctx, 4));
    // 0x24a3fc: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x24a3fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x24a400: 0xc10821  addu        $at, $a2, $at
    ctx->pc = 0x24a400u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 1)));
    // 0x24a404: 0xa02438cb  sb          $a0, 0x38CB($at)
    ctx->pc = 0x24a404u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 14539), (uint8_t)GPR_U32(ctx, 4));
label_24a408:
    // 0x24a408: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x24a408u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x24a40c: 0xe2182a  slt         $v1, $a3, $v0
    ctx->pc = 0x24a40cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x24a410: 0x1460ffc7  bnez        $v1, . + 4 + (-0x39 << 2)
    ctx->pc = 0x24A410u;
    {
        const bool branch_taken_0x24a410 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x24A414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A410u;
        // 0x24a414: 0x24a500d0  addiu       $a1, $a1, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 208));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a410) {
            ctx->pc = 0x24A330u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24a330;
        }
    }
    ctx->pc = 0x24A418u;
label_24a418:
    // 0x24a418: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x24a418u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->pc = 0x24a41cu;
}
