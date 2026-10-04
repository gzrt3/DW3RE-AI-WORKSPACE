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

// Function: FUN_0023b198
// Address: 0x23b198 - 0x23b320
void FUN_0023b198_0x23b198(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0023b198_0x23b198");
#endif

    switch (ctx->pc) {
        case 0x23b1c8u: goto label_23b1c8;
        case 0x23b1dcu: goto label_23b1dc;
        case 0x23b214u: goto label_23b214;
        case 0x23b248u: goto label_23b248;
        case 0x23b2a0u: goto label_23b2a0;
        case 0x23b2e8u: goto label_23b2e8;
        default: break;
    }

    ctx->pc = 0x23b198u;

    // 0x23b198: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x23b198u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x23b19c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x23b19cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x23b1a0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x23b1a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23b1a4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x23b1a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x23b1a8: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x23b1a8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23b1ac: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x23b1acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x23b1b0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x23b1b0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23b1b4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x23b1b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23b1b8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23b1b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x23b1bc: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x23b1bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x23b1c0: 0xc08ec4c  jal         func_23B130
    ctx->pc = 0x23B1C0u;
    SET_GPR_U32(ctx, 31, 0x23B1C8u);
    ctx->pc = 0x23B1C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B1C0u;
    // 0x23b1c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23B130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B130u, 0x23B1C0u, 0x23B1C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B1C8u;
label_23b1c8:
    // 0x23b1c8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x23b1c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23b1cc: 0x16000008  bnez        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x23B1CCu;
    {
        const bool branch_taken_0x23b1cc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x23B1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B1CCu;
        // 0x23b1d0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b1cc) {
            ctx->pc = 0x23B1F0u;
            goto label_23b1f0;
        }
    }
    ctx->pc = 0x23B1D4u;
    // 0x23b1d4: 0xc08ea10  jal         func_23A840
    ctx->pc = 0x23B1D4u;
    SET_GPR_U32(ctx, 31, 0x23B1DCu);
    ctx->pc = 0x23B1D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B1D4u;
    // 0x23b1d8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A840u, 0x23B1D4u, 0x23B1DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B1DCu;
label_23b1dc:
    // 0x23b1dc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x23b1dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23b1e0: 0x40582d  daddu       $t3, $v0, $zero
    ctx->pc = 0x23b1e0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23b1e4: 0xad630010  sw          $v1, 0x10($t3)
    ctx->pc = 0x23b1e4u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 16), GPR_U32(ctx, 3));
    // 0x23b1e8: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x23B1E8u;
    {
        const bool branch_taken_0x23b1e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B1E8u;
        // 0x23b1ec: 0xad600014  sw          $zero, 0x14($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b1e8) {
            ctx->pc = 0x23B30Cu;
            goto label_23b30c;
        }
    }
    ctx->pc = 0x23B1F0u;
label_23b1f0:
    // 0x23b1f0: 0x6030005  bgezl       $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x23B1F0u;
    {
        const bool branch_taken_0x23b1f0 = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x23b1f0) {
            ctx->pc = 0x23B1F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23B1F0u;
            // 0x23b1f4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23B208u;
            goto label_23b208;
        }
    }
    ctx->pc = 0x23B1F8u;
    // 0x23b1f8: 0x220582d  daddu       $t3, $s1, $zero
    ctx->pc = 0x23b1f8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23b1fc: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x23b1fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23b200: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x23b200u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23b204: 0x160902d  daddu       $s2, $t3, $zero
    ctx->pc = 0x23b204u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_23b208:
    // 0x23b208: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x23b208u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x23b20c: 0xc08ea10  jal         func_23A840
    ctx->pc = 0x23B20Cu;
    SET_GPR_U32(ctx, 31, 0x23B214u);
    ctx->pc = 0x23B210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B20Cu;
    // 0x23b210: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A840u, 0x23B20Cu, 0x23B214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B214u;
label_23b214:
    // 0x23b214: 0x26280014  addiu       $t0, $s1, 0x14
    ctx->pc = 0x23b214u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x23b218: 0x40582d  daddu       $t3, $v0, $zero
    ctx->pc = 0x23b218u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23b21c: 0x26490014  addiu       $t1, $s2, 0x14
    ctx->pc = 0x23b21cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 18), 20));
    // 0x23b220: 0xad70000c  sw          $s0, 0xC($t3)
    ctx->pc = 0x23b220u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 12), GPR_U32(ctx, 16));
    // 0x23b224: 0x25670014  addiu       $a3, $t3, 0x14
    ctx->pc = 0x23b224u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 11), 20));
    // 0x23b228: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x23b228u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23b22c: 0x8e2c0010  lw          $t4, 0x10($s1)
    ctx->pc = 0x23b22cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x23b230: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x23b230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x23b234: 0xc1880  sll         $v1, $t4, 2
    ctx->pc = 0x23b234u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 12), 2));
    // 0x23b238: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x23b238u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x23b23c: 0x1036821  addu        $t5, $t0, $v1
    ctx->pc = 0x23b23cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x23b240: 0x1223021  addu        $a2, $t1, $v0
    ctx->pc = 0x23b240u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x23b244: 0x0  nop
    ctx->pc = 0x23b244u;
    // NOP
