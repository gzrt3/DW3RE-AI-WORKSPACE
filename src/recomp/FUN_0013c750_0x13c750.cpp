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

// Function: FUN_0013c750
// Address: 0x13c750 - 0x13c814
void FUN_0013c750_0x13c750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0013c750_0x13c750");
#endif

    switch (ctx->pc) {
        case 0x13c764u: goto label_13c764;
        default: break;
    }

    ctx->pc = 0x13c750u;

    // 0x13c750: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x13c750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x13c754: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x13c754u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x13c758: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13c758u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x13c75c: 0xc04f294  jal         func_13CA50
    ctx->pc = 0x13C75Cu;
    SET_GPR_U32(ctx, 31, 0x13C764u);
    ctx->pc = 0x13C760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C75Cu;
    // 0x13c760: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13CA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13CA50u, 0x13C75Cu, 0x13C764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C764u;
label_13c764:
    // 0x13c764: 0x960502f8  lhu         $a1, 0x2F8($s0)
    ctx->pc = 0x13c764u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 760)));
    // 0x13c768: 0x10a00029  beqz        $a1, . + 4 + (0x29 << 2)
    ctx->pc = 0x13C768u;
    {
        const bool branch_taken_0x13c768 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x13c768) {
            ctx->pc = 0x13C810u;
            goto label_13c810;
        }
    }
    ctx->pc = 0x13C770u;
    // 0x13c770: 0x920402e4  lbu         $a0, 0x2E4($s0)
    ctx->pc = 0x13c770u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 740)));
    // 0x13c774: 0x27838118  addiu       $v1, $gp, -0x7EE8
    ctx->pc = 0x13c774u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934808));
    // 0x13c778: 0x43080  sll         $a2, $a0, 2
    ctx->pc = 0x13c778u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x13c77c: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x13c77cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x13c780: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x13c780u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13c784: 0x10a30012  beq         $a1, $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x13C784u;
    {
        const bool branch_taken_0x13c784 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x13C788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C784u;
        // 0x13c788: 0x27848120  addiu       $a0, $gp, -0x7EE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934816));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c784) {
            ctx->pc = 0x13C7D0u;
            goto label_13c7d0;
        }
    }
    ctx->pc = 0x13C78Cu;
    // 0x13c78c: 0x27848120  addiu       $a0, $gp, -0x7EE0
    ctx->pc = 0x13c78cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934816));
    // 0x13c790: 0x861821  addu        $v1, $a0, $a2
    ctx->pc = 0x13c790u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x13c794: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x13c794u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13c798: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x13C798u;
    {
        const bool branch_taken_0x13c798 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x13c798) {
            ctx->pc = 0x13C7B8u;
            goto label_13c7b8;
        }
    }
    ctx->pc = 0x13C7A0u;
    // 0x13c7a0: 0xa20002e3  sb          $zero, 0x2E3($s0)
    ctx->pc = 0x13c7a0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 739), (uint8_t)GPR_U32(ctx, 0));
    // 0x13c7a4: 0x920302e4  lbu         $v1, 0x2E4($s0)
    ctx->pc = 0x13c7a4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 740)));
    // 0x13c7a8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x13c7a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x13c7ac: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x13c7acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x13c7b0: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x13C7B0u;
    {
        const bool branch_taken_0x13c7b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13C7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C7B0u;
        // 0x13c7b4: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c7b0) {
            ctx->pc = 0x13C810u;
            goto label_13c810;
        }
    }
    ctx->pc = 0x13C7B8u;
label_13c7b8:
    // 0x13c7b8: 0x920302e3  lbu         $v1, 0x2E3($s0)
    ctx->pc = 0x13c7b8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 739)));
    // 0x13c7bc: 0x18600014  blez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x13C7BCu;
    {
        const bool branch_taken_0x13c7bc = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x13c7bc) {
            ctx->pc = 0x13C810u;
            goto label_13c810;
        }
    }
    ctx->pc = 0x13C7C4u;
    // 0x13c7c4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x13c7c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x13c7c8: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x13C7C8u;
    {
        const bool branch_taken_0x13c7c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13C7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C7C8u;
        // 0x13c7cc: 0xa20302e3  sb          $v1, 0x2E3($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 739), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c7c8) {
            ctx->pc = 0x13C810u;
            goto label_13c810;
        }
    }
    ctx->pc = 0x13C7D0u;
label_13c7d0:
    // 0x13c7d0: 0x861821  addu        $v1, $a0, $a2
    ctx->pc = 0x13c7d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x13c7d4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x13c7d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13c7d8: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x13C7D8u;
    {
        const bool branch_taken_0x13c7d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x13C7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C7D8u;
        // 0x13c7dc: 0x24030080  addiu       $v1, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c7d8) {
            ctx->pc = 0x13C7F8u;
            goto label_13c7f8;
        }
    }
    ctx->pc = 0x13C7E0u;
    // 0x13c7e0: 0xa20302e3  sb          $v1, 0x2E3($s0)
    ctx->pc = 0x13c7e0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 739), (uint8_t)GPR_U32(ctx, 3));
    // 0x13c7e4: 0x920302e4  lbu         $v1, 0x2E4($s0)
    ctx->pc = 0x13c7e4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 740)));
    // 0x13c7e8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x13c7e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x13c7ec: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x13c7ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x13c7f0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x13C7F0u;
    {
        const bool branch_taken_0x13c7f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13C7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C7F0u;
        // 0x13c7f4: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c7f0) {
            ctx->pc = 0x13C810u;
            goto label_13c810;
        }
    }
    ctx->pc = 0x13C7F8u;
label_13c7f8:
    // 0x13c7f8: 0x920302e3  lbu         $v1, 0x2E3($s0)
    ctx->pc = 0x13c7f8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 739)));
    // 0x13c7fc: 0x28610080  slti        $at, $v1, 0x80
    ctx->pc = 0x13c7fcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x13c800: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x13C800u;
    {
        const bool branch_taken_0x13c800 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x13c800) {
            ctx->pc = 0x13C810u;
            goto label_13c810;
        }
    }
    ctx->pc = 0x13C808u;
    // 0x13c808: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x13c808u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x13c80c: 0xa20302e3  sb          $v1, 0x2E3($s0)
    ctx->pc = 0x13c80cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 739), (uint8_t)GPR_U32(ctx, 3));
label_13c810:
    // 0x13c810: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x13c810u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->pc = 0x13c814u;
}
