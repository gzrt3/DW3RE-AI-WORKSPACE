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

// Function: FUN_0014da50
// Address: 0x14da50 - 0x14dc0c
void FUN_0014da50_0x14da50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0014da50_0x14da50");
#endif

    switch (ctx->pc) {
        case 0x14db04u: goto label_14db04;
        case 0x14db50u: goto label_14db50;
        case 0x14dbfcu: goto label_14dbfc;
        case 0x14dc08u: goto label_14dc08;
        default: break;
    }

    ctx->pc = 0x14da50u;

    // 0x14da50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x14da50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x14da54: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x14da54u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14da58: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x14da58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x14da5c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x14da5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x14da60: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x14da60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x14da64: 0x9084005b  lbu         $a0, 0x5B($a0)
    ctx->pc = 0x14da64u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 91)));
    // 0x14da68: 0x1083003b  beq         $a0, $v1, . + 4 + (0x3B << 2)
    ctx->pc = 0x14DA68u;
    {
        const bool branch_taken_0x14da68 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x14da68) {
            ctx->pc = 0x14DB58u;
            goto label_14db58;
        }
    }
    ctx->pc = 0x14DA70u;
    // 0x14da70: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x14da70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x14da74: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x14DA74u;
    {
        const bool branch_taken_0x14da74 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x14da74) {
            ctx->pc = 0x14DA84u;
            goto label_14da84;
        }
    }
    ctx->pc = 0x14DA7Cu;
    // 0x14da7c: 0x10000063  b           . + 4 + (0x63 << 2)
    ctx->pc = 0x14DA7Cu;
    {
        const bool branch_taken_0x14da7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14DA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DA7Cu;
        // 0x14da80: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14da7c) {
            ctx->pc = 0x14DC0Cu;
            return;
        }
    }
    ctx->pc = 0x14DA84u;
label_14da84:
    // 0x14da84: 0x80a4002a  lb          $a0, 0x2A($a1)
    ctx->pc = 0x14da84u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 42)));
    // 0x14da88: 0x14800021  bnez        $a0, . + 4 + (0x21 << 2)
    ctx->pc = 0x14DA88u;
    {
        const bool branch_taken_0x14da88 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x14DA8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DA88u;
        // 0x14da8c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14da88) {
            ctx->pc = 0x14DB10u;
            goto label_14db10;
        }
    }
    ctx->pc = 0x14DA90u;
    // 0x14da90: 0x8ca30020  lw          $v1, 0x20($a1)
    ctx->pc = 0x14da90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x14da94: 0x8c630024  lw          $v1, 0x24($v1)
    ctx->pc = 0x14da94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x14da98: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x14da98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14da9c: 0x30632000  andi        $v1, $v1, 0x2000
    ctx->pc = 0x14da9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8192);
    // 0x14daa0: 0x1460001a  bnez        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x14DAA0u;
    {
        const bool branch_taken_0x14daa0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x14daa0) {
            ctx->pc = 0x14DB0Cu;
            goto label_14db0c;
        }
    }
    ctx->pc = 0x14DAA8u;
    // 0x14daa8: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x14daa8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x14daac: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x14daacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x14dab0: 0x9023490d  lbu         $v1, 0x490D($at)
    ctx->pc = 0x14dab0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x33490Du));
    // 0x14dab4: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x14DAB4u;
    {
        const bool branch_taken_0x14dab4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x14dab4) {
            ctx->pc = 0x14DAC8u;
            goto label_14dac8;
        }
    }
    ctx->pc = 0x14DABCu;
    // 0x14dabc: 0x3c060025  lui         $a2, 0x25
    ctx->pc = 0x14dabcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)37 << 16));
    // 0x14dac0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x14DAC0u;
    {
        const bool branch_taken_0x14dac0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14DAC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DAC0u;
        // 0x14dac4: 0x24c60f00  addiu       $a2, $a2, 0xF00 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3840));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14dac0) {
            ctx->pc = 0x14DAD0u;
            goto label_14dad0;
        }
    }
    ctx->pc = 0x14DAC8u;
label_14dac8:
    // 0x14dac8: 0x3c060025  lui         $a2, 0x25
    ctx->pc = 0x14dac8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)37 << 16));
    // 0x14dacc: 0x24c60ee0  addiu       $a2, $a2, 0xEE0
    ctx->pc = 0x14daccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3808));
label_14dad0:
    // 0x14dad0: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x14dad0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x14dad4: 0x8442021c  lh          $v0, 0x21C($v0)
    ctx->pc = 0x14dad4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 540)));
    // 0x14dad8: 0x2444ffff  addiu       $a0, $v0, -0x1
    ctx->pc = 0x14dad8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x14dadc: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14DADCu;
    {
        const bool branch_taken_0x14dadc = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x14DAE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DADCu;
        // 0x14dae0: 0x218c3  sra         $v1, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14dadc) {
            ctx->pc = 0x14DAECu;
            goto label_14daec;
        }
    }
    ctx->pc = 0x14DAE4u;
    // 0x14dae4: 0x24420007  addiu       $v0, $v0, 0x7
    ctx->pc = 0x14dae4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7));
    // 0x14dae8: 0x218c3  sra         $v1, $v0, 3
    ctx->pc = 0x14dae8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 3));
