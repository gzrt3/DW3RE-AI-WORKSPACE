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

// Function: FUN_00163f70
// Address: 0x163f70 - 0x164274
void FUN_00163f70_0x163f70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00163f70_0x163f70");
#endif

    switch (ctx->pc) {
        case 0x163f70u: goto label_163f70;
        case 0x163f74u: goto label_163f74;
        case 0x163f78u: goto label_163f78;
        case 0x163f7cu: goto label_163f7c;
        case 0x163f80u: goto label_163f80;
        case 0x163f84u: goto label_163f84;
        case 0x163f88u: goto label_163f88;
        case 0x163f8cu: goto label_163f8c;
        case 0x163f90u: goto label_163f90;
        case 0x163f94u: goto label_163f94;
        case 0x163f98u: goto label_163f98;
        case 0x163f9cu: goto label_163f9c;
        case 0x163fa0u: goto label_163fa0;
        case 0x163fa4u: goto label_163fa4;
        case 0x163fa8u: goto label_163fa8;
        case 0x163facu: goto label_163fac;
        case 0x163fb0u: goto label_163fb0;
        case 0x163fb4u: goto label_163fb4;
        case 0x163fb8u: goto label_163fb8;
        case 0x163fbcu: goto label_163fbc;
        case 0x163fc0u: goto label_163fc0;
        case 0x163fc4u: goto label_163fc4;
        case 0x163fc8u: goto label_163fc8;
        case 0x163fccu: goto label_163fcc;
        case 0x163fd0u: goto label_163fd0;
        case 0x163fd4u: goto label_163fd4;
        case 0x163fd8u: goto label_163fd8;
        case 0x163fdcu: goto label_163fdc;
        case 0x163fe0u: goto label_163fe0;
        case 0x163fe4u: goto label_163fe4;
        case 0x163fe8u: goto label_163fe8;
        case 0x163fecu: goto label_163fec;
        case 0x163ff0u: goto label_163ff0;
        case 0x163ff4u: goto label_163ff4;
        case 0x163ff8u: goto label_163ff8;
        case 0x163ffcu: goto label_163ffc;
        case 0x164000u: goto label_164000;
        case 0x164004u: goto label_164004;
        case 0x164008u: goto label_164008;
        case 0x16400cu: goto label_16400c;
        case 0x164010u: goto label_164010;
        case 0x164014u: goto label_164014;
        case 0x164018u: goto label_164018;
        case 0x16401cu: goto label_16401c;
        case 0x164020u: goto label_164020;
        case 0x164024u: goto label_164024;
        case 0x164028u: goto label_164028;
        case 0x16402cu: goto label_16402c;
        case 0x164030u: goto label_164030;
        case 0x164034u: goto label_164034;
        case 0x164038u: goto label_164038;
        case 0x16403cu: goto label_16403c;
        case 0x164040u: goto label_164040;
        case 0x164044u: goto label_164044;
        case 0x164048u: goto label_164048;
        case 0x16404cu: goto label_16404c;
        case 0x164050u: goto label_164050;
        case 0x164054u: goto label_164054;
        case 0x164058u: goto label_164058;
        case 0x16405cu: goto label_16405c;
        case 0x164060u: goto label_164060;
        case 0x164064u: goto label_164064;
        case 0x164068u: goto label_164068;
        case 0x16406cu: goto label_16406c;
        case 0x164070u: goto label_164070;
        case 0x164074u: goto label_164074;
        case 0x164078u: goto label_164078;
        case 0x16407cu: goto label_16407c;
        case 0x164080u: goto label_164080;
        case 0x164084u: goto label_164084;
        case 0x164088u: goto label_164088;
        case 0x16408cu: goto label_16408c;
        case 0x164090u: goto label_164090;
        case 0x164094u: goto label_164094;
        case 0x164098u: goto label_164098;
        case 0x16409cu: goto label_16409c;
        case 0x1640a0u: goto label_1640a0;
        case 0x1640a4u: goto label_1640a4;
        case 0x1640a8u: goto label_1640a8;
        case 0x1640acu: goto label_1640ac;
        case 0x1640b0u: goto label_1640b0;
        case 0x1640b4u: goto label_1640b4;
        case 0x1640b8u: goto label_1640b8;
        case 0x1640bcu: goto label_1640bc;
        case 0x1640c0u: goto label_1640c0;
        case 0x1640c4u: goto label_1640c4;
        case 0x1640c8u: goto label_1640c8;
        case 0x1640ccu: goto label_1640cc;
        case 0x1640d0u: goto label_1640d0;
        case 0x1640d4u: goto label_1640d4;
        case 0x1640d8u: goto label_1640d8;
        case 0x1640dcu: goto label_1640dc;
        case 0x1640e0u: goto label_1640e0;
        case 0x1640e4u: goto label_1640e4;
        case 0x1640e8u: goto label_1640e8;
        case 0x1640ecu: goto label_1640ec;
        case 0x1640f0u: goto label_1640f0;
        case 0x1640f4u: goto label_1640f4;
        case 0x1640f8u: goto label_1640f8;
        case 0x1640fcu: goto label_1640fc;
        case 0x164100u: goto label_164100;
        case 0x164104u: goto label_164104;
        case 0x164108u: goto label_164108;
        case 0x16410cu: goto label_16410c;
        case 0x164110u: goto label_164110;
        case 0x164114u: goto label_164114;
        case 0x164118u: goto label_164118;
        case 0x16411cu: goto label_16411c;
        case 0x164120u: goto label_164120;
        case 0x164124u: goto label_164124;
        case 0x164128u: goto label_164128;
        case 0x16412cu: goto label_16412c;
        case 0x164130u: goto label_164130;
        case 0x164134u: goto label_164134;
        case 0x164138u: goto label_164138;
        case 0x16413cu: goto label_16413c;
        case 0x164140u: goto label_164140;
        case 0x164144u: goto label_164144;
        case 0x164148u: goto label_164148;
        case 0x16414cu: goto label_16414c;
        case 0x164150u: goto label_164150;
        case 0x164154u: goto label_164154;
        case 0x164158u: goto label_164158;
        case 0x16415cu: goto label_16415c;
        case 0x164160u: goto label_164160;
        case 0x164164u: goto label_164164;
        case 0x164168u: goto label_164168;
        case 0x16416cu: goto label_16416c;
        case 0x164170u: goto label_164170;
        case 0x164174u: goto label_164174;
        case 0x164178u: goto label_164178;
        case 0x16417cu: goto label_16417c;
        case 0x164180u: goto label_164180;
        case 0x164184u: goto label_164184;
        case 0x164188u: goto label_164188;
        case 0x16418cu: goto label_16418c;
        case 0x164190u: goto label_164190;
        case 0x164194u: goto label_164194;
        case 0x164198u: goto label_164198;
        case 0x16419cu: goto label_16419c;
        case 0x1641a0u: goto label_1641a0;
        case 0x1641a4u: goto label_1641a4;
        case 0x1641a8u: goto label_1641a8;
        case 0x1641acu: goto label_1641ac;
        case 0x1641b0u: goto label_1641b0;
        case 0x1641b4u: goto label_1641b4;
        case 0x1641b8u: goto label_1641b8;
        case 0x1641bcu: goto label_1641bc;
        case 0x1641c0u: goto label_1641c0;
        case 0x1641c4u: goto label_1641c4;
        case 0x1641c8u: goto label_1641c8;
        case 0x1641ccu: goto label_1641cc;
        case 0x1641d0u: goto label_1641d0;
        case 0x1641d4u: goto label_1641d4;
        case 0x1641d8u: goto label_1641d8;
        case 0x1641dcu: goto label_1641dc;
        case 0x1641e0u: goto label_1641e0;
        case 0x1641e4u: goto label_1641e4;
        case 0x1641e8u: goto label_1641e8;
        case 0x1641ecu: goto label_1641ec;
        case 0x1641f0u: goto label_1641f0;
        case 0x1641f4u: goto label_1641f4;
        case 0x1641f8u: goto label_1641f8;
        case 0x1641fcu: goto label_1641fc;
        case 0x164200u: goto label_164200;
        case 0x164204u: goto label_164204;
        case 0x164208u: goto label_164208;
        case 0x16420cu: goto label_16420c;
        case 0x164210u: goto label_164210;
        case 0x164214u: goto label_164214;
        case 0x164218u: goto label_164218;
        case 0x16421cu: goto label_16421c;
        case 0x164220u: goto label_164220;
        case 0x164224u: goto label_164224;
        case 0x164228u: goto label_164228;
        case 0x16422cu: goto label_16422c;
        case 0x164230u: goto label_164230;
        case 0x164234u: goto label_164234;
        case 0x164238u: goto label_164238;
        case 0x16423cu: goto label_16423c;
        case 0x164240u: goto label_164240;
        case 0x164244u: goto label_164244;
        case 0x164248u: goto label_164248;
        case 0x16424cu: goto label_16424c;
        case 0x164250u: goto label_164250;
        case 0x164254u: goto label_164254;
        case 0x164258u: goto label_164258;
        case 0x16425cu: goto label_16425c;
        case 0x164260u: goto label_164260;
        case 0x164264u: goto label_164264;
        case 0x164268u: goto label_164268;
        case 0x16426cu: goto label_16426c;
        case 0x164270u: goto label_164270;
        default: break;
    }

    ctx->pc = 0x163f70u;

