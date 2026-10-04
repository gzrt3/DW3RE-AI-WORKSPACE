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

// Function: FUN_00286ee0
// Address: 0x286ee0 - 0x287090
void FUN_00286ee0_0x286ee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00286ee0_0x286ee0");
#endif

    switch (ctx->pc) {
        case 0x286f18u: goto label_286f18;
        case 0x286f4cu: goto label_286f4c;
        case 0x286f68u: goto label_286f68;
        case 0x286fc8u: goto label_286fc8;
        case 0x287054u: goto label_287054;
        case 0x287078u: goto label_287078;
        default: break;
    }

    ctx->pc = 0x286ee0u;

    // 0x286ee0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x286ee0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x286ee4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x286ee4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286ee8: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x286ee8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x286eec: 0xffb70090  sd          $s7, 0x90($sp)
    ctx->pc = 0x286eecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 23));
    // 0x286ef0: 0xffb60080  sd          $s6, 0x80($sp)
    ctx->pc = 0x286ef0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 22));
    // 0x286ef4: 0xffb50070  sd          $s5, 0x70($sp)
    ctx->pc = 0x286ef4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 21));
    // 0x286ef8: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x286ef8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x286efc: 0xffb30050  sd          $s3, 0x50($sp)
    ctx->pc = 0x286efcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
    // 0x286f00: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x286f00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x286f04: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x286f04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x286f08: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x286f08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x286f0c: 0x3c118007  lui         $s1, 0x8007
    ctx->pc = 0x286f0cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)32775 << 16));
    // 0x286f10: 0x3c128007  lui         $s2, 0x8007
    ctx->pc = 0x286f10u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)32775 << 16));
    // 0x286f14: 0x0  nop
    ctx->pc = 0x286f14u;
    // NOP
label_286f18:
    // 0x286f18: 0x8e226700  lw          $v0, 0x6700($s1)
    ctx->pc = 0x286f18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 26368)));
    // 0x286f1c: 0x102102a  slt         $v0, $t0, $v0
    ctx->pc = 0x286f1cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x286f20: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x286F20u;
    {
        const bool branch_taken_0x286f20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x286F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286F20u;
        // 0x286f24: 0x24030014  addiu       $v1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286f20) {
            ctx->pc = 0x286F4Cu;
            goto label_286f4c;
        }
    }
    ctx->pc = 0x286F28u;
    // 0x286f28: 0x26446740  addiu       $a0, $s2, 0x6740
    ctx->pc = 0x286f28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 26432));
    // 0x286f2c: 0x1031818  mult        $v1, $t0, $v1
    ctx->pc = 0x286f2cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x286f30: 0x96456740  lhu         $a1, 0x6740($s2)
    ctx->pc = 0x286f30u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 26432)));
    // 0x286f34: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x286f34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x286f38: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x286f38u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x286f3c: 0x10a2fff6  beq         $a1, $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x286F3Cu;
    {
        const bool branch_taken_0x286f3c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x286F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286F3Cu;
        // 0x286f40: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286f3c) {
            ctx->pc = 0x286F18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_286f18;
        }
    }
    ctx->pc = 0x286F44u;
    // 0x286f44: 0xc01d918  jal         func_076460
    ctx->pc = 0x286F44u;
    SET_GPR_U32(ctx, 31, 0x286F4Cu);
    ctx->pc = 0x286F48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286F44u;
    // 0x286f48: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x76460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x76460u, 0x286F44u, 0x286F4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286F4Cu;
label_286f4c:
    // 0x286f4c: 0x3c028007  lui         $v0, 0x8007
    ctx->pc = 0x286f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32775 << 16));
    // 0x286f50: 0x220b02d  daddu       $s6, $s1, $zero
    ctx->pc = 0x286f50u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286f54: 0x24546740  addiu       $s4, $v0, 0x6740
    ctx->pc = 0x286f54u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 26432));
    // 0x286f58: 0x24130014  addiu       $s3, $zero, 0x14
    ctx->pc = 0x286f58u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x286f5c: 0x3c158007  lui         $s5, 0x8007
    ctx->pc = 0x286f5cu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)32775 << 16));
    // 0x286f60: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x286F60u;
    {
        const bool branch_taken_0x286f60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x286F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286F60u;
        // 0x286f64: 0x24170001  addiu       $s7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286f60) {
            ctx->pc = 0x286F74u;
            goto label_286f74;
        }
    }
    ctx->pc = 0x286F68u;
label_286f68:
    // 0x286f68: 0x96426740  lhu         $v0, 0x6740($s2)
    ctx->pc = 0x286f68u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 26432)));
    // 0x286f6c: 0x1462003e  bne         $v1, $v0, . + 4 + (0x3E << 2)
    ctx->pc = 0x286F6Cu;
    {
        const bool branch_taken_0x286f6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x286F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286F6Cu;
        // 0x286f70: 0x8e226700  lw          $v0, 0x6700($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 26368)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286f6c) {
            ctx->pc = 0x287068u;
            goto label_287068;
        }
    }
    ctx->pc = 0x286F74u;
