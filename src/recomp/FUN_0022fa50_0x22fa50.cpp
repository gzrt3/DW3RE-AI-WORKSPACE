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

// Function: FUN_0022fa50
// Address: 0x22fa50 - 0x22fca8
void FUN_0022fa50_0x22fa50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0022fa50_0x22fa50");
#endif

    switch (ctx->pc) {
        case 0x22fa84u: goto label_22fa84;
        case 0x22fc90u: goto label_22fc90;
        case 0x22fca4u: goto label_22fca4;
        default: break;
    }

    ctx->pc = 0x22fa50u;

    // 0x22fa50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x22fa50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x22fa54: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x22fa54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x22fa58: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x22fa58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x22fa5c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x22fa5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22fa60: 0x2a020029  slti        $v0, $s0, 0x29
    ctx->pc = 0x22fa60u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)41) ? 1 : 0);
    // 0x22fa64: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x22FA64u;
    {
        const bool branch_taken_0x22fa64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22FA68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FA64u;
        // 0x22fa68: 0x24020077  addiu       $v0, $zero, 0x77 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 119));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fa64) {
            ctx->pc = 0x22FA70u;
            goto label_22fa70;
        }
    }
    ctx->pc = 0x22FA6Cu;
    // 0x22fa6c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x22fa6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22fa70:
    // 0x22fa70: 0x14820006  bne         $a0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x22FA70u;
    {
        const bool branch_taken_0x22fa70 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x22FA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FA70u;
        // 0x22fa74: 0x418c0  sll         $v1, $a0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fa70) {
            ctx->pc = 0x22FA8Cu;
            goto label_22fa8c;
        }
    }
    ctx->pc = 0x22FA78u;
    // 0x22fa78: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x22fa78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22fa7c: 0xc08bf30  jal         func_22FCC0
    ctx->pc = 0x22FA7Cu;
    SET_GPR_U32(ctx, 31, 0x22FA84u);
    ctx->pc = 0x22FA80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22FA7Cu;
    // 0x22fa80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22FCC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FCC0u, 0x22FA7Cu, 0x22FA84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22FA84u;
label_22fa84:
    // 0x22fa84: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x22FA84u;
    {
        const bool branch_taken_0x22fa84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22FA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FA84u;
        // 0x22fa88: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fa84) {
            ctx->pc = 0x22FAA8u;
            goto label_22faa8;
        }
    }
    ctx->pc = 0x22FA8Cu;
label_22fa8c:
    // 0x22fa8c: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x22fa8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
    // 0x22fa90: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x22fa90u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x22fa94: 0x2442f730  addiu       $v0, $v0, -0x8D0
    ctx->pc = 0x22fa94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965040));
    // 0x22fa98: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x22fa98u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x22fa9c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x22fa9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x22faa0: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x22faa0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22faa4: 0x0  nop
    ctx->pc = 0x22faa4u;
    // NOP
