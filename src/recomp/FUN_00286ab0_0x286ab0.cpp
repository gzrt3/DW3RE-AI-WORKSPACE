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

// Function: FUN_00286ab0
// Address: 0x286ab0 - 0x286bac
void FUN_00286ab0_0x286ab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00286ab0_0x286ab0");
#endif

    switch (ctx->pc) {
        case 0x286af8u: goto label_286af8;
        case 0x286b10u: goto label_286b10;
        case 0x286b30u: goto label_286b30;
        default: break;
    }

    ctx->pc = 0x286ab0u;

    // 0x286ab0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x286ab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x286ab4: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x286ab4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x286ab8: 0x3c138007  lui         $s3, 0x8007
    ctx->pc = 0x286ab8u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)32775 << 16));
    // 0x286abc: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x286abcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x286ac0: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x286ac0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x286ac4: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x286ac4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286ac8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x286ac8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x286acc: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x286accu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286ad0: 0x8e626700  lw          $v0, 0x6700($s3)
    ctx->pc = 0x286ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x80076700u));
    // 0x286ad4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x286ad4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286ad8: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x286ad8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x286adc: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x286adcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x286ae0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x286ae0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x286ae4: 0x18400028  blez        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x286AE4u;
    {
        const bool branch_taken_0x286ae4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x286AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286AE4u;
        // 0x286ae8: 0xffb10010  sd          $s1, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286ae4) {
            ctx->pc = 0x286B88u;
            goto label_286b88;
        }
    }
    ctx->pc = 0x286AECu;
    // 0x286aec: 0x3c148007  lui         $s4, 0x8007
    ctx->pc = 0x286aecu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)32775 << 16));
    // 0x286af0: 0x24120014  addiu       $s2, $zero, 0x14
    ctx->pc = 0x286af0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x286af4: 0x0  nop
    ctx->pc = 0x286af4u;
    // NOP
label_286af8:
    // 0x286af8: 0x26916740  addiu       $s1, $s4, 0x6740
    ctx->pc = 0x286af8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 26432));
    // 0x286afc: 0x2121018  mult        $v0, $s0, $s2
    ctx->pc = 0x286afcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x286b00: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x286b00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286b04: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x286b04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x286b08: 0xc01d80e  jal         func_076038
    ctx->pc = 0x286B08u;
    SET_GPR_U32(ctx, 31, 0x286B10u);
    ctx->pc = 0x286B0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286B08u;
    // 0x286b0c: 0x94450000  lhu         $a1, 0x0($v0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x76038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x76038u, 0x286B08u, 0x286B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286B10u;
label_286b10:
    // 0x286b10: 0x2a2102a  slt         $v0, $s5, $v0
    ctx->pc = 0x286b10u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x286b14: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x286B14u;
    {
        const bool branch_taken_0x286b14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x286B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286B14u;
        // 0x286b18: 0x8e626700  lw          $v0, 0x6700($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 26368)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286b14) {
            ctx->pc = 0x286B78u;
            goto label_286b78;
        }
    }
    ctx->pc = 0x286B1Cu;
    // 0x286b1c: 0x2444ffff  addiu       $a0, $v0, -0x1
    ctx->pc = 0x286b1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x286b20: 0x90182a  slt         $v1, $a0, $s0
    ctx->pc = 0x286b20u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x286b24: 0x14600018  bnez        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x286B24u;
    {
        const bool branch_taken_0x286b24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x286B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286B24u;
        // 0x286b28: 0x921018  mult        $v0, $a0, $s2 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x286b24) {
            ctx->pc = 0x286B88u;
            goto label_286b88;
        }
    }
    ctx->pc = 0x286B2Cu;
    // 0x286b2c: 0x511821  addu        $v1, $v0, $s1
    ctx->pc = 0x286b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_286b30:
    // 0x286b30: 0x68650007  ldl         $a1, 0x7($v1)
    ctx->pc = 0x286b30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x286b34: 0x6c650000  ldr         $a1, 0x0($v1)
    ctx->pc = 0x286b34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x286b38: 0x6866000f  ldl         $a2, 0xF($v1)
    ctx->pc = 0x286b38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x286b3c: 0x6c660008  ldr         $a2, 0x8($v1)
    ctx->pc = 0x286b3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x286b40: 0x8c670010  lw          $a3, 0x10($v1)
    ctx->pc = 0x286b40u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x286b44: 0xb065001b  sdl         $a1, 0x1B($v1)
    ctx->pc = 0x286b44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 27); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x286b48: 0xb4650014  sdr         $a1, 0x14($v1)
    ctx->pc = 0x286b48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 20); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x286b4c: 0xb0660023  sdl         $a2, 0x23($v1)
    ctx->pc = 0x286b4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 35); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x286b50: 0xb466001c  sdr         $a2, 0x1C($v1)
    ctx->pc = 0x286b50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 28); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x286b54: 0xac670024  sw          $a3, 0x24($v1)
    ctx->pc = 0x286b54u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 7));
    // 0x286b58: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x286b58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x286b5c: 0x2463ffec  addiu       $v1, $v1, -0x14
    ctx->pc = 0x286b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
    // 0x286b60: 0x90102a  slt         $v0, $a0, $s0
    ctx->pc = 0x286b60u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x286b64: 0x0  nop
    ctx->pc = 0x286b64u;
    // NOP
    // 0x286b68: 0x1040fff1  beqz        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x286B68u;
    {
        const bool branch_taken_0x286b68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x286b68) {
            ctx->pc = 0x286B30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_286b30;
        }
    }
    ctx->pc = 0x286B70u;
    // 0x286b70: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x286B70u;
    {
        const bool branch_taken_0x286b70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x286B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286B70u;
        // 0x286b74: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286b70) {
            ctx->pc = 0x286B8Cu;
            goto label_286b8c;
        }
    }
    ctx->pc = 0x286B78u;
label_286b78:
    // 0x286b78: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x286b78u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x286b7c: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x286b7cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x286b80: 0x1440ffdd  bnez        $v0, . + 4 + (-0x23 << 2)
    ctx->pc = 0x286B80u;
    {
        const bool branch_taken_0x286b80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x286B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286B80u;
        // 0x286b84: 0x24120014  addiu       $s2, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286b80) {
            ctx->pc = 0x286AF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_286af8;
        }
    }
    ctx->pc = 0x286B88u;
label_286b88:
    // 0x286b88: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x286b88u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_286b8c:
    // 0x286b8c: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x286b8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x286b90: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x286b90u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x286b94: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x286b94u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x286b98: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x286b98u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x286b9c: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x286b9cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x286ba0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x286ba0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x286ba4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x286ba4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x286ba8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x286ba8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x286bacu;
}