label_286f74:
    // 0x286f74: 0x8ec26700  lw          $v0, 0x6700($s6)
    ctx->pc = 0x286f74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 26368)));
    // 0x286f78: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x286f78u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286f7c: 0x26466740  addiu       $a2, $s2, 0x6740
    ctx->pc = 0x286f7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 26432));
    // 0x286f80: 0x68c30007  ldl         $v1, 0x7($a2)
    ctx->pc = 0x286f80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x286f84: 0x6cc30000  ldr         $v1, 0x0($a2)
    ctx->pc = 0x286f84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x286f88: 0x68c4000f  ldl         $a0, 0xF($a2)
    ctx->pc = 0x286f88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x286f8c: 0x6cc40008  ldr         $a0, 0x8($a2)
    ctx->pc = 0x286f8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x286f90: 0x8cc50010  lw          $a1, 0x10($a2)
    ctx->pc = 0x286f90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x286f94: 0xb3a30007  sdl         $v1, 0x7($sp)
    ctx->pc = 0x286f94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x286f98: 0xb7a30000  sdr         $v1, 0x0($sp)
    ctx->pc = 0x286f98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x286f9c: 0xb3a4000f  sdl         $a0, 0xF($sp)
    ctx->pc = 0x286f9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x286fa0: 0xb7a40008  sdr         $a0, 0x8($sp)
    ctx->pc = 0x286fa0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x286fa4: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x286fa4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x286fa8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x286fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x286fac: 0x1840001a  blez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x286FACu;
    {
        const bool branch_taken_0x286fac = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x286FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286FACu;
        // 0x286fb0: 0xaec26700  sw          $v0, 0x6700($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 26368), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286fac) {
            ctx->pc = 0x287018u;
            goto label_287018;
        }
    }
    ctx->pc = 0x286FB4u;
    // 0x286fb4: 0x8e296700  lw          $t1, 0x6700($s1)
    ctx->pc = 0x286fb4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 26368)));
    // 0x286fb8: 0x8faa0010  lw          $t2, 0x10($sp)
    ctx->pc = 0x286fb8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x286fbc: 0x8fa60004  lw          $a2, 0x4($sp)
    ctx->pc = 0x286fbcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x286fc0: 0x97a70000  lhu         $a3, 0x0($sp)
    ctx->pc = 0x286fc0u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x286fc4: 0x0  nop
    ctx->pc = 0x286fc4u;
    // NOP
label_286fc8:
    // 0x286fc8: 0x1131818  mult        $v1, $t0, $s3
    ctx->pc = 0x286fc8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x286fcc: 0x25020001  addiu       $v0, $t0, 0x1
    ctx->pc = 0x286fccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x286fd0: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x286fd0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286fd4: 0x742821  addu        $a1, $v1, $s4
    ctx->pc = 0x286fd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x286fd8: 0x531818  mult        $v1, $v0, $s3
    ctx->pc = 0x286fd8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x286fdc: 0x742021  addu        $a0, $v1, $s4
    ctx->pc = 0x286fdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x286fe0: 0x688b0007  ldl         $t3, 0x7($a0)
    ctx->pc = 0x286fe0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
    // 0x286fe4: 0x6c8b0000  ldr         $t3, 0x0($a0)
    ctx->pc = 0x286fe4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem >> shift)); }
    // 0x286fe8: 0x688c000f  ldl         $t4, 0xF($a0)
    ctx->pc = 0x286fe8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem << shift)); }
    // 0x286fec: 0x6c8c0008  ldr         $t4, 0x8($a0)
    ctx->pc = 0x286fecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
    // 0x286ff0: 0x8c8d0010  lw          $t5, 0x10($a0)
    ctx->pc = 0x286ff0u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x286ff4: 0xb0ab0007  sdl         $t3, 0x7($a1)
    ctx->pc = 0x286ff4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x286ff8: 0xb4ab0000  sdr         $t3, 0x0($a1)
    ctx->pc = 0x286ff8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x286ffc: 0xb0ac000f  sdl         $t4, 0xF($a1)
    ctx->pc = 0x286ffcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x287000: 0xb4ac0008  sdr         $t4, 0x8($a1)
    ctx->pc = 0x287000u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x287004: 0x109182a  slt         $v1, $t0, $t1
    ctx->pc = 0x287004u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
    // 0x287008: 0x1460ffef  bnez        $v1, . + 4 + (-0x11 << 2)
    ctx->pc = 0x287008u;
    {
        const bool branch_taken_0x287008 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x28700Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287008u;
        // 0x28700c: 0xacad0010  sw          $t5, 0x10($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287008) {
            ctx->pc = 0x286FC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_286fc8;
        }
    }
    ctx->pc = 0x287010u;
    // 0x287010: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x287010u;
    {
        const bool branch_taken_0x287010 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x287010) {
            ctx->pc = 0x287024u;
            goto label_287024;
        }
    }
    ctx->pc = 0x287018u;