label_22faa8:
    // 0x22faa8: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x22faa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
    // 0x22faac: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x22faacu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x22fab0: 0x2442f4a0  addiu       $v0, $v0, -0xB60
    ctx->pc = 0x22fab0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964384));
    // 0x22fab4: 0x42fc2  srl         $a1, $a0, 31
    ctx->pc = 0x22fab4u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x22fab8: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x22fab8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x22fabc: 0x3c010029  lui         $at, 0x29
    ctx->pc = 0x22fabcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)41 << 16));
    // 0x22fac0: 0x3c025555  lui         $v0, 0x5555
    ctx->pc = 0x22fac0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21845 << 16));
    // 0x22fac4: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x22fac4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x22fac8: 0x34425556  ori         $v0, $v0, 0x5556
    ctx->pc = 0x22fac8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21846);
    // 0x22facc: 0x440018  mult        $zero, $v0, $a0
    ctx->pc = 0x22faccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x22fad0: 0x0  nop
    ctx->pc = 0x22fad0u;
    // NOP
    // 0x22fad4: 0x0  nop
    ctx->pc = 0x22fad4u;
    // NOP
    // 0x22fad8: 0x1810  mfhi        $v1
    ctx->pc = 0x22fad8u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x22fadc: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x22fadcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x22fae0: 0xac260470  sw          $a2, 0x470($at)
    ctx->pc = 0x22fae0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 1136), GPR_U32(ctx, 6));
    // 0x22fae4: 0x24423420  addiu       $v0, $v0, 0x3420
    ctx->pc = 0x22fae4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13344));
    // 0x22fae8: 0x3c010029  lui         $at, 0x29
    ctx->pc = 0x22fae8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)41 << 16));
    // 0x22faec: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x22faecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x22faf0: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x22faf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x22faf4: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x22faf4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x22faf8: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x22faf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x22fafc: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x22fafcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x22fb00: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x22fb00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x22fb04: 0xac230474  sw          $v1, 0x474($at)
    ctx->pc = 0x22fb04u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 1140), GPR_U32(ctx, 3));
    // 0x22fb08: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x22fb08u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22fb0c: 0x28410003  slti        $at, $v0, 0x3
    ctx->pc = 0x22fb0cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x22fb10: 0x1020004f  beqz        $at, . + 4 + (0x4F << 2)
    ctx->pc = 0x22FB10u;
    {
        const bool branch_taken_0x22fb10 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x22FB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FB10u;
        // 0x22fb14: 0x3c010029  lui         $at, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)41 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fb10) {
            ctx->pc = 0x22FC50u;
            goto label_22fc50;
        }
    }
    ctx->pc = 0x22FB18u;
    // 0x22fb18: 0x3c030029  lui         $v1, 0x29
    ctx->pc = 0x22fb18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
    // 0x22fb1c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x22fb1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x22fb20: 0x24630440  addiu       $v1, $v1, 0x440
    ctx->pc = 0x22fb20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1088));
    // 0x22fb24: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x22fb24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x22fb28: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x22fb28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x22fb2c: 0x28a10027  slti        $at, $a1, 0x27
    ctx->pc = 0x22fb2cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)39) ? 1 : 0);
    // 0x22fb30: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x22FB30u;
    {
        const bool branch_taken_0x22fb30 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x22FB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FB30u;
        // 0x22fb34: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fb30) {
            ctx->pc = 0x22FB5Cu;
            goto label_22fb5c;
        }
    }
    ctx->pc = 0x22FB38u;
    // 0x22fb38: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x22fb38u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x22fb3c: 0x3c03002b  lui         $v1, 0x2B
    ctx->pc = 0x22fb3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)43 << 16));
    // 0x22fb40: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x22fb40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x22fb44: 0x2463ff8c  addiu       $v1, $v1, -0x74
    ctx->pc = 0x22fb44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967180));
    // 0x22fb48: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x22fb48u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x22fb4c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x22fb4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x22fb50: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x22fb50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x22fb54: 0x3863000a  xori        $v1, $v1, 0xA
    ctx->pc = 0x22fb54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)10);
    // 0x22fb58: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x22fb58u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_22fb5c:
    // 0x22fb5c: 0x3c010029  lui         $at, 0x29
    ctx->pc = 0x22fb5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)41 << 16));
    // 0x22fb60: 0xac230478  sw          $v1, 0x478($at)
    ctx->pc = 0x22fb60u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x290478u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x290478u, _value); } while (0);
    // 0x22fb64: 0x3c030029  lui         $v1, 0x29
    ctx->pc = 0x22fb64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
    // 0x22fb68: 0x24630444  addiu       $v1, $v1, 0x444
    ctx->pc = 0x22fb68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1092));
    // 0x22fb6c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x22fb6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x22fb70: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x22fb70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x22fb74: 0x28a10027  slti        $at, $a1, 0x27
    ctx->pc = 0x22fb74u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)39) ? 1 : 0);
    // 0x22fb78: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x22FB78u;
    {
        const bool branch_taken_0x22fb78 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x22FB7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FB78u;
        // 0x22fb7c: 0x52040  sll         $a0, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fb78) {
            ctx->pc = 0x22FBA4u;
            goto label_22fba4;
        }
    }
    ctx->pc = 0x22FB80u;
    // 0x22fb80: 0x3c03002b  lui         $v1, 0x2B
    ctx->pc = 0x22fb80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)43 << 16));
    // 0x22fb84: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x22fb84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x22fb88: 0x2463ff8c  addiu       $v1, $v1, -0x74
    ctx->pc = 0x22fb88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967180));
    // 0x22fb8c: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x22fb8cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x22fb90: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x22fb90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x22fb94: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x22fb94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x22fb98: 0x3863000a  xori        $v1, $v1, 0xA
    ctx->pc = 0x22fb98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)10);
    // 0x22fb9c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x22FB9Cu;
    {
        const bool branch_taken_0x22fb9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22FBA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FB9Cu;
        // 0x22fba0: 0x2c630001  sltiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fb9c) {
            ctx->pc = 0x22FBA8u;
            goto label_22fba8;
        }
    }
    ctx->pc = 0x22FBA4u;
