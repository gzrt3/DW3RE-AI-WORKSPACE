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

// Function: FUN_001feb70
// Address: 0x1feb70 - 0x1fed84
void FUN_001feb70_0x1feb70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001feb70_0x1feb70");
#endif

    switch (ctx->pc) {
        case 0x1fec64u: goto label_1fec64;
        case 0x1fecf4u: goto label_1fecf4;
        default: break;
    }

    ctx->pc = 0x1feb70u;

    // 0x1feb70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1feb70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1feb74: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x1feb74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x1feb78: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1feb78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1feb7c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1feb7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1feb80: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1feb80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1feb84: 0x3c03002b  lui         $v1, 0x2B
    ctx->pc = 0x1feb84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)43 << 16));
    // 0x1feb88: 0xaf8690a8  sw          $a2, -0x6F58($gp)
    ctx->pc = 0x1feb88u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938792), GPR_U32(ctx, 6));
    // 0x1feb8c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1feb8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1feb90: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1feb90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1feb94: 0xaf8490a0  sw          $a0, -0x6F60($gp)
    ctx->pc = 0x1feb94u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938784), GPR_U32(ctx, 4));
    // 0x1feb98: 0x246303b0  addiu       $v1, $v1, 0x3B0
    ctx->pc = 0x1feb98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 944));
    // 0x1feb9c: 0xaf8890ac  sw          $t0, -0x6F54($gp)
    ctx->pc = 0x1feb9cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938796), GPR_U32(ctx, 8));
    // 0x1feba0: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x1feba0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1feba4: 0xaf8790a4  sw          $a3, -0x6F5C($gp)
    ctx->pc = 0x1feba4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938788), GPR_U32(ctx, 7));
    // 0x1feba8: 0xaf85909c  sw          $a1, -0x6F64($gp)
    ctx->pc = 0x1feba8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938780), GPR_U32(ctx, 5));
    // 0x1febac: 0x24030400  addiu       $v1, $zero, 0x400
    ctx->pc = 0x1febacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x1febb0: 0xaf8690b4  sw          $a2, -0x6F4C($gp)
    ctx->pc = 0x1febb0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938804), GPR_U32(ctx, 6));
    // 0x1febb4: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1febb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1febb8: 0xaf8090b0  sw          $zero, -0x6F50($gp)
    ctx->pc = 0x1febb8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938800), GPR_U32(ctx, 0));
    // 0x1febbc: 0xdc840000  ld          $a0, 0x0($a0)
    ctx->pc = 0x1febbcu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1febc0: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1febc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1febc4: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FEBC4u;
    {
        const bool branch_taken_0x1febc4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FEBC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEBC4u;
        // 0x1febc8: 0x120802d  daddu       $s0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1febc4) {
            ctx->pc = 0x1FEBD4u;
            goto label_1febd4;
        }
    }
    ctx->pc = 0x1FEBCCu;
    // 0x1febcc: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x1FEBCCu;
    {
        const bool branch_taken_0x1febcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FEBD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEBCCu;
        // 0x1febd0: 0xaf809090  sw          $zero, -0x6F70($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938768), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1febcc) {
            ctx->pc = 0x1FEC50u;
            goto label_1fec50;
        }
    }
    ctx->pc = 0x1FEBD4u;
label_1febd4:
    // 0x1febd4: 0x24030800  addiu       $v1, $zero, 0x800
    ctx->pc = 0x1febd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x1febd8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1febd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1febdc: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1febdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1febe0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FEBE0u;
    {
        const bool branch_taken_0x1febe0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FEBE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEBE0u;
        // 0x1febe4: 0x24031000  addiu       $v1, $zero, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1febe0) {
            ctx->pc = 0x1FEBF0u;
            goto label_1febf0;
        }
    }
    ctx->pc = 0x1FEBE8u;
    // 0x1febe8: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x1FEBE8u;
    {
        const bool branch_taken_0x1febe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FEBECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEBE8u;
        // 0x1febec: 0xaf869090  sw          $a2, -0x6F70($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938768), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1febe8) {
            ctx->pc = 0x1FEC50u;
            goto label_1fec50;
        }
    }
    ctx->pc = 0x1FEBF0u;