label_163f70:
    // 0x163f70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x163f70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_163f74:
    // 0x163f74: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x163f74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_163f78:
    // 0x163f78: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x163f78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_163f7c:
    // 0x163f7c: 0x8f848590  lw          $a0, -0x7A70($gp)
    ctx->pc = 0x163f7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
label_163f80:
    // 0x163f80: 0x30837800  andi        $v1, $a0, 0x7800
    ctx->pc = 0x163f80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)30720);
label_163f84:
    // 0x163f84: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
label_163f88:
    if (ctx->pc == 0x163F88u) {
        ctx->pc = 0x163F8Cu;
        goto label_163f8c;
    }
    ctx->pc = 0x163F84u;
    {
        const bool branch_taken_0x163f84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x163f84) {
            ctx->pc = 0x163FC8u;
            goto label_163fc8;
        }
    }
    ctx->pc = 0x163F8Cu;
label_163f8c:
    // 0x163f8c: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x163f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
label_163f90:
    // 0x163f90: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x163f90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_163f94:
    // 0x163f94: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_163f98:
    if (ctx->pc == 0x163F98u) {
        ctx->pc = 0x163F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163F94u;
        // 0x163f98: 0x3c030002  lui         $v1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163F9Cu;
        goto label_163f9c;
    }
    ctx->pc = 0x163F94u;
    {
        const bool branch_taken_0x163f94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x163F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163F94u;
        // 0x163f98: 0x3c030002  lui         $v1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163f94) {
            ctx->pc = 0x163FA8u;
            goto label_163fa8;
        }
    }
    ctx->pc = 0x163F9Cu;
