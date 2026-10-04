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

// Function: entry_0023db2c
// Address: 0x23db2c - 0x23e230
void entry_0023db2c_0x23db2c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023db2c_0x23db2c");
#endif

    switch (ctx->pc) {
        case 0x23db4cu: goto label_23db4c;
        case 0x23db50u: goto label_23db50;
        case 0x23db5cu: goto label_23db5c;
        case 0x23db60u: goto label_23db60;
        case 0x23dc18u: goto label_23dc18;
        case 0x23dc68u: goto label_23dc68;
        case 0x23dd94u: goto label_23dd94;
        case 0x23ddacu: goto label_23ddac;
        case 0x23dddcu: goto label_23dddc;
        case 0x23de18u: goto label_23de18;
        case 0x23de84u: goto label_23de84;
        case 0x23e024u: goto label_23e024;
        case 0x23e050u: goto label_23e050;
        case 0x23e160u: goto label_23e160;
        case 0x23e168u: goto label_23e168;
        case 0x23e1a8u: goto label_23e1a8;
        case 0x23e1b0u: goto label_23e1b0;
        case 0x23e1ccu: goto label_23e1cc;
        case 0x23e1f8u: goto label_23e1f8;
        default: break;
    }

    ctx->pc = 0x23db2cu;

    // 0x23db2c: 0x1a000521  blez        $s0, . + 4 + (0x521 << 2)
    ctx->pc = 0x23DB2Cu;
    {
        const bool branch_taken_0x23db2c = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x23DB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DB2Cu;
        // 0x23db30: 0x8fa20018  lw          $v0, 0x18($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23db2c) {
            ctx->pc = 0x23EFB4u;
            return;
        }
    }
    ctx->pc = 0x23DB34u;
    // 0x23db34: 0xa3a001d1  sb          $zero, 0x1D1($sp)
    ctx->pc = 0x23db34u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 465), (uint8_t)GPR_U32(ctx, 0));
    // 0x23db38: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x23db38u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x23db3c: 0xafa00204  sw          $zero, 0x204($sp)
    ctx->pc = 0x23db3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 516), GPR_U32(ctx, 0));
    // 0x23db40: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x23db40u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23db44: 0xafa001f0  sw          $zero, 0x1F0($sp)
    ctx->pc = 0x23db44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 496), GPR_U32(ctx, 0));
    // 0x23db48: 0x2414ffff  addiu       $s4, $zero, -0x1
    ctx->pc = 0x23db48u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_23db4c:
    // 0x23db4c: 0x92440000  lbu         $a0, 0x0($s2)
    ctx->pc = 0x23db4cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
label_23db50:
    // 0x23db50: 0x41600  sll         $v0, $a0, 24
    ctx->pc = 0x23db50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
    // 0x23db54: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x23db54u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x23db58: 0x28e03  sra         $s1, $v0, 24
    ctx->pc = 0x23db58u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 2), 24));
label_23db5c:
    // 0x23db5c: 0x2623ffe0  addiu       $v1, $s1, -0x20
    ctx->pc = 0x23db5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967264));
label_23db60:
    // 0x23db60: 0x2c620059  sltiu       $v0, $v1, 0x59
    ctx->pc = 0x23db60u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)89) ? 1 : 0);
    // 0x23db64: 0x104001b2  beqz        $v0, . + 4 + (0x1B2 << 2)
    ctx->pc = 0x23DB64u;
    {
        const bool branch_taken_0x23db64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DB64u;
        // 0x23db68: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23db64) {
            ctx->pc = 0x23E230u;
            return;
        }
    }
    ctx->pc = 0x23DB6Cu;
    // 0x23db6c: 0x3c03002d  lui         $v1, 0x2D
    ctx->pc = 0x23db6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)45 << 16));
    // 0x23db70: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x23db70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23db74: 0x8c63e570  lw          $v1, -0x1A90($v1)
    ctx->pc = 0x23db74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960496)));
    // 0x23db78: 0x600008  jr          $v1
    ctx->pc = 0x23DB78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23DB80u: goto label_23db80;
            case 0x23DB98u: goto label_23db98;
            case 0x23DBA0u: goto label_23dba0;
            case 0x23DBBCu: goto label_23dbbc;
            case 0x23DBC8u: goto label_23dbc8;
            case 0x23DBD8u: goto label_23dbd8;
            case 0x23DC58u: goto label_23dc58;
            case 0x23DC60u: goto label_23dc60;
            case 0x23DC98u: goto label_23dc98;
            case 0x23DCA0u: goto label_23dca0;
            case 0x23DCA8u: goto label_23dca8;
            case 0x23DCBCu: goto label_23dcbc;
            case 0x23DCD0u: goto label_23dcd0;
            case 0x23DCF0u: goto label_23dcf0;
            case 0x23DCF4u: goto label_23dcf4;
            case 0x23DD48u: goto label_23dd48;
            case 0x23DF28u: goto label_23df28;
            case 0x23DF88u: goto label_23df88;
            case 0x23DF8Cu: goto label_23df8c;
            case 0x23DFD0u: goto label_23dfd0;
            case 0x23DFF8u: goto label_23dff8;
            case 0x23E058u: goto label_23e058;
            case 0x23E05Cu: goto label_23e05c;
            case 0x23E0A0u: goto label_23e0a0;
            case 0x23E0B0u: goto label_23e0b0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23DB78u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x23DB80u;
label_23db80:
    // 0x23db80: 0x83a201d1  lb          $v0, 0x1D1($sp)
    ctx->pc = 0x23db80u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 465)));
    // 0x23db84: 0x5440fff2  bnel        $v0, $zero, . + 4 + (-0xE << 2)
    ctx->pc = 0x23DB84u;
    {
        const bool branch_taken_0x23db84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23db84) {
            ctx->pc = 0x23DB88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23DB84u;
            // 0x23db88: 0x92440000  lbu         $a0, 0x0($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23DB50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23db50;
        }
    }
    ctx->pc = 0x23DB8Cu;
    // 0x23db8c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x23DB8Cu;
    {
        const bool branch_taken_0x23db8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DB8Cu;
        // 0x23db90: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23db8c) {
            ctx->pc = 0x23DBCCu;
            goto label_23dbcc;
        }
    }
    ctx->pc = 0x23DB94u;
    // 0x23db94: 0x0  nop
    ctx->pc = 0x23db94u;
    // NOP
label_23db98:
    // 0x23db98: 0x1000ffec  b           . + 4 + (-0x14 << 2)
    ctx->pc = 0x23DB98u;
    {
        const bool branch_taken_0x23db98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DB98u;
        // 0x23db9c: 0x36f70001  ori         $s7, $s7, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) | (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23db98) {
            ctx->pc = 0x23DB4Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23db4c;
        }
    }
    ctx->pc = 0x23DBA0u;
label_23dba0:
    // 0x23dba0: 0x2c0102d  daddu       $v0, $s6, $zero
    ctx->pc = 0x23dba0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23dba4: 0x26d60008  addiu       $s6, $s6, 0x8
    ctx->pc = 0x23dba4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
    // 0x23dba8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x23dba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23dbac: 0x441ffe7  bgez        $v0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x23DBACu;
    {
        const bool branch_taken_0x23dbac = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x23DBB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DBACu;
        // 0x23dbb0: 0xafa201f0  sw          $v0, 0x1F0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 496), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23dbac) {
            ctx->pc = 0x23DB4Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23db4c;
        }
    }
    ctx->pc = 0x23DBB4u;
    // 0x23dbb4: 0x21023  negu        $v0, $v0
    ctx->pc = 0x23dbb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x23dbb8: 0xafa201f0  sw          $v0, 0x1F0($sp)
    ctx->pc = 0x23dbb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 496), GPR_U32(ctx, 2));
label_23dbbc:
    // 0x23dbbc: 0x1000ffe3  b           . + 4 + (-0x1D << 2)
    ctx->pc = 0x23DBBCu;
    {
        const bool branch_taken_0x23dbbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DBC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DBBCu;
        // 0x23dbc0: 0x36f70004  ori         $s7, $s7, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23dbbc) {
            ctx->pc = 0x23DB4Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23db4c;
        }
    }
    ctx->pc = 0x23DBC4u;
    // 0x23dbc4: 0x0  nop
    ctx->pc = 0x23dbc4u;
    // NOP
label_23dbc8:
    // 0x23dbc8: 0x2402002b  addiu       $v0, $zero, 0x2B
    ctx->pc = 0x23dbc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
label_23dbcc:
    // 0x23dbcc: 0x92440000  lbu         $a0, 0x0($s2)
    ctx->pc = 0x23dbccu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x23dbd0: 0x1000ffdf  b           . + 4 + (-0x21 << 2)
    ctx->pc = 0x23DBD0u;
    {
        const bool branch_taken_0x23dbd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DBD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DBD0u;
        // 0x23dbd4: 0xa3a201d1  sb          $v0, 0x1D1($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 465), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23dbd0) {
            ctx->pc = 0x23DB50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23db50;
        }
    }
    ctx->pc = 0x23DBD8u;