label_14daec:
    // 0x14daec: 0x64102a  slt         $v0, $v1, $a0
    ctx->pc = 0x14daecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x14daf0: 0x82180a  movz        $v1, $a0, $v0
    ctx->pc = 0x14daf0u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
    // 0x14daf4: 0xa4c3001e  sh          $v1, 0x1E($a2)
    ctx->pc = 0x14daf4u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 30), (uint16_t)GPR_U32(ctx, 3));
    // 0x14daf8: 0x8ca40010  lw          $a0, 0x10($a1)
    ctx->pc = 0x14daf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x14dafc: 0xc040938  jal         func_1024E0
    ctx->pc = 0x14DAFCu;
    SET_GPR_U32(ctx, 31, 0x14DB04u);
    ctx->pc = 0x14DB00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14DAFCu;
    // 0x14db00: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1024E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1024E0u, 0x14DAFCu, 0x14DB04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14DB04u;
label_14db04:
    // 0x14db04: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x14DB04u;
    {
        const bool branch_taken_0x14db04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14db04) {
            ctx->pc = 0x14DC08u;
            goto label_14dc08;
        }
    }
    ctx->pc = 0x14DB0Cu;
label_14db0c:
    // 0x14db0c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x14db0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_14db10:
    // 0x14db10: 0x10830004  beq         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x14DB10u;
    {
        const bool branch_taken_0x14db10 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x14db10) {
            ctx->pc = 0x14DB24u;
            goto label_14db24;
        }
    }
    ctx->pc = 0x14DB18u;
    // 0x14db18: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x14db18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x14db1c: 0x1483003a  bne         $a0, $v1, . + 4 + (0x3A << 2)
    ctx->pc = 0x14DB1Cu;
    {
        const bool branch_taken_0x14db1c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x14db1c) {
            ctx->pc = 0x14DC08u;
            goto label_14dc08;
        }
    }
    ctx->pc = 0x14DB24u;
label_14db24:
    // 0x14db24: 0x8ca50010  lw          $a1, 0x10($a1)
    ctx->pc = 0x14db24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x14db28: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x14db28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x14db2c: 0x84a3003c  lh          $v1, 0x3C($a1)
    ctx->pc = 0x14db2cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 60)));
    // 0x14db30: 0x10640035  beq         $v1, $a0, . + 4 + (0x35 << 2)
    ctx->pc = 0x14DB30u;
    {
        const bool branch_taken_0x14db30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x14db30) {
            ctx->pc = 0x14DC08u;
            goto label_14dc08;
        }
    }
    ctx->pc = 0x14DB38u;
    // 0x14db38: 0x8ca30200  lw          $v1, 0x200($a1)
    ctx->pc = 0x14db38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 512)));
    // 0x14db3c: 0x10600032  beqz        $v1, . + 4 + (0x32 << 2)
    ctx->pc = 0x14DB3Cu;
    {
        const bool branch_taken_0x14db3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14db3c) {
            ctx->pc = 0x14DC08u;
            goto label_14dc08;
        }
    }
    ctx->pc = 0x14DB44u;
    // 0x14db44: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x14db44u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x14db48: 0xc050f08  jal         func_143C20
    ctx->pc = 0x14DB48u;
    SET_GPR_U32(ctx, 31, 0x14DB50u);
    ctx->pc = 0x143C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143C20u, 0x14DB48u, 0x14DB50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14DB50u;
label_14db50:
    // 0x14db50: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x14DB50u;
    {
        const bool branch_taken_0x14db50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14db50) {
            ctx->pc = 0x14DC08u;
            goto label_14dc08;
        }
    }
    ctx->pc = 0x14DB58u;