label_163f9c:
    // 0x163f9c: 0x100000b4  b           . + 4 + (0xB4 << 2)
label_163fa0:
    if (ctx->pc == 0x163FA0u) {
        ctx->pc = 0x163FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163F9Cu;
        // 0x163fa0: 0xaf808644  sw          $zero, -0x79BC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936132), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163FA4u;
        goto label_163fa4;
    }
    ctx->pc = 0x163F9Cu;
    {
        const bool branch_taken_0x163f9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x163FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163F9Cu;
        // 0x163fa0: 0xaf808644  sw          $zero, -0x79BC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936132), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163f9c) {
            ctx->pc = 0x164270u;
            goto label_164270;
        }
    }
    ctx->pc = 0x163FA4u;
label_163fa4:
    // 0x163fa4: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x163fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
label_163fa8:
    // 0x163fa8: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x163fa8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_163fac:
    // 0x163fac: 0x106000b0  beqz        $v1, . + 4 + (0xB0 << 2)
label_163fb0:
    if (ctx->pc == 0x163FB0u) {
        ctx->pc = 0x163FB4u;
        goto label_163fb4;
    }
    ctx->pc = 0x163FACu;
    {
        const bool branch_taken_0x163fac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x163fac) {
            ctx->pc = 0x164270u;
            goto label_164270;
        }
    }
    ctx->pc = 0x163FB4u;
label_163fb4:
    // 0x163fb4: 0x8f838644  lw          $v1, -0x79BC($gp)
    ctx->pc = 0x163fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936132)));
label_163fb8:
    // 0x163fb8: 0x1c6000ad  bgtz        $v1, . + 4 + (0xAD << 2)
label_163fbc:
    if (ctx->pc == 0x163FBCu) {
        ctx->pc = 0x163FC0u;
        goto label_163fc0;
    }
    ctx->pc = 0x163FB8u;
    {
        const bool branch_taken_0x163fb8 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x163fb8) {
            ctx->pc = 0x164270u;
            goto label_164270;
        }
    }
    ctx->pc = 0x163FC0u;
label_163fc0:
    // 0x163fc0: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x163fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_163fc4:
    // 0x163fc4: 0xaf828644  sw          $v0, -0x79BC($gp)
    ctx->pc = 0x163fc4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936132), GPR_U32(ctx, 2));
label_163fc8:
    // 0x163fc8: 0x8f90865c  lw          $s0, -0x79A4($gp)
    ctx->pc = 0x163fc8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936156)));
label_163fcc:
    // 0x163fcc: 0x12000015  beqz        $s0, . + 4 + (0x15 << 2)
label_163fd0:
    if (ctx->pc == 0x163FD0u) {
        ctx->pc = 0x163FD4u;
        goto label_163fd4;
    }
    ctx->pc = 0x163FCCu;
    {
        const bool branch_taken_0x163fcc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x163fcc) {
            ctx->pc = 0x164024u;
            goto label_164024;
        }
    }
    ctx->pc = 0x163FD4u;
label_163fd4:
    // 0x163fd4: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x163fd4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_163fd8:
    // 0x163fd8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x163fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_163fdc:
    // 0x163fdc: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
label_163fe0:
    if (ctx->pc == 0x163FE0u) {
        ctx->pc = 0x163FE4u;
        goto label_163fe4;
    }
    ctx->pc = 0x163FDCu;
    {
        const bool branch_taken_0x163fdc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x163fdc) {
            ctx->pc = 0x163FF4u;
            goto label_163ff4;
        }
    }
    ctx->pc = 0x163FE4u;
label_163fe4:
    // 0x163fe4: 0xc0591f8  jal         func_1647E0
label_163fe8:
    if (ctx->pc == 0x163FE8u) {
        ctx->pc = 0x163FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163FE4u;
        // 0x163fe8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163FECu;
        goto label_163fec;
    }
    ctx->pc = 0x163FE4u;
    SET_GPR_U32(ctx, 31, 0x163FECu);
    ctx->pc = 0x163FE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163FE4u;
    // 0x163fe8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1647E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1647E0u, 0x163FE4u, 0x163FECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163FECu;
label_163fec:
    // 0x163fec: 0x1000000a  b           . + 4 + (0xA << 2)
label_163ff0:
    if (ctx->pc == 0x163FF0u) {
        ctx->pc = 0x163FF4u;
        goto label_163ff4;
    }
    ctx->pc = 0x163FECu;
    {
        const bool branch_taken_0x163fec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x163fec) {
            ctx->pc = 0x164018u;
            goto label_164018;
        }
    }
    ctx->pc = 0x163FF4u;
label_163ff4:
    // 0x163ff4: 0x0  nop
    ctx->pc = 0x163ff4u;
    // NOP
label_163ff8:
    // 0x163ff8: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x163ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_163ffc:
    // 0x163ffc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_164000:
    if (ctx->pc == 0x164000u) {
        ctx->pc = 0x164004u;
        goto label_164004;
    }
    ctx->pc = 0x163FFCu;
    {
        const bool branch_taken_0x163ffc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x163ffc) {
            ctx->pc = 0x164018u;
            goto label_164018;
        }
    }
    ctx->pc = 0x164004u;
label_164004:
    // 0x164004: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x164004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_164008:
    // 0x164008: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x164008u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
