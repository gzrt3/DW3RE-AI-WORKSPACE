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

// Function: FUN_00286cf8
// Address: 0x286cf8 - 0x286e90
void FUN_00286cf8_0x286cf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00286cf8_0x286cf8");
#endif

    switch (ctx->pc) {
        case 0x286d30u: goto label_286d30;
        case 0x286da8u: goto label_286da8;
        case 0x286e38u: goto label_286e38;
        case 0x286e64u: goto label_286e64;
        default: break;
    }

    ctx->pc = 0x286cf8u;

    // 0x286cf8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x286cf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x286cfc: 0x3c0c8007  lui         $t4, 0x8007
    ctx->pc = 0x286cfcu;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)32775 << 16));
    // 0x286d00: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x286d00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x286d04: 0x80682d  daddu       $t5, $a0, $zero
    ctx->pc = 0x286d04u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286d08: 0x8d826700  lw          $v0, 0x6700($t4)
    ctx->pc = 0x286d08u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x80076700u));
    // 0x286d0c: 0x180882d  daddu       $s1, $t4, $zero
    ctx->pc = 0x286d0cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286d10: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x286d10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x286d14: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x286d14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x286d18: 0x18400058  blez        $v0, . + 4 + (0x58 << 2)
    ctx->pc = 0x286D18u;
    {
        const bool branch_taken_0x286d18 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x286D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286D18u;
        // 0x286d1c: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286d18) {
            ctx->pc = 0x286E7Cu;
            goto label_286e7c;
        }
    }
    ctx->pc = 0x286D20u;
    // 0x286d20: 0x18400056  blez        $v0, . + 4 + (0x56 << 2)
    ctx->pc = 0x286D20u;
    {
        const bool branch_taken_0x286d20 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x286D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286D20u;
        // 0x286d24: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286d20) {
            ctx->pc = 0x286E7Cu;
            goto label_286e7c;
        }
    }
    ctx->pc = 0x286D28u;
    // 0x286d28: 0x3c0b8007  lui         $t3, 0x8007
    ctx->pc = 0x286d28u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)32775 << 16));
    // 0x286d2c: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x286d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_286d30:
    // 0x286d30: 0x25656740  addiu       $a1, $t3, 0x6740
    ctx->pc = 0x286d30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 11), 26432));
    // 0x286d34: 0x1032018  mult        $a0, $t0, $v1
    ctx->pc = 0x286d34u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x286d38: 0xa41021  addu        $v0, $a1, $a0
    ctx->pc = 0x286d38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x286d3c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x286d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x286d40: 0x15a3004a  bne         $t5, $v1, . + 4 + (0x4A << 2)
    ctx->pc = 0x286D40u;
    {
        const bool branch_taken_0x286d40 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 3));
        ctx->pc = 0x286D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286D40u;
        // 0x286d44: 0x8d826700  lw          $v0, 0x6700($t4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 26368)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286d40) {
            ctx->pc = 0x286E6Cu;
            goto label_286e6c;
        }
    }
    ctx->pc = 0x286D48u;
    // 0x286d48: 0x3c03b000  lui         $v1, 0xB000
    ctx->pc = 0x286d48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)45056 << 16));
    // 0x286d4c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x286d4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x286d50: 0x34631820  ori         $v1, $v1, 0x1820
    ctx->pc = 0x286d50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)6176);
    // 0x286d54: 0x94850000  lhu         $a1, 0x0($a0)
    ctx->pc = 0x286d54u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x286d58: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x286d58u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0xB0001820u));
    // 0x286d5c: 0x14a20008  bne         $a1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x286D5Cu;
    {
        const bool branch_taken_0x286d5c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x286D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286D5Cu;
        // 0x286d60: 0x24030014  addiu       $v1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286d5c) {
            ctx->pc = 0x286D80u;
            goto label_286d80;
        }
    }
    ctx->pc = 0x286D64u;
    // 0x286d64: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x286d64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x286d68: 0x3442f000  ori         $v0, $v0, 0xF000
    ctx->pc = 0x286d68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)61440);
    // 0x286d6c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x286d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000F000u));
    // 0x286d70: 0x30631000  andi        $v1, $v1, 0x1000
    ctx->pc = 0x286d70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4096);
    // 0x286d74: 0x14600043  bnez        $v1, . + 4 + (0x43 << 2)
    ctx->pc = 0x286D74u;
    {
        const bool branch_taken_0x286d74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x286D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286D74u;
        // 0x286d78: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286d74) {
            ctx->pc = 0x286E84u;
            goto label_286e84;
        }
    }
    ctx->pc = 0x286D7Cu;
    // 0x286d7c: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x286d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_286d80:
    // 0x286d80: 0x8d896700  lw          $t1, 0x6700($t4)
    ctx->pc = 0x286d80u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 26368)));
    // 0x286d84: 0x1031818  mult        $v1, $t0, $v1
    ctx->pc = 0x286d84u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x286d88: 0x25646740  addiu       $a0, $t3, 0x6740
    ctx->pc = 0x286d88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), 26432));
    // 0x286d8c: 0x2522ffff  addiu       $v0, $t1, -0x1
    ctx->pc = 0x286d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x286d90: 0x100382d  daddu       $a3, $t0, $zero
    ctx->pc = 0x286d90u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286d94: 0x102102a  slt         $v0, $t0, $v0
    ctx->pc = 0x286d94u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x286d98: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x286d98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x286d9c: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x286D9Cu;
    {
        const bool branch_taken_0x286d9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x286DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286D9Cu;
        // 0x286da0: 0x94700002  lhu         $s0, 0x2($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286d9c) {
            ctx->pc = 0x286E04u;
            goto label_286e04;
        }
    }
    ctx->pc = 0x286DA4u;
    // 0x286da4: 0x3c0a8007  lui         $t2, 0x8007
    ctx->pc = 0x286da4u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)32775 << 16));