label_23dbd8:
    // 0x23dbd8: 0x82510000  lb          $s1, 0x0($s2)
    ctx->pc = 0x23dbd8u;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x23dbdc: 0x2402002a  addiu       $v0, $zero, 0x2A
    ctx->pc = 0x23dbdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x23dbe0: 0x16220009  bne         $s1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x23DBE0u;
    {
        const bool branch_taken_0x23dbe0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x23DBE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DBE0u;
        // 0x23dbe4: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23dbe0) {
            ctx->pc = 0x23DC08u;
            goto label_23dc08;
        }
    }
    ctx->pc = 0x23DBE8u;
    // 0x23dbe8: 0x2c0102d  daddu       $v0, $s6, $zero
    ctx->pc = 0x23dbe8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23dbec: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x23dbecu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23dbf0: 0x200a02d  daddu       $s4, $s0, $zero
    ctx->pc = 0x23dbf0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23dbf4: 0x2a82ffff  slti        $v0, $s4, -0x1
    ctx->pc = 0x23dbf4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)4294967295) ? 1 : 0);
    // 0x23dbf8: 0x1040ffd4  beqz        $v0, . + 4 + (-0x2C << 2)
    ctx->pc = 0x23DBF8u;
    {
        const bool branch_taken_0x23dbf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DBFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DBF8u;
        // 0x23dbfc: 0x26d60008  addiu       $s6, $s6, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23dbf8) {
            ctx->pc = 0x23DB4Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23db4c;
        }
    }
    ctx->pc = 0x23DC00u;
    // 0x23dc00: 0x1000ffd2  b           . + 4 + (-0x2E << 2)
    ctx->pc = 0x23DC00u;
    {
        const bool branch_taken_0x23dc00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DC00u;
        // 0x23dc04: 0x2414ffff  addiu       $s4, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23dc00) {
            ctx->pc = 0x23DB4Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23db4c;
        }
    }
    ctx->pc = 0x23DC08u;
label_23dc08:
    // 0x23dc08: 0x2622ffd0  addiu       $v0, $s1, -0x30
    ctx->pc = 0x23dc08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967248));
    // 0x23dc0c: 0x2c42000a  sltiu       $v0, $v0, 0xA
    ctx->pc = 0x23dc0cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x23dc10: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x23DC10u;
    {
        const bool branch_taken_0x23dc10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DC10u;
        // 0x23dc14: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23dc10) {
            ctx->pc = 0x23DC40u;
            goto label_23dc40;
        }
    }
    ctx->pc = 0x23DC18u;
label_23dc18:
    // 0x23dc18: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x23dc18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x23dc1c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x23dc1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x23dc20: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x23dc20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x23dc24: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x23dc24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x23dc28: 0x82510000  lb          $s1, 0x0($s2)
    ctx->pc = 0x23dc28u;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x23dc2c: 0x2450ffd0  addiu       $s0, $v0, -0x30
    ctx->pc = 0x23dc2cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967248));
    // 0x23dc30: 0x2622ffd0  addiu       $v0, $s1, -0x30
    ctx->pc = 0x23dc30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967248));
    // 0x23dc34: 0x2c42000a  sltiu       $v0, $v0, 0xA
    ctx->pc = 0x23dc34u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x23dc38: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x23DC38u;
    {
        const bool branch_taken_0x23dc38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23DC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DC38u;
        // 0x23dc3c: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23dc38) {
            ctx->pc = 0x23DC18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23dc18;
        }
    }
    ctx->pc = 0x23DC40u;
label_23dc40:
    // 0x23dc40: 0x200a02d  daddu       $s4, $s0, $zero
    ctx->pc = 0x23dc40u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23dc44: 0x2a82ffff  slti        $v0, $s4, -0x1
    ctx->pc = 0x23dc44u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)4294967295) ? 1 : 0);
    // 0x23dc48: 0x5440ffc4  bnel        $v0, $zero, . + 4 + (-0x3C << 2)
    ctx->pc = 0x23DC48u;
    {
        const bool branch_taken_0x23dc48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23dc48) {
            ctx->pc = 0x23DC4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23DC48u;
            // 0x23dc4c: 0x2414ffff  addiu       $s4, $zero, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23DB5Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23db5c;
        }
    }
    ctx->pc = 0x23DC50u;
    // 0x23dc50: 0x1000ffc3  b           . + 4 + (-0x3D << 2)
    ctx->pc = 0x23DC50u;
    {
        const bool branch_taken_0x23dc50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DC50u;
        // 0x23dc54: 0x2623ffe0  addiu       $v1, $s1, -0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23dc50) {
            ctx->pc = 0x23DB60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23db60;
        }
    }
    ctx->pc = 0x23DC58u;
label_23dc58:
    // 0x23dc58: 0x1000ffbc  b           . + 4 + (-0x44 << 2)
    ctx->pc = 0x23DC58u;
    {
        const bool branch_taken_0x23dc58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DC58u;
        // 0x23dc5c: 0x36f70080  ori         $s7, $s7, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) | (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23dc58) {
            ctx->pc = 0x23DB4Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23db4c;
        }
    }
    ctx->pc = 0x23DC60u;
label_23dc60:
    // 0x23dc60: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x23dc60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23dc64: 0x0  nop
    ctx->pc = 0x23dc64u;
    // NOP
label_23dc68:
    // 0x23dc68: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x23dc68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x23dc6c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x23dc6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x23dc70: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x23dc70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x23dc74: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x23dc74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x23dc78: 0x82510000  lb          $s1, 0x0($s2)
    ctx->pc = 0x23dc78u;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x23dc7c: 0x2450ffd0  addiu       $s0, $v0, -0x30
    ctx->pc = 0x23dc7cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967248));
    // 0x23dc80: 0x2622ffd0  addiu       $v0, $s1, -0x30
    ctx->pc = 0x23dc80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967248));
    // 0x23dc84: 0x2c42000a  sltiu       $v0, $v0, 0xA
    ctx->pc = 0x23dc84u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x23dc88: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x23DC88u;
    {
        const bool branch_taken_0x23dc88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23DC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DC88u;
        // 0x23dc8c: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23dc88) {
            ctx->pc = 0x23DC68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23dc68;
        }
    }
    ctx->pc = 0x23DC90u;
    // 0x23dc90: 0x1000ffb2  b           . + 4 + (-0x4E << 2)
    ctx->pc = 0x23DC90u;
    {
        const bool branch_taken_0x23dc90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DC90u;
        // 0x23dc94: 0xafb001f0  sw          $s0, 0x1F0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 496), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23dc90) {
            ctx->pc = 0x23DB5Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23db5c;
        }
    }
    ctx->pc = 0x23DC98u;
label_23dc98:
    // 0x23dc98: 0x1000ffac  b           . + 4 + (-0x54 << 2)
    ctx->pc = 0x23DC98u;
    {
        const bool branch_taken_0x23dc98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DC9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DC98u;
        // 0x23dc9c: 0x36f70008  ori         $s7, $s7, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) | (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23dc98) {
            ctx->pc = 0x23DB4Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23db4c;
        }
    }
    ctx->pc = 0x23DCA0u;
label_23dca0:
    // 0x23dca0: 0x1000ffaa  b           . + 4 + (-0x56 << 2)
    ctx->pc = 0x23DCA0u;
    {
        const bool branch_taken_0x23dca0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DCA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DCA0u;
        // 0x23dca4: 0x36f70040  ori         $s7, $s7, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) | (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23dca0) {
            ctx->pc = 0x23DB4Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23db4c;
        }
    }
    ctx->pc = 0x23DCA8u;
label_23dca8:
    // 0x23dca8: 0x82430000  lb          $v1, 0x0($s2)
    ctx->pc = 0x23dca8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x23dcac: 0x2402006c  addiu       $v0, $zero, 0x6C
    ctx->pc = 0x23dcacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
    // 0x23dcb0: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x23DCB0u;
    {
        const bool branch_taken_0x23dcb0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x23DCB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DCB0u;
        // 0x23dcb4: 0x92440000  lbu         $a0, 0x0($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23dcb0) {
            ctx->pc = 0x23DCC8u;
            goto label_23dcc8;
        }
    }
    ctx->pc = 0x23DCB8u;
    // 0x23dcb8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x23dcb8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_23dcbc:
    // 0x23dcbc: 0x1000ffa3  b           . + 4 + (-0x5D << 2)
    ctx->pc = 0x23DCBCu;
    {
        const bool branch_taken_0x23dcbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DCC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DCBCu;
        // 0x23dcc0: 0x36f70020  ori         $s7, $s7, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) | (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23dcbc) {
            ctx->pc = 0x23DB4Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23db4c;
        }
    }
    ctx->pc = 0x23DCC4u;
    // 0x23dcc4: 0x0  nop
    ctx->pc = 0x23dcc4u;
    // NOP