label_16400c:
    // 0x16400c: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x16400cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_164010:
    // 0x164010: 0x40f809  jalr        $v0
label_164014:
    if (ctx->pc == 0x164014u) {
        ctx->pc = 0x164014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164010u;
        // 0x164014: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x164018u;
        goto label_164018;
    }
    ctx->pc = 0x164010u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x164018u);
        ctx->pc = 0x164014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164010u;
        // 0x164014: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x164010u, 0x164018u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x164018u;
label_164018:
    // 0x164018: 0x8e100008  lw          $s0, 0x8($s0)
    ctx->pc = 0x164018u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_16401c:
    // 0x16401c: 0x1600ffed  bnez        $s0, . + 4 + (-0x13 << 2)
label_164020:
    if (ctx->pc == 0x164020u) {
        ctx->pc = 0x164024u;
        goto label_164024;
    }
    ctx->pc = 0x16401Cu;
    {
        const bool branch_taken_0x16401c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x16401c) {
            ctx->pc = 0x163FD4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_163fd4;
        }
    }
    ctx->pc = 0x164024u;
label_164024:
    // 0x164024: 0x0  nop
    ctx->pc = 0x164024u;
    // NOP
label_164028:
    // 0x164028: 0x8f908698  lw          $s0, -0x7968($gp)
    ctx->pc = 0x164028u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936216)));
label_16402c:
    // 0x16402c: 0x12000015  beqz        $s0, . + 4 + (0x15 << 2)
label_164030:
    if (ctx->pc == 0x164030u) {
        ctx->pc = 0x164034u;
        goto label_164034;
    }
    ctx->pc = 0x16402Cu;
    {
        const bool branch_taken_0x16402c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x16402c) {
            ctx->pc = 0x164084u;
            goto label_164084;
        }
    }
    ctx->pc = 0x164034u;
label_164034:
    // 0x164034: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x164034u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_164038:
    // 0x164038: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x164038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_16403c:
    // 0x16403c: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
label_164040:
    if (ctx->pc == 0x164040u) {
        ctx->pc = 0x164044u;
        goto label_164044;
    }
    ctx->pc = 0x16403Cu;
    {
        const bool branch_taken_0x16403c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x16403c) {
            ctx->pc = 0x164054u;
            goto label_164054;
        }
    }
    ctx->pc = 0x164044u;
label_164044:
    // 0x164044: 0xc0591f8  jal         func_1647E0
label_164048:
    if (ctx->pc == 0x164048u) {
        ctx->pc = 0x164048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164044u;
        // 0x164048: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16404Cu;
        goto label_16404c;
    }
    ctx->pc = 0x164044u;
    SET_GPR_U32(ctx, 31, 0x16404Cu);
    ctx->pc = 0x164048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x164044u;
    // 0x164048: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1647E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1647E0u, 0x164044u, 0x16404Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16404Cu;
label_16404c:
    // 0x16404c: 0x1000000a  b           . + 4 + (0xA << 2)
label_164050:
    if (ctx->pc == 0x164050u) {
        ctx->pc = 0x164054u;
        goto label_164054;
    }
    ctx->pc = 0x16404Cu;
    {
        const bool branch_taken_0x16404c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16404c) {
            ctx->pc = 0x164078u;
            goto label_164078;
        }
    }
    ctx->pc = 0x164054u;
label_164054:
    // 0x164054: 0x0  nop
    ctx->pc = 0x164054u;
    // NOP
label_164058:
    // 0x164058: 0x8e020364  lw          $v0, 0x364($s0)
    ctx->pc = 0x164058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 868)));
label_16405c:
    // 0x16405c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_164060:
    if (ctx->pc == 0x164060u) {
        ctx->pc = 0x164064u;
        goto label_164064;
    }
    ctx->pc = 0x16405Cu;
    {
        const bool branch_taken_0x16405c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16405c) {
            ctx->pc = 0x164078u;
            goto label_164078;
        }
    }
    ctx->pc = 0x164064u;
label_164064:
    // 0x164064: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x164064u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_164068:
    // 0x164068: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x164068u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
label_16406c:
    // 0x16406c: 0x8e020364  lw          $v0, 0x364($s0)
    ctx->pc = 0x16406cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 868)));
label_164070:
    // 0x164070: 0x40f809  jalr        $v0
label_164074:
    if (ctx->pc == 0x164074u) {
        ctx->pc = 0x164074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164070u;
        // 0x164074: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x164078u;
        goto label_164078;
    }
    ctx->pc = 0x164070u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x164078u);
        ctx->pc = 0x164074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164070u;
        // 0x164074: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x164070u, 0x164078u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x164078u;
label_164078:
    // 0x164078: 0x8e100008  lw          $s0, 0x8($s0)
    ctx->pc = 0x164078u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_16407c:
    // 0x16407c: 0x1600ffed  bnez        $s0, . + 4 + (-0x13 << 2)
label_164080:
    if (ctx->pc == 0x164080u) {
        ctx->pc = 0x164084u;
        goto label_164084;
    }
    ctx->pc = 0x16407Cu;
    {
        const bool branch_taken_0x16407c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x16407c) {
            ctx->pc = 0x164034u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_164034;
        }
    }
    ctx->pc = 0x164084u;
label_164084:
    // 0x164084: 0x0  nop
    ctx->pc = 0x164084u;
    // NOP
label_164088:
    // 0x164088: 0x8f90868c  lw          $s0, -0x7974($gp)
    ctx->pc = 0x164088u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936204)));
