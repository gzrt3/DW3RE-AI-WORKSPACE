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

// Function: FUN_001abd88
// Address: 0x1abd88 - 0x1abf88
void FUN_001abd88_0x1abd88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001abd88_0x1abd88");
#endif

    switch (ctx->pc) {
        case 0x1abdc0u: goto label_1abdc0;
        case 0x1abdd0u: goto label_1abdd0;
        case 0x1abe1cu: goto label_1abe1c;
        case 0x1abe80u: goto label_1abe80;
        case 0x1abf10u: goto label_1abf10;
        case 0x1abf4cu: goto label_1abf4c;
        default: break;
    }

    ctx->pc = 0x1abd88u;

    // 0x1abd88: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1abd88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x1abd8c: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x1abd8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x1abd90: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x1abd90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x1abd94: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x1abd94u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1abd98: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x1abd98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x1abd9c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1abd9cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1abda0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1abda0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1abda4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1abda4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1abda8: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x1abda8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x1abdac: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1abdacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1abdb0: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x1abdb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x1abdb4: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x1abdb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x1abdb8: 0xc06aef0  jal         func_1ABBC0
    ctx->pc = 0x1ABDB8u;
    SET_GPR_U32(ctx, 31, 0x1ABDC0u);
    ctx->pc = 0x1ABDBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ABDB8u;
    // 0x1abdbc: 0xffb20030  sd          $s2, 0x30($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ABBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ABBC0u, 0x1ABDB8u, 0x1ABDC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ABDC0u;
label_1abdc0:
    // 0x1abdc0: 0x4400069  bltz        $v0, . + 4 + (0x69 << 2)
    ctx->pc = 0x1ABDC0u;
    {
        const bool branch_taken_0x1abdc0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1ABDC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABDC0u;
        // 0x1abdc4: 0x3c02ffff  lui         $v0, 0xFFFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1abdc0) {
            ctx->pc = 0x1ABF68u;
            goto label_1abf68;
        }
    }
    ctx->pc = 0x1ABDC8u;
    // 0x1abdc8: 0xc06af30  jal         func_1ABCC0
    ctx->pc = 0x1ABDC8u;
    SET_GPR_U32(ctx, 31, 0x1ABDD0u);
    ctx->pc = 0x1ABCC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ABCC0u, 0x1ABDC8u, 0x1ABDD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ABDD0u;
label_1abdd0:
    // 0x1abdd0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1ABDD0u;
    {
        const bool branch_taken_0x1abdd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ABDD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABDD0u;
        // 0x1abdd4: 0x3c140037  lui         $s4, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1abdd0) {
            ctx->pc = 0x1ABDE4u;
            goto label_1abde4;
        }
    }
    ctx->pc = 0x1ABDD8u;
    // 0x1abdd8: 0x3c02fffe  lui         $v0, 0xFFFE
    ctx->pc = 0x1abdd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65534 << 16));
    // 0x1abddc: 0x10000062  b           . + 4 + (0x62 << 2)
    ctx->pc = 0x1ABDDCu;
    {
        const bool branch_taken_0x1abddc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ABDE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABDDCu;
        // 0x1abde0: 0x3442fffc  ori         $v0, $v0, 0xFFFC (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65532);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1abddc) {
            ctx->pc = 0x1ABF68u;
            goto label_1abf68;
        }
    }
    ctx->pc = 0x1ABDE4u;