label_23dcc8:
    // 0x23dcc8: 0x1000ffa1  b           . + 4 + (-0x5F << 2)
    ctx->pc = 0x23DCC8u;
    {
        const bool branch_taken_0x23dcc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DCCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DCC8u;
        // 0x23dccc: 0x36f70010  ori         $s7, $s7, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) | (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23dcc8) {
            ctx->pc = 0x23DB50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23db50;
        }
    }
    ctx->pc = 0x23DCD0u;
label_23dcd0:
    // 0x23dcd0: 0x2c0102d  daddu       $v0, $s6, $zero
    ctx->pc = 0x23dcd0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23dcd4: 0x26d60008  addiu       $s6, $s6, 0x8
    ctx->pc = 0x23dcd4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
    // 0x23dcd8: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x23dcd8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23dcdc: 0x27b50060  addiu       $s5, $sp, 0x60
    ctx->pc = 0x23dcdcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x23dce0: 0x241e0001  addiu       $fp, $zero, 0x1
    ctx->pc = 0x23dce0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23dce4: 0x10000156  b           . + 4 + (0x156 << 2)
    ctx->pc = 0x23DCE4u;
    {
        const bool branch_taken_0x23dce4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DCE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DCE4u;
        // 0x23dce8: 0xa2a30000  sb          $v1, 0x0($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23dce4) {
            ctx->pc = 0x23E240u;
            return;
        }
    }
    ctx->pc = 0x23DCECu;
    // 0x23dcec: 0x0  nop
    ctx->pc = 0x23dcecu;
    // NOP
label_23dcf0:
    // 0x23dcf0: 0x36f70010  ori         $s7, $s7, 0x10
    ctx->pc = 0x23dcf0u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) | (uint64_t)(uint16_t)16);
label_23dcf4:
    // 0x23dcf4: 0x32e20010  andi        $v0, $s7, 0x10
    ctx->pc = 0x23dcf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)16);
    // 0x23dcf8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x23DCF8u;
    {
        const bool branch_taken_0x23dcf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DCFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DCF8u;
        // 0x23dcfc: 0x2c0102d  daddu       $v0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23dcf8) {
            ctx->pc = 0x23DD10u;
            goto label_23dd10;
        }
    }
    ctx->pc = 0x23DD00u;
    // 0x23dd00: 0x26d60008  addiu       $s6, $s6, 0x8
    ctx->pc = 0x23dd00u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
    // 0x23dd04: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x23DD04u;
    {
        const bool branch_taken_0x23dd04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DD08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DD04u;
        // 0x23dd08: 0xdc500000  ld          $s0, 0x0($v0) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23dd04) {
            ctx->pc = 0x23DD30u;
            goto label_23dd30;
        }
    }
    ctx->pc = 0x23DD0Cu;
    // 0x23dd0c: 0x0  nop
    ctx->pc = 0x23dd0cu;
    // NOP
label_23dd10:
    // 0x23dd10: 0x32e20040  andi        $v0, $s7, 0x40
    ctx->pc = 0x23dd10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)64);
    // 0x23dd14: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x23DD14u;
    {
        const bool branch_taken_0x23dd14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DD18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DD14u;
        // 0x23dd18: 0x2c0102d  daddu       $v0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23dd14) {
            ctx->pc = 0x23DD28u;
            goto label_23dd28;
        }
    }
    ctx->pc = 0x23DD1Cu;
    // 0x23dd1c: 0x26d60008  addiu       $s6, $s6, 0x8
    ctx->pc = 0x23dd1cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
    // 0x23dd20: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x23DD20u;
    {
        const bool branch_taken_0x23dd20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DD24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DD20u;
        // 0x23dd24: 0x84500000  lh          $s0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23dd20) {
            ctx->pc = 0x23DD30u;
            goto label_23dd30;
        }
    }
    ctx->pc = 0x23DD28u;
label_23dd28:
    // 0x23dd28: 0x26d60008  addiu       $s6, $s6, 0x8
    ctx->pc = 0x23dd28u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
    // 0x23dd2c: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x23dd2cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_23dd30:
    // 0x23dd30: 0x60100f7  bgez        $s0, . + 4 + (0xF7 << 2)
    ctx->pc = 0x23DD30u;
    {
        const bool branch_taken_0x23dd30 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x23DD34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DD30u;
        // 0x23dd34: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23dd30) {
            ctx->pc = 0x23E110u;
            goto label_23e110;
        }
    }
    ctx->pc = 0x23DD38u;
    // 0x23dd38: 0x2402002d  addiu       $v0, $zero, 0x2D
    ctx->pc = 0x23dd38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x23dd3c: 0x10802f  dsubu       $s0, $zero, $s0
    ctx->pc = 0x23dd3cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) - GPR_U64(ctx, 16));
    // 0x23dd40: 0x100000f3  b           . + 4 + (0xF3 << 2)
    ctx->pc = 0x23DD40u;
    {
        const bool branch_taken_0x23dd40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DD44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DD40u;
        // 0x23dd44: 0xa3a201d1  sb          $v0, 0x1D1($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 465), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23dd40) {
            ctx->pc = 0x23E110u;
            goto label_23e110;
        }
    }
    ctx->pc = 0x23DD48u;
label_23dd48:
    // 0x23dd48: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x23dd48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x23dd4c: 0x16820004  bne         $s4, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x23DD4Cu;
    {
        const bool branch_taken_0x23dd4c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x23DD50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DD4Cu;
        // 0x23dd50: 0x24020067  addiu       $v0, $zero, 0x67 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 103));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23dd4c) {
            ctx->pc = 0x23DD60u;
            goto label_23dd60;
        }
    }
    ctx->pc = 0x23DD54u;
    // 0x23dd54: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x23DD54u;
    {
        const bool branch_taken_0x23dd54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DD58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DD54u;
        // 0x23dd58: 0x24140006  addiu       $s4, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23dd54) {
            ctx->pc = 0x23DD78u;
            goto label_23dd78;
        }
    }
    ctx->pc = 0x23DD5Cu;
    // 0x23dd5c: 0x0  nop
    ctx->pc = 0x23dd5cu;
    // NOP
label_23dd60:
    // 0x23dd60: 0x12220003  beq         $s1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x23DD60u;
    {
        const bool branch_taken_0x23dd60 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x23DD64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DD60u;
        // 0x23dd64: 0x24020047  addiu       $v0, $zero, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23dd60) {
            ctx->pc = 0x23DD70u;
            goto label_23dd70;
        }
    }
    ctx->pc = 0x23DD68u;
    // 0x23dd68: 0x16220004  bne         $s1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x23DD68u;
    {
        const bool branch_taken_0x23dd68 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x23DD6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DD68u;
        // 0x23dd6c: 0x32e20008  andi        $v0, $s7, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23dd68) {
            ctx->pc = 0x23DD7Cu;
            goto label_23dd7c;
        }
    }
    ctx->pc = 0x23DD70u;
label_23dd70:
    // 0x23dd70: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x23dd70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23dd74: 0x54a00a  movz        $s4, $v0, $s4
    ctx->pc = 0x23dd74u;
    if (GPR_U64(ctx, 20) == 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 2));
label_23dd78:
    // 0x23dd78: 0x32e20008  andi        $v0, $s7, 0x8
    ctx->pc = 0x23dd78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)8);
label_23dd7c:
    // 0x23dd7c: 0x2c0102d  daddu       $v0, $s6, $zero
    ctx->pc = 0x23dd7cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23dd80: 0xdc420000  ld          $v0, 0x0($v0)
    ctx->pc = 0x23dd80u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23dd84: 0xffa201f8  sd          $v0, 0x1F8($sp)
    ctx->pc = 0x23dd84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 504), GPR_U64(ctx, 2));
    // 0x23dd88: 0xdfa401f8  ld          $a0, 0x1F8($sp)
    ctx->pc = 0x23dd88u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 504)));
    // 0x23dd8c: 0xc06d338  jal         func_1B4CE0
    ctx->pc = 0x23DD8Cu;
    SET_GPR_U32(ctx, 31, 0x23DD94u);
    ctx->pc = 0x23DD90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23DD8Cu;
    // 0x23dd90: 0x26d60008  addiu       $s6, $s6, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4CE0u, 0x23DD8Cu, 0x23DD94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23DD94u;
label_23dd94:
    // 0x23dd94: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x23DD94u;
    {
        const bool branch_taken_0x23dd94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23dd94) {
            ctx->pc = 0x23DDD0u;
            goto label_23ddd0;
        }
    }
    ctx->pc = 0x23DD9Cu;
    // 0x23dd9c: 0xdfa401f8  ld          $a0, 0x1F8($sp)
    ctx->pc = 0x23dd9cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 504)));
    // 0x23dda0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x23dda0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23dda4: 0xc06def6  jal         func_1B7BD8
    ctx->pc = 0x23DDA4u;
    SET_GPR_U32(ctx, 31, 0x23DDACu);
    ctx->pc = 0x1B7BD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7BD8u, 0x23DDA4u, 0x23DDACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23DDACu;