label_22fba4:
    // 0x22fba4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x22fba4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22fba8:
    // 0x22fba8: 0x3c010029  lui         $at, 0x29
    ctx->pc = 0x22fba8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)41 << 16));
    // 0x22fbac: 0xac23047c  sw          $v1, 0x47C($at)
    ctx->pc = 0x22fbacu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x29047Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x29047Cu, _value); } while (0);
    // 0x22fbb0: 0x3c030029  lui         $v1, 0x29
    ctx->pc = 0x22fbb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
    // 0x22fbb4: 0x24630448  addiu       $v1, $v1, 0x448
    ctx->pc = 0x22fbb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1096));
    // 0x22fbb8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x22fbb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x22fbbc: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x22fbbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x22fbc0: 0x28a10027  slti        $at, $a1, 0x27
    ctx->pc = 0x22fbc0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)39) ? 1 : 0);
    // 0x22fbc4: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x22FBC4u;
    {
        const bool branch_taken_0x22fbc4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x22FBC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FBC4u;
        // 0x22fbc8: 0x52040  sll         $a0, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fbc4) {
            ctx->pc = 0x22FBF0u;
            goto label_22fbf0;
        }
    }
    ctx->pc = 0x22FBCCu;
    // 0x22fbcc: 0x3c03002b  lui         $v1, 0x2B
    ctx->pc = 0x22fbccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)43 << 16));
    // 0x22fbd0: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x22fbd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x22fbd4: 0x2463ff8c  addiu       $v1, $v1, -0x74
    ctx->pc = 0x22fbd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967180));
    // 0x22fbd8: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x22fbd8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x22fbdc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x22fbdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x22fbe0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x22fbe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x22fbe4: 0x3863000a  xori        $v1, $v1, 0xA
    ctx->pc = 0x22fbe4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)10);
    // 0x22fbe8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x22FBE8u;
    {
        const bool branch_taken_0x22fbe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22FBECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FBE8u;
        // 0x22fbec: 0x2c630001  sltiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fbe8) {
            ctx->pc = 0x22FBF4u;
            goto label_22fbf4;
        }
    }
    ctx->pc = 0x22FBF0u;
label_22fbf0:
    // 0x22fbf0: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x22fbf0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22fbf4:
    // 0x22fbf4: 0x3c010029  lui         $at, 0x29
    ctx->pc = 0x22fbf4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)41 << 16));
    // 0x22fbf8: 0xac230480  sw          $v1, 0x480($at)
    ctx->pc = 0x22fbf8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x290480u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x290480u, _value); } while (0);
    // 0x22fbfc: 0x3c030029  lui         $v1, 0x29
    ctx->pc = 0x22fbfcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
    // 0x22fc00: 0x2463044c  addiu       $v1, $v1, 0x44C
    ctx->pc = 0x22fc00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1100));
    // 0x22fc04: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x22fc04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x22fc08: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x22fc08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22fc0c: 0x28810027  slti        $at, $a0, 0x27
    ctx->pc = 0x22fc0cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)39) ? 1 : 0);
    // 0x22fc10: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
    ctx->pc = 0x22FC10u;
    {
        const bool branch_taken_0x22fc10 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x22fc10) {
            ctx->pc = 0x22FC40u;
            goto label_22fc40;
        }
    }
    ctx->pc = 0x22FC18u;
    // 0x22fc18: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x22fc18u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x22fc1c: 0x3c02002b  lui         $v0, 0x2B
    ctx->pc = 0x22fc1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
    // 0x22fc20: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x22fc20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x22fc24: 0x2442ff8c  addiu       $v0, $v0, -0x74
    ctx->pc = 0x22fc24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967180));
    // 0x22fc28: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x22fc28u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x22fc2c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x22fc2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x22fc30: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x22fc30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22fc34: 0x3842000a  xori        $v0, $v0, 0xA
    ctx->pc = 0x22fc34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)10);
    // 0x22fc38: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x22FC38u;
    {
        const bool branch_taken_0x22fc38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22FC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FC38u;
        // 0x22fc3c: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fc38) {
            ctx->pc = 0x22FC44u;
            goto label_22fc44;
        }
    }
    ctx->pc = 0x22FC40u;