label_1abde4:
    // 0x1abde4: 0x280a82d  daddu       $s5, $s4, $zero
    ctx->pc = 0x1abde4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1abde8: 0x26924780  addiu       $s2, $s4, 0x4780
    ctx->pc = 0x1abde8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 18304));
    // 0x1abdec: 0x1200004a  beqz        $s0, . + 4 + (0x4A << 2)
    ctx->pc = 0x1ABDECu;
    {
        const bool branch_taken_0x1abdec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ABDF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABDECu;
        // 0x1abdf0: 0xae934780  sw          $s3, 0x4780($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 18304), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1abdec) {
            ctx->pc = 0x1ABF18u;
            goto label_1abf18;
        }
    }
    ctx->pc = 0x1ABDF4u;
    // 0x1abdf4: 0x2a2200fd  slti        $v0, $s1, 0xFD
    ctx->pc = 0x1abdf4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)253) ? 1 : 0);
    // 0x1abdf8: 0x14400042  bnez        $v0, . + 4 + (0x42 << 2)
    ctx->pc = 0x1ABDF8u;
    {
        const bool branch_taken_0x1abdf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ABDFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABDF8u;
        // 0x1abdfc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1abdf8) {
            ctx->pc = 0x1ABF04u;
            goto label_1abf04;
        }
    }
    ctx->pc = 0x1ABE00u;
    // 0x1abe00: 0x26440104  addiu       $a0, $s2, 0x104
    ctx->pc = 0x1abe00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 260));
    // 0x1abe04: 0x2041025  or          $v0, $s0, $a0
    ctx->pc = 0x1abe04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) | GPR_U64(ctx, 4));
    // 0x1abe08: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x1abe08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x1abe0c: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x1ABE0Cu;
    {
        const bool branch_taken_0x1abe0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ABE10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABE0Cu;
        // 0x1abe10: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1abe0c) {
            ctx->pc = 0x1ABE78u;
            goto label_1abe78;
        }
    }
    ctx->pc = 0x1ABE14u;
    // 0x1abe14: 0x260200e0  addiu       $v0, $s0, 0xE0
    ctx->pc = 0x1abe14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
    // 0x1abe18: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1abe18u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_1abe1c:
    // 0x1abe1c: 0x68e30007  ldl         $v1, 0x7($a3)
    ctx->pc = 0x1abe1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x1abe20: 0x6ce30000  ldr         $v1, 0x0($a3)
    ctx->pc = 0x1abe20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x1abe24: 0x68e6000f  ldl         $a2, 0xF($a3)
    ctx->pc = 0x1abe24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x1abe28: 0x6ce60008  ldr         $a2, 0x8($a3)
    ctx->pc = 0x1abe28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x1abe2c: 0x68e80017  ldl         $t0, 0x17($a3)
    ctx->pc = 0x1abe2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x1abe30: 0x6ce80010  ldr         $t0, 0x10($a3)
    ctx->pc = 0x1abe30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x1abe34: 0x68e9001f  ldl         $t1, 0x1F($a3)
    ctx->pc = 0x1abe34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x1abe38: 0x6ce90018  ldr         $t1, 0x18($a3)
    ctx->pc = 0x1abe38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x1abe3c: 0xb0830007  sdl         $v1, 0x7($a0)
    ctx->pc = 0x1abe3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1abe40: 0xb4830000  sdr         $v1, 0x0($a0)
    ctx->pc = 0x1abe40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1abe44: 0xb086000f  sdl         $a2, 0xF($a0)
    ctx->pc = 0x1abe44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1abe48: 0xb4860008  sdr         $a2, 0x8($a0)
    ctx->pc = 0x1abe48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1abe4c: 0xb0880017  sdl         $t0, 0x17($a0)
    ctx->pc = 0x1abe4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1abe50: 0xb4880010  sdr         $t0, 0x10($a0)
    ctx->pc = 0x1abe50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1abe54: 0xb089001f  sdl         $t1, 0x1F($a0)
    ctx->pc = 0x1abe54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1abe58: 0xb4890018  sdr         $t1, 0x18($a0)
    ctx->pc = 0x1abe58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1abe5c: 0x24e70020  addiu       $a3, $a3, 0x20
    ctx->pc = 0x1abe5cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
    // 0x1abe60: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x1abe60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x1abe64: 0x0  nop
    ctx->pc = 0x1abe64u;
    // NOP
    // 0x1abe68: 0x14e2ffec  bne         $a3, $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x1ABE68u;
    {
        const bool branch_taken_0x1abe68 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        if (branch_taken_0x1abe68) {
            ctx->pc = 0x1ABE1Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1abe1c;
        }
    }
    ctx->pc = 0x1ABE70u;
    // 0x1abe70: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1ABE70u;
    {
        const bool branch_taken_0x1abe70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1abe70) {
            ctx->pc = 0x1ABEB4u;
            goto label_1abeb4;
        }
    }
    ctx->pc = 0x1ABE78u;
