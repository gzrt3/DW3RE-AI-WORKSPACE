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

// Function: entry_001a120c
// Address: 0x1a120c - 0x1a13d0
void entry_001a120c_0x1a120c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a120c_0x1a120c");
#endif

    switch (ctx->pc) {
        case 0x1a1290u: goto label_1a1290;
        case 0x1a12c0u: goto label_1a12c0;
        case 0x1a12dcu: goto label_1a12dc;
        case 0x1a12e4u: goto label_1a12e4;
        case 0x1a1320u: goto label_1a1320;
        case 0x1a1348u: goto label_1a1348;
        case 0x1a1350u: goto label_1a1350;
        case 0x1a1380u: goto label_1a1380;
        case 0x1a1388u: goto label_1a1388;
        case 0x1a13acu: goto label_1a13ac;
        case 0x1a13b8u: goto label_1a13b8;
        default: break;
    }

    ctx->pc = 0x1a120cu;

    // 0x1a120c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a120cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a1210: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a1210u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a1214: 0x3e00008  jr          $ra
    ctx->pc = 0x1A1214u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A1218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1214u;
        // 0x1a1218: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A1214u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A121Cu;
    // 0x1a121c: 0x0  nop
    ctx->pc = 0x1a121cu;
    // NOP
    // 0x1a1220: 0x240703ff  addiu       $a3, $zero, 0x3FF
    ctx->pc = 0x1a1220u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
    // 0x1a1224: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1a1224u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1a1228: 0xc7001a  div         $zero, $a2, $a3
    ctx->pc = 0x1a1228u;
    { int32_t divisor = GPR_S32(ctx, 7);    int32_t dividend = GPR_S32(ctx, 6);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1a122c: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x1a122cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x1a1230: 0x3c02000f  lui         $v0, 0xF
    ctx->pc = 0x1a1230u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
    // 0x1a1234: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1a1234u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1238: 0x3442fc00  ori         $v0, $v0, 0xFC00
    ctx->pc = 0x1a1238u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64512);
    // 0x1a123c: 0x3c030fff  lui         $v1, 0xFFF
    ctx->pc = 0x1a123cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4095 << 16));
    // 0x1a1240: 0xffb10050  sd          $s1, 0x50($sp)
    ctx->pc = 0x1a1240u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    // 0x1a1244: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1a1244u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1a1248: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x1a1248u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x1a124c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1a124cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1a1250: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x1a1250u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x1a1254: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1a1254u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1a1258: 0x50e00001  beql        $a3, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1A1258u;
    {
        const bool branch_taken_0x1a1258 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a1258) {
            ctx->pc = 0x1A125Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A1258u;
            // 0x1a125c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A1260u;
            goto label_1a1260;
        }
    }
    ctx->pc = 0x1A1260u;
label_1a1260:
    // 0x1a1260: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1a1260u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1a1264: 0xafa60028  sw          $a2, 0x28($sp)
    ctx->pc = 0x1a1264u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 6));
    // 0x1a1268: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1a1268u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a126c: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x1a126cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
    // 0x1a1270: 0x27a70020  addiu       $a3, $sp, 0x20
    ctx->pc = 0x1a1270u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1a1274: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x1a1274u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x1a1278: 0x34632010  ori         $v1, $v1, 0x2010
    ctx->pc = 0x1a1278u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8208);
    // 0x1a127c: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x1a127cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x1a1280: 0x4012  mflo        $t0
    ctx->pc = 0x1a1280u;
    SET_GPR_U64(ctx, 8, ctx->lo);
    // 0x1a1284: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1a1284u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1a1288: 0xafa80030  sw          $t0, 0x30($sp)
    ctx->pc = 0x1a1288u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 8));
    // 0x1a128c: 0x0  nop
    ctx->pc = 0x1a128cu;
    // NOP
