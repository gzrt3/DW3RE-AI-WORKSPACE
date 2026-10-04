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

// Function: FUN_00285dc8
// Address: 0x285dc8 - 0x285ef0
void FUN_00285dc8_0x285dc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00285dc8_0x285dc8");
#endif

    switch (ctx->pc) {
        case 0x285e14u: goto label_285e14;
        default: break;
    }

    ctx->pc = 0x285dc8u;

    // 0x285dc8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x285dc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x285dcc: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x285dccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x285dd0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x285dd0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x285dd4: 0x32020fff  andi        $v0, $s0, 0xFFF
    ctx->pc = 0x285dd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)4095);
    // 0x285dd8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x285DD8u;
    {
        const bool branch_taken_0x285dd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x285DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285DD8u;
        // 0x285ddc: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285dd8) {
            ctx->pc = 0x285DF8u;
            goto label_285df8;
        }
    }
    ctx->pc = 0x285DE0u;
    // 0x285de0: 0x3c02000f  lui         $v0, 0xF
    ctx->pc = 0x285de0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
    // 0x285de4: 0x2603ffff  addiu       $v1, $s0, -0x1
    ctx->pc = 0x285de4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x285de8: 0x3442fffe  ori         $v0, $v0, 0xFFFE
    ctx->pc = 0x285de8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65534);
    // 0x285dec: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x285decu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x285df0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x285DF0u;
    {
        const bool branch_taken_0x285df0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x285DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285DF0u;
        // 0x285df4: 0x3c047000  lui         $a0, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285df0) {
            ctx->pc = 0x285E00u;
            goto label_285e00;
        }
    }
    ctx->pc = 0x285DF8u;
label_285df8:
    // 0x285df8: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x285DF8u;
    {
        const bool branch_taken_0x285df8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x285DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285DF8u;
        // 0x285dfc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285df8) {
            ctx->pc = 0x285EE8u;
            goto label_285ee8;
        }
    }
    ctx->pc = 0x285E00u;
label_285e00:
    // 0x285e00: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x285e00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x285e04: 0x34844000  ori         $a0, $a0, 0x4000
    ctx->pc = 0x285e04u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16384);
    // 0x285e08: 0x37a60004  ori         $a2, $sp, 0x4
    ctx->pc = 0x285e08u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    // 0x285e0c: 0xc01d456  jal         func_075158
    ctx->pc = 0x285E0Cu;
    SET_GPR_U32(ctx, 31, 0x285E14u);
    ctx->pc = 0x285E10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x285E0Cu;
    // 0x285e10: 0x37a70008  ori         $a3, $sp, 0x8 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)8);
    ctx->in_delay_slot = false;
    ctx->pc = 0x75158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x75158u, 0x285E0Cu, 0x285E14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285E14u;
label_285e14:
    // 0x285e14: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x285e14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x285e18: 0x4a10009  bgez        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x285E18u;
    {
        const bool branch_taken_0x285e18 = (GPR_S32(ctx, 5) >= 0);
        if (branch_taken_0x285e18) {
            ctx->pc = 0x285E40u;
            goto label_285e40;
        }
    }
    ctx->pc = 0x285E20u;
    // 0x285e20: 0x12000031  beqz        $s0, . + 4 + (0x31 << 2)
    ctx->pc = 0x285E20u;
    {
        const bool branch_taken_0x285e20 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x285E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285E20u;
        // 0x285e24: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285e20) {
            ctx->pc = 0x285EE8u;
            goto label_285ee8;
        }
    }
    ctx->pc = 0x285E28u;
    // 0x285e28: 0x40053000  mfc0        $a1, Wired
    ctx->pc = 0x285e28u;
    SET_GPR_S32(ctx, 5, (int32_t)ctx->cop0_wired);
    // 0x285e2c: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x285e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x285e30: 0x40823000  mtc0        $v0, Wired
    ctx->pc = 0x285e30u;
    ctx->cop0_wired = GPR_U32(ctx, 2) & 0x3F; ctx->cop0_random = 47;
    // 0x285e34: 0x40f  sync.p
    ctx->pc = 0x285e34u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x285e38: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x285E38u;
    {
        const bool branch_taken_0x285e38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x285e38) {
            ctx->pc = 0x285E88u;
            goto label_285e88;
        }
    }
    ctx->pc = 0x285E40u;
