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

// Function: FUN_001ab880
// Address: 0x1ab880 - 0x1ab968
void FUN_001ab880_0x1ab880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001ab880_0x1ab880");
#endif

    switch (ctx->pc) {
        case 0x1ab8d0u: goto label_1ab8d0;
        case 0x1ab954u: goto label_1ab954;
        default: break;
    }

    ctx->pc = 0x1ab880u;

    // 0x1ab880: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x1ab880u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
    // 0x1ab884: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1ab884u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1ab888: 0x8c435c10  lw          $v1, 0x5C10($v0)
    ctx->pc = 0x1ab888u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x285C10u));
    // 0x1ab88c: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1ab88cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab890: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1ab890u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1ab894: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1AB894u;
    {
        const bool branch_taken_0x1ab894 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1AB898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB894u;
        // 0x1ab898: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab894) {
            ctx->pc = 0x1AB8A4u;
            goto label_1ab8a4;
        }
    }
    ctx->pc = 0x1AB89Cu;
    // 0x1ab89c: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x1AB89Cu;
    {
        const bool branch_taken_0x1ab89c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AB8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB89Cu;
        // 0x1ab8a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab89c) {
            ctx->pc = 0x1AB960u;
            goto label_1ab960;
        }
    }
    ctx->pc = 0x1AB8A4u;
label_1ab8a4:
    // 0x1ab8a4: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x1ab8a4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1ab8a8: 0x3c070037  lui         $a3, 0x37
    ctx->pc = 0x1ab8a8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)55 << 16));
    // 0x1ab8ac: 0x24e34680  addiu       $v1, $a3, 0x4680
    ctx->pc = 0x1ab8acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 18048));
    // 0x1ab8b0: 0xa0620004  sb          $v0, 0x4($v1)
    ctx->pc = 0x1ab8b0u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x374684u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x374684u, _value); } while (0);
    // 0x1ab8b4: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x1ab8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x1ab8b8: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1AB8B8u;
    {
        const bool branch_taken_0x1ab8b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AB8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB8B8u;
        // 0x1ab8bc: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab8b8) {
            ctx->pc = 0x1AB900u;
            goto label_1ab900;
        }
    }
    ctx->pc = 0x1AB8C0u;
    // 0x1ab8c0: 0x3c090037  lui         $t1, 0x37
    ctx->pc = 0x1ab8c0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)55 << 16));
    // 0x1ab8c4: 0x3c100037  lui         $s0, 0x37
    ctx->pc = 0x1ab8c4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)55 << 16));
    // 0x1ab8c8: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1ab8c8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1ab8cc: 0x0  nop
    ctx->pc = 0x1ab8ccu;
    // NOP
label_1ab8d0:
    // 0x1ab8d0: 0x290200fc  slti        $v0, $t0, 0xFC
    ctx->pc = 0x1ab8d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)252) ? 1 : 0);
    // 0x1ab8d4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1AB8D4u;
    {
        const bool branch_taken_0x1ab8d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AB8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB8D4u;
        // 0x1ab8d8: 0xc81021  addu        $v0, $a2, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab8d4) {
            ctx->pc = 0x1AB908u;
            goto label_1ab908;
        }
    }
    ctx->pc = 0x1AB8DCu;
    // 0x1ab8dc: 0x24e34680  addiu       $v1, $a3, 0x4680
    ctx->pc = 0x1ab8dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 18048));
    // 0x1ab8e0: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x1ab8e0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ab8e4: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x1ab8e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x1ab8e8: 0xa0640004  sb          $a0, 0x4($v1)
    ctx->pc = 0x1ab8e8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4), (uint8_t)GPR_U32(ctx, 4));
    // 0x1ab8ec: 0x42600  sll         $a0, $a0, 24
    ctx->pc = 0x1ab8ecu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
    // 0x1ab8f0: 0x5480fff7  bnel        $a0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1AB8F0u;
    {
        const bool branch_taken_0x1ab8f0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ab8f0) {
            ctx->pc = 0x1AB8F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AB8F0u;
            // 0x1ab8f4: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AB8D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ab8d0;
        }
    }
    ctx->pc = 0x1AB8F8u;
    // 0x1ab8f8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1AB8F8u;
    {
        const bool branch_taken_0x1ab8f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AB8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB8F8u;
        // 0x1ab8fc: 0x240200fc  addiu       $v0, $zero, 0xFC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 252));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab8f8) {
            ctx->pc = 0x1AB90Cu;
            goto label_1ab90c;
        }
    }
    ctx->pc = 0x1AB900u;
