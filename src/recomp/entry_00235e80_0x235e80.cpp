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

// Function: entry_00235e80
// Address: 0x235e80 - 0x235fbc
void entry_00235e80_0x235e80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00235e80_0x235e80");
#endif

    switch (ctx->pc) {
        case 0x235e98u: goto label_235e98;
        case 0x235eb8u: goto label_235eb8;
        case 0x235ec8u: goto label_235ec8;
        case 0x235f00u: goto label_235f00;
        case 0x235f1cu: goto label_235f1c;
        case 0x235f2cu: goto label_235f2c;
        case 0x235f34u: goto label_235f34;
        case 0x235f4cu: goto label_235f4c;
        case 0x235f58u: goto label_235f58;
        case 0x235f6cu: goto label_235f6c;
        case 0x235facu: goto label_235fac;
        case 0x235fb8u: goto label_235fb8;
        default: break;
    }

    ctx->pc = 0x235e80u;

    // 0x235e80: 0x2630b2c0  addiu       $s0, $s1, -0x4D40
    ctx->pc = 0x235e80u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294947520));
    // 0x235e84: 0x3c054b53  lui         $a1, 0x4B53
    ctx->pc = 0x235e84u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)19283 << 16));
    // 0x235e88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x235e88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235e8c: 0x34a54e47  ori         $a1, $a1, 0x4E47
    ctx->pc = 0x235e8cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)20039);
    // 0x235e90: 0xc069db6  jal         func_1A76D8
    ctx->pc = 0x235E90u;
    SET_GPR_U32(ctx, 31, 0x235E98u);
    ctx->pc = 0x235E94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235E90u;
    // 0x235e94: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A76D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A76D8u, 0x235E90u, 0x235E98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235E98u;
label_235e98:
    // 0x235e98: 0x4400048  bltz        $v0, . + 4 + (0x48 << 2)
    ctx->pc = 0x235E98u;
    {
        const bool branch_taken_0x235e98 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x235E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235E98u;
        // 0x235e9c: 0x2402ff9d  addiu       $v0, $zero, -0x63 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967197));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235e98) {
            ctx->pc = 0x235FBCu;
            return;
        }
    }
    ctx->pc = 0x235EA0u;
    // 0x235ea0: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x235ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x235ea4: 0x1040ffea  beqz        $v0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x235EA4u;
    {
        const bool branch_taken_0x235ea4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x235EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235EA4u;
        // 0x235ea8: 0x3c020001  lui         $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235ea4) {
            ctx->pc = 0x235E50u;
            return;
        }
    }
    ctx->pc = 0x235EACu;
    // 0x235eac: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x235EACu;
    {
        const bool branch_taken_0x235eac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x235EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235EACu;
        // 0x235eb0: 0x3c110059  lui         $s1, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235eac) {
            ctx->pc = 0x235EE8u;
            goto label_235ee8;
        }
    }
    ctx->pc = 0x235EB4u;
    // 0x235eb4: 0x0  nop
    ctx->pc = 0x235eb4u;
    // NOP
label_235eb8:
    // 0x235eb8: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x235eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x235ebc: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x235ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x235ec0: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x235ec0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x235ec4: 0x2463ffe0  addiu       $v1, $v1, -0x20
    ctx->pc = 0x235ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967264));