label_23b248:
    // 0x23b248: 0x8d050000  lw          $a1, 0x0($t0)
    ctx->pc = 0x23b248u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x23b24c: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x23b24cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x23b250: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x23b250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x23b254: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x23b254u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x23b258: 0x30a3ffff  andi        $v1, $a1, 0xFFFF
    ctx->pc = 0x23b258u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x23b25c: 0x52c02  srl         $a1, $a1, 16
    ctx->pc = 0x23b25cu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 16));
    // 0x23b260: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x23b260u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x23b264: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x23b264u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x23b268: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x23b268u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x23b26c: 0xa22823  subu        $a1, $a1, $v0
    ctx->pc = 0x23b26cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x23b270: 0x6a1821  addu        $v1, $v1, $t2
    ctx->pc = 0x23b270u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x23b274: 0x126102b  sltu        $v0, $t1, $a2
    ctx->pc = 0x23b274u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x23b278: 0x35403  sra         $t2, $v1, 16
    ctx->pc = 0x23b278u;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 3), 16));
    // 0x23b27c: 0xa4e30000  sh          $v1, 0x0($a3)
    ctx->pc = 0x23b27cu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x23b280: 0xaa2821  addu        $a1, $a1, $t2
    ctx->pc = 0x23b280u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 10)));
    // 0x23b284: 0xa4e50002  sh          $a1, 0x2($a3)
    ctx->pc = 0x23b284u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 2), (uint16_t)GPR_U32(ctx, 5));
    // 0x23b288: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x23b288u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x23b28c: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x23B28Cu;
    {
        const bool branch_taken_0x23b28c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23B290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B28Cu;
        // 0x23b290: 0x55403  sra         $t2, $a1, 16 (Delay Slot)
        SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b28c) {
            ctx->pc = 0x23B248u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23b248;
        }
    }
    ctx->pc = 0x23B294u;
    // 0x23b294: 0x10d102b  sltu        $v0, $t0, $t5
    ctx->pc = 0x23b294u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 13)) ? 1 : 0);
    // 0x23b298: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x23B298u;
    {
        const bool branch_taken_0x23b298 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23b298) {
            ctx->pc = 0x23B29Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23B298u;
            // 0x23b29c: 0x24e7fffc  addiu       $a3, $a3, -0x4 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967292));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23B2D8u;
            goto label_23b2d8;
        }
    }
    ctx->pc = 0x23B2A0u;
label_23b2a0:
    // 0x23b2a0: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x23b2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x23b2a4: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x23b2a4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x23b2a8: 0x10d202b  sltu        $a0, $t0, $t5
    ctx->pc = 0x23b2a8u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 13)) ? 1 : 0);
    // 0x23b2ac: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x23b2acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x23b2b0: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x23b2b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x23b2b4: 0x6a1821  addu        $v1, $v1, $t2
    ctx->pc = 0x23b2b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x23b2b8: 0x35403  sra         $t2, $v1, 16
    ctx->pc = 0x23b2b8u;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 3), 16));
    // 0x23b2bc: 0xa4e30000  sh          $v1, 0x0($a3)
    ctx->pc = 0x23b2bcu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x23b2c0: 0x4a2821  addu        $a1, $v0, $t2
    ctx->pc = 0x23b2c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x23b2c4: 0xa4e50002  sh          $a1, 0x2($a3)
    ctx->pc = 0x23b2c4u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 2), (uint16_t)GPR_U32(ctx, 5));
    // 0x23b2c8: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x23b2c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x23b2cc: 0x1480fff4  bnez        $a0, . + 4 + (-0xC << 2)
    ctx->pc = 0x23B2CCu;
    {
        const bool branch_taken_0x23b2cc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x23B2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B2CCu;
        // 0x23b2d0: 0x55403  sra         $t2, $a1, 16 (Delay Slot)
        SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b2cc) {
            ctx->pc = 0x23B2A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23b2a0;
        }
    }
    ctx->pc = 0x23B2D4u;
    // 0x23b2d4: 0x24e7fffc  addiu       $a3, $a3, -0x4
    ctx->pc = 0x23b2d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967292));
label_23b2d8:
    // 0x23b2d8: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x23b2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x23b2dc: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x23B2DCu;
    {
        const bool branch_taken_0x23b2dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23b2dc) {
            ctx->pc = 0x23B2E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23B2DCu;
            // 0x23b2e0: 0xad6c0010  sw          $t4, 0x10($t3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 11), 16), GPR_U32(ctx, 12));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23B308u;
            goto label_23b308;
        }
    }
    ctx->pc = 0x23B2E4u;
    // 0x23b2e4: 0x0  nop
    ctx->pc = 0x23b2e4u;
    // NOP
label_23b2e8:
    // 0x23b2e8: 0x24e7fffc  addiu       $a3, $a3, -0x4
    ctx->pc = 0x23b2e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967292));
    // 0x23b2ec: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x23b2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x23b2f0: 0x0  nop
    ctx->pc = 0x23b2f0u;
    // NOP
    // 0x23b2f4: 0x0  nop
    ctx->pc = 0x23b2f4u;
    // NOP
    // 0x23b2f8: 0x0  nop
    ctx->pc = 0x23b2f8u;
    // NOP
    // 0x23b2fc: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x23B2FCu;
    {
        const bool branch_taken_0x23b2fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B2FCu;
        // 0x23b300: 0x258cffff  addiu       $t4, $t4, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b2fc) {
            ctx->pc = 0x23B2E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23b2e8;
        }
    }
    ctx->pc = 0x23B304u;
    // 0x23b304: 0xad6c0010  sw          $t4, 0x10($t3)
    ctx->pc = 0x23b304u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 16), GPR_U32(ctx, 12));
label_23b308:
    // 0x23b308: 0x160102d  daddu       $v0, $t3, $zero
    ctx->pc = 0x23b308u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_23b30c:
    // 0x23b30c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23b30cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23b310: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x23b310u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x23b314: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x23b314u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23b318: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x23b318u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x23b31c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x23b31cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->pc = 0x23b320u;
}