label_1febf0:
    // 0x1febf0: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1febf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1febf4: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1febf4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1febf8: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FEBF8u;
    {
        const bool branch_taken_0x1febf8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1febf8) {
            ctx->pc = 0x1FEC0Cu;
            goto label_1fec0c;
        }
    }
    ctx->pc = 0x1FEC00u;
    // 0x1fec00: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1fec00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1fec04: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1FEC04u;
    {
        const bool branch_taken_0x1fec04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FEC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEC04u;
        // 0x1fec08: 0xaf839090  sw          $v1, -0x6F70($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938768), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fec04) {
            ctx->pc = 0x1FEC50u;
            goto label_1fec50;
        }
    }
    ctx->pc = 0x1FEC0Cu;
label_1fec0c:
    // 0x1fec0c: 0x24032000  addiu       $v1, $zero, 0x2000
    ctx->pc = 0x1fec0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x1fec10: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1fec10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1fec14: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1fec14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1fec18: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FEC18u;
    {
        const bool branch_taken_0x1fec18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FEC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEC18u;
        // 0x1fec1c: 0x24034000  addiu       $v1, $zero, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fec18) {
            ctx->pc = 0x1FEC2Cu;
            goto label_1fec2c;
        }
    }
    ctx->pc = 0x1FEC20u;
    // 0x1fec20: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1fec20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1fec24: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1FEC24u;
    {
        const bool branch_taken_0x1fec24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FEC28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEC24u;
        // 0x1fec28: 0xaf839090  sw          $v1, -0x6F70($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938768), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fec24) {
            ctx->pc = 0x1FEC50u;
            goto label_1fec50;
        }
    }
    ctx->pc = 0x1FEC2Cu;
label_1fec2c:
    // 0x1fec2c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1fec2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1fec30: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1fec30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1fec34: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FEC34u;
    {
        const bool branch_taken_0x1fec34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fec34) {
            ctx->pc = 0x1FEC48u;
            goto label_1fec48;
        }
    }
    ctx->pc = 0x1FEC3Cu;
    // 0x1fec3c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1fec3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1fec40: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1FEC40u;
    {
        const bool branch_taken_0x1fec40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FEC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEC40u;
        // 0x1fec44: 0xaf839090  sw          $v1, -0x6F70($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938768), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fec40) {
            ctx->pc = 0x1FEC50u;
            goto label_1fec50;
        }
    }
    ctx->pc = 0x1FEC48u;
label_1fec48:
    // 0x1fec48: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x1fec48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1fec4c: 0xaf839090  sw          $v1, -0x6F70($gp)
    ctx->pc = 0x1fec4cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938768), GPR_U32(ctx, 3));
label_1fec50:
    // 0x1fec50: 0x3c03002b  lui         $v1, 0x2B
    ctx->pc = 0x1fec50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)43 << 16));
    // 0x1fec54: 0x246303aa  addiu       $v1, $v1, 0x3AA
    ctx->pc = 0x1fec54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 938));
    // 0x1fec58: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1fec58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1fec5c: 0xc0657f0  jal         func_195FC0
    ctx->pc = 0x1FEC5Cu;
    SET_GPR_U32(ctx, 31, 0x1FEC64u);
    ctx->pc = 0x1FEC60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FEC5Cu;
    // 0x1fec60: 0x90440000  lbu         $a0, 0x0($v0) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x195FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x195FC0u, 0x1FEC5Cu, 0x1FEC64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FEC64u;
label_1fec64:
    // 0x1fec64: 0x9043003b  lbu         $v1, 0x3B($v0)
    ctx->pc = 0x1fec64u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 59)));
    // 0x1fec68: 0x28610063  slti        $at, $v1, 0x63
    ctx->pc = 0x1fec68u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)99) ? 1 : 0);
    // 0x1fec6c: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FEC6Cu;
    {
        const bool branch_taken_0x1fec6c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fec6c) {
            ctx->pc = 0x1FEC7Cu;
            goto label_1fec7c;
        }
    }
    ctx->pc = 0x1FEC74u;
    // 0x1fec74: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1FEC74u;
    {
        const bool branch_taken_0x1fec74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FEC78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEC74u;
        // 0x1fec78: 0xaf839098  sw          $v1, -0x6F68($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938776), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fec74) {
            ctx->pc = 0x1FEC84u;
            goto label_1fec84;
        }
    }
    ctx->pc = 0x1FEC7Cu;