label_23ddac:
    // 0x23ddac: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x23DDACu;
    {
        const bool branch_taken_0x23ddac = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x23DDB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DDACu;
        // 0x23ddb0: 0x3c02002d  lui         $v0, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ddac) {
            ctx->pc = 0x23DDC0u;
            goto label_23ddc0;
        }
    }
    ctx->pc = 0x23DDB4u;
    // 0x23ddb4: 0x2402002d  addiu       $v0, $zero, 0x2D
    ctx->pc = 0x23ddb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x23ddb8: 0xa3a201d1  sb          $v0, 0x1D1($sp)
    ctx->pc = 0x23ddb8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 465), (uint8_t)GPR_U32(ctx, 2));
    // 0x23ddbc: 0x3c02002d  lui         $v0, 0x2D
    ctx->pc = 0x23ddbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
label_23ddc0:
    // 0x23ddc0: 0x241e0003  addiu       $fp, $zero, 0x3
    ctx->pc = 0x23ddc0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x23ddc4: 0x1000011f  b           . + 4 + (0x11F << 2)
    ctx->pc = 0x23DDC4u;
    {
        const bool branch_taken_0x23ddc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DDC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DDC4u;
        // 0x23ddc8: 0x2455e4f0  addiu       $s5, $v0, -0x1B10 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960368));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ddc4) {
            ctx->pc = 0x23E244u;
            return;
        }
    }
    ctx->pc = 0x23DDCCu;
    // 0x23ddcc: 0x0  nop
    ctx->pc = 0x23ddccu;
    // NOP
label_23ddd0:
    // 0x23ddd0: 0xdfa401f8  ld          $a0, 0x1F8($sp)
    ctx->pc = 0x23ddd0u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 504)));
    // 0x23ddd4: 0xc06d34a  jal         func_1B4D28
    ctx->pc = 0x23DDD4u;
    SET_GPR_U32(ctx, 31, 0x23DDDCu);
    ctx->pc = 0x1B4D28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4D28u, 0x23DDD4u, 0x23DDDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23DDDCu;
label_23dddc:
    // 0x23dddc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x23DDDCu;
    {
        const bool branch_taken_0x23dddc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DDE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DDDCu;
        // 0x23dde0: 0x3c02002d  lui         $v0, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23dddc) {
            ctx->pc = 0x23DDF0u;
            goto label_23ddf0;
        }
    }
    ctx->pc = 0x23DDE4u;
    // 0x23dde4: 0x241e0003  addiu       $fp, $zero, 0x3
    ctx->pc = 0x23dde4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x23dde8: 0x10000116  b           . + 4 + (0x116 << 2)
    ctx->pc = 0x23DDE8u;
    {
        const bool branch_taken_0x23dde8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DDECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DDE8u;
        // 0x23ddec: 0x2455e4f8  addiu       $s5, $v0, -0x1B08 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960376));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23dde8) {
            ctx->pc = 0x23E244u;
            return;
        }
    }
    ctx->pc = 0x23DDF0u;
label_23ddf0:
    // 0x23ddf0: 0x36f70100  ori         $s7, $s7, 0x100
    ctx->pc = 0x23ddf0u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) | (uint64_t)(uint16_t)256);
    // 0x23ddf4: 0x8fa401e4  lw          $a0, 0x1E4($sp)
    ctx->pc = 0x23ddf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 484)));
    // 0x23ddf8: 0xdfa501f8  ld          $a1, 0x1F8($sp)
    ctx->pc = 0x23ddf8u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 504)));
    // 0x23ddfc: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x23ddfcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23de00: 0x2e0382d  daddu       $a3, $s7, $zero
    ctx->pc = 0x23de00u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23de04: 0x27a801d0  addiu       $t0, $sp, 0x1D0
    ctx->pc = 0x23de04u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
    // 0x23de08: 0x27a901dc  addiu       $t1, $sp, 0x1DC
    ctx->pc = 0x23de08u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 476));
    // 0x23de0c: 0x220502d  daddu       $t2, $s1, $zero
    ctx->pc = 0x23de0cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23de10: 0xc08fc06  jal         func_23F018
    ctx->pc = 0x23DE10u;
    SET_GPR_U32(ctx, 31, 0x23DE18u);
    ctx->pc = 0x23DE14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23DE10u;
    // 0x23de14: 0x27ab01e0  addiu       $t3, $sp, 0x1E0 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23F018u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23F018u, 0x23DE10u, 0x23DE18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23DE18u;
label_23de18:
    // 0x23de18: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x23de18u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23de1c: 0x24020067  addiu       $v0, $zero, 0x67
    ctx->pc = 0x23de1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 103));
    // 0x23de20: 0x12220003  beq         $s1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x23DE20u;
    {
        const bool branch_taken_0x23de20 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x23DE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DE20u;
        // 0x23de24: 0x24020047  addiu       $v0, $zero, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23de20) {
            ctx->pc = 0x23DE30u;
            goto label_23de30;
        }
    }
    ctx->pc = 0x23DE28u;
    // 0x23de28: 0x1622000d  bne         $s1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x23DE28u;
    {
        const bool branch_taken_0x23de28 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x23DE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DE28u;
        // 0x23de2c: 0x8fa701dc  lw          $a3, 0x1DC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 476)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23de28) {
            ctx->pc = 0x23DE60u;
            goto label_23de60;
        }
    }
    ctx->pc = 0x23DE30u;
label_23de30:
    // 0x23de30: 0x8fa701dc  lw          $a3, 0x1DC($sp)
    ctx->pc = 0x23de30u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 476)));
    // 0x23de34: 0x28e2fffd  slti        $v0, $a3, -0x3
    ctx->pc = 0x23de34u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)4294967293) ? 1 : 0);
    // 0x23de38: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x23DE38u;
    {
        const bool branch_taken_0x23de38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23DE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DE38u;
        // 0x23de3c: 0x24020065  addiu       $v0, $zero, 0x65 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23de38) {
            ctx->pc = 0x23DE50u;
            goto label_23de50;
        }
    }
    ctx->pc = 0x23DE40u;
    // 0x23de40: 0x287102a  slt         $v0, $s4, $a3
    ctx->pc = 0x23de40u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x23de44: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x23DE44u;
    {
        const bool branch_taken_0x23de44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23de44) {
            ctx->pc = 0x23DE48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23DE44u;
            // 0x23de48: 0x24110067  addiu       $s1, $zero, 0x67 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 103));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23DE60u;
            goto label_23de60;
        }
    }
    ctx->pc = 0x23DE4Cu;
    // 0x23de4c: 0x24020065  addiu       $v0, $zero, 0x65
    ctx->pc = 0x23de4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
label_23de50:
    // 0x23de50: 0x3a240067  xori        $a0, $s1, 0x67
    ctx->pc = 0x23de50u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)103);
    // 0x23de54: 0x24030045  addiu       $v1, $zero, 0x45
    ctx->pc = 0x23de54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
    // 0x23de58: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x23de58u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23de5c: 0x64880b  movn        $s1, $v1, $a0
    ctx->pc = 0x23de5cu;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 3));
label_23de60:
    // 0x23de60: 0x2a220066  slti        $v0, $s1, 0x66
    ctx->pc = 0x23de60u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)102) ? 1 : 0);
    // 0x23de64: 0x50400012  beql        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x23DE64u;
    {
        const bool branch_taken_0x23de64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23de64) {
            ctx->pc = 0x23DE68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23DE64u;
            // 0x23de68: 0x24020066  addiu       $v0, $zero, 0x66 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23DEB0u;
            goto label_23deb0;
        }
    }
    ctx->pc = 0x23DE6Cu;
    // 0x23de6c: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x23de6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x23de70: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x23de70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23de74: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x23de74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23de78: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x23de78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23de7c: 0xc08fc76  jal         func_23F1D8
    ctx->pc = 0x23DE7Cu;
    SET_GPR_U32(ctx, 31, 0x23DE84u);
    ctx->pc = 0x23DE80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23DE7Cu;
    // 0x23de80: 0xafa701dc  sw          $a3, 0x1DC($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 476), GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23F1D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23F1D8u, 0x23DE7Cu, 0x23DE84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23DE84u;
label_23de84:
    // 0x23de84: 0xafa20200  sw          $v0, 0x200($sp)
    ctx->pc = 0x23de84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 512), GPR_U32(ctx, 2));
    // 0x23de88: 0x8fa201e0  lw          $v0, 0x1E0($sp)
    ctx->pc = 0x23de88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x23de8c: 0x8fa60200  lw          $a2, 0x200($sp)
    ctx->pc = 0x23de8cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x23de90: 0x28430002  slti        $v1, $v0, 0x2
    ctx->pc = 0x23de90u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x23de94: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x23DE94u;
    {
        const bool branch_taken_0x23de94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DE98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DE94u;
        // 0x23de98: 0xc2f021  addu        $fp, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23de94) {
            ctx->pc = 0x23DEA8u;
            goto label_23dea8;
        }
    }
    ctx->pc = 0x23DE9Cu;
    // 0x23de9c: 0x32e20001  andi        $v0, $s7, 0x1
    ctx->pc = 0x23de9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)1);
    // 0x23dea0: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x23DEA0u;
    {
        const bool branch_taken_0x23dea0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DEA0u;
        // 0x23dea4: 0x83a201d0  lb          $v0, 0x1D0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 464)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23dea0) {
            ctx->pc = 0x23DF14u;
            goto label_23df14;
        }
    }
    ctx->pc = 0x23DEA8u;
