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

// Function: FUN_001abbc0
// Address: 0x1abbc0 - 0x1abcb8
void FUN_001abbc0_0x1abbc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001abbc0_0x1abbc0");
#endif

    switch (ctx->pc) {
        case 0x1abbe8u: goto label_1abbe8;
        case 0x1abbfcu: goto label_1abbfc;
        case 0x1abc40u: goto label_1abc40;
        case 0x1abc80u: goto label_1abc80;
        default: break;
    }

    ctx->pc = 0x1abbc0u;

    // 0x1abbc0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1abbc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1abbc4: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1abbc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x1abbc8: 0x3c120028  lui         $s2, 0x28
    ctx->pc = 0x1abbc8u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)40 << 16));
    // 0x1abbcc: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1abbccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1abbd0: 0x8e425c18  lw          $v0, 0x5C18($s2)
    ctx->pc = 0x1abbd0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x285C18u));
    // 0x1abbd4: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x1abbd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x1abbd8: 0x4410032  bgez        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x1ABBD8u;
    {
        const bool branch_taken_0x1abbd8 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1ABBDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABBD8u;
        // 0x1abbdc: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1abbd8) {
            ctx->pc = 0x1ABCA4u;
            goto label_1abca4;
        }
    }
    ctx->pc = 0x1ABBE0u;
    // 0x1abbe0: 0x3c110037  lui         $s1, 0x37
    ctx->pc = 0x1abbe0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)55 << 16));
    // 0x1abbe4: 0x26304980  addiu       $s0, $s1, 0x4980
    ctx->pc = 0x1abbe4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 18816));
label_1abbe8:
    // 0x1abbe8: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x1abbe8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x1abbec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1abbecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1abbf0: 0x34a50006  ori         $a1, $a1, 0x6
    ctx->pc = 0x1abbf0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)6);
    // 0x1abbf4: 0xc069db6  jal         func_1A76D8
    ctx->pc = 0x1ABBF4u;
    SET_GPR_U32(ctx, 31, 0x1ABBFCu);
    ctx->pc = 0x1ABBF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ABBF4u;
    // 0x1abbf8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A76D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A76D8u, 0x1ABBF4u, 0x1ABBFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ABBFCu;
label_1abbfc:
    // 0x1abbfc: 0x4430003  bgezl       $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1ABBFCu;
    {
        const bool branch_taken_0x1abbfc = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1abbfc) {
            ctx->pc = 0x1ABC00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1ABBFCu;
            // 0x1abc00: 0x8e020024  lw          $v0, 0x24($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1ABC0Cu;
            goto label_1abc0c;
        }
    }
    ctx->pc = 0x1ABC04u;
    // 0x1abc04: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x1ABC04u;
    {
        const bool branch_taken_0x1abc04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ABC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABC04u;
        // 0x1abc08: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1abc04) {
            ctx->pc = 0x1ABCA8u;
            goto label_1abca8;
        }
    }
    ctx->pc = 0x1ABC0Cu;
label_1abc0c:
    // 0x1abc0c: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x1ABC0Cu;
    {
        const bool branch_taken_0x1abc0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ABC10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABC0Cu;
        // 0x1abc10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1abc0c) {
            ctx->pc = 0x1ABC74u;
            goto label_1abc74;
        }
    }
    ctx->pc = 0x1ABC14u;
    // 0x1abc14: 0x3c110037  lui         $s1, 0x37
    ctx->pc = 0x1abc14u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)55 << 16));
    // 0x1abc18: 0xae405c18  sw          $zero, 0x5C18($s2)
    ctx->pc = 0x1abc18u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 23576), GPR_U32(ctx, 0));
    // 0x1abc1c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1abc1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1abc20: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x1abc20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1abc24: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1abc24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1abc28: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1abc28u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1abc2c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1abc2cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1abc30: 0x26294780  addiu       $t1, $s1, 0x4780
    ctx->pc = 0x1abc30u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), 18304));
    // 0x1abc34: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1abc34u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1abc38: 0xc069e2a  jal         func_1A78A8
    ctx->pc = 0x1ABC38u;
    SET_GPR_U32(ctx, 31, 0x1ABC40u);
    ctx->pc = 0x1ABC3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ABC38u;
    // 0x1abc3c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A78A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A78A8u, 0x1ABC38u, 0x1ABC40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ABC40u;