label_1abe78:
    // 0x1abe78: 0x260200e0  addiu       $v0, $s0, 0xE0
    ctx->pc = 0x1abe78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
    // 0x1abe7c: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1abe7cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_1abe80:
    // 0x1abe80: 0xdcea0000  ld          $t2, 0x0($a3)
    ctx->pc = 0x1abe80u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1abe84: 0xdce30008  ld          $v1, 0x8($a3)
    ctx->pc = 0x1abe84u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x1abe88: 0xdce60010  ld          $a2, 0x10($a3)
    ctx->pc = 0x1abe88u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x1abe8c: 0xdce80018  ld          $t0, 0x18($a3)
    ctx->pc = 0x1abe8cu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x1abe90: 0xfc8a0000  sd          $t2, 0x0($a0)
    ctx->pc = 0x1abe90u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 10));
    // 0x1abe94: 0xfc830008  sd          $v1, 0x8($a0)
    ctx->pc = 0x1abe94u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 3));
    // 0x1abe98: 0xfc860010  sd          $a2, 0x10($a0)
    ctx->pc = 0x1abe98u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 6));
    // 0x1abe9c: 0xfc880018  sd          $t0, 0x18($a0)
    ctx->pc = 0x1abe9cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 8));
    // 0x1abea0: 0x24e70020  addiu       $a3, $a3, 0x20
    ctx->pc = 0x1abea0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
    // 0x1abea4: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x1abea4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x1abea8: 0x0  nop
    ctx->pc = 0x1abea8u;
    // NOP
    // 0x1abeac: 0x14e2fff4  bne         $a3, $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x1ABEACu;
    {
        const bool branch_taken_0x1abeac = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        if (branch_taken_0x1abeac) {
            ctx->pc = 0x1ABE80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1abe80;
        }
    }
    ctx->pc = 0x1ABEB4u;
label_1abeb4:
    // 0x1abeb4: 0x68e90007  ldl         $t1, 0x7($a3)
    ctx->pc = 0x1abeb4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x1abeb8: 0x6ce90000  ldr         $t1, 0x0($a3)
    ctx->pc = 0x1abeb8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x1abebc: 0x68ea000f  ldl         $t2, 0xF($a3)
    ctx->pc = 0x1abebcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
    // 0x1abec0: 0x6cea0008  ldr         $t2, 0x8($a3)
    ctx->pc = 0x1abec0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
    // 0x1abec4: 0x68e60017  ldl         $a2, 0x17($a3)
    ctx->pc = 0x1abec4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x1abec8: 0x6ce60010  ldr         $a2, 0x10($a3)
    ctx->pc = 0x1abec8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x1abecc: 0x88e8001b  lwl         $t0, 0x1B($a3)
    ctx->pc = 0x1abeccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 27); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 8) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 8, (int32_t)merged); }
    // 0x1abed0: 0x98e80018  lwr         $t0, 0x18($a3)
    ctx->pc = 0x1abed0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 24); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 8) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 8) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 8, merged64); }
    // 0x1abed4: 0xb0890007  sdl         $t1, 0x7($a0)
    ctx->pc = 0x1abed4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1abed8: 0xb4890000  sdr         $t1, 0x0($a0)
    ctx->pc = 0x1abed8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1abedc: 0xb08a000f  sdl         $t2, 0xF($a0)
    ctx->pc = 0x1abedcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1abee0: 0xb48a0008  sdr         $t2, 0x8($a0)
    ctx->pc = 0x1abee0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1abee4: 0xb0860017  sdl         $a2, 0x17($a0)
    ctx->pc = 0x1abee4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1abee8: 0xb4860010  sdr         $a2, 0x10($a0)
    ctx->pc = 0x1abee8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1abeec: 0xa888001b  swl         $t0, 0x1B($a0)
    ctx->pc = 0x1abeecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 27); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 8); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x1abef0: 0x26a34780  addiu       $v1, $s5, 0x4780
    ctx->pc = 0x1abef0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 18304));
    // 0x1abef4: 0x240200fc  addiu       $v0, $zero, 0xFC
    ctx->pc = 0x1abef4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 252));
    // 0x1abef8: 0xb8880018  swr         $t0, 0x18($a0)
    ctx->pc = 0x1abef8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 8); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x1abefc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1ABEFCu;
    {
        const bool branch_taken_0x1abefc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ABF00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABEFCu;
        // 0x1abf00: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1abefc) {
            ctx->pc = 0x1ABF20u;
            goto label_1abf20;
        }
    }
    ctx->pc = 0x1ABF04u;
