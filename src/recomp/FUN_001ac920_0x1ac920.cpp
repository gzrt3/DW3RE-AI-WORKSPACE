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

// Function: FUN_001ac920
// Address: 0x1ac920 - 0x1aca54
void FUN_001ac920_0x1ac920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001ac920_0x1ac920");
#endif

    switch (ctx->pc) {
        case 0x1ac93cu: goto label_1ac93c;
        case 0x1ac948u: goto label_1ac948;
        case 0x1ac970u: goto label_1ac970;
        case 0x1ac9ecu: goto label_1ac9ec;
        case 0x1ac9f8u: goto label_1ac9f8;
        case 0x1aca04u: goto label_1aca04;
        case 0x1aca14u: goto label_1aca14;
        case 0x1aca20u: goto label_1aca20;
        case 0x1aca30u: goto label_1aca30;
        case 0x1aca3cu: goto label_1aca3c;
        default: break;
    }

    ctx->pc = 0x1ac920u;

    // 0x1ac920: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1ac920u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1ac924: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x1ac924u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x1ac928: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1ac928u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1ac92c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1ac92cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac930: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1ac930u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1ac934: 0xc0692bc  jal         func_1A4AF0
    ctx->pc = 0x1AC934u;
    SET_GPR_U32(ctx, 31, 0x1AC93Cu);
    ctx->pc = 0x1AC938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC934u;
    // 0x1ac938: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4AF0u, 0x1AC934u, 0x1AC93Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC93Cu;
label_1ac93c:
    // 0x1ac93c: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x1ac93cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x1ac940: 0xc06930c  jal         func_1A4C30
    ctx->pc = 0x1AC940u;
    SET_GPR_U32(ctx, 31, 0x1AC948u);
    ctx->pc = 0x1A4C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4C30u, 0x1AC940u, 0x1AC948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC948u;
label_1ac948:
    // 0x1ac948: 0x3c0a0037  lui         $t2, 0x37
    ctx->pc = 0x1ac948u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)55 << 16));
    // 0x1ac94c: 0x40582d  daddu       $t3, $v0, $zero
    ctx->pc = 0x1ac94cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac950: 0x254349c0  addiu       $v1, $t2, 0x49C0
    ctx->pc = 0x1ac950u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), 18880));
    // 0x1ac954: 0xac700014  sw          $s0, 0x14($v1)
    ctx->pc = 0x1ac954u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 16)); ps2TraceGuestWrite(rdram, 0x3749D4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3749D4u, _value); } while (0);
    // 0x1ac958: 0x82220000  lb          $v0, 0x0($s1)
    ctx->pc = 0x1ac958u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1ac95c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1AC95Cu;
    {
        const bool branch_taken_0x1ac95c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC95Cu;
        // 0x1ac960: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac95c) {
            ctx->pc = 0x1AC990u;
            goto label_1ac990;
        }
    }
    ctx->pc = 0x1AC964u;
    // 0x1ac964: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1ac964u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac968: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x1ac968u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ac96c: 0x0  nop
    ctx->pc = 0x1ac96cu;
    // NOP
label_1ac970:
    // 0x1ac970: 0x254349c0  addiu       $v1, $t2, 0x49C0
    ctx->pc = 0x1ac970u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), 18880));
    // 0x1ac974: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x1ac974u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x1ac978: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1ac978u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1ac97c: 0xa0640018  sb          $a0, 0x18($v1)
    ctx->pc = 0x1ac97cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 24), (uint8_t)GPR_U32(ctx, 4));
    // 0x1ac980: 0x2291021  addu        $v0, $s1, $t1
    ctx->pc = 0x1ac980u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 9)));
    // 0x1ac984: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x1ac984u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ac988: 0x5460fff9  bnel        $v1, $zero, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1AC988u;
    {
        const bool branch_taken_0x1ac988 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ac988) {
            ctx->pc = 0x1AC98Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AC988u;
            // 0x1ac98c: 0x90440000  lbu         $a0, 0x0($v0) (Delay Slot)
            SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AC970u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ac970;
        }
    }
    ctx->pc = 0x1AC990u;