label_22fc40:
    // 0x22fc40: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x22fc40u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22fc44:
    // 0x22fc44: 0x3c010029  lui         $at, 0x29
    ctx->pc = 0x22fc44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)41 << 16));
    // 0x22fc48: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x22FC48u;
    {
        const bool branch_taken_0x22fc48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22FC4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FC48u;
        // 0x22fc4c: 0xac220484  sw          $v0, 0x484($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 1156), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fc48) {
            ctx->pc = 0x22FC6Cu;
            goto label_22fc6c;
        }
    }
    ctx->pc = 0x22FC50u;
label_22fc50:
    // 0x22fc50: 0xac200484  sw          $zero, 0x484($at)
    ctx->pc = 0x22fc50u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 1156), GPR_U32(ctx, 0));
    // 0x22fc54: 0x3c010029  lui         $at, 0x29
    ctx->pc = 0x22fc54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)41 << 16));
    // 0x22fc58: 0xac200480  sw          $zero, 0x480($at)
    ctx->pc = 0x22fc58u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x290480u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x290480u, _value); } while (0);
    // 0x22fc5c: 0x3c010029  lui         $at, 0x29
    ctx->pc = 0x22fc5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)41 << 16));
    // 0x22fc60: 0xac20047c  sw          $zero, 0x47C($at)
    ctx->pc = 0x22fc60u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x29047Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x29047Cu, _value); } while (0);
    // 0x22fc64: 0x3c010029  lui         $at, 0x29
    ctx->pc = 0x22fc64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)41 << 16));
    // 0x22fc68: 0xac200478  sw          $zero, 0x478($at)
    ctx->pc = 0x22fc68u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x290478u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x290478u, _value); } while (0);
label_22fc6c:
    // 0x22fc6c: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x22fc6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x22fc70: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x22fc70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x22fc74: 0x90234999  lbu         $v1, 0x4999($at)
    ctx->pc = 0x22fc74u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x334999u));
    // 0x22fc78: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x22FC78u;
    {
        const bool branch_taken_0x22fc78 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x22FC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FC78u;
        // 0x22fc7c: 0x3c040029  lui         $a0, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)41 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fc78) {
            ctx->pc = 0x22FC98u;
            goto label_22fc98;
        }
    }
    ctx->pc = 0x22FC80u;
    // 0x22fc80: 0x3c040029  lui         $a0, 0x29
    ctx->pc = 0x22fc80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)41 << 16));
    // 0x22fc84: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x22fc84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22fc88: 0xc1762c8  jal         func_5D8B20
    ctx->pc = 0x22FC88u;
    SET_GPR_U32(ctx, 31, 0x22FC90u);
    ctx->pc = 0x22FC8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22FC88u;
    // 0x22fc8c: 0x24840470  addiu       $a0, $a0, 0x470 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1136));
    ctx->in_delay_slot = false;
    ctx->pc = 0x5D8B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x5D8B20u, 0x22FC88u, 0x22FC90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22FC90u;
label_22fc90:
    // 0x22fc90: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x22FC90u;
    {
        const bool branch_taken_0x22fc90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22FC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FC90u;
        // 0x22fc94: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fc90) {
            ctx->pc = 0x22FCA8u;
            return;
        }
    }
    ctx->pc = 0x22FC98u;
label_22fc98:
    // 0x22fc98: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x22fc98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22fc9c: 0xc1762c8  jal         func_5D8B20
    ctx->pc = 0x22FC9Cu;
    SET_GPR_U32(ctx, 31, 0x22FCA4u);
    ctx->pc = 0x22FCA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22FC9Cu;
    // 0x22fca0: 0x24840470  addiu       $a0, $a0, 0x470 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1136));
    ctx->in_delay_slot = false;
    ctx->pc = 0x5D8B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x5D8B20u, 0x22FC9Cu, 0x22FCA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22FCA4u;
label_22fca4:
    // 0x22fca4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x22fca4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->pc = 0x22fca8u;
}