label_235ec8:
    // 0x235ec8: 0x0  nop
    ctx->pc = 0x235ec8u;
    // NOP
    // 0x235ecc: 0x0  nop
    ctx->pc = 0x235eccu;
    // NOP
    // 0x235ed0: 0x0  nop
    ctx->pc = 0x235ed0u;
    // NOP
    // 0x235ed4: 0x0  nop
    ctx->pc = 0x235ed4u;
    // NOP
    // 0x235ed8: 0x0  nop
    ctx->pc = 0x235ed8u;
    // NOP
    // 0x235edc: 0x5460fffa  bnel        $v1, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x235EDCu;
    {
        const bool branch_taken_0x235edc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x235edc) {
            ctx->pc = 0x235EE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x235EDCu;
            // 0x235ee0: 0x2463ffe0  addiu       $v1, $v1, -0x20 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967264));
            ctx->in_delay_slot = false;
            ctx->pc = 0x235EC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_235ec8;
        }
    }
    ctx->pc = 0x235EE4u;
    // 0x235ee4: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x235ee4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_235ee8:
    // 0x235ee8: 0x2630b2e8  addiu       $s0, $s1, -0x4D18
    ctx->pc = 0x235ee8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294947560));
    // 0x235eec: 0x3c054b53  lui         $a1, 0x4B53
    ctx->pc = 0x235eecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)19283 << 16));
    // 0x235ef0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x235ef0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235ef4: 0x34a54e48  ori         $a1, $a1, 0x4E48
    ctx->pc = 0x235ef4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)20040);
    // 0x235ef8: 0xc069db6  jal         func_1A76D8
    ctx->pc = 0x235EF8u;
    SET_GPR_U32(ctx, 31, 0x235F00u);
    ctx->pc = 0x235EFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235EF8u;
    // 0x235efc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A76D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A76D8u, 0x235EF8u, 0x235F00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235F00u;
label_235f00:
    // 0x235f00: 0x440002e  bltz        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x235F00u;
    {
        const bool branch_taken_0x235f00 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x235F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235F00u;
        // 0x235f04: 0x2402ff9d  addiu       $v0, $zero, -0x63 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967197));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235f00) {
            ctx->pc = 0x235FBCu;
            return;
        }
    }
    ctx->pc = 0x235F08u;
    // 0x235f08: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x235f08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x235f0c: 0x1040ffea  beqz        $v0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x235F0Cu;
    {
        const bool branch_taken_0x235f0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x235F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235F0Cu;
        // 0x235f10: 0x24040018  addiu       $a0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235f0c) {
            ctx->pc = 0x235EB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_235eb8;
        }
    }
    ctx->pc = 0x235F14u;
    // 0x235f14: 0xc069a5a  jal         func_1A6968
    ctx->pc = 0x235F14u;
    SET_GPR_U32(ctx, 31, 0x235F1Cu);
    ctx->pc = 0x235F18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235F14u;
    // 0x235f18: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6968u, 0x235F14u, 0x235F1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235F1Cu;
label_235f1c:
    // 0x235f1c: 0x24040019  addiu       $a0, $zero, 0x19
    ctx->pc = 0x235f1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x235f20: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x235f20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235f24: 0xc069a5a  jal         func_1A6968
    ctx->pc = 0x235F24u;
    SET_GPR_U32(ctx, 31, 0x235F2Cu);
    ctx->pc = 0x235F28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235F24u;
    // 0x235f28: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6968u, 0x235F24u, 0x235F2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235F2Cu;
label_235f2c:
    // 0x235f2c: 0xc0692a8  jal         func_1A4AA0
    ctx->pc = 0x235F2Cu;
    SET_GPR_U32(ctx, 31, 0x235F34u);
    ctx->pc = 0x235F30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235F2Cu;
    // 0x235f30: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4AA0u, 0x235F2Cu, 0x235F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235F34u;
label_235f34:
    // 0x235f34: 0x27b10010  addiu       $s1, $sp, 0x10
    ctx->pc = 0x235f34u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x235f38: 0xafb00014  sw          $s0, 0x14($sp)
    ctx->pc = 0x235f38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 16));
    // 0x235f3c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x235f3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235f40: 0xafb00018  sw          $s0, 0x18($sp)
    ctx->pc = 0x235f40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 16));
    // 0x235f44: 0xc069208  jal         func_1A4820
    ctx->pc = 0x235F44u;
    SET_GPR_U32(ctx, 31, 0x235F4Cu);
    ctx->pc = 0x235F48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235F44u;
    // 0x235f48: 0xafa00024  sw          $zero, 0x24($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4820u, 0x235F44u, 0x235F4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235F4Cu;