label_16408c:
    // 0x16408c: 0x12000015  beqz        $s0, . + 4 + (0x15 << 2)
label_164090:
    if (ctx->pc == 0x164090u) {
        ctx->pc = 0x164094u;
        goto label_164094;
    }
    ctx->pc = 0x16408Cu;
    {
        const bool branch_taken_0x16408c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x16408c) {
            ctx->pc = 0x1640E4u;
            goto label_1640e4;
        }
    }
    ctx->pc = 0x164094u;
label_164094:
    // 0x164094: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x164094u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_164098:
    // 0x164098: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x164098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_16409c:
    // 0x16409c: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
label_1640a0:
    if (ctx->pc == 0x1640A0u) {
        ctx->pc = 0x1640A4u;
        goto label_1640a4;
    }
    ctx->pc = 0x16409Cu;
    {
        const bool branch_taken_0x16409c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x16409c) {
            ctx->pc = 0x1640B4u;
            goto label_1640b4;
        }
    }
    ctx->pc = 0x1640A4u;
label_1640a4:
    // 0x1640a4: 0xc0591f8  jal         func_1647E0
label_1640a8:
    if (ctx->pc == 0x1640A8u) {
        ctx->pc = 0x1640A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1640A4u;
        // 0x1640a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1640ACu;
        goto label_1640ac;
    }
    ctx->pc = 0x1640A4u;
    SET_GPR_U32(ctx, 31, 0x1640ACu);
    ctx->pc = 0x1640A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1640A4u;
    // 0x1640a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1647E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1647E0u, 0x1640A4u, 0x1640ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1640ACu;
label_1640ac:
    // 0x1640ac: 0x1000000a  b           . + 4 + (0xA << 2)
label_1640b0:
    if (ctx->pc == 0x1640B0u) {
        ctx->pc = 0x1640B4u;
        goto label_1640b4;
    }
    ctx->pc = 0x1640ACu;
    {
        const bool branch_taken_0x1640ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1640ac) {
            ctx->pc = 0x1640D8u;
            goto label_1640d8;
        }
    }
    ctx->pc = 0x1640B4u;
label_1640b4:
    // 0x1640b4: 0x0  nop
    ctx->pc = 0x1640b4u;
    // NOP
label_1640b8:
    // 0x1640b8: 0x8e020364  lw          $v0, 0x364($s0)
    ctx->pc = 0x1640b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 868)));
label_1640bc:
    // 0x1640bc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1640c0:
    if (ctx->pc == 0x1640C0u) {
        ctx->pc = 0x1640C4u;
        goto label_1640c4;
    }
    ctx->pc = 0x1640BCu;
    {
        const bool branch_taken_0x1640bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1640bc) {
            ctx->pc = 0x1640D8u;
            goto label_1640d8;
        }
    }
    ctx->pc = 0x1640C4u;
label_1640c4:
    // 0x1640c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1640c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1640c8:
    // 0x1640c8: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x1640c8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
label_1640cc:
    // 0x1640cc: 0x8e020364  lw          $v0, 0x364($s0)
    ctx->pc = 0x1640ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 868)));
label_1640d0:
    // 0x1640d0: 0x40f809  jalr        $v0
label_1640d4:
    if (ctx->pc == 0x1640D4u) {
        ctx->pc = 0x1640D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1640D0u;
        // 0x1640d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1640D8u;
        goto label_1640d8;
    }
    ctx->pc = 0x1640D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1640D8u);
        ctx->pc = 0x1640D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1640D0u;
        // 0x1640d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1640D0u, 0x1640D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1640D8u;
label_1640d8:
    // 0x1640d8: 0x8e100008  lw          $s0, 0x8($s0)
    ctx->pc = 0x1640d8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1640dc:
    // 0x1640dc: 0x1600ffed  bnez        $s0, . + 4 + (-0x13 << 2)
label_1640e0:
    if (ctx->pc == 0x1640E0u) {
        ctx->pc = 0x1640E4u;
        goto label_1640e4;
    }
    ctx->pc = 0x1640DCu;
    {
        const bool branch_taken_0x1640dc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1640dc) {
            ctx->pc = 0x164094u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_164094;
        }
    }
    ctx->pc = 0x1640E4u;
label_1640e4:
    // 0x1640e4: 0x0  nop
    ctx->pc = 0x1640e4u;
    // NOP
label_1640e8:
    // 0x1640e8: 0x8f908674  lw          $s0, -0x798C($gp)
    ctx->pc = 0x1640e8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936180)));
label_1640ec:
    // 0x1640ec: 0x12000015  beqz        $s0, . + 4 + (0x15 << 2)
label_1640f0:
    if (ctx->pc == 0x1640F0u) {
        ctx->pc = 0x1640F4u;
        goto label_1640f4;
    }
    ctx->pc = 0x1640ECu;
    {
        const bool branch_taken_0x1640ec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1640ec) {
            ctx->pc = 0x164144u;
            goto label_164144;
        }
    }
    ctx->pc = 0x1640F4u;
label_1640f4:
    // 0x1640f4: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x1640f4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_1640f8:
    // 0x1640f8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1640f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1640fc:
    // 0x1640fc: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
label_164100:
    if (ctx->pc == 0x164100u) {
        ctx->pc = 0x164104u;
        goto label_164104;
    }
    ctx->pc = 0x1640FCu;
    {
        const bool branch_taken_0x1640fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1640fc) {
            ctx->pc = 0x164114u;
            goto label_164114;
        }
    }
    ctx->pc = 0x164104u;
