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

// Function: FUN_00238938
// Address: 0x238938 - 0x238a28
void FUN_00238938_0x238938(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00238938_0x238938");
#endif

    switch (ctx->pc) {
        case 0x238964u: goto label_238964;
        case 0x238968u: goto label_238968;
        case 0x238978u: goto label_238978;
        case 0x2389b8u: goto label_2389b8;
        default: break;
    }

    ctx->pc = 0x238938u;

    // 0x238938: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x238938u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x23893c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x23893cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x238940: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x238940u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238944: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x238944u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x238948: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x238948u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x23894c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x23894cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x238950: 0x8e220038  lw          $v0, 0x38($s1)
    ctx->pc = 0x238950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x238954: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x238954u;
    {
        const bool branch_taken_0x238954 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x238958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238954u;
        // 0x238958: 0x263001d8  addiu       $s0, $s1, 0x1D8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 472));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238954) {
            ctx->pc = 0x238964u;
            goto label_238964;
        }
    }
    ctx->pc = 0x23895Cu;
    // 0x23895c: 0xc08e29c  jal         func_238A70
    ctx->pc = 0x23895Cu;
    SET_GPR_U32(ctx, 31, 0x238964u);
    ctx->pc = 0x238A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238A70u, 0x23895Cu, 0x238964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238964u;
label_238964:
    // 0x238964: 0x2412000c  addiu       $s2, $zero, 0xC
    ctx->pc = 0x238964u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_238968:
    // 0x238968: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x238968u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x23896c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x23896cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x238970: 0x460000a  bltz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x238970u;
    {
        const bool branch_taken_0x238970 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x238974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238970u;
        // 0x238974: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238970) {
            ctx->pc = 0x23899Cu;
            goto label_23899c;
        }
    }
    ctx->pc = 0x238978u;
label_238978:
    // 0x238978: 0x8482000c  lh          $v0, 0xC($a0)
    ctx->pc = 0x238978u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x23897c: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x23897Cu;
    {
        const bool branch_taken_0x23897c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x238980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23897Cu;
        // 0x238980: 0x2463ffff  addiu       $v1, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23897c) {
            ctx->pc = 0x2389D8u;
            goto label_2389d8;
        }
    }
    ctx->pc = 0x238984u;
    // 0x238984: 0x0  nop
    ctx->pc = 0x238984u;
    // NOP
    // 0x238988: 0x0  nop
    ctx->pc = 0x238988u;
    // NOP
    // 0x23898c: 0x0  nop
    ctx->pc = 0x23898cu;
    // NOP
    // 0x238990: 0x0  nop
    ctx->pc = 0x238990u;
    // NOP
    // 0x238994: 0x461fff8  bgez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x238994u;
    {
        const bool branch_taken_0x238994 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x238998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238994u;
        // 0x238998: 0x24840058  addiu       $a0, $a0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 88));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238994) {
            ctx->pc = 0x238978u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_238978;
        }
    }
    ctx->pc = 0x23899Cu;
label_23899c:
    // 0x23899c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x23899cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2389a0: 0x0  nop
    ctx->pc = 0x2389a0u;
    // NOP
    // 0x2389a4: 0x5480fff0  bnel        $a0, $zero, . + 4 + (-0x10 << 2)
    ctx->pc = 0x2389A4u;
    {
        const bool branch_taken_0x2389a4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2389a4) {
            ctx->pc = 0x2389A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2389A4u;
            // 0x2389a8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x238968u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_238968;
        }
    }
    ctx->pc = 0x2389ACu;
    // 0x2389ac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2389acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2389b0: 0xc08e230  jal         func_2388C0
    ctx->pc = 0x2389B0u;
    SET_GPR_U32(ctx, 31, 0x2389B8u);
    ctx->pc = 0x2389B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2389B0u;
    // 0x2389b4: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2388C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2388C0u, 0x2389B0u, 0x2389B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2389B8u;
label_2389b8:
    // 0x2389b8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2389b8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2389bc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2389bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x2389c0: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2389C0u;
    {
        const bool branch_taken_0x2389c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2389C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2389C0u;
        // 0x2389c4: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2389c0) {
            ctx->pc = 0x2389D0u;
            goto label_2389d0;
        }
    }
    ctx->pc = 0x2389C8u;
    // 0x2389c8: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x2389C8u;
    {
        const bool branch_taken_0x2389c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2389CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2389C8u;
        // 0x2389cc: 0xae320000  sw          $s2, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2389c8) {
            ctx->pc = 0x238A18u;
            goto label_238a18;
        }
    }
    ctx->pc = 0x2389D0u;
label_2389d0:
    // 0x2389d0: 0x1000ffe5  b           . + 4 + (-0x1B << 2)
    ctx->pc = 0x2389D0u;
    {
        const bool branch_taken_0x2389d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2389D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2389D0u;
        // 0x2389d4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2389d0) {
            ctx->pc = 0x238968u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_238968;
        }
    }
    ctx->pc = 0x2389D8u;
label_2389d8:
    // 0x2389d8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2389d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2389dc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2389dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2389e0: 0xa483000e  sh          $v1, 0xE($a0)
    ctx->pc = 0x2389e0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 14), (uint16_t)GPR_U32(ctx, 3));
    // 0x2389e4: 0xac910054  sw          $s1, 0x54($a0)
    ctx->pc = 0x2389e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 17));
    // 0x2389e8: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x2389e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x2389ec: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x2389ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x2389f0: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x2389f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x2389f4: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x2389f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x2389f8: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x2389f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x2389fc: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x2389fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x238a00: 0xac800030  sw          $zero, 0x30($a0)
    ctx->pc = 0x238a00u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 0));
    // 0x238a04: 0xac800034  sw          $zero, 0x34($a0)
    ctx->pc = 0x238a04u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 0));
    // 0x238a08: 0xac800044  sw          $zero, 0x44($a0)
    ctx->pc = 0x238a08u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 0));
    // 0x238a0c: 0xac800048  sw          $zero, 0x48($a0)
    ctx->pc = 0x238a0cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 0));
    // 0x238a10: 0xa482000c  sh          $v0, 0xC($a0)
    ctx->pc = 0x238a10u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x238a14: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x238a14u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_238a18:
    // 0x238a18: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x238a18u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x238a1c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x238a1cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x238a20: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x238a20u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x238a24: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x238a24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    ctx->pc = 0x238a28u;
}
