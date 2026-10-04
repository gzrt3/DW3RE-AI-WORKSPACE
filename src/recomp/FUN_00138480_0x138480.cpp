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

// Function: FUN_00138480
// Address: 0x138480 - 0x138598
void FUN_00138480_0x138480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00138480_0x138480");
#endif

    switch (ctx->pc) {
        case 0x13857cu: goto label_13857c;
        case 0x138594u: goto label_138594;
        default: break;
    }

    ctx->pc = 0x138480u;

    // 0x138480: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x138480u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x138484: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x138484u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x138488: 0x8f838504  lw          $v1, -0x7AFC($gp)
    ctx->pc = 0x138488u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935812)));
    // 0x13848c: 0x10600041  beqz        $v1, . + 4 + (0x41 << 2)
    ctx->pc = 0x13848Cu;
    {
        const bool branch_taken_0x13848c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x13848c) {
            ctx->pc = 0x138594u;
            goto label_138594;
        }
    }
    ctx->pc = 0x138494u;
    // 0x138494: 0x8f848500  lw          $a0, -0x7B00($gp)
    ctx->pc = 0x138494u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935808)));
    // 0x138498: 0x1480003a  bnez        $a0, . + 4 + (0x3A << 2)
    ctx->pc = 0x138498u;
    {
        const bool branch_taken_0x138498 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x13849Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138498u;
        // 0x13849c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138498) {
            ctx->pc = 0x138584u;
            goto label_138584;
        }
    }
    ctx->pc = 0x1384A0u;
    // 0x1384a0: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1384a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x1384a4: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x1384a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x1384a8: 0x8c273ffc  lw          $a3, 0x3FFC($at)
    ctx->pc = 0x1384a8u;
    SET_GPR_S32(ctx, 7, (int32_t)runtime->Load32(rdram, ctx, 0x70003FFCu));
    // 0x1384ac: 0x3c030031  lui         $v1, 0x31
    ctx->pc = 0x1384acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49 << 16));
    // 0x1384b0: 0x8f82850c  lw          $v0, -0x7AF4($gp)
    ctx->pc = 0x1384b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935820)));
    // 0x1384b4: 0x24841e00  addiu       $a0, $a0, 0x1E00
    ctx->pc = 0x1384b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7680));
    // 0x1384b8: 0x246359f0  addiu       $v1, $v1, 0x59F0
    ctx->pc = 0x1384b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 23024));
    // 0x1384bc: 0x728c0  sll         $a1, $a3, 3
    ctx->pc = 0x1384bcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x1384c0: 0x73140  sll         $a2, $a3, 5
    ctx->pc = 0x1384c0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 5));
    // 0x1384c4: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x1384c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x1384c8: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x1384c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x1384cc: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x1384ccu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x1384d0: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1384D0u;
    {
        const bool branch_taken_0x1384d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1384D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1384D0u;
        // 0x1384d4: 0x652821  addu        $a1, $v1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1384d0) {
            ctx->pc = 0x138504u;
            goto label_138504;
        }
    }
    ctx->pc = 0x1384D8u;
    // 0x1384d8: 0x8f868514  lw          $a2, -0x7AEC($gp)
    ctx->pc = 0x1384d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935828)));
    // 0x1384dc: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x1384dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1384e0: 0x8f838510  lw          $v1, -0x7AF0($gp)
    ctx->pc = 0x1384e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935824)));
    // 0x1384e4: 0x631c0  sll         $a2, $a2, 7
    ctx->pc = 0x1384e4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 7));
    // 0x1384e8: 0xc3001b  divu        $zero, $a2, $v1
    ctx->pc = 0x1384e8u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 6) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 6) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,6); } }
    // 0x1384ec: 0x0  nop
    ctx->pc = 0x1384ecu;
    // NOP
    // 0x1384f0: 0x0  nop
    ctx->pc = 0x1384f0u;
    // NOP
    // 0x1384f4: 0x1812  mflo        $v1
    ctx->pc = 0x1384f4u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x1384f8: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1384f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1384fc: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1384FCu;
    {
        const bool branch_taken_0x1384fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x138500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1384FCu;
        // 0x138500: 0x304200ff  andi        $v0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1384fc) {
            ctx->pc = 0x138524u;
            goto label_138524;
        }
    }
    ctx->pc = 0x138504u;