label_164104:
    // 0x164104: 0xc0591f8  jal         func_1647E0
label_164108:
    if (ctx->pc == 0x164108u) {
        ctx->pc = 0x164108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164104u;
        // 0x164108: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16410Cu;
        goto label_16410c;
    }
    ctx->pc = 0x164104u;
    SET_GPR_U32(ctx, 31, 0x16410Cu);
    ctx->pc = 0x164108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x164104u;
    // 0x164108: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1647E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1647E0u, 0x164104u, 0x16410Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16410Cu;
label_16410c:
    // 0x16410c: 0x1000000a  b           . + 4 + (0xA << 2)
label_164110:
    if (ctx->pc == 0x164110u) {
        ctx->pc = 0x164114u;
        goto label_164114;
    }
    ctx->pc = 0x16410Cu;
    {
        const bool branch_taken_0x16410c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16410c) {
            ctx->pc = 0x164138u;
            goto label_164138;
        }
    }
    ctx->pc = 0x164114u;
label_164114:
    // 0x164114: 0x0  nop
    ctx->pc = 0x164114u;
    // NOP
label_164118:
    // 0x164118: 0x8e020dd8  lw          $v0, 0xDD8($s0)
    ctx->pc = 0x164118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3544)));
label_16411c:
    // 0x16411c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_164120:
    if (ctx->pc == 0x164120u) {
        ctx->pc = 0x164124u;
        goto label_164124;
    }
    ctx->pc = 0x16411Cu;
    {
        const bool branch_taken_0x16411c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16411c) {
            ctx->pc = 0x164138u;
            goto label_164138;
        }
    }
    ctx->pc = 0x164124u;
label_164124:
    // 0x164124: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x164124u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_164128:
    // 0x164128: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x164128u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
label_16412c:
    // 0x16412c: 0x8e020dd8  lw          $v0, 0xDD8($s0)
    ctx->pc = 0x16412cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3544)));
label_164130:
    // 0x164130: 0x40f809  jalr        $v0
label_164134:
    if (ctx->pc == 0x164134u) {
        ctx->pc = 0x164134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164130u;
        // 0x164134: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x164138u;
        goto label_164138;
    }
    ctx->pc = 0x164130u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x164138u);
        ctx->pc = 0x164134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164130u;
        // 0x164134: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x164130u, 0x164138u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x164138u;
label_164138:
    // 0x164138: 0x8e100008  lw          $s0, 0x8($s0)
    ctx->pc = 0x164138u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_16413c:
    // 0x16413c: 0x1600ffed  bnez        $s0, . + 4 + (-0x13 << 2)
label_164140:
    if (ctx->pc == 0x164140u) {
        ctx->pc = 0x164144u;
        goto label_164144;
    }
    ctx->pc = 0x16413Cu;
    {
        const bool branch_taken_0x16413c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x16413c) {
            ctx->pc = 0x1640F4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1640f4;
        }
    }
    ctx->pc = 0x164144u;
label_164144:
    // 0x164144: 0x0  nop
    ctx->pc = 0x164144u;
    // NOP
label_164148:
    // 0x164148: 0x8f908668  lw          $s0, -0x7998($gp)
    ctx->pc = 0x164148u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936168)));
label_16414c:
    // 0x16414c: 0x12000015  beqz        $s0, . + 4 + (0x15 << 2)
label_164150:
    if (ctx->pc == 0x164150u) {
        ctx->pc = 0x164154u;
        goto label_164154;
    }
    ctx->pc = 0x16414Cu;
    {
        const bool branch_taken_0x16414c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x16414c) {
            ctx->pc = 0x1641A4u;
            goto label_1641a4;
        }
    }
    ctx->pc = 0x164154u;
label_164154:
    // 0x164154: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x164154u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_164158:
    // 0x164158: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x164158u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_16415c:
    // 0x16415c: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
label_164160:
    if (ctx->pc == 0x164160u) {
        ctx->pc = 0x164164u;
        goto label_164164;
    }
    ctx->pc = 0x16415Cu;
    {
        const bool branch_taken_0x16415c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x16415c) {
            ctx->pc = 0x164174u;
            goto label_164174;
        }
    }
    ctx->pc = 0x164164u;
label_164164:
    // 0x164164: 0xc0591f8  jal         func_1647E0
label_164168:
    if (ctx->pc == 0x164168u) {
        ctx->pc = 0x164168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164164u;
        // 0x164168: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16416Cu;
        goto label_16416c;
    }
    ctx->pc = 0x164164u;
    SET_GPR_U32(ctx, 31, 0x16416Cu);
    ctx->pc = 0x164168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x164164u;
    // 0x164168: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1647E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1647E0u, 0x164164u, 0x16416Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16416Cu;
label_16416c:
    // 0x16416c: 0x1000000a  b           . + 4 + (0xA << 2)
label_164170:
    if (ctx->pc == 0x164170u) {
        ctx->pc = 0x164174u;
        goto label_164174;
    }
    ctx->pc = 0x16416Cu;
    {
        const bool branch_taken_0x16416c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16416c) {
            ctx->pc = 0x164198u;
            goto label_164198;
        }
    }
    ctx->pc = 0x164174u;
label_164174:
    // 0x164174: 0x0  nop
    ctx->pc = 0x164174u;
    // NOP
label_164178:
    // 0x164178: 0x8e021998  lw          $v0, 0x1998($s0)
    ctx->pc = 0x164178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6552)));