label_285e40:
    // 0x285e40: 0x16000011  bnez        $s0, . + 4 + (0x11 << 2)
    ctx->pc = 0x285E40u;
    {
        const bool branch_taken_0x285e40 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x285E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285E40u;
        // 0x285e44: 0x24a2ffff  addiu       $v0, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285e40) {
            ctx->pc = 0x285E88u;
            goto label_285e88;
        }
    }
    ctx->pc = 0x285E48u;
    // 0x285e48: 0x3c03e001  lui         $v1, 0xE001
    ctx->pc = 0x285e48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57345 << 16));
    // 0x285e4c: 0x21340  sll         $v0, $v0, 13
    ctx->pc = 0x285e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 13));
    // 0x285e50: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x285e50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x285e54: 0x40023000  mfc0        $v0, Wired
    ctx->pc = 0x285e54u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_wired);
    // 0x285e58: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x285e58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x285e5c: 0x40823000  mtc0        $v0, Wired
    ctx->pc = 0x285e5cu;
    ctx->cop0_wired = GPR_U32(ctx, 2) & 0x3F; ctx->cop0_random = 47;
    // 0x285e60: 0x40850000  mtc0        $a1, Index
    ctx->pc = 0x285e60u;
    ctx->cop0_index = GPR_U32(ctx, 5) & 0x3F;
    // 0x285e64: 0x40802800  mtc0        $zero, PageMask
    ctx->pc = 0x285e64u;
    ctx->cop0_pagemask = GPR_U32(ctx, 0) & 0x01FFE000;
    // 0x285e68: 0x40865000  mtc0        $a2, EntryHi
    ctx->pc = 0x285e68u;
    ctx->cop0_entryhi = GPR_U32(ctx, 6) & 0xC00000FF;
    // 0x285e6c: 0x40801000  mtc0        $zero, EntryLo0
    ctx->pc = 0x285e6cu;
    ctx->cop0_entrylo0 = GPR_U32(ctx, 0) & 0x3FFFFFFF;
    // 0x285e70: 0x40801800  mtc0        $zero, EntryLo1
    ctx->pc = 0x285e70u;
    ctx->cop0_entrylo1 = GPR_U32(ctx, 0) & 0x3FFFFFFF;
    // 0x285e74: 0x40f  sync.p
    ctx->pc = 0x285e74u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x285e78: 0x42000002  tlbwi
    ctx->pc = 0x285e78u;
    runtime->handleTLBWI(rdram, ctx);
    // 0x285e7c: 0x40f  sync.p
    ctx->pc = 0x285e7cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x285e80: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x285E80u;
    {
        const bool branch_taken_0x285e80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x285E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285E80u;
        // 0x285e84: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285e80) {
            ctx->pc = 0x285EE8u;
            goto label_285ee8;
        }
    }
    ctx->pc = 0x285E88u;
label_285e88:
    // 0x285e88: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x285e88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x285e8c: 0x26041000  addiu       $a0, $s0, 0x1000
    ctx->pc = 0x285e8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4096));
    // 0x285e90: 0x3442f000  ori         $v0, $v0, 0xF000
    ctx->pc = 0x285e90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)61440);
    // 0x285e94: 0x3c067000  lui         $a2, 0x7000
    ctx->pc = 0x285e94u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)28672 << 16));
    // 0x285e98: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x285e98u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x285e9c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x285e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x285ea0: 0x2021024  and         $v0, $s0, $v0
    ctx->pc = 0x285ea0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x285ea4: 0x42182  srl         $a0, $a0, 6
    ctx->pc = 0x285ea4u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 6));
    // 0x285ea8: 0x21182  srl         $v0, $v0, 6
    ctx->pc = 0x285ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 6));
    // 0x285eac: 0x3484001f  ori         $a0, $a0, 0x1F
    ctx->pc = 0x285eacu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)31);
    // 0x285eb0: 0x3442001f  ori         $v0, $v0, 0x1F
    ctx->pc = 0x285eb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)31);
    // 0x285eb4: 0x34c64000  ori         $a2, $a2, 0x4000
    ctx->pc = 0x285eb4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)16384);
    // 0x285eb8: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x285eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x285ebc: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x285ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x285ec0: 0x40850000  mtc0        $a1, Index
    ctx->pc = 0x285ec0u;
    ctx->cop0_index = GPR_U32(ctx, 5) & 0x3F;
    // 0x285ec4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x285ec4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x285ec8: 0x40832800  mtc0        $v1, PageMask
    ctx->pc = 0x285ec8u;
    ctx->cop0_pagemask = GPR_U32(ctx, 3) & 0x01FFE000;
    // 0x285ecc: 0x40865000  mtc0        $a2, EntryHi
    ctx->pc = 0x285eccu;
    ctx->cop0_entryhi = GPR_U32(ctx, 6) & 0xC00000FF;
    // 0x285ed0: 0x40821000  mtc0        $v0, EntryLo0
    ctx->pc = 0x285ed0u;
    ctx->cop0_entrylo0 = GPR_U32(ctx, 2) & 0x3FFFFFFF;
    // 0x285ed4: 0x40841800  mtc0        $a0, EntryLo1
    ctx->pc = 0x285ed4u;
    ctx->cop0_entrylo1 = GPR_U32(ctx, 4) & 0x3FFFFFFF;
    // 0x285ed8: 0x40f  sync.p
    ctx->pc = 0x285ed8u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x285edc: 0x42000002  tlbwi
    ctx->pc = 0x285edcu;
    runtime->handleTLBWI(rdram, ctx);
    // 0x285ee0: 0x40f  sync.p
    ctx->pc = 0x285ee0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x285ee4: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x285ee4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_285ee8:
    // 0x285ee8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x285ee8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x285eec: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x285eecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->pc = 0x285ef0u;
}
