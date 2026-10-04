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

// Function: FUN_001b1280
// Address: 0x1b1280 - 0x1b133c
void FUN_001b1280_0x1b1280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001b1280_0x1b1280");
#endif

    switch (ctx->pc) {
        case 0x1b12c0u: goto label_1b12c0;
        case 0x1b1300u: goto label_1b1300;
        case 0x1b1314u: goto label_1b1314;
        case 0x1b1324u: goto label_1b1324;
        default: break;
    }

    ctx->pc = 0x1b1280u;

    // 0x1b1280: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1b1280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1b1284: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x1b1284u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
    // 0x1b1288: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1b1288u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x1b128c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1b128cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1b1290: 0x24726200  addiu       $s2, $v1, 0x6200
    ctx->pc = 0x1b1290u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 25088));
    // 0x1b1294: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1b1294u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1b1298: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x1b1298u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x1b129c: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x1b129cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x1b12a0: 0x8e420024  lw          $v0, 0x24($s2)
    ctx->pc = 0x1b12a0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x376224u));
    // 0x1b12a4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B12A4u;
    {
        const bool branch_taken_0x1b12a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B12A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B12A4u;
        // 0x1b12a8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b12a4) {
            ctx->pc = 0x1B12B4u;
            goto label_1b12b4;
        }
    }
    ctx->pc = 0x1B12ACu;
    // 0x1b12ac: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x1B12ACu;
    {
        const bool branch_taken_0x1b12ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B12B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B12ACu;
        // 0x1b12b0: 0x2402ff9c  addiu       $v0, $zero, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967196));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b12ac) {
            ctx->pc = 0x1B1328u;
            goto label_1b1328;
        }
    }
    ctx->pc = 0x1B12B4u;
label_1b12b4:
    // 0x1b12b4: 0x3c110029  lui         $s1, 0x29
    ctx->pc = 0x1b12b4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)41 << 16));
    // 0x1b12b8: 0xc06921c  jal         func_1A4870
    ctx->pc = 0x1B12B8u;
    SET_GPR_U32(ctx, 31, 0x1B12C0u);
    ctx->pc = 0x1B12BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B12B8u;
    // 0x1b12bc: 0x8e248d0c  lw          $a0, -0x72F4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294937868)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4870u, 0x1B12B8u, 0x1B12C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B12C0u;
label_1b12c0:
    // 0x1b12c0: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B12C0u;
    {
        const bool branch_taken_0x1b12c0 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1B12C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B12C0u;
        // 0x1b12c4: 0x3c070037  lui         $a3, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b12c0) {
            ctx->pc = 0x1B12D0u;
            goto label_1b12d0;
        }
    }
    ctx->pc = 0x1B12C8u;
    // 0x1b12c8: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1B12C8u;
    {
        const bool branch_taken_0x1b12c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B12CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B12C8u;
        // 0x1b12cc: 0x2402ff38  addiu       $v0, $zero, -0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b12c8) {
            ctx->pc = 0x1B1328u;
            goto label_1b1328;
        }
    }
    ctx->pc = 0x1B12D0u;
label_1b12d0:
    // 0x1b12d0: 0x3c130037  lui         $s3, 0x37
    ctx->pc = 0x1b12d0u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)55 << 16));
    // 0x1b12d4: 0x24e76280  addiu       $a3, $a3, 0x6280
    ctx->pc = 0x1b12d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 25216));
    // 0x1b12d8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b12d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b12dc: 0xacf00004  sw          $s0, 0x4($a3)
    ctx->pc = 0x1b12dcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 16));
    // 0x1b12e0: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x1b12e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x1b12e4: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1b12e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1b12e8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b12e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b12ec: 0x24080030  addiu       $t0, $zero, 0x30
    ctx->pc = 0x1b12ecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x1b12f0: 0x266977c0  addiu       $t1, $s3, 0x77C0
    ctx->pc = 0x1b12f0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 19), 30656));
    // 0x1b12f4: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1b12f4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1b12f8: 0xc069e2a  jal         func_1A78A8
    ctx->pc = 0x1B12F8u;
    SET_GPR_U32(ctx, 31, 0x1B1300u);
    ctx->pc = 0x1B12FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B12F8u;
    // 0x1b12fc: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A78A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A78A8u, 0x1B12F8u, 0x1B1300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1300u;
label_1b1300:
    // 0x1b1300: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1b1300u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1304: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B1304u;
    {
        const bool branch_taken_0x1b1304 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b1304) {
            ctx->pc = 0x1B131Cu;
            goto label_1b131c;
        }
    }
    ctx->pc = 0x1B130Cu;
    // 0x1b130c: 0xc069210  jal         func_1A4840
    ctx->pc = 0x1B130Cu;
    SET_GPR_U32(ctx, 31, 0x1B1314u);
    ctx->pc = 0x1B1310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B130Cu;
    // 0x1b1310: 0x8e248d0c  lw          $a0, -0x72F4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294937868)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4840u, 0x1B130Cu, 0x1B1314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1314u;
label_1b1314:
    // 0x1b1314: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1B1314u;
    {
        const bool branch_taken_0x1b1314 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1314u;
        // 0x1b1318: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1314) {
            ctx->pc = 0x1B1328u;
            goto label_1b1328;
        }
    }
    ctx->pc = 0x1B131Cu;
label_1b131c:
    // 0x1b131c: 0xc069210  jal         func_1A4840
    ctx->pc = 0x1B131Cu;
    SET_GPR_U32(ctx, 31, 0x1B1324u);
    ctx->pc = 0x1B1320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B131Cu;
    // 0x1b1320: 0x8e248d0c  lw          $a0, -0x72F4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294937868)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4840u, 0x1B131Cu, 0x1B1324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1324u;
label_1b1324:
    // 0x1b1324: 0x8e6277c0  lw          $v0, 0x77C0($s3)
    ctx->pc = 0x1b1324u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 30656)));
label_1b1328:
    // 0x1b1328: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1b1328u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b132c: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x1b132cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b1330: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1b1330u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b1334: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x1b1334u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b1338: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1b1338u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->pc = 0x1b133cu;
}