label_14db58:
    // 0x14db58: 0x8cf00050  lw          $s0, 0x50($a3)
    ctx->pc = 0x14db58u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 80)));
    // 0x14db5c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x14db5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14db60: 0x9203000a  lbu         $v1, 0xA($s0)
    ctx->pc = 0x14db60u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 10)));
    // 0x14db64: 0x14660028  bne         $v1, $a2, . + 4 + (0x28 << 2)
    ctx->pc = 0x14DB64u;
    {
        const bool branch_taken_0x14db64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        if (branch_taken_0x14db64) {
            ctx->pc = 0x14DC08u;
            goto label_14dc08;
        }
    }
    ctx->pc = 0x14DB6Cu;
    // 0x14db6c: 0x92040009  lbu         $a0, 0x9($s0)
    ctx->pc = 0x14db6cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 9)));
    // 0x14db70: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x14db70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x14db74: 0x1083000d  beq         $a0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x14DB74u;
    {
        const bool branch_taken_0x14db74 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x14db74) {
            ctx->pc = 0x14DBACu;
            goto label_14dbac;
        }
    }
    ctx->pc = 0x14DB7Cu;
    // 0x14db7c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x14db7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x14db80: 0x1083000a  beq         $a0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x14DB80u;
    {
        const bool branch_taken_0x14db80 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x14db80) {
            ctx->pc = 0x14DBACu;
            goto label_14dbac;
        }
    }
    ctx->pc = 0x14DB88u;
    // 0x14db88: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x14db88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x14db8c: 0x10830007  beq         $a0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x14DB8Cu;
    {
        const bool branch_taken_0x14db8c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x14db8c) {
            ctx->pc = 0x14DBACu;
            goto label_14dbac;
        }
    }
    ctx->pc = 0x14DB94u;
    // 0x14db94: 0x10860005  beq         $a0, $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x14DB94u;
    {
        const bool branch_taken_0x14db94 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 6));
        if (branch_taken_0x14db94) {
            ctx->pc = 0x14DBACu;
            goto label_14dbac;
        }
    }
    ctx->pc = 0x14DB9Cu;
    // 0x14db9c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14DB9Cu;
    {
        const bool branch_taken_0x14db9c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x14db9c) {
            ctx->pc = 0x14DBACu;
            goto label_14dbac;
        }
    }
    ctx->pc = 0x14DBA4u;
    // 0x14dba4: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x14DBA4u;
    {
        const bool branch_taken_0x14dba4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14dba4) {
            ctx->pc = 0x14DC08u;
            goto label_14dc08;
        }
    }
    ctx->pc = 0x14DBACu;
label_14dbac:
    // 0x14dbac: 0x80a4002a  lb          $a0, 0x2A($a1)
    ctx->pc = 0x14dbacu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 42)));
    // 0x14dbb0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x14dbb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x14dbb4: 0x14830014  bne         $a0, $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x14DBB4u;
    {
        const bool branch_taken_0x14dbb4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x14dbb4) {
            ctx->pc = 0x14DC08u;
            goto label_14dc08;
        }
    }
    ctx->pc = 0x14DBBCu;
    // 0x14dbbc: 0x8ca30010  lw          $v1, 0x10($a1)
    ctx->pc = 0x14dbbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x14dbc0: 0x8c640200  lw          $a0, 0x200($v1)
    ctx->pc = 0x14dbc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 512)));
    // 0x14dbc4: 0x10800010  beqz        $a0, . + 4 + (0x10 << 2)
    ctx->pc = 0x14DBC4u;
    {
        const bool branch_taken_0x14dbc4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x14dbc4) {
            ctx->pc = 0x14DC08u;
            goto label_14dc08;
        }
    }
    ctx->pc = 0x14DBCCu;
    // 0x14dbcc: 0x90830232  lbu         $v1, 0x232($a0)
    ctx->pc = 0x14dbccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 562)));
    // 0x14dbd0: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x14DBD0u;
    {
        const bool branch_taken_0x14dbd0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x14dbd0) {
            ctx->pc = 0x14DC08u;
            goto label_14dc08;
        }
    }
    ctx->pc = 0x14DBD8u;
    // 0x14dbd8: 0x8ca50020  lw          $a1, 0x20($a1)
    ctx->pc = 0x14dbd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x14dbdc: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x14dbdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x14dbe0: 0x8ca50024  lw          $a1, 0x24($a1)
    ctx->pc = 0x14dbe0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
    // 0x14dbe4: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x14dbe4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x14dbe8: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x14dbe8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x14dbec: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x14DBECu;
    {
        const bool branch_taken_0x14dbec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14dbec) {
            ctx->pc = 0x14DC08u;
            goto label_14dc08;
        }
    }
    ctx->pc = 0x14DBF4u;
    // 0x14dbf4: 0xc0439cc  jal         func_10E730
    ctx->pc = 0x14DBF4u;
    SET_GPR_U32(ctx, 31, 0x14DBFCu);
    ctx->pc = 0x10E730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E730u, 0x14DBF4u, 0x14DBFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14DBFCu;
label_14dbfc:
    // 0x14dbfc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14dbfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14dc00: 0xc0594dc  jal         func_165370
    ctx->pc = 0x14DC00u;
    SET_GPR_U32(ctx, 31, 0x14DC08u);
    ctx->pc = 0x14DC04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14DC00u;
    // 0x14dc04: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165370u, 0x14DC00u, 0x14DC08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14DC08u;
label_14dc08:
    // 0x14dc08: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x14dc08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->pc = 0x14dc0cu;
}