label_138504:
    // 0x138504: 0x8f838514  lw          $v1, -0x7AEC($gp)
    ctx->pc = 0x138504u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935828)));
    // 0x138508: 0x8f828510  lw          $v0, -0x7AF0($gp)
    ctx->pc = 0x138508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935824)));
    // 0x13850c: 0x319c0  sll         $v1, $v1, 7
    ctx->pc = 0x13850cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
    // 0x138510: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x138510u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x138514: 0x0  nop
    ctx->pc = 0x138514u;
    // NOP
    // 0x138518: 0x0  nop
    ctx->pc = 0x138518u;
    // NOP
    // 0x13851c: 0x1012  mflo        $v0
    ctx->pc = 0x13851cu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x138520: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x138520u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_138524:
    // 0x138524: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x138524u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x138528: 0x8f828508  lw          $v0, -0x7AF8($gp)
    ctx->pc = 0x138528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935816)));
    // 0x13852c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x13852Cu;
    {
        const bool branch_taken_0x13852c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x138530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13852Cu;
        // 0x138530: 0x240300ff  addiu       $v1, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13852c) {
            ctx->pc = 0x138550u;
            goto label_138550;
        }
    }
    ctx->pc = 0x138534u;
    // 0x138534: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x138534u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x138538: 0xa0a30078  sb          $v1, 0x78($a1)
    ctx->pc = 0x138538u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 120), (uint8_t)GPR_U32(ctx, 3));
    // 0x13853c: 0xa0a30079  sb          $v1, 0x79($a1)
    ctx->pc = 0x13853cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 121), (uint8_t)GPR_U32(ctx, 3));
    // 0x138540: 0xa0a3007a  sb          $v1, 0x7A($a1)
    ctx->pc = 0x138540u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 122), (uint8_t)GPR_U32(ctx, 3));
    // 0x138544: 0xa0a6007b  sb          $a2, 0x7B($a1)
    ctx->pc = 0x138544u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 123), (uint8_t)GPR_U32(ctx, 6));
    // 0x138548: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x138548u;
    {
        const bool branch_taken_0x138548 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13854Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138548u;
        // 0x13854c: 0xaca2007c  sw          $v0, 0x7C($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 124), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138548) {
            ctx->pc = 0x138568u;
            goto label_138568;
        }
    }
    ctx->pc = 0x138550u;
label_138550:
    // 0x138550: 0xa0a00078  sb          $zero, 0x78($a1)
    ctx->pc = 0x138550u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 120), (uint8_t)GPR_U32(ctx, 0));
    // 0x138554: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x138554u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x138558: 0xa0a00079  sb          $zero, 0x79($a1)
    ctx->pc = 0x138558u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 121), (uint8_t)GPR_U32(ctx, 0));
    // 0x13855c: 0xa0a0007a  sb          $zero, 0x7A($a1)
    ctx->pc = 0x13855cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 122), (uint8_t)GPR_U32(ctx, 0));
    // 0x138560: 0xa0a6007b  sb          $a2, 0x7B($a1)
    ctx->pc = 0x138560u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 123), (uint8_t)GPR_U32(ctx, 6));
    // 0x138564: 0xaca2007c  sw          $v0, 0x7C($a1)
    ctx->pc = 0x138564u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 124), GPR_U32(ctx, 2));
label_138568:
    // 0x138568: 0x24060009  addiu       $a2, $zero, 0x9
    ctx->pc = 0x138568u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x13856c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x13856cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138570: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x138570u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138574: 0xc066c72  jal         func_19B1C8
    ctx->pc = 0x138574u;
    SET_GPR_U32(ctx, 31, 0x13857Cu);
    ctx->pc = 0x138578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x138574u;
    // 0x138578: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x138574u, 0x13857Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13857Cu;
label_13857c:
    // 0x13857c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x13857Cu;
    {
        const bool branch_taken_0x13857c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x138580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13857Cu;
        // 0x138580: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13857c) {
            ctx->pc = 0x138598u;
            return;
        }
    }
    ctx->pc = 0x138584u;
label_138584:
    // 0x138584: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x138584u;
    {
        const bool branch_taken_0x138584 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x138584) {
            ctx->pc = 0x138594u;
            goto label_138594;
        }
    }
    ctx->pc = 0x13858Cu;
    // 0x13858c: 0xc04e23c  jal         func_1388F0
    ctx->pc = 0x13858Cu;
    SET_GPR_U32(ctx, 31, 0x138594u);
    ctx->pc = 0x1388F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1388F0u, 0x13858Cu, 0x138594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138594u;
label_138594:
    // 0x138594: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x138594u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x138598u;
}