label_16417c:
    // 0x16417c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_164180:
    if (ctx->pc == 0x164180u) {
        ctx->pc = 0x164184u;
        goto label_164184;
    }
    ctx->pc = 0x16417Cu;
    {
        const bool branch_taken_0x16417c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16417c) {
            ctx->pc = 0x164198u;
            goto label_164198;
        }
    }
    ctx->pc = 0x164184u;
label_164184:
    // 0x164184: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x164184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_164188:
    // 0x164188: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x164188u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
label_16418c:
    // 0x16418c: 0x8e021998  lw          $v0, 0x1998($s0)
    ctx->pc = 0x16418cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6552)));
label_164190:
    // 0x164190: 0x40f809  jalr        $v0
label_164194:
    if (ctx->pc == 0x164194u) {
        ctx->pc = 0x164194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164190u;
        // 0x164194: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x164198u;
        goto label_164198;
    }
    ctx->pc = 0x164190u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x164198u);
        ctx->pc = 0x164194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164190u;
        // 0x164194: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x164190u, 0x164198u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x164198u;
label_164198:
    // 0x164198: 0x8e100008  lw          $s0, 0x8($s0)
    ctx->pc = 0x164198u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_16419c:
    // 0x16419c: 0x1600ffed  bnez        $s0, . + 4 + (-0x13 << 2)
label_1641a0:
    if (ctx->pc == 0x1641A0u) {
        ctx->pc = 0x1641A4u;
        goto label_1641a4;
    }
    ctx->pc = 0x16419Cu;
    {
        const bool branch_taken_0x16419c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x16419c) {
            ctx->pc = 0x164154u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_164154;
        }
    }
    ctx->pc = 0x1641A4u;
label_1641a4:
    // 0x1641a4: 0x0  nop
    ctx->pc = 0x1641a4u;
    // NOP
label_1641a8:
    // 0x1641a8: 0x8f908650  lw          $s0, -0x79B0($gp)
    ctx->pc = 0x1641a8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936144)));
label_1641ac:
    // 0x1641ac: 0x12000015  beqz        $s0, . + 4 + (0x15 << 2)
label_1641b0:
    if (ctx->pc == 0x1641B0u) {
        ctx->pc = 0x1641B4u;
        goto label_1641b4;
    }
    ctx->pc = 0x1641ACu;
    {
        const bool branch_taken_0x1641ac = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1641ac) {
            ctx->pc = 0x164204u;
            goto label_164204;
        }
    }
    ctx->pc = 0x1641B4u;
label_1641b4:
    // 0x1641b4: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x1641b4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_1641b8:
    // 0x1641b8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1641b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1641bc:
    // 0x1641bc: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
label_1641c0:
    if (ctx->pc == 0x1641C0u) {
        ctx->pc = 0x1641C4u;
        goto label_1641c4;
    }
    ctx->pc = 0x1641BCu;
    {
        const bool branch_taken_0x1641bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1641bc) {
            ctx->pc = 0x1641D4u;
            goto label_1641d4;
        }
    }
    ctx->pc = 0x1641C4u;
label_1641c4:
    // 0x1641c4: 0xc0591f8  jal         func_1647E0
label_1641c8:
    if (ctx->pc == 0x1641C8u) {
        ctx->pc = 0x1641C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1641C4u;
        // 0x1641c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1641CCu;
        goto label_1641cc;
    }
    ctx->pc = 0x1641C4u;
    SET_GPR_U32(ctx, 31, 0x1641CCu);
    ctx->pc = 0x1641C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1641C4u;
    // 0x1641c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1647E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1647E0u, 0x1641C4u, 0x1641CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1641CCu;
label_1641cc:
    // 0x1641cc: 0x1000000a  b           . + 4 + (0xA << 2)
label_1641d0:
    if (ctx->pc == 0x1641D0u) {
        ctx->pc = 0x1641D4u;
        goto label_1641d4;
    }
    ctx->pc = 0x1641CCu;
    {
        const bool branch_taken_0x1641cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1641cc) {
            ctx->pc = 0x1641F8u;
            goto label_1641f8;
        }
    }
    ctx->pc = 0x1641D4u;
label_1641d4:
    // 0x1641d4: 0x0  nop
    ctx->pc = 0x1641d4u;
    // NOP
label_1641d8:
    // 0x1641d8: 0x8e021558  lw          $v0, 0x1558($s0)
    ctx->pc = 0x1641d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5464)));
label_1641dc:
    // 0x1641dc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1641e0:
    if (ctx->pc == 0x1641E0u) {
        ctx->pc = 0x1641E4u;
        goto label_1641e4;
    }
    ctx->pc = 0x1641DCu;
    {
        const bool branch_taken_0x1641dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1641dc) {
            ctx->pc = 0x1641F8u;
            goto label_1641f8;
        }
    }
    ctx->pc = 0x1641E4u;
label_1641e4:
    // 0x1641e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1641e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1641e8:
    // 0x1641e8: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x1641e8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
label_1641ec:
    // 0x1641ec: 0x8e021558  lw          $v0, 0x1558($s0)
    ctx->pc = 0x1641ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5464)));
label_1641f0:
    // 0x1641f0: 0x40f809  jalr        $v0
label_1641f4:
    if (ctx->pc == 0x1641F4u) {
        ctx->pc = 0x1641F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1641F0u;
        // 0x1641f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1641F8u;
        goto label_1641f8;
    }
    ctx->pc = 0x1641F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1641F8u);
        ctx->pc = 0x1641F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1641F0u;
        // 0x1641f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1641F0u, 0x1641F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1641F8u;