label_1fec7c:
    // 0x1fec7c: 0x24030063  addiu       $v1, $zero, 0x63
    ctx->pc = 0x1fec7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
    // 0x1fec80: 0xaf839098  sw          $v1, -0x6F68($gp)
    ctx->pc = 0x1fec80u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938776), GPR_U32(ctx, 3));
label_1fec84:
    // 0x1fec84: 0xdc440030  ld          $a0, 0x30($v0)
    ctx->pc = 0x1fec84u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1fec88: 0x24030200  addiu       $v1, $zero, 0x200
    ctx->pc = 0x1fec88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x1fec8c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1fec8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1fec90: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1fec90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1fec94: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FEC94u;
    {
        const bool branch_taken_0x1fec94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fec94) {
            ctx->pc = 0x1FECA8u;
            goto label_1feca8;
        }
    }
    ctx->pc = 0x1FEC9Cu;
    // 0x1fec9c: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x1fec9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1feca0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1FECA0u;
    {
        const bool branch_taken_0x1feca0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FECA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FECA0u;
        // 0x1feca4: 0xaf839094  sw          $v1, -0x6F6C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938772), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1feca0) {
            ctx->pc = 0x1FECCCu;
            goto label_1feccc;
        }
    }
    ctx->pc = 0x1FECA8u;
label_1feca8:
    // 0x1feca8: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x1feca8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1fecac: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1fecacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1fecb0: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1fecb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1fecb4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FECB4u;
    {
        const bool branch_taken_0x1fecb4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FECB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FECB4u;
        // 0x1fecb8: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fecb4) {
            ctx->pc = 0x1FECC8u;
            goto label_1fecc8;
        }
    }
    ctx->pc = 0x1FECBCu;
    // 0x1fecbc: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x1fecbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1fecc0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1FECC0u;
    {
        const bool branch_taken_0x1fecc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FECC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FECC0u;
        // 0x1fecc4: 0xaf839094  sw          $v1, -0x6F6C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938772), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fecc0) {
            ctx->pc = 0x1FECCCu;
            goto label_1feccc;
        }
    }
    ctx->pc = 0x1FECC8u;
label_1fecc8:
    // 0x1fecc8: 0xaf839094  sw          $v1, -0x6F6C($gp)
    ctx->pc = 0x1fecc8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938772), GPR_U32(ctx, 3));