label_235f4c:
    // 0x235f4c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x235f4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235f50: 0xc069208  jal         func_1A4820
    ctx->pc = 0x235F50u;
    SET_GPR_U32(ctx, 31, 0x235F58u);
    ctx->pc = 0x235F54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235F50u;
    // 0x235f54: 0xaf8282f0  sw          $v0, -0x7D10($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935280), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4820u, 0x235F50u, 0x235F58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235F58u;
label_235f58:
    // 0x235f58: 0xaf908300  sw          $s0, -0x7D00($gp)
    ctx->pc = 0x235f58u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935296), GPR_U32(ctx, 16));
    // 0x235f5c: 0x8f8482f0  lw          $a0, -0x7D10($gp)
    ctx->pc = 0x235f5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935280)));
    // 0x235f60: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x235f60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x235f64: 0xc08dbf8  jal         func_236FE0
    ctx->pc = 0x235F64u;
    SET_GPR_U32(ctx, 31, 0x235F6Cu);
    ctx->pc = 0x235F68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235F64u;
    // 0x235f68: 0xaf8282f4  sw          $v0, -0x7D0C($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935284), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236FE0u, 0x235F64u, 0x235F6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235F6Cu;
label_235f6c:
    // 0x235f6c: 0x3c030059  lui         $v1, 0x59
    ctx->pc = 0x235f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)89 << 16));
    // 0x235f70: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x235f70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x235f74: 0x24050090  addiu       $a1, $zero, 0x90
    ctx->pc = 0x235f74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x235f78: 0x2469b1c0  addiu       $t1, $v1, -0x4E40
    ctx->pc = 0x235f78u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), 4294947264));
    // 0x235f7c: 0x6a420007  ldl         $v0, 0x7($s2)
    ctx->pc = 0x235f7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x235f80: 0x6e420000  ldr         $v0, 0x0($s2)
    ctx->pc = 0x235f80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x235f84: 0x6a47000f  ldl         $a3, 0xF($s2)
    ctx->pc = 0x235f84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x235f88: 0x6e470008  ldr         $a3, 0x8($s2)
    ctx->pc = 0x235f88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x235f8c: 0x8e480010  lw          $t0, 0x10($s2)
    ctx->pc = 0x235f8cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x235f90: 0xb1220007  sdl         $v0, 0x7($t1)
    ctx->pc = 0x235f90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x235f94: 0xb5220000  sdr         $v0, 0x0($t1)
    ctx->pc = 0x235f94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x235f98: 0xb127000f  sdl         $a3, 0xF($t1)
    ctx->pc = 0x235f98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x235f9c: 0xb5270008  sdr         $a3, 0x8($t1)
    ctx->pc = 0x235f9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x235fa0: 0xad280010  sw          $t0, 0x10($t1)
    ctx->pc = 0x235fa0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 8)); ps2TraceGuestWrite(rdram, 0x58B1D0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x58B1D0u, _value); } while (0);
    // 0x235fa4: 0xc08d74c  jal         func_235D30
    ctx->pc = 0x235FA4u;
    SET_GPR_U32(ctx, 31, 0x235FACu);
    ctx->pc = 0x235FA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235FA4u;
    // 0x235fa8: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235D30u, 0x235FA4u, 0x235FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235FACu;
label_235fac:
    // 0x235fac: 0x8f8482f0  lw          $a0, -0x7D10($gp)
    ctx->pc = 0x235facu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935280)));
    // 0x235fb0: 0xc069210  jal         func_1A4840
    ctx->pc = 0x235FB0u;
    SET_GPR_U32(ctx, 31, 0x235FB8u);
    ctx->pc = 0x235FB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235FB0u;
    // 0x235fb4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4840u, 0x235FB0u, 0x235FB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235FB8u;
label_235fb8:
    // 0x235fb8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x235fb8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x235fbcu;
}