label_1641f8:
    // 0x1641f8: 0x8e100008  lw          $s0, 0x8($s0)
    ctx->pc = 0x1641f8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1641fc:
    // 0x1641fc: 0x1600ffed  bnez        $s0, . + 4 + (-0x13 << 2)
label_164200:
    if (ctx->pc == 0x164200u) {
        ctx->pc = 0x164204u;
        goto label_164204;
    }
    ctx->pc = 0x1641FCu;
    {
        const bool branch_taken_0x1641fc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1641fc) {
            ctx->pc = 0x1641B4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1641b4;
        }
    }
    ctx->pc = 0x164204u;
label_164204:
    // 0x164204: 0x0  nop
    ctx->pc = 0x164204u;
    // NOP
label_164208:
    // 0x164208: 0x8f908680  lw          $s0, -0x7980($gp)
    ctx->pc = 0x164208u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936192)));
label_16420c:
    // 0x16420c: 0x12000015  beqz        $s0, . + 4 + (0x15 << 2)
label_164210:
    if (ctx->pc == 0x164210u) {
        ctx->pc = 0x164214u;
        goto label_164214;
    }
    ctx->pc = 0x16420Cu;
    {
        const bool branch_taken_0x16420c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x16420c) {
            ctx->pc = 0x164264u;
            goto label_164264;
        }
    }
    ctx->pc = 0x164214u;
label_164214:
    // 0x164214: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x164214u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_164218:
    // 0x164218: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x164218u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_16421c:
    // 0x16421c: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
label_164220:
    if (ctx->pc == 0x164220u) {
        ctx->pc = 0x164224u;
        goto label_164224;
    }
    ctx->pc = 0x16421Cu;
    {
        const bool branch_taken_0x16421c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x16421c) {
            ctx->pc = 0x164234u;
            goto label_164234;
        }
    }
    ctx->pc = 0x164224u;
label_164224:
    // 0x164224: 0xc0591f8  jal         func_1647E0
label_164228:
    if (ctx->pc == 0x164228u) {
        ctx->pc = 0x164228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164224u;
        // 0x164228: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16422Cu;
        goto label_16422c;
    }
    ctx->pc = 0x164224u;
    SET_GPR_U32(ctx, 31, 0x16422Cu);
    ctx->pc = 0x164228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x164224u;
    // 0x164228: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1647E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1647E0u, 0x164224u, 0x16422Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16422Cu;
label_16422c:
    // 0x16422c: 0x1000000a  b           . + 4 + (0xA << 2)
label_164230:
    if (ctx->pc == 0x164230u) {
        ctx->pc = 0x164234u;
        goto label_164234;
    }
    ctx->pc = 0x16422Cu;
    {
        const bool branch_taken_0x16422c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16422c) {
            ctx->pc = 0x164258u;
            goto label_164258;
        }
    }
    ctx->pc = 0x164234u;
label_164234:
    // 0x164234: 0x0  nop
    ctx->pc = 0x164234u;
    // NOP
label_164238:
    // 0x164238: 0x8e020364  lw          $v0, 0x364($s0)
    ctx->pc = 0x164238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 868)));
label_16423c:
    // 0x16423c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_164240:
    if (ctx->pc == 0x164240u) {
        ctx->pc = 0x164244u;
        goto label_164244;
    }
    ctx->pc = 0x16423Cu;
    {
        const bool branch_taken_0x16423c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16423c) {
            ctx->pc = 0x164258u;
            goto label_164258;
        }
    }
    ctx->pc = 0x164244u;
label_164244:
    // 0x164244: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x164244u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_164248:
    // 0x164248: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x164248u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
label_16424c:
    // 0x16424c: 0x8e020364  lw          $v0, 0x364($s0)
    ctx->pc = 0x16424cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 868)));
label_164250:
    // 0x164250: 0x40f809  jalr        $v0
label_164254:
    if (ctx->pc == 0x164254u) {
        ctx->pc = 0x164254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164250u;
        // 0x164254: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x164258u;
        goto label_164258;
    }
    ctx->pc = 0x164250u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x164258u);
        ctx->pc = 0x164254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164250u;
        // 0x164254: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x164250u, 0x164258u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x164258u;
label_164258:
    // 0x164258: 0x8e100008  lw          $s0, 0x8($s0)
    ctx->pc = 0x164258u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_16425c:
    // 0x16425c: 0x1600ffed  bnez        $s0, . + 4 + (-0x13 << 2)
label_164260:
    if (ctx->pc == 0x164260u) {
        ctx->pc = 0x164264u;
        goto label_164264;
    }
    ctx->pc = 0x16425Cu;
    {
        const bool branch_taken_0x16425c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x16425c) {
            ctx->pc = 0x164214u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_164214;
        }
    }
    ctx->pc = 0x164264u;
label_164264:
    // 0x164264: 0x0  nop
    ctx->pc = 0x164264u;
    // NOP
label_164268:
    // 0x164268: 0xc0713d4  jal         func_1C4F50
label_16426c:
    if (ctx->pc == 0x16426Cu) {
        ctx->pc = 0x164270u;
        goto label_164270;
    }
    ctx->pc = 0x164268u;
    SET_GPR_U32(ctx, 31, 0x164270u);
    ctx->pc = 0x1C4F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4F50u, 0x164268u, 0x164270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164270u;
label_164270:
    // 0x164270: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x164270u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->pc = 0x164274u;
}