label_1feccc:
    // 0x1feccc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1fecccu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fecd0: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1fecd0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fecd4: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x1fecd4u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fecd8: 0x3c050054  lui         $a1, 0x54
    ctx->pc = 0x1fecd8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)84 << 16));
    // 0x1fecdc: 0x3c040054  lui         $a0, 0x54
    ctx->pc = 0x1fecdcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)84 << 16));
    // 0x1fece0: 0x3c08002a  lui         $t0, 0x2A
    ctx->pc = 0x1fece0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)42 << 16));
    // 0x1fece4: 0x24a54b00  addiu       $a1, $a1, 0x4B00
    ctx->pc = 0x1fece4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19200));
    // 0x1fece8: 0x24844ae0  addiu       $a0, $a0, 0x4AE0
    ctx->pc = 0x1fece8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19168));
    // 0x1fecec: 0x2508c990  addiu       $t0, $t0, -0x3670
    ctx->pc = 0x1fececu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294953360));
    // 0x1fecf0: 0x24060028  addiu       $a2, $zero, 0x28
    ctx->pc = 0x1fecf0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_1fecf4:
    // 0x1fecf4: 0x8f87909c  lw          $a3, -0x6F64($gp)
    ctx->pc = 0x1fecf4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938780)));
    // 0x1fecf8: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1fecf8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1fecfc: 0x34213a10  ori         $at, $at, 0x3A10
    ctx->pc = 0x1fecfcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)14864);
    // 0x1fed00: 0x71840  sll         $v1, $a3, 1
    ctx->pc = 0x1fed00u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x1fed04: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x1fed04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x1fed08: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1fed08u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1fed0c: 0x1031821  addu        $v1, $t0, $v1
    ctx->pc = 0x1fed0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x1fed10: 0x24630000  addiu       $v1, $v1, 0x0
    ctx->pc = 0x1fed10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 0));
    // 0x1fed14: 0x6b1821  addu        $v1, $v1, $t3
    ctx->pc = 0x1fed14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
    // 0x1fed18: 0x615021  addu        $t2, $v1, $at
    ctx->pc = 0x1fed18u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
    // 0x1fed1c: 0x91470000  lbu         $a3, 0x0($t2)
    ctx->pc = 0x1fed1cu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x1fed20: 0x10e6000c  beq         $a3, $a2, . + 4 + (0xC << 2)
    ctx->pc = 0x1FED20u;
    {
        const bool branch_taken_0x1fed20 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 6));
        ctx->pc = 0x1FED24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FED20u;
        // 0x1fed24: 0xac1821  addu        $v1, $a1, $t4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fed20) {
            ctx->pc = 0x1FED54u;
            goto label_1fed54;
        }
    }
    ctx->pc = 0x1FED28u;
    // 0x1fed28: 0xac670000  sw          $a3, 0x0($v1)
    ctx->pc = 0x1fed28u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 7));
    // 0x1fed2c: 0x91470001  lbu         $a3, 0x1($t2)
    ctx->pc = 0x1fed2cu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 1)));
    // 0x1fed30: 0x28e10063  slti        $at, $a3, 0x63
    ctx->pc = 0x1fed30u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)99) ? 1 : 0);
    // 0x1fed34: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FED34u;
    {
        const bool branch_taken_0x1fed34 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fed34) {
            ctx->pc = 0x1FED44u;
            goto label_1fed44;
        }
    }
    ctx->pc = 0x1FED3Cu;
    // 0x1fed3c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1FED3Cu;
    {
        const bool branch_taken_0x1fed3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FED40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FED3Cu;
        // 0x1fed40: 0x8c1821  addu        $v1, $a0, $t4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fed3c) {
            ctx->pc = 0x1FED4Cu;
            goto label_1fed4c;
        }
    }
    ctx->pc = 0x1FED44u;
label_1fed44:
    // 0x1fed44: 0x24070063  addiu       $a3, $zero, 0x63
    ctx->pc = 0x1fed44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
    // 0x1fed48: 0x8c1821  addu        $v1, $a0, $t4
    ctx->pc = 0x1fed48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 12)));
label_1fed4c:
    // 0x1fed4c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1FED4Cu;
    {
        const bool branch_taken_0x1fed4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FED50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FED4Cu;
        // 0x1fed50: 0xac670000  sw          $a3, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fed4c) {
            ctx->pc = 0x1FED68u;
            goto label_1fed68;
        }
    }
    ctx->pc = 0x1FED54u;
label_1fed54:
    // 0x1fed54: 0x0  nop
    ctx->pc = 0x1fed54u;
    // NOP
    // 0x1fed58: 0xac1821  addu        $v1, $a1, $t4
    ctx->pc = 0x1fed58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
    // 0x1fed5c: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x1fed5cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
    // 0x1fed60: 0x8c1821  addu        $v1, $a0, $t4
    ctx->pc = 0x1fed60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 12)));
    // 0x1fed64: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x1fed64u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_1fed68:
    // 0x1fed68: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1fed68u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1fed6c: 0x29230005  slti        $v1, $t1, 0x5
    ctx->pc = 0x1fed6cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x1fed70: 0x256b0002  addiu       $t3, $t3, 0x2
    ctx->pc = 0x1fed70u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 2));
    // 0x1fed74: 0x1460ffdf  bnez        $v1, . + 4 + (-0x21 << 2)
    ctx->pc = 0x1FED74u;
    {
        const bool branch_taken_0x1fed74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FED78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FED74u;
        // 0x1fed78: 0x258c0004  addiu       $t4, $t4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fed74) {
            ctx->pc = 0x1FECF4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fecf4;
        }
    }
    ctx->pc = 0x1FED7Cu;
    // 0x1fed7c: 0xaf909088  sw          $s0, -0x6F78($gp)
    ctx->pc = 0x1fed7cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938760), GPR_U32(ctx, 16));
    // 0x1fed80: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1fed80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->pc = 0x1fed84u;
}