label_23dea8:
    // 0x23dea8: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x23DEA8u;
    {
        const bool branch_taken_0x23dea8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DEACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DEA8u;
        // 0x23deac: 0x27de0001  addiu       $fp, $fp, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23dea8) {
            ctx->pc = 0x23DF10u;
            goto label_23df10;
        }
    }
    ctx->pc = 0x23DEB0u;
label_23deb0:
    // 0x23deb0: 0x1622000b  bne         $s1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x23DEB0u;
    {
        const bool branch_taken_0x23deb0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x23DEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DEB0u;
        // 0x23deb4: 0x8fa501e0  lw          $a1, 0x1E0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23deb0) {
            ctx->pc = 0x23DEE0u;
            goto label_23dee0;
        }
    }
    ctx->pc = 0x23DEB8u;
    // 0x23deb8: 0x18e00015  blez        $a3, . + 4 + (0x15 << 2)
    ctx->pc = 0x23DEB8u;
    {
        const bool branch_taken_0x23deb8 = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x23DEBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DEB8u;
        // 0x23debc: 0x269e0002  addiu       $fp, $s4, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 20), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23deb8) {
            ctx->pc = 0x23DF10u;
            goto label_23df10;
        }
    }
    ctx->pc = 0x23DEC0u;
    // 0x23dec0: 0x16800004  bnez        $s4, . + 4 + (0x4 << 2)
    ctx->pc = 0x23DEC0u;
    {
        const bool branch_taken_0x23dec0 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x23DEC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DEC0u;
        // 0x23dec4: 0xe0f02d  daddu       $fp, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23dec0) {
            ctx->pc = 0x23DED4u;
            goto label_23ded4;
        }
    }
    ctx->pc = 0x23DEC8u;
    // 0x23dec8: 0x32e20001  andi        $v0, $s7, 0x1
    ctx->pc = 0x23dec8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)1);
    // 0x23decc: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x23DECCu;
    {
        const bool branch_taken_0x23decc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DECCu;
        // 0x23ded0: 0x83a201d0  lb          $v0, 0x1D0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 464)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23decc) {
            ctx->pc = 0x23DF14u;
            goto label_23df14;
        }
    }
    ctx->pc = 0x23DED4u;
label_23ded4:
    // 0x23ded4: 0xf41021  addu        $v0, $a3, $s4
    ctx->pc = 0x23ded4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 20)));
    // 0x23ded8: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x23DED8u;
    {
        const bool branch_taken_0x23ded8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DED8u;
        // 0x23dedc: 0x245e0001  addiu       $fp, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ded8) {
            ctx->pc = 0x23DF10u;
            goto label_23df10;
        }
    }
    ctx->pc = 0x23DEE0u;
label_23dee0:
    // 0x23dee0: 0xe5102a  slt         $v0, $a3, $a1
    ctx->pc = 0x23dee0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x23dee4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x23DEE4u;
    {
        const bool branch_taken_0x23dee4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23DEE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DEE4u;
        // 0x23dee8: 0x32e20001  andi        $v0, $s7, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23dee4) {
            ctx->pc = 0x23DF00u;
            goto label_23df00;
        }
    }
    ctx->pc = 0x23DEECu;
    // 0x23deec: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x23DEECu;
    {
        const bool branch_taken_0x23deec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DEECu;
        // 0x23def0: 0xe0f02d  daddu       $fp, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23deec) {
            ctx->pc = 0x23DF10u;
            goto label_23df10;
        }
    }
    ctx->pc = 0x23DEF4u;
    // 0x23def4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x23DEF4u;
    {
        const bool branch_taken_0x23def4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DEF4u;
        // 0x23def8: 0x24fe0001  addiu       $fp, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23def4) {
            ctx->pc = 0x23DF10u;
            goto label_23df10;
        }
    }
    ctx->pc = 0x23DEFCu;
    // 0x23defc: 0x0  nop
    ctx->pc = 0x23defcu;
    // NOP
label_23df00:
    // 0x23df00: 0x5ce00003  bgtzl       $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x23DF00u;
    {
        const bool branch_taken_0x23df00 = (GPR_S32(ctx, 7) > 0);
        if (branch_taken_0x23df00) {
            ctx->pc = 0x23DF04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23DF00u;
            // 0x23df04: 0x24be0001  addiu       $fp, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23DF10u;
            goto label_23df10;
        }
    }
    ctx->pc = 0x23DF08u;
    // 0x23df08: 0xa71023  subu        $v0, $a1, $a3
    ctx->pc = 0x23df08u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x23df0c: 0x245e0002  addiu       $fp, $v0, 0x2
    ctx->pc = 0x23df0cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
label_23df10:
    // 0x23df10: 0x83a201d0  lb          $v0, 0x1D0($sp)
    ctx->pc = 0x23df10u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 464)));
label_23df14:
    // 0x23df14: 0x104000cb  beqz        $v0, . + 4 + (0xCB << 2)
    ctx->pc = 0x23DF14u;
    {
        const bool branch_taken_0x23df14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DF14u;
        // 0x23df18: 0x2402002d  addiu       $v0, $zero, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23df14) {
            ctx->pc = 0x23E244u;
            return;
        }
    }
    ctx->pc = 0x23DF1Cu;
    // 0x23df1c: 0x100000c9  b           . + 4 + (0xC9 << 2)
    ctx->pc = 0x23DF1Cu;
    {
        const bool branch_taken_0x23df1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DF20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DF1Cu;
        // 0x23df20: 0xa3a201d1  sb          $v0, 0x1D1($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 465), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23df1c) {
            ctx->pc = 0x23E244u;
            return;
        }
    }
    ctx->pc = 0x23DF24u;
    // 0x23df24: 0x0  nop
    ctx->pc = 0x23df24u;
    // NOP
label_23df28:
    // 0x23df28: 0x32e20010  andi        $v0, $s7, 0x10
    ctx->pc = 0x23df28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)16);
    // 0x23df2c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x23DF2Cu;
    {
        const bool branch_taken_0x23df2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DF2Cu;
        // 0x23df30: 0x32e20040  andi        $v0, $s7, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23df2c) {
            ctx->pc = 0x23DF50u;
            goto label_23df50;
        }
    }
    ctx->pc = 0x23DF34u;
    // 0x23df34: 0x2c0182d  daddu       $v1, $s6, $zero
    ctx->pc = 0x23df34u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23df38: 0x26d60008  addiu       $s6, $s6, 0x8
    ctx->pc = 0x23df38u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
    // 0x23df3c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x23df3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x23df40: 0x8fa301ec  lw          $v1, 0x1EC($sp)
    ctx->pc = 0x23df40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
    // 0x23df44: 0x1000fed0  b           . + 4 + (-0x130 << 2)
    ctx->pc = 0x23DF44u;
    {
        const bool branch_taken_0x23df44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DF44u;
        // 0x23df48: 0xfc430000  sd          $v1, 0x0($v0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23df44) {
            ctx->pc = 0x23DA88u;
            return;
        }
    }
    ctx->pc = 0x23DF4Cu;
    // 0x23df4c: 0x0  nop
    ctx->pc = 0x23df4cu;
    // NOP
label_23df50:
    // 0x23df50: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x23DF50u;
    {
        const bool branch_taken_0x23df50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DF54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DF50u;
        // 0x23df54: 0x2c0182d  daddu       $v1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23df50) {
            ctx->pc = 0x23DF70u;
            goto label_23df70;
        }
    }
    ctx->pc = 0x23DF58u;
    // 0x23df58: 0x26d60008  addiu       $s6, $s6, 0x8
    ctx->pc = 0x23df58u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
    // 0x23df5c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x23df5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x23df60: 0x8fa401ec  lw          $a0, 0x1EC($sp)
    ctx->pc = 0x23df60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
    // 0x23df64: 0x1000fec8  b           . + 4 + (-0x138 << 2)
    ctx->pc = 0x23DF64u;
    {
        const bool branch_taken_0x23df64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DF64u;
        // 0x23df68: 0xa4440000  sh          $a0, 0x0($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23df64) {
            ctx->pc = 0x23DA88u;
            return;
        }
    }
    ctx->pc = 0x23DF6Cu;
    // 0x23df6c: 0x0  nop
    ctx->pc = 0x23df6cu;
    // NOP