label_287018:
    // 0x287018: 0x8faa0010  lw          $t2, 0x10($sp)
    ctx->pc = 0x287018u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28701c: 0x8fa60004  lw          $a2, 0x4($sp)
    ctx->pc = 0x28701cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x287020: 0x97a70000  lhu         $a3, 0x0($sp)
    ctx->pc = 0x287020u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
label_287024:
    // 0x287024: 0x380802d  daddu       $s0, $gp, $zero
    ctx->pc = 0x287024u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287028: 0x140e02d  daddu       $gp, $t2, $zero
    ctx->pc = 0x287028u;
    SET_GPR_U64(ctx, 28, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28702c: 0xdea36708  ld          $v1, 0x6708($s5)
    ctx->pc = 0x28702cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 21), 26376)));
    // 0x287030: 0xd71014  dsllv       $v0, $s7, $a2
    ctx->pc = 0x287030u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) << (GPR_U32(ctx, 6) & 0x3F));
    // 0x287034: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x287034u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x287038: 0x3c040008  lui         $a0, 0x8
    ctx->pc = 0x287038u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8 << 16));
    // 0x28703c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x28703cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x287040: 0x8fa50008  lw          $a1, 0x8($sp)
    ctx->pc = 0x287040u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x287044: 0x8fa8000c  lw          $t0, 0xC($sp)
    ctx->pc = 0x287044u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x287048: 0x34842000  ori         $a0, $a0, 0x2000
    ctx->pc = 0x287048u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8192);
    // 0x28704c: 0xc01d9a0  jal         func_076680
    ctx->pc = 0x28704Cu;
    SET_GPR_U32(ctx, 31, 0x287054u);
    ctx->pc = 0x287050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28704Cu;
    // 0x287050: 0xfea36708  sd          $v1, 0x6708($s5) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 21), 26376), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x76680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x76680u, 0x28704Cu, 0x287054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287054u;
label_287054:
    // 0x287054: 0x200e02d  daddu       $gp, $s0, $zero
    ctx->pc = 0x287054u;
    SET_GPR_U64(ctx, 28, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287058: 0x8e226700  lw          $v0, 0x6700($s1)
    ctx->pc = 0x287058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 26368)));
    // 0x28705c: 0x1c40ffc2  bgtz        $v0, . + 4 + (-0x3E << 2)
    ctx->pc = 0x28705Cu;
    {
        const bool branch_taken_0x28705c = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x287060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28705Cu;
        // 0x287060: 0x97a30000  lhu         $v1, 0x0($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28705c) {
            ctx->pc = 0x286F68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_286f68;
        }
    }
    ctx->pc = 0x287064u;
    // 0x287064: 0x8e226700  lw          $v0, 0x6700($s1)
    ctx->pc = 0x287064u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 26368)));
label_287068:
    // 0x287068: 0x18400005  blez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x287068u;
    {
        const bool branch_taken_0x287068 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x28706Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287068u;
        // 0x28706c: 0x24030483  addiu       $v1, $zero, 0x483 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1155));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287068) {
            ctx->pc = 0x287080u;
            goto label_287080;
        }
    }
    ctx->pc = 0x287070u;
    // 0x287070: 0xc01d918  jal         func_076460
    ctx->pc = 0x287070u;
    SET_GPR_U32(ctx, 31, 0x287078u);
    ctx->pc = 0x287074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287070u;
    // 0x287074: 0x96446740  lhu         $a0, 0x6740($s2) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 26432)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x76460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x76460u, 0x287070u, 0x287078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287078u;
label_287078:
    // 0x287078: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x287078u;
    {
        const bool branch_taken_0x287078 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x287078) {
            ctx->pc = 0x28708Cu;
            goto label_28708c;
        }
    }
    ctx->pc = 0x287080u;
label_287080:
    // 0x287080: 0x3c02b000  lui         $v0, 0xB000
    ctx->pc = 0x287080u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45056 << 16));
    // 0x287084: 0x34421810  ori         $v0, $v0, 0x1810
    ctx->pc = 0x287084u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6160);
    // 0x287088: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x287088u;
    runtime->Store32(rdram, ctx, 0xB0001810u, GPR_U32(ctx, 3));
label_28708c:
    // 0x28708c: 0xf  sync
    ctx->pc = 0x28708cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    ctx->pc = 0x287090u;
}