label_1abc40:
    // 0x1abc40: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1ABC40u;
    {
        const bool branch_taken_0x1abc40 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1ABC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABC40u;
        // 0x1abc44: 0x3c030037  lui         $v1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1abc40) {
            ctx->pc = 0x1ABC54u;
            goto label_1abc54;
        }
    }
    ctx->pc = 0x1ABC48u;
    // 0x1abc48: 0x3c02fffe  lui         $v0, 0xFFFE
    ctx->pc = 0x1abc48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65534 << 16));
    // 0x1abc4c: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1ABC4Cu;
    {
        const bool branch_taken_0x1abc4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ABC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABC4Cu;
        // 0x1abc50: 0x3442ffff  ori         $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1abc4c) {
            ctx->pc = 0x1ABCA8u;
            goto label_1abca8;
        }
    }
    ctx->pc = 0x1ABC54u;
label_1abc54:
    // 0x1abc54: 0x26274780  addiu       $a3, $s1, 0x4780
    ctx->pc = 0x1abc54u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 18304));
    // 0x1abc58: 0x246649a8  addiu       $a2, $v1, 0x49A8
    ctx->pc = 0x1abc58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 18856));
    // 0x1abc5c: 0x88e40003  lwl         $a0, 0x3($a3)
    ctx->pc = 0x1abc5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 4) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 4, (int32_t)merged); }
    // 0x1abc60: 0x98e40000  lwr         $a0, 0x0($a3)
    ctx->pc = 0x1abc60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 4) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 4) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 4, merged64); }
    // 0x1abc64: 0xa8c40003  swl         $a0, 0x3($a2)
    ctx->pc = 0x1abc64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 4); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x1abc68: 0xb8c40000  swr         $a0, 0x0($a2)
    ctx->pc = 0x1abc68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 4); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x1abc6c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1ABC6Cu;
    {
        const bool branch_taken_0x1abc6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ABC70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABC6Cu;
        // 0x1abc70: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1abc6c) {
            ctx->pc = 0x1ABCA8u;
            goto label_1abca8;
        }
    }
    ctx->pc = 0x1ABC74u;
label_1abc74:
    // 0x1abc74: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x1abc74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
    // 0x1abc78: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1abc78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1abc7c: 0x0  nop
    ctx->pc = 0x1abc7cu;
    // NOP
label_1abc80:
    // 0x1abc80: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1abc80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1abc84: 0x0  nop
    ctx->pc = 0x1abc84u;
    // NOP
    // 0x1abc88: 0x0  nop
    ctx->pc = 0x1abc88u;
    // NOP
    // 0x1abc8c: 0x0  nop
    ctx->pc = 0x1abc8cu;
    // NOP
    // 0x1abc90: 0x0  nop
    ctx->pc = 0x1abc90u;
    // NOP
    // 0x1abc94: 0x1443fffa  bne         $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1ABC94u;
    {
        const bool branch_taken_0x1abc94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1abc94) {
            ctx->pc = 0x1ABC80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1abc80;
        }
    }
    ctx->pc = 0x1ABC9Cu;
    // 0x1abc9c: 0x1000ffd2  b           . + 4 + (-0x2E << 2)
    ctx->pc = 0x1ABC9Cu;
    {
        const bool branch_taken_0x1abc9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ABCA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABC9Cu;
        // 0x1abca0: 0x26304980  addiu       $s0, $s1, 0x4980 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 18816));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1abc9c) {
            ctx->pc = 0x1ABBE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1abbe8;
        }
    }
    ctx->pc = 0x1ABCA4u;
label_1abca4:
    // 0x1abca4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1abca4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1abca8:
    // 0x1abca8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1abca8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1abcac: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1abcacu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1abcb0: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x1abcb0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1abcb4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1abcb4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->pc = 0x1abcb8u;
}