label_23df70:
    // 0x23df70: 0x26d60008  addiu       $s6, $s6, 0x8
    ctx->pc = 0x23df70u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
    // 0x23df74: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x23df74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x23df78: 0x8fa501ec  lw          $a1, 0x1EC($sp)
    ctx->pc = 0x23df78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
    // 0x23df7c: 0x1000fec2  b           . + 4 + (-0x13E << 2)
    ctx->pc = 0x23DF7Cu;
    {
        const bool branch_taken_0x23df7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DF7Cu;
        // 0x23df80: 0xac450000  sw          $a1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23df7c) {
            ctx->pc = 0x23DA88u;
            return;
        }
    }
    ctx->pc = 0x23DF84u;
    // 0x23df84: 0x0  nop
    ctx->pc = 0x23df84u;
    // NOP
label_23df88:
    // 0x23df88: 0x36f70010  ori         $s7, $s7, 0x10
    ctx->pc = 0x23df88u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) | (uint64_t)(uint16_t)16);
label_23df8c:
    // 0x23df8c: 0x32e20010  andi        $v0, $s7, 0x10
    ctx->pc = 0x23df8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)16);
    // 0x23df90: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x23DF90u;
    {
        const bool branch_taken_0x23df90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DF94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DF90u;
        // 0x23df94: 0x2c0102d  daddu       $v0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23df90) {
            ctx->pc = 0x23DFA8u;
            goto label_23dfa8;
        }
    }
    ctx->pc = 0x23DF98u;
    // 0x23df98: 0x26d60008  addiu       $s6, $s6, 0x8
    ctx->pc = 0x23df98u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
    // 0x23df9c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x23DF9Cu;
    {
        const bool branch_taken_0x23df9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DFA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DF9Cu;
        // 0x23dfa0: 0xdc500000  ld          $s0, 0x0($v0) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23df9c) {
            ctx->pc = 0x23DFC8u;
            goto label_23dfc8;
        }
    }
    ctx->pc = 0x23DFA4u;
    // 0x23dfa4: 0x0  nop
    ctx->pc = 0x23dfa4u;
    // NOP
label_23dfa8:
    // 0x23dfa8: 0x32e20040  andi        $v0, $s7, 0x40
    ctx->pc = 0x23dfa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)64);
    // 0x23dfac: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x23DFACu;
    {
        const bool branch_taken_0x23dfac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DFB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DFACu;
        // 0x23dfb0: 0x2c0102d  daddu       $v0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23dfac) {
            ctx->pc = 0x23DFC0u;
            goto label_23dfc0;
        }
    }
    ctx->pc = 0x23DFB4u;
    // 0x23dfb4: 0x26d60008  addiu       $s6, $s6, 0x8
    ctx->pc = 0x23dfb4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
    // 0x23dfb8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x23DFB8u;
    {
        const bool branch_taken_0x23dfb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DFB8u;
        // 0x23dfbc: 0x94500000  lhu         $s0, 0x0($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23dfb8) {
            ctx->pc = 0x23DFC8u;
            goto label_23dfc8;
        }
    }
    ctx->pc = 0x23DFC0u;
label_23dfc0:
    // 0x23dfc0: 0x26d60008  addiu       $s6, $s6, 0x8
    ctx->pc = 0x23dfc0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
    // 0x23dfc4: 0x9c500000  lwu         $s0, 0x0($v0)
    ctx->pc = 0x23dfc4u;
    SET_GPR_ZE32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_23dfc8:
    // 0x23dfc8: 0x10000050  b           . + 4 + (0x50 << 2)
    ctx->pc = 0x23DFC8u;
    {
        const bool branch_taken_0x23dfc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DFCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DFC8u;
        // 0x23dfcc: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23dfc8) {
            ctx->pc = 0x23E10Cu;
            goto label_23e10c;
        }
    }
    ctx->pc = 0x23DFD0u;
label_23dfd0:
    // 0x23dfd0: 0x3c02002d  lui         $v0, 0x2D
    ctx->pc = 0x23dfd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
    // 0x23dfd4: 0x2c0182d  daddu       $v1, $s6, $zero
    ctx->pc = 0x23dfd4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23dfd8: 0x2442e500  addiu       $v0, $v0, -0x1B00
    ctx->pc = 0x23dfd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960384));
    // 0x23dfdc: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x23dfdcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x23dfe0: 0x26d60008  addiu       $s6, $s6, 0x8
    ctx->pc = 0x23dfe0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
    // 0x23dfe4: 0x36f70002  ori         $s7, $s7, 0x2
    ctx->pc = 0x23dfe4u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) | (uint64_t)(uint16_t)2);
    // 0x23dfe8: 0xafa2020c  sw          $v0, 0x20C($sp)
    ctx->pc = 0x23dfe8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 524), GPR_U32(ctx, 2));
    // 0x23dfec: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x23dfecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x23dff0: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x23DFF0u;
    {
        const bool branch_taken_0x23dff0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DFF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DFF0u;
        // 0x23dff4: 0x24110078  addiu       $s1, $zero, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23dff0) {
            ctx->pc = 0x23E10Cu;
            goto label_23e10c;
        }
    }
    ctx->pc = 0x23DFF8u;
label_23dff8:
    // 0x23dff8: 0x2c0102d  daddu       $v0, $s6, $zero
    ctx->pc = 0x23dff8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23dffc: 0x8c550000  lw          $s5, 0x0($v0)
    ctx->pc = 0x23dffcu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23e000: 0x16a00003  bnez        $s5, . + 4 + (0x3 << 2)
    ctx->pc = 0x23E000u;
    {
        const bool branch_taken_0x23e000 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x23E004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E000u;
        // 0x23e004: 0x26d60008  addiu       $s6, $s6, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e000) {
            ctx->pc = 0x23E010u;
            goto label_23e010;
        }
    }
    ctx->pc = 0x23E008u;
    // 0x23e008: 0x3c02002d  lui         $v0, 0x2D
    ctx->pc = 0x23e008u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
    // 0x23e00c: 0x2455e518  addiu       $s5, $v0, -0x1AE8
    ctx->pc = 0x23e00cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960408));
label_23e010:
    // 0x23e010: 0x680000d  bltz        $s4, . + 4 + (0xD << 2)
    ctx->pc = 0x23E010u;
    {
        const bool branch_taken_0x23e010 = (GPR_S32(ctx, 20) < 0);
        ctx->pc = 0x23E014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E010u;
        // 0x23e014: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e010) {
            ctx->pc = 0x23E048u;
            goto label_23e048;
        }
    }
    ctx->pc = 0x23E018u;
    // 0x23e018: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x23e018u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23e01c: 0xc08e8e0  jal         func_23A380
    ctx->pc = 0x23E01Cu;
    SET_GPR_U32(ctx, 31, 0x23E024u);
    ctx->pc = 0x23E020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E01Cu;
    // 0x23e020: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A380u, 0x23E01Cu, 0x23E024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E024u;
label_23e024:
    // 0x23e024: 0x10400086  beqz        $v0, . + 4 + (0x86 << 2)
    ctx->pc = 0x23E024u;
    {
        const bool branch_taken_0x23e024 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E024u;
        // 0x23e028: 0x280f02d  daddu       $fp, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e024) {
            ctx->pc = 0x23E240u;
            return;
        }
    }
    ctx->pc = 0x23E02Cu;
    // 0x23e02c: 0x55f023  subu        $fp, $v0, $s5
    ctx->pc = 0x23e02cu;
    SET_GPR_S32(ctx, 30, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x23e030: 0x29e102a  slt         $v0, $s4, $fp
    ctx->pc = 0x23e030u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 30)) ? 1 : 0);
    // 0x23e034: 0x50400083  beql        $v0, $zero, . + 4 + (0x83 << 2)
    ctx->pc = 0x23E034u;
    {
        const bool branch_taken_0x23e034 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23e034) {
            ctx->pc = 0x23E038u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23E034u;
            // 0x23e038: 0xa3a001d1  sb          $zero, 0x1D1($sp) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 29), 465), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23E244u;
            return;
        }
    }
    ctx->pc = 0x23E03Cu;
    // 0x23e03c: 0x10000080  b           . + 4 + (0x80 << 2)
    ctx->pc = 0x23E03Cu;
    {
        const bool branch_taken_0x23e03c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E03Cu;
        // 0x23e040: 0x280f02d  daddu       $fp, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e03c) {
            ctx->pc = 0x23E240u;
            return;
        }
    }
    ctx->pc = 0x23E044u;
    // 0x23e044: 0x0  nop
    ctx->pc = 0x23e044u;
    // NOP
label_23e048:
    // 0x23e048: 0xc08f3d6  jal         func_23CF58
    ctx->pc = 0x23E048u;
    SET_GPR_U32(ctx, 31, 0x23E050u);
    ctx->pc = 0x23E04Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E048u;
    // 0x23e04c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23CF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23CF58u, 0x23E048u, 0x23E050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E050u;