label_1ab900:
    // 0x1ab900: 0x3c090037  lui         $t1, 0x37
    ctx->pc = 0x1ab900u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)55 << 16));
    // 0x1ab904: 0x3c100037  lui         $s0, 0x37
    ctx->pc = 0x1ab904u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)55 << 16));
label_1ab908:
    // 0x1ab908: 0x240200fc  addiu       $v0, $zero, 0xFC
    ctx->pc = 0x1ab908u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 252));
label_1ab90c:
    // 0x1ab90c: 0x55020005  bnel        $t0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1AB90Cu;
    {
        const bool branch_taken_0x1ab90c = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        if (branch_taken_0x1ab90c) {
            ctx->pc = 0x1AB910u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AB90Cu;
            // 0x1ab910: 0xace54680  sw          $a1, 0x4680($a3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 7), 18048), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AB924u;
            goto label_1ab924;
        }
    }
    ctx->pc = 0x1AB914u;
    // 0x1ab914: 0x24e24680  addiu       $v0, $a3, 0x4680
    ctx->pc = 0x1ab914u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 18048));
    // 0x1ab918: 0x240800fb  addiu       $t0, $zero, 0xFB
    ctx->pc = 0x1ab918u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 251));
    // 0x1ab91c: 0xa04000ff  sb          $zero, 0xFF($v0)
    ctx->pc = 0x1ab91cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 255), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ab920: 0xace54680  sw          $a1, 0x4680($a3)
    ctx->pc = 0x1ab920u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 18048), GPR_U32(ctx, 5));
label_1ab924:
    // 0x1ab924: 0x24e24680  addiu       $v0, $a3, 0x4680
    ctx->pc = 0x1ab924u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 18048));
    // 0x1ab928: 0x252445c0  addiu       $a0, $t1, 0x45C0
    ctx->pc = 0x1ab928u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), 17856));
    // 0x1ab92c: 0xa04000ff  sb          $zero, 0xFF($v0)
    ctx->pc = 0x1ab92cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 255), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ab930: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1ab930u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab934: 0x25080005  addiu       $t0, $t0, 0x5
    ctx->pc = 0x1ab934u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 5));
    // 0x1ab938: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1ab938u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1ab93c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1ab93cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1ab940: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ab940u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab944: 0x26094600  addiu       $t1, $s0, 0x4600
    ctx->pc = 0x1ab944u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 17920));
    // 0x1ab948: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1ab948u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1ab94c: 0xc069e2a  jal         func_1A78A8
    ctx->pc = 0x1AB94Cu;
    SET_GPR_U32(ctx, 31, 0x1AB954u);
    ctx->pc = 0x1AB950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB94Cu;
    // 0x1ab950: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A78A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A78A8u, 0x1AB94Cu, 0x1AB954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB954u;
label_1ab954:
    // 0x1ab954: 0x4410002  bgez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1AB954u;
    {
        const bool branch_taken_0x1ab954 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1AB958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB954u;
        // 0x1ab958: 0x8e024600  lw          $v0, 0x4600($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 17920)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab954) {
            ctx->pc = 0x1AB960u;
            goto label_1ab960;
        }
    }
    ctx->pc = 0x1AB95Cu;
    // 0x1ab95c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1ab95cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1ab960:
    // 0x1ab960: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1ab960u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ab964: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1ab964u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->pc = 0x1ab968u;
}