label_1ac990:
    // 0x1ac990: 0x254649c0  addiu       $a2, $t2, 0x49C0
    ctx->pc = 0x1ac990u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 10), 18880));
    // 0x1ac994: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x1ac994u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x1ac998: 0xacc00004  sw          $zero, 0x4($a2)
    ctx->pc = 0x1ac998u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
    // 0x1ac99c: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x1ac99cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ac9a0: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x1ac9a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x1ac9a4: 0x348400ff  ori         $a0, $a0, 0xFF
    ctx->pc = 0x1ac9a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)255);
    // 0x1ac9a8: 0x34630003  ori         $v1, $v1, 0x3
    ctx->pc = 0x1ac9a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3);
    // 0x1ac9ac: 0x24050068  addiu       $a1, $zero, 0x68
    ctx->pc = 0x1ac9acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
    // 0x1ac9b0: 0xdd4249c0  ld          $v0, 0x49C0($t2)
    ctx->pc = 0x1ac9b0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 10), 18880)));
    // 0x1ac9b4: 0x24070068  addiu       $a3, $zero, 0x68
    ctx->pc = 0x1ac9b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
    // 0x1ac9b8: 0xacc90010  sw          $t1, 0x10($a2)
    ctx->pc = 0x1ac9b8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 9));
    // 0x1ac9bc: 0x24080044  addiu       $t0, $zero, 0x44
    ctx->pc = 0x1ac9bcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x1ac9c0: 0xacc30008  sw          $v1, 0x8($a2)
    ctx->pc = 0x1ac9c0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 3));
    // 0x1ac9c4: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x1ac9c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x1ac9c8: 0xfd4249c0  sd          $v0, 0x49C0($t2)
    ctx->pc = 0x1ac9c8u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 18880), GPR_U64(ctx, 2));
    // 0x1ac9cc: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1ac9ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac9d0: 0xa14549c0  sb          $a1, 0x49C0($t2)
    ctx->pc = 0x1ac9d0u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 18880), (uint8_t)GPR_U32(ctx, 5));
    // 0x1ac9d4: 0x24050068  addiu       $a1, $zero, 0x68
    ctx->pc = 0x1ac9d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
    // 0x1ac9d8: 0xafab0004  sw          $t3, 0x4($sp)
    ctx->pc = 0x1ac9d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 11));
    // 0x1ac9dc: 0xafa70008  sw          $a3, 0x8($sp)
    ctx->pc = 0x1ac9dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 7));
    // 0x1ac9e0: 0xafa8000c  sw          $t0, 0xC($sp)
    ctx->pc = 0x1ac9e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 8));
    // 0x1ac9e4: 0xc069bee  jal         func_1A6FB8
    ctx->pc = 0x1AC9E4u;
    SET_GPR_U32(ctx, 31, 0x1AC9ECu);
    ctx->pc = 0x1AC9E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC9E4u;
    // 0x1ac9e8: 0xafa60000  sw          $a2, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6FB8u, 0x1AC9E4u, 0x1AC9ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC9ECu;
label_1ac9ec:
    // 0x1ac9ec: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x1ac9ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1ac9f0: 0xc069308  jal         func_1A4C20
    ctx->pc = 0x1AC9F0u;
    SET_GPR_U32(ctx, 31, 0x1AC9F8u);
    ctx->pc = 0x1AC9F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC9F0u;
    // 0x1ac9f4: 0x3c050004  lui         $a1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4C20u, 0x1AC9F0u, 0x1AC9F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC9F8u;
label_1ac9f8:
    // 0x1ac9f8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1ac9f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac9fc: 0xc0692f8  jal         func_1A4BE0
    ctx->pc = 0x1AC9FCu;
    SET_GPR_U32(ctx, 31, 0x1ACA04u);
    ctx->pc = 0x1ACA00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC9FCu;
    // 0x1aca00: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4BE0u, 0x1AC9FCu, 0x1ACA04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ACA04u;
label_1aca04:
    // 0x1aca04: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1ACA04u;
    {
        const bool branch_taken_0x1aca04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ACA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACA04u;
        // 0x1aca08: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aca04) {
            ctx->pc = 0x1ACA44u;
            goto label_1aca44;
        }
    }
    ctx->pc = 0x1ACA0Cu;
    // 0x1aca0c: 0xc069308  jal         func_1A4C20
    ctx->pc = 0x1ACA0Cu;
    SET_GPR_U32(ctx, 31, 0x1ACA14u);
    ctx->pc = 0x1ACA10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ACA0Cu;
    // 0x1aca10: 0x3c050001  lui         $a1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4C20u, 0x1ACA0Cu, 0x1ACA14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ACA14u;
label_1aca14:
    // 0x1aca14: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x1aca14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1aca18: 0xc069308  jal         func_1A4C20
    ctx->pc = 0x1ACA18u;
    SET_GPR_U32(ctx, 31, 0x1ACA20u);
    ctx->pc = 0x1ACA1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ACA18u;
    // 0x1aca1c: 0x3c050002  lui         $a1, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4C20u, 0x1ACA18u, 0x1ACA20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ACA20u;
label_1aca20:
    // 0x1aca20: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x1aca20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x1aca24: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1aca24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aca28: 0xc069308  jal         func_1A4C20
    ctx->pc = 0x1ACA28u;
    SET_GPR_U32(ctx, 31, 0x1ACA30u);
    ctx->pc = 0x1ACA2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ACA28u;
    // 0x1aca2c: 0x34840002  ori         $a0, $a0, 0x2 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)2);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4C20u, 0x1ACA28u, 0x1ACA30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ACA30u;
label_1aca30:
    // 0x1aca30: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x1aca30u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x1aca34: 0xc069308  jal         func_1A4C20
    ctx->pc = 0x1ACA34u;
    SET_GPR_U32(ctx, 31, 0x1ACA3Cu);
    ctx->pc = 0x1ACA38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ACA34u;
    // 0x1aca38: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4C20u, 0x1ACA34u, 0x1ACA3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ACA3Cu;
label_1aca3c:
    // 0x1aca3c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1ACA3Cu;
    {
        const bool branch_taken_0x1aca3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ACA40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACA3Cu;
        // 0x1aca40: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aca3c) {
            ctx->pc = 0x1ACA48u;
            goto label_1aca48;
        }
    }
    ctx->pc = 0x1ACA44u;
label_1aca44:
    // 0x1aca44: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1aca44u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1aca48:
    // 0x1aca48: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1aca48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1aca4c: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x1aca4cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1aca50: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1aca50u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->pc = 0x1aca54u;
}