label_23e050:
    // 0x23e050: 0x1000007b  b           . + 4 + (0x7B << 2)
    ctx->pc = 0x23E050u;
    {
        const bool branch_taken_0x23e050 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E050u;
        // 0x23e054: 0x40f02d  daddu       $fp, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e050) {
            ctx->pc = 0x23E240u;
            return;
        }
    }
    ctx->pc = 0x23E058u;
label_23e058:
    // 0x23e058: 0x36f70010  ori         $s7, $s7, 0x10
    ctx->pc = 0x23e058u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) | (uint64_t)(uint16_t)16);
label_23e05c:
    // 0x23e05c: 0x32e20010  andi        $v0, $s7, 0x10
    ctx->pc = 0x23e05cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)16);
    // 0x23e060: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x23E060u;
    {
        const bool branch_taken_0x23e060 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E060u;
        // 0x23e064: 0x2c0102d  daddu       $v0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e060) {
            ctx->pc = 0x23E078u;
            goto label_23e078;
        }
    }
    ctx->pc = 0x23E068u;
    // 0x23e068: 0x26d60008  addiu       $s6, $s6, 0x8
    ctx->pc = 0x23e068u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
    // 0x23e06c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x23E06Cu;
    {
        const bool branch_taken_0x23e06c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E06Cu;
        // 0x23e070: 0xdc500000  ld          $s0, 0x0($v0) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e06c) {
            ctx->pc = 0x23E098u;
            goto label_23e098;
        }
    }
    ctx->pc = 0x23E074u;
    // 0x23e074: 0x0  nop
    ctx->pc = 0x23e074u;
    // NOP
label_23e078:
    // 0x23e078: 0x32e20040  andi        $v0, $s7, 0x40
    ctx->pc = 0x23e078u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)64);
    // 0x23e07c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x23E07Cu;
    {
        const bool branch_taken_0x23e07c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E07Cu;
        // 0x23e080: 0x2c0102d  daddu       $v0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e07c) {
            ctx->pc = 0x23E090u;
            goto label_23e090;
        }
    }
    ctx->pc = 0x23E084u;
    // 0x23e084: 0x26d60008  addiu       $s6, $s6, 0x8
    ctx->pc = 0x23e084u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
    // 0x23e088: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x23E088u;
    {
        const bool branch_taken_0x23e088 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E08Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E088u;
        // 0x23e08c: 0x94500000  lhu         $s0, 0x0($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e088) {
            ctx->pc = 0x23E098u;
            goto label_23e098;
        }
    }
    ctx->pc = 0x23E090u;
label_23e090:
    // 0x23e090: 0x26d60008  addiu       $s6, $s6, 0x8
    ctx->pc = 0x23e090u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
    // 0x23e094: 0x9c500000  lwu         $s0, 0x0($v0)
    ctx->pc = 0x23e094u;
    SET_GPR_ZE32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_23e098:
    // 0x23e098: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x23E098u;
    {
        const bool branch_taken_0x23e098 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E09Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E098u;
        // 0x23e09c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e098) {
            ctx->pc = 0x23E10Cu;
            goto label_23e10c;
        }
    }
    ctx->pc = 0x23E0A0u;
label_23e0a0:
    // 0x23e0a0: 0x3c02002d  lui         $v0, 0x2D
    ctx->pc = 0x23e0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
    // 0x23e0a4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x23E0A4u;
    {
        const bool branch_taken_0x23e0a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E0A4u;
        // 0x23e0a8: 0x2442e520  addiu       $v0, $v0, -0x1AE0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960416));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e0a4) {
            ctx->pc = 0x23E0B8u;
            goto label_23e0b8;
        }
    }
    ctx->pc = 0x23E0ACu;
    // 0x23e0ac: 0x0  nop
    ctx->pc = 0x23e0acu;
    // NOP
label_23e0b0:
    // 0x23e0b0: 0x3c02002d  lui         $v0, 0x2D
    ctx->pc = 0x23e0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
    // 0x23e0b4: 0x2442e500  addiu       $v0, $v0, -0x1B00
    ctx->pc = 0x23e0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960384));
label_23e0b8:
    // 0x23e0b8: 0xafa2020c  sw          $v0, 0x20C($sp)
    ctx->pc = 0x23e0b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 524), GPR_U32(ctx, 2));
    // 0x23e0bc: 0x32e20010  andi        $v0, $s7, 0x10
    ctx->pc = 0x23e0bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)16);
    // 0x23e0c0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x23E0C0u;
    {
        const bool branch_taken_0x23e0c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E0C0u;
        // 0x23e0c4: 0x2c0102d  daddu       $v0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e0c0) {
            ctx->pc = 0x23E0D8u;
            goto label_23e0d8;
        }
    }
    ctx->pc = 0x23E0C8u;
    // 0x23e0c8: 0x26d60008  addiu       $s6, $s6, 0x8
    ctx->pc = 0x23e0c8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
    // 0x23e0cc: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x23E0CCu;
    {
        const bool branch_taken_0x23e0cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E0CCu;
        // 0x23e0d0: 0xdc500000  ld          $s0, 0x0($v0) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e0cc) {
            ctx->pc = 0x23E0F8u;
            goto label_23e0f8;
        }
    }
    ctx->pc = 0x23E0D4u;
    // 0x23e0d4: 0x0  nop
    ctx->pc = 0x23e0d4u;
    // NOP
label_23e0d8:
    // 0x23e0d8: 0x32e20040  andi        $v0, $s7, 0x40
    ctx->pc = 0x23e0d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)64);
    // 0x23e0dc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x23E0DCu;
    {
        const bool branch_taken_0x23e0dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E0DCu;
        // 0x23e0e0: 0x2c0102d  daddu       $v0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e0dc) {
            ctx->pc = 0x23E0F0u;
            goto label_23e0f0;
        }
    }
    ctx->pc = 0x23E0E4u;
    // 0x23e0e4: 0x26d60008  addiu       $s6, $s6, 0x8
    ctx->pc = 0x23e0e4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
    // 0x23e0e8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x23E0E8u;
    {
        const bool branch_taken_0x23e0e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E0E8u;
        // 0x23e0ec: 0x94500000  lhu         $s0, 0x0($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e0e8) {
            ctx->pc = 0x23E0F8u;
            goto label_23e0f8;
        }
    }
    ctx->pc = 0x23E0F0u;
label_23e0f0:
    // 0x23e0f0: 0x26d60008  addiu       $s6, $s6, 0x8
    ctx->pc = 0x23e0f0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
    // 0x23e0f4: 0x9c500000  lwu         $s0, 0x0($v0)
    ctx->pc = 0x23e0f4u;
    SET_GPR_ZE32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_23e0f8:
    // 0x23e0f8: 0x32e20001  andi        $v0, $s7, 0x1
    ctx->pc = 0x23e0f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)1);
    // 0x23e0fc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x23E0FCu;
    {
        const bool branch_taken_0x23e0fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E0FCu;
        // 0x23e100: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e0fc) {
            ctx->pc = 0x23E10Cu;
            goto label_23e10c;
        }
    }
    ctx->pc = 0x23E104u;
    // 0x23e104: 0x36e20002  ori         $v0, $s7, 0x2
    ctx->pc = 0x23e104u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) | (uint64_t)(uint16_t)2);
    // 0x23e108: 0x50b80b  movn        $s7, $v0, $s0
    ctx->pc = 0x23e108u;
    if (GPR_U64(ctx, 16) != 0) SET_GPR_VEC(ctx, 23, GPR_VEC(ctx, 2));
label_23e10c:
    // 0x23e10c: 0xa3a001d1  sb          $zero, 0x1D1($sp)
    ctx->pc = 0x23e10cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 465), (uint8_t)GPR_U32(ctx, 0));
label_23e110:
    // 0x23e110: 0x6800003  bltz        $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x23E110u;
    {
        const bool branch_taken_0x23e110 = (GPR_S32(ctx, 20) < 0);
        ctx->pc = 0x23E114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E110u;
        // 0x23e114: 0xafb40204  sw          $s4, 0x204($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 516), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e110) {
            ctx->pc = 0x23E120u;
            goto label_23e120;
        }
    }
    ctx->pc = 0x23E118u;
    // 0x23e118: 0x2402ff7f  addiu       $v0, $zero, -0x81
    ctx->pc = 0x23e118u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967167));
    // 0x23e11c: 0x2e2b824  and         $s7, $s7, $v0
    ctx->pc = 0x23e11cu;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) & GPR_U64(ctx, 2));
label_23e120:
    // 0x23e120: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x23E120u;
    {
        const bool branch_taken_0x23e120 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x23E124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E120u;
        // 0x23e124: 0x27b501bc  addiu       $s5, $sp, 0x1BC (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 444));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e120) {
            ctx->pc = 0x23E134u;
            goto label_23e134;
        }
    }
    ctx->pc = 0x23E128u;
    // 0x23e128: 0x8fa60204  lw          $a2, 0x204($sp)
    ctx->pc = 0x23e128u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 516)));
    // 0x23e12c: 0x10c0003d  beqz        $a2, . + 4 + (0x3D << 2)
    ctx->pc = 0x23E12Cu;
    {
        const bool branch_taken_0x23e12c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E12Cu;
        // 0x23e130: 0x3b51023  subu        $v0, $sp, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 29), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e12c) {
            ctx->pc = 0x23E224u;
            goto label_23e224;
        }
    }
    ctx->pc = 0x23E134u;
