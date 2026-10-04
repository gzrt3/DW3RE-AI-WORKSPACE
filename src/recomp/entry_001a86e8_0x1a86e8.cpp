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

// Function: entry_001a86e8
// Address: 0x1a86e8 - 0x1a8808
void entry_001a86e8_0x1a86e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a86e8_0x1a86e8");
#endif

    switch (ctx->pc) {
        case 0x1a86fcu: goto label_1a86fc;
        case 0x1a8718u: goto label_1a8718;
        case 0x1a8720u: goto label_1a8720;
        case 0x1a8740u: goto label_1a8740;
        case 0x1a8778u: goto label_1a8778;
        case 0x1a87a8u: goto label_1a87a8;
        default: break;
    }

    ctx->pc = 0x1a86e8u;

    // 0x1a86e8: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x1a86e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x1a86ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a86ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a86f0: 0x34a50001  ori         $a1, $a1, 0x1
    ctx->pc = 0x1a86f0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1);
    // 0x1a86f4: 0xc069db6  jal         func_1A76D8
    ctx->pc = 0x1A86F4u;
    SET_GPR_U32(ctx, 31, 0x1A86FCu);
    ctx->pc = 0x1A86F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A86F4u;
    // 0x1a86f8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A76D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A76D8u, 0x1A86F4u, 0x1A86FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A86FCu;
label_1a86fc:
    // 0x1a86fc: 0x440003a  bltz        $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x1A86FCu;
    {
        const bool branch_taken_0x1a86fc = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1A8700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A86FCu;
        // 0x1a8700: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a86fc) {
            ctx->pc = 0x1A87E8u;
            goto label_1a87e8;
        }
    }
    ctx->pc = 0x1A8704u;
    // 0x1a8704: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x1a8704u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1a8708: 0x1040ffed  beqz        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x1A8708u;
    {
        const bool branch_taken_0x1a8708 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A870Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8708u;
        // 0x1a870c: 0x3c020010  lui         $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8708) {
            ctx->pc = 0x1A86C0u;
            return;
        }
    }
    ctx->pc = 0x1A8710u;
    // 0x1a8710: 0xc069ff2  jal         func_1A7FC8
    ctx->pc = 0x1A8710u;
    SET_GPR_U32(ctx, 31, 0x1A8718u);
    ctx->pc = 0x1A8714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8710u;
    // 0x1a8714: 0x3c140028  lui         $s4, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)40 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A7FC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7FC8u, 0x1A8710u, 0x1A8718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8718u;
label_1a8718:
    // 0x1a8718: 0xc069218  jal         func_1A4860
    ctx->pc = 0x1A8718u;
    SET_GPR_U32(ctx, 31, 0x1A8720u);
    ctx->pc = 0x1A871Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8718u;
    // 0x1a871c: 0x8e845c00  lw          $a0, 0x5C00($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 23552)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4860u, 0x1A8718u, 0x1A8720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8720u;
label_1a8720:
    // 0x1a8720: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x1a8720u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
    // 0x1a8724: 0x24634300  addiu       $v1, $v1, 0x4300
    ctx->pc = 0x1a8724u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 17152));
    // 0x1a8728: 0x24640200  addiu       $a0, $v1, 0x200
    ctx->pc = 0x1a8728u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 512));
    // 0x1a872c: 0x64102b  sltu        $v0, $v1, $a0
    ctx->pc = 0x1a872cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x1a8730: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1A8730u;
    {
        const bool branch_taken_0x1a8730 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8730u;
        // 0x1a8734: 0x3c120037  lui         $s2, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8730) {
            ctx->pc = 0x1A8764u;
            goto label_1a8764;
        }
    }
    ctx->pc = 0x1A8738u;
    // 0x1a8738: 0x3c110037  lui         $s1, 0x37
    ctx->pc = 0x1a8738u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)55 << 16));
    // 0x1a873c: 0x3c100037  lui         $s0, 0x37
    ctx->pc = 0x1a873cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)55 << 16));
label_1a8740:
    // 0x1a8740: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1a8740u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x1a8744: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x1a8744u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x1a8748: 0x64102b  sltu        $v0, $v1, $a0
    ctx->pc = 0x1a8748u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x1a874c: 0x0  nop
    ctx->pc = 0x1a874cu;
    // NOP
    // 0x1a8750: 0x0  nop
    ctx->pc = 0x1a8750u;
    // NOP
    // 0x1a8754: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1A8754u;
    {
        const bool branch_taken_0x1a8754 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a8754) {
            ctx->pc = 0x1A8740u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a8740;
        }
    }
    ctx->pc = 0x1A875Cu;
    // 0x1a875c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1A875Cu;
    {
        const bool branch_taken_0x1a875c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A875Cu;
        // 0x1a8760: 0x8e845c00  lw          $a0, 0x5C00($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 23552)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a875c) {
            ctx->pc = 0x1A8770u;
            goto label_1a8770;
        }
    }
    ctx->pc = 0x1A8764u;