label_1abf04:
    // 0x1abf04: 0x26440104  addiu       $a0, $s2, 0x104
    ctx->pc = 0x1abf04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 260));
    // 0x1abf08: 0xc08e93e  jal         func_23A4F8
    ctx->pc = 0x1ABF08u;
    SET_GPR_U32(ctx, 31, 0x1ABF10u);
    ctx->pc = 0x1ABF0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ABF08u;
    // 0x1abf0c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A4F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A4F8u, 0x1ABF08u, 0x1ABF10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ABF10u;
label_1abf10:
    // 0x1abf10: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1ABF10u;
    {
        const bool branch_taken_0x1abf10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ABF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABF10u;
        // 0x1abf14: 0xae510004  sw          $s1, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1abf10) {
            ctx->pc = 0x1ABF1Cu;
            goto label_1abf1c;
        }
    }
    ctx->pc = 0x1ABF18u;
label_1abf18:
    // 0x1abf18: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x1abf18u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
label_1abf1c:
    // 0x1abf1c: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1abf1cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_1abf20:
    // 0x1abf20: 0x26b04780  addiu       $s0, $s5, 0x4780
    ctx->pc = 0x1abf20u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 18304));
    // 0x1abf24: 0x24a44980  addiu       $a0, $a1, 0x4980
    ctx->pc = 0x1abf24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 18816));
    // 0x1abf28: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1abf28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1abf2c: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x1abf2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1abf30: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1abf30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1abf34: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1abf34u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1abf38: 0x24080200  addiu       $t0, $zero, 0x200
    ctx->pc = 0x1abf38u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x1abf3c: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1abf3cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1abf40: 0x240a0008  addiu       $t2, $zero, 0x8
    ctx->pc = 0x1abf40u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1abf44: 0xc069e2a  jal         func_1A78A8
    ctx->pc = 0x1ABF44u;
    SET_GPR_U32(ctx, 31, 0x1ABF4Cu);
    ctx->pc = 0x1ABF48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ABF44u;
    // 0x1abf48: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A78A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A78A8u, 0x1ABF44u, 0x1ABF4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ABF4Cu;
label_1abf4c:
    // 0x1abf4c: 0x4430004  bgezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1ABF4Cu;
    {
        const bool branch_taken_0x1abf4c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1abf4c) {
            ctx->pc = 0x1ABF50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1ABF4Cu;
            // 0x1abf50: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1ABF60u;
            goto label_1abf60;
        }
    }
    ctx->pc = 0x1ABF54u;
    // 0x1abf54: 0x3c02fffe  lui         $v0, 0xFFFE
    ctx->pc = 0x1abf54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65534 << 16));
    // 0x1abf58: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1ABF58u;
    {
        const bool branch_taken_0x1abf58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ABF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABF58u;
        // 0x1abf5c: 0x3442ffff  ori         $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1abf58) {
            ctx->pc = 0x1ABF68u;
            goto label_1abf68;
        }
    }
    ctx->pc = 0x1ABF60u;
label_1abf60:
    // 0x1abf60: 0x8e824780  lw          $v0, 0x4780($s4)
    ctx->pc = 0x1abf60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 18304)));
    // 0x1abf64: 0xaec30000  sw          $v1, 0x0($s6)
    ctx->pc = 0x1abf64u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 3));
label_1abf68:
    // 0x1abf68: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x1abf68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1abf6c: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x1abf6cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1abf70: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x1abf70u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1abf74: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x1abf74u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1abf78: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x1abf78u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1abf7c: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1abf7cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1abf80: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x1abf80u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1abf84: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1abf84u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->pc = 0x1abf88u;
}