label_1a1290:
    // 0x1a1290: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1a1290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a1294: 0x0  nop
    ctx->pc = 0x1a1294u;
    // NOP
    // 0x1a1298: 0x0  nop
    ctx->pc = 0x1a1298u;
    // NOP
    // 0x1a129c: 0x0  nop
    ctx->pc = 0x1a129cu;
    // NOP
    // 0x1a12a0: 0x0  nop
    ctx->pc = 0x1a12a0u;
    // NOP
    // 0x1a12a4: 0x440fffa  bltz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1A12A4u;
    {
        const bool branch_taken_0x1a12a4 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1a12a4) {
            ctx->pc = 0x1A1290u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a1290;
        }
    }
    ctx->pc = 0x1A12ACu;
    // 0x1a12ac: 0x3c05001a  lui         $a1, 0x1A
    ctx->pc = 0x1a12acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)26 << 16));
    // 0x1a12b0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1a12b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1a12b4: 0x24a510a8  addiu       $a1, $a1, 0x10A8
    ctx->pc = 0x1a12b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4264));
    // 0x1a12b8: 0xc069150  jal         func_1A4540
    ctx->pc = 0x1A12B8u;
    SET_GPR_U32(ctx, 31, 0x1A12C0u);
    ctx->pc = 0x1A12BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A12B8u;
    // 0x1a12bc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4540u, 0x1A12B8u, 0x1A12C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A12C0u;
label_1a12c0:
    // 0x1a12c0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1a12c0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a12c4: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x1a12c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1a12c8: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1a12c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1a12cc: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1a12ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1a12d0: 0x3442e010  ori         $v0, $v0, 0xE010
    ctx->pc = 0x1a12d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57360);
    // 0x1a12d4: 0xc06950e  jal         func_1A5438
    ctx->pc = 0x1A12D4u;
    SET_GPR_U32(ctx, 31, 0x1A12DCu);
    ctx->pc = 0x1A12D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A12D4u;
    // 0x1a12d8: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5438u, 0x1A12D4u, 0x1A12DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A12DCu;
label_1a12dc:
    // 0x1a12dc: 0xc06b518  jal         func_1AD460
    ctx->pc = 0x1A12DCu;
    SET_GPR_U32(ctx, 31, 0x1A12E4u);
    ctx->pc = 0x1AD460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD460u, 0x1A12DCu, 0x1A12E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A12E4u;
label_1a12e4:
    // 0x1a12e4: 0x3c030fff  lui         $v1, 0xFFF
    ctx->pc = 0x1a12e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4095 << 16));
    // 0x1a12e8: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1a12e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1a12ec: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1a12ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1a12f0: 0x3442b010  ori         $v0, $v0, 0xB010
    ctx->pc = 0x1a12f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45072);
    // 0x1a12f4: 0x2031824  and         $v1, $s0, $v1
    ctx->pc = 0x1a12f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & GPR_U64(ctx, 3));
    // 0x1a12f8: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x1a12f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x1a12fc: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1a12fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1a1300: 0x3484b020  ori         $a0, $a0, 0xB020
    ctx->pc = 0x1a1300u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)45088);
    // 0x1a1304: 0x3402ffc0  ori         $v0, $zero, 0xFFC0
    ctx->pc = 0x1a1304u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x1a1308: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1a1308u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1a130c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1a130cu;
    runtime->Store32(rdram, ctx, 0x1000B020u, GPR_U32(ctx, 2));
    // 0x1a1310: 0x3463b000  ori         $v1, $v1, 0xB000
    ctx->pc = 0x1a1310u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)45056);
    // 0x1a1314: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x1a1314u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1a1318: 0xc06b52a  jal         func_1AD4A8
    ctx->pc = 0x1A1318u;
    SET_GPR_U32(ctx, 31, 0x1A1320u);
    ctx->pc = 0x1A131Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1318u;
    // 0x1a131c: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD4A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD4A8u, 0x1A1318u, 0x1A1320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1320u;
label_1a1320:
    // 0x1a1320: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1a1320u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1a1324: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x1a1324u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x1a1328: 0x34632000  ori         $v1, $v1, 0x2000
    ctx->pc = 0x1a1328u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8192);
    // 0x1a132c: 0x344203ff  ori         $v0, $v0, 0x3FF
    ctx->pc = 0x1a132cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1023);
    // 0x1a1330: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1a1330u;
    runtime->Store32(rdram, ctx, 0x10002000u, GPR_U32(ctx, 2));
    // 0x1a1334: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x1a1334u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1a1338: 0x8e240858  lw          $a0, 0x858($s1)
    ctx->pc = 0x1a1338u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2136)));
    // 0x1a133c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1a133cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1340: 0xc068b12  jal         func_1A2C48
    ctx->pc = 0x1A1340u;
    SET_GPR_U32(ctx, 31, 0x1A1348u);
    ctx->pc = 0x1A1344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1340u;
    // 0x1a1344: 0xafa60000  sw          $a2, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2C48u, 0x1A1340u, 0x1A1348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1348u;