label_286da8:
    // 0x286da8: 0x24e30001  addiu       $v1, $a3, 0x1
    ctx->pc = 0x286da8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x286dac: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x286dacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x286db0: 0x651018  mult        $v0, $v1, $a1
    ctx->pc = 0x286db0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x286db4: 0xe52018  mult        $a0, $a3, $a1
    ctx->pc = 0x286db4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x286db8: 0x25666740  addiu       $a2, $t3, 0x6740
    ctx->pc = 0x286db8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 11), 26432));
    // 0x286dbc: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x286dbcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286dc0: 0x462821  addu        $a1, $v0, $a2
    ctx->pc = 0x286dc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x286dc4: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x286dc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x286dc8: 0x2522ffff  addiu       $v0, $t1, -0x1
    ctx->pc = 0x286dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x286dcc: 0x68a30007  ldl         $v1, 0x7($a1)
    ctx->pc = 0x286dccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x286dd0: 0x6ca30000  ldr         $v1, 0x0($a1)
    ctx->pc = 0x286dd0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x286dd4: 0x68a6000f  ldl         $a2, 0xF($a1)
    ctx->pc = 0x286dd4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x286dd8: 0x6ca60008  ldr         $a2, 0x8($a1)
    ctx->pc = 0x286dd8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x286ddc: 0x8cae0010  lw          $t6, 0x10($a1)
    ctx->pc = 0x286ddcu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x286de0: 0xb0830007  sdl         $v1, 0x7($a0)
    ctx->pc = 0x286de0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x286de4: 0xb4830000  sdr         $v1, 0x0($a0)
    ctx->pc = 0x286de4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x286de8: 0xb086000f  sdl         $a2, 0xF($a0)
    ctx->pc = 0x286de8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x286dec: 0xb4860008  sdr         $a2, 0x8($a0)
    ctx->pc = 0x286decu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x286df0: 0xe2102a  slt         $v0, $a3, $v0
    ctx->pc = 0x286df0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x286df4: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x286DF4u;
    {
        const bool branch_taken_0x286df4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x286DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286DF4u;
        // 0x286df8: 0xac8e0010  sw          $t6, 0x10($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286df4) {
            ctx->pc = 0x286DA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_286da8;
        }
    }
    ctx->pc = 0x286DFCu;
    // 0x286dfc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x286DFCu;
    {
        const bool branch_taken_0x286dfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x286E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286DFCu;
        // 0x286e00: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286dfc) {
            ctx->pc = 0x286E0Cu;
            goto label_286e0c;
        }
    }
    ctx->pc = 0x286E04u;