label_1a8764:
    // 0x1a8764: 0x3c110037  lui         $s1, 0x37
    ctx->pc = 0x1a8764u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)55 << 16));
    // 0x1a8768: 0x3c100037  lui         $s0, 0x37
    ctx->pc = 0x1a8768u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)55 << 16));
    // 0x1a876c: 0x8e845c00  lw          $a0, 0x5C00($s4)
    ctx->pc = 0x1a876cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 23552)));
label_1a8770:
    // 0x1a8770: 0xc069210  jal         func_1A4840
    ctx->pc = 0x1A8770u;
    SET_GPR_U32(ctx, 31, 0x1A8778u);
    ctx->pc = 0x1A8774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8770u;
    // 0x1a8774: 0x26103e80  addiu       $s0, $s0, 0x3E80 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4840u, 0x1A8770u, 0x1A8778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8778u;
label_1a8778:
    // 0x1a8778: 0x26233ec0  addiu       $v1, $s1, 0x3EC0
    ctx->pc = 0x1a8778u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 16064));
    // 0x1a877c: 0x26644500  addiu       $a0, $s3, 0x4500
    ctx->pc = 0x1a877cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 17664));
    // 0x1a8780: 0xae433200  sw          $v1, 0x3200($s2)
    ctx->pc = 0x1a8780u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12800), GPR_U32(ctx, 3));
    // 0x1a8784: 0x26473200  addiu       $a3, $s2, 0x3200
    ctx->pc = 0x1a8784u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 12800));
    // 0x1a8788: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1a8788u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1a878c: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x1a878cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1a8790: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1a8790u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8794: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x1a8794u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1a8798: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1a8798u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a879c: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1a879cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1a87a0: 0xc069e2a  jal         func_1A78A8
    ctx->pc = 0x1A87A0u;
    SET_GPR_U32(ctx, 31, 0x1A87A8u);
    ctx->pc = 0x1A87A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A87A0u;
    // 0x1a87a4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A78A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A78A8u, 0x1A87A0u, 0x1A87A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A87A8u;
label_1a87a8:
    // 0x1a87a8: 0x4430004  bgezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A87A8u;
    {
        const bool branch_taken_0x1a87a8 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1a87a8) {
            ctx->pc = 0x1A87ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A87A8u;
            // 0x1a87ac: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A87BCu;
            goto label_1a87bc;
        }
    }
    ctx->pc = 0x1A87B0u;
    // 0x1a87b0: 0x3c02fffe  lui         $v0, 0xFFFE
    ctx->pc = 0x1a87b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65534 << 16));
    // 0x1a87b4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1A87B4u;
    {
        const bool branch_taken_0x1a87b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A87B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A87B4u;
        // 0x1a87b8: 0x3442ffff  ori         $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a87b4) {
            ctx->pc = 0x1A87E8u;
            goto label_1a87e8;
        }
    }
    ctx->pc = 0x1A87BCu;
label_1a87bc:
    // 0x1a87bc: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1a87bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x1a87c0: 0x2021025  or          $v0, $s0, $v0
    ctx->pc = 0x1a87c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x1a87c4: 0x3c040028  lui         $a0, 0x28
    ctx->pc = 0x1a87c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)40 << 16));
    // 0x1a87c8: 0x24a94528  addiu       $t1, $a1, 0x4528
    ctx->pc = 0x1a87c8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), 17704));
    // 0x1a87cc: 0x88460003  lwl         $a2, 0x3($v0)
    ctx->pc = 0x1a87ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 6) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 6, (int32_t)merged); }
    // 0x1a87d0: 0x98460000  lwr         $a2, 0x0($v0)
    ctx->pc = 0x1a87d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 6) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 6) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 6, merged64); }
    // 0x1a87d4: 0xa9260003  swl         $a2, 0x3($t1)
    ctx->pc = 0x1a87d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 6); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x1a87d8: 0xb9260000  swr         $a2, 0x0($t1)
    ctx->pc = 0x1a87d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 6); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x1a87dc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a87dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a87e0: 0xac835bf8  sw          $v1, 0x5BF8($a0)
    ctx->pc = 0x1a87e0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x285BF8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x285BF8u, _value); } while (0);
    // 0x1a87e4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1a87e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a87e8:
    // 0x1a87e8: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1a87e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1a87ec: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x1a87ecu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1a87f0: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x1a87f0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a87f4: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1a87f4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a87f8: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x1a87f8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a87fc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1a87fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a8800: 0x3e00008  jr          $ra
    ctx->pc = 0x1A8800u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A8804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8800u;
        // 0x1a8804: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A8800u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A8808u;
}