label_23e134:
    // 0x23e134: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x23e134u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23e138: 0x10620026  beq         $v1, $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x23E138u;
    {
        const bool branch_taken_0x23e138 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x23E13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E138u;
        // 0x23e13c: 0x2e02000a  sltiu       $v0, $s0, 0xA (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e138) {
            ctx->pc = 0x23E1D4u;
            goto label_23e1d4;
        }
    }
    ctx->pc = 0x23E140u;
    // 0x23e140: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x23E140u;
    {
        const bool branch_taken_0x23e140 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E140u;
        // 0x23e144: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e140) {
            ctx->pc = 0x23E168u;
            goto label_23e168;
        }
    }
    ctx->pc = 0x23E148u;
    // 0x23e148: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x23e148u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x23e14c: 0x10620028  beq         $v1, $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x23E14Cu;
    {
        const bool branch_taken_0x23e14c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x23E150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E14Cu;
        // 0x23e150: 0x3c02002d  lui         $v0, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e14c) {
            ctx->pc = 0x23E1F0u;
            goto label_23e1f0;
        }
    }
    ctx->pc = 0x23E154u;
    // 0x23e154: 0x2455e538  addiu       $s5, $v0, -0x1AC8
    ctx->pc = 0x23e154u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960440));
    // 0x23e158: 0xc08f3d6  jal         func_23CF58
    ctx->pc = 0x23E158u;
    SET_GPR_U32(ctx, 31, 0x23E160u);
    ctx->pc = 0x23E15Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E158u;
    // 0x23e15c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23CF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23CF58u, 0x23E158u, 0x23E160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E160u;
label_23e160:
    // 0x23e160: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x23E160u;
    {
        const bool branch_taken_0x23e160 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E160u;
        // 0x23e164: 0x40f02d  daddu       $fp, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e160) {
            ctx->pc = 0x23E244u;
            return;
        }
    }
    ctx->pc = 0x23E168u;
label_23e168:
    // 0x23e168: 0x2041024  and         $v0, $s0, $a0
    ctx->pc = 0x23e168u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & GPR_U64(ctx, 4));
    // 0x23e16c: 0x1080fa  dsrl        $s0, $s0, 3
    ctx->pc = 0x23e16cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> 3);
    // 0x23e170: 0x64420030  daddiu      $v0, $v0, 0x30
    ctx->pc = 0x23e170u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)48);
    // 0x23e174: 0x26b5ffff  addiu       $s5, $s5, -0x1
    ctx->pc = 0x23e174u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
    // 0x23e178: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x23e178u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x23e17c: 0x1600fffa  bnez        $s0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x23E17Cu;
    {
        const bool branch_taken_0x23e17c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x23E180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E17Cu;
        // 0x23e180: 0xa2a30000  sb          $v1, 0x0($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e17c) {
            ctx->pc = 0x23E168u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23e168;
        }
    }
    ctx->pc = 0x23E184u;
    // 0x23e184: 0x32e20001  andi        $v0, $s7, 0x1
    ctx->pc = 0x23e184u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)1);
    // 0x23e188: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x23E188u;
    {
        const bool branch_taken_0x23e188 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E188u;
        // 0x23e18c: 0x24020030  addiu       $v0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e188) {
            ctx->pc = 0x23E220u;
            goto label_23e220;
        }
    }
    ctx->pc = 0x23E190u;
    // 0x23e190: 0x50620024  beql        $v1, $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x23E190u;
    {
        const bool branch_taken_0x23e190 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x23e190) {
            ctx->pc = 0x23E194u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23E190u;
            // 0x23e194: 0x3b51023  subu        $v0, $sp, $s5 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 29), GPR_U32(ctx, 21)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23E224u;
            goto label_23e224;
        }
    }
    ctx->pc = 0x23E198u;
    // 0x23e198: 0x26b5ffff  addiu       $s5, $s5, -0x1
    ctx->pc = 0x23e198u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
    // 0x23e19c: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x23E19Cu;
    {
        const bool branch_taken_0x23e19c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E1A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E19Cu;
        // 0x23e1a0: 0xa2a20000  sb          $v0, 0x0($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e19c) {
            ctx->pc = 0x23E220u;
            goto label_23e220;
        }
    }
    ctx->pc = 0x23E1A4u;
    // 0x23e1a4: 0x0  nop
    ctx->pc = 0x23e1a4u;
    // NOP
label_23e1a8:
    // 0x23e1a8: 0xc06d9fe  jal         func_1B67F8
    ctx->pc = 0x23E1A8u;
    SET_GPR_U32(ctx, 31, 0x23E1B0u);
    ctx->pc = 0x23E1ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E1A8u;
    // 0x23e1ac: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B67F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B67F8u, 0x23E1A8u, 0x23E1B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E1B0u;
label_23e1b0:
    // 0x23e1b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23e1b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23e1b4: 0x64420030  daddiu      $v0, $v0, 0x30
    ctx->pc = 0x23e1b4u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)48);
    // 0x23e1b8: 0x26b5ffff  addiu       $s5, $s5, -0x1
    ctx->pc = 0x23e1b8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
    // 0x23e1bc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x23e1bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x23e1c0: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x23e1c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x23e1c4: 0xc06d89e  jal         func_1B6278
    ctx->pc = 0x23E1C4u;
    SET_GPR_U32(ctx, 31, 0x23E1CCu);
    ctx->pc = 0x23E1C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E1C4u;
    // 0x23e1c8: 0xa2a20000  sb          $v0, 0x0($s5) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6278u, 0x23E1C4u, 0x23E1CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E1CCu;
label_23e1cc:
    // 0x23e1cc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x23e1ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23e1d0: 0x2e02000a  sltiu       $v0, $s0, 0xA
    ctx->pc = 0x23e1d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
label_23e1d4:
    // 0x23e1d4: 0x1040fff4  beqz        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x23E1D4u;
    {
        const bool branch_taken_0x23e1d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E1D4u;
        // 0x23e1d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e1d4) {
            ctx->pc = 0x23E1A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23e1a8;
        }
    }
    ctx->pc = 0x23E1DCu;
    // 0x23e1dc: 0x66020030  daddiu      $v0, $s0, 0x30
    ctx->pc = 0x23e1dcu;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 16) + (int64_t)(int32_t)48);
    // 0x23e1e0: 0x26b5ffff  addiu       $s5, $s5, -0x1
    ctx->pc = 0x23e1e0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
    // 0x23e1e4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x23e1e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x23e1e8: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x23E1E8u;
    {
        const bool branch_taken_0x23e1e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E1E8u;
        // 0x23e1ec: 0xa2a20000  sb          $v0, 0x0($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e1e8) {
            ctx->pc = 0x23E220u;
            goto label_23e220;
        }
    }
    ctx->pc = 0x23E1F0u;
label_23e1f0:
    // 0x23e1f0: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x23e1f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x23e1f4: 0x0  nop
    ctx->pc = 0x23e1f4u;
    // NOP
label_23e1f8:
    // 0x23e1f8: 0x8fa3020c  lw          $v1, 0x20C($sp)
    ctx->pc = 0x23e1f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 524)));
    // 0x23e1fc: 0x2041024  and         $v0, $s0, $a0
    ctx->pc = 0x23e1fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & GPR_U64(ctx, 4));
    // 0x23e200: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x23e200u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x23e204: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x23e204u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x23e208: 0x26b5ffff  addiu       $s5, $s5, -0x1
    ctx->pc = 0x23e208u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
    // 0x23e20c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x23e20cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23e210: 0x10813a  dsrl        $s0, $s0, 4
    ctx->pc = 0x23e210u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> 4);
    // 0x23e214: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x23e214u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23e218: 0x1600fff7  bnez        $s0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x23E218u;
    {
        const bool branch_taken_0x23e218 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x23E21Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E218u;
        // 0x23e21c: 0xa2a30000  sb          $v1, 0x0($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e218) {
            ctx->pc = 0x23E1F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23e1f8;
        }
    }
    ctx->pc = 0x23E220u;
label_23e220:
    // 0x23e220: 0x3b51023  subu        $v0, $sp, $s5
    ctx->pc = 0x23e220u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 29), GPR_U32(ctx, 21)));
label_23e224:
    // 0x23e224: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x23E224u;
    {
        const bool branch_taken_0x23e224 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E224u;
        // 0x23e228: 0x245e01bc  addiu       $fp, $v0, 0x1BC (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 444));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e224) {
            ctx->pc = 0x23E244u;
            return;
        }
    }
    ctx->pc = 0x23E22Cu;
    // 0x23e22c: 0x0  nop
    ctx->pc = 0x23e22cu;
    // NOP
    ctx->pc = 0x23e230u;
}