label_286e04:
    // 0x286e04: 0x3c0a8007  lui         $t2, 0x8007
    ctx->pc = 0x286e04u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)32775 << 16));
    // 0x286e08: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x286e08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_286e0c:
    // 0x286e0c: 0x8d846700  lw          $a0, 0x6700($t4)
    ctx->pc = 0x286e0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 26368)));
    // 0x286e10: 0xdd436708  ld          $v1, 0x6708($t2)
    ctx->pc = 0x286e10u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 10), 26376)));
    // 0x286e14: 0x1a21014  dsllv       $v0, $v0, $t5
    ctx->pc = 0x286e14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 13) & 0x3F));
    // 0x286e18: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x286e18u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x286e1c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x286e1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x286e20: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x286e20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x286e24: 0xad846700  sw          $a0, 0x6700($t4)
    ctx->pc = 0x286e24u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 26368), GPR_U32(ctx, 4));
    // 0x286e28: 0x15000003  bnez        $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x286E28u;
    {
        const bool branch_taken_0x286e28 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x286E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286E28u;
        // 0x286e2c: 0xfd436708  sd          $v1, 0x6708($t2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 10), 26376), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286e28) {
            ctx->pc = 0x286E38u;
            goto label_286e38;
        }
    }
    ctx->pc = 0x286E30u;
    // 0x286e30: 0xc01d918  jal         func_076460
    ctx->pc = 0x286E30u;
    SET_GPR_U32(ctx, 31, 0x286E38u);
    ctx->pc = 0x286E34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286E30u;
    // 0x286e34: 0x95646740  lhu         $a0, 0x6740($t3) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 26432)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x76460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x76460u, 0x286E30u, 0x286E38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286E38u;
label_286e38:
    // 0x286e38: 0x8e226700  lw          $v0, 0x6700($s1)
    ctx->pc = 0x286e38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 26368)));
    // 0x286e3c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x286E3Cu;
    {
        const bool branch_taken_0x286e3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x286E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286E3Cu;
        // 0x286e40: 0x24030083  addiu       $v1, $zero, 0x83 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 131));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286e3c) {
            ctx->pc = 0x286E50u;
            goto label_286e50;
        }
    }
    ctx->pc = 0x286E44u;
    // 0x286e44: 0x3c02b000  lui         $v0, 0xB000
    ctx->pc = 0x286e44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45056 << 16));
    // 0x286e48: 0x34421810  ori         $v0, $v0, 0x1810
    ctx->pc = 0x286e48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6160);
    // 0x286e4c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x286e4cu;
    runtime->Store32(rdram, ctx, 0xB0001810u, GPR_U32(ctx, 3));
label_286e50:
    // 0x286e50: 0x3c02b000  lui         $v0, 0xB000
    ctx->pc = 0x286e50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45056 << 16));
    // 0x286e54: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x286e54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286e58: 0x34421800  ori         $v0, $v0, 0x1800
    ctx->pc = 0x286e58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6144);
    // 0x286e5c: 0xc01d80e  jal         func_076038
    ctx->pc = 0x286E5Cu;
    SET_GPR_U32(ctx, 31, 0x286E64u);
    ctx->pc = 0x286E60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286E5Cu;
    // 0x286e60: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x76038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x76038u, 0x286E5Cu, 0x286E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286E64u;
label_286e64:
    // 0x286e64: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x286E64u;
    {
        const bool branch_taken_0x286e64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x286E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286E64u;
        // 0x286e68: 0x503023  subu        $a2, $v0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286e64) {
            ctx->pc = 0x286E7Cu;
            goto label_286e7c;
        }
    }
    ctx->pc = 0x286E6Cu;
label_286e6c:
    // 0x286e6c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x286e6cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x286e70: 0x102102a  slt         $v0, $t0, $v0
    ctx->pc = 0x286e70u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x286e74: 0x1440ffae  bnez        $v0, . + 4 + (-0x52 << 2)
    ctx->pc = 0x286E74u;
    {
        const bool branch_taken_0x286e74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x286E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286E74u;
        // 0x286e78: 0x24030014  addiu       $v1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286e74) {
            ctx->pc = 0x286D30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_286d30;
        }
    }
    ctx->pc = 0x286E7Cu;
label_286e7c:
    // 0x286e7c: 0xf  sync
    ctx->pc = 0x286e7cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x286e80: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x286e80u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_286e84:
    // 0x286e84: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x286e84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x286e88: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x286e88u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x286e8c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x286e8cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x286e90u;
}