label_1a1348:
    // 0x1a1348: 0x8fa40024  lw          $a0, 0x24($sp)
    ctx->pc = 0x1a1348u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x1a134c: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1a134cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_1a1350:
    // 0x1a1350: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1a1350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a1354: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1a1354u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1a1358: 0x0  nop
    ctx->pc = 0x1a1358u;
    // NOP
    // 0x1a135c: 0x0  nop
    ctx->pc = 0x1a135cu;
    // NOP
    // 0x1a1360: 0x0  nop
    ctx->pc = 0x1a1360u;
    // NOP
    // 0x1a1364: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1A1364u;
    {
        const bool branch_taken_0x1a1364 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a1364) {
            ctx->pc = 0x1A1350u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a1350;
        }
    }
    ctx->pc = 0x1A136Cu;
    // 0x1a136c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A136Cu;
    {
        const bool branch_taken_0x1a136c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A136Cu;
        // 0x1a1370: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a136c) {
            ctx->pc = 0x1A1380u;
            goto label_1a1380;
        }
    }
    ctx->pc = 0x1A1374u;
    // 0x1a1374: 0x3c05002d  lui         $a1, 0x2D
    ctx->pc = 0x1a1374u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
    // 0x1a1378: 0xc068d2c  jal         func_1A34B0
    ctx->pc = 0x1A1378u;
    SET_GPR_U32(ctx, 31, 0x1A1380u);
    ctx->pc = 0x1A137Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1378u;
    // 0x1a137c: 0x24a5a270  addiu       $a1, $a1, -0x5D90 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943344));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A34B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A34B0u, 0x1A1378u, 0x1A1380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1380u;
label_1a1380:
    // 0x1a1380: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1a1380u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1a1384: 0x34632010  ori         $v1, $v1, 0x2010
    ctx->pc = 0x1a1384u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8208);
label_1a1388:
    // 0x1a1388: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1a1388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a138c: 0x0  nop
    ctx->pc = 0x1a138cu;
    // NOP
    // 0x1a1390: 0x0  nop
    ctx->pc = 0x1a1390u;
    // NOP
    // 0x1a1394: 0x0  nop
    ctx->pc = 0x1a1394u;
    // NOP
    // 0x1a1398: 0x0  nop
    ctx->pc = 0x1a1398u;
    // NOP
    // 0x1a139c: 0x440fffa  bltz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1A139Cu;
    {
        const bool branch_taken_0x1a139c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1a139c) {
            ctx->pc = 0x1A1388u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a1388;
        }
    }
    ctx->pc = 0x1A13A4u;
    // 0x1a13a4: 0xc0694f4  jal         func_1A53D0
    ctx->pc = 0x1A13A4u;
    SET_GPR_U32(ctx, 31, 0x1A13ACu);
    ctx->pc = 0x1A13A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A13A4u;
    // 0x1a13a8: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A53D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A53D0u, 0x1A13A4u, 0x1A13ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A13ACu;
label_1a13ac:
    // 0x1a13ac: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1a13acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a13b0: 0xc069154  jal         func_1A4550
    ctx->pc = 0x1A13B0u;
    SET_GPR_U32(ctx, 31, 0x1A13B8u);
    ctx->pc = 0x1A13B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A13B0u;
    // 0x1a13b4: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4550u, 0x1A13B0u, 0x1A13B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A13B8u;
label_1a13b8:
    // 0x1a13b8: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x1a13b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1a13bc: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x1a13bcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1a13c0: 0xdfb10050  ld          $s1, 0x50($sp)
    ctx->pc = 0x1a13c0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1a13c4: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x1a13c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a13c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1A13C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A13CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A13C8u;
        // 0x1a13cc: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A13C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A13D0u;
}
