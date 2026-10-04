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

// Function: FUN_00207450
// Address: 0x207450 - 0x2077d4
void FUN_00207450_0x207450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00207450_0x207450");
#endif

    switch (ctx->pc) {
        case 0x2074b0u: goto label_2074b0;
        case 0x2074ccu: goto label_2074cc;
        case 0x207758u: goto label_207758;
        default: break;
    }

    ctx->pc = 0x207450u;

    // 0x207450: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x207450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x207454: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x207454u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x207458: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x207458u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x20745c: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x20745cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x207460: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x207460u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x207464: 0x24631300  addiu       $v1, $v1, 0x1300
    ctx->pc = 0x207464u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4864));
    // 0x207468: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x207468u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20746c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x20746cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x207470: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x207470u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x207474: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x207474u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x207478: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x207478u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x20747c: 0x8f8290fc  lw          $v0, -0x6F04($gp)
    ctx->pc = 0x20747cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938876)));
    // 0x207480: 0x644821  addu        $t1, $v1, $a0
    ctx->pc = 0x207480u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x207484: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x207484u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x207488: 0x91233690  lbu         $v1, 0x3690($t1)
    ctx->pc = 0x207488u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 13968)));
    // 0x20748c: 0x25303620  addiu       $s0, $t1, 0x3620
    ctx->pc = 0x20748cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 9), 13856));
    // 0x207490: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x207490u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207494: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x207494u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207498: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x207498u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x20749c: 0xac23e310  sw          $v1, -0x1CF0($at)
    ctx->pc = 0x20749cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294959888), GPR_U32(ctx, 3));
    // 0x2074a0: 0x91273694  lbu         $a3, 0x3694($t1)
    ctx->pc = 0x2074a0u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 13972)));
    // 0x2074a4: 0x91293695  lbu         $t1, 0x3695($t1)
    ctx->pc = 0x2074a4u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 13973)));
    // 0x2074a8: 0xc0804a0  jal         func_201280
    ctx->pc = 0x2074A8u;
    SET_GPR_U32(ctx, 31, 0x2074B0u);
    ctx->pc = 0x2074ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2074A8u;
    // 0x2074ac: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201280u, 0x2074A8u, 0x2074B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2074B0u;
label_2074b0:
    // 0x2074b0: 0x8f8290fc  lw          $v0, -0x6F04($gp)
    ctx->pc = 0x2074b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938876)));
    // 0x2074b4: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x2074b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x2074b8: 0x3463e2ec  ori         $v1, $v1, 0xE2EC
    ctx->pc = 0x2074b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)58092);
    // 0x2074bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2074bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2074c0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2074c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2074c4: 0xc06f1d4  jal         func_1BC750
    ctx->pc = 0x2074C4u;
    SET_GPR_U32(ctx, 31, 0x2074CCu);
    ctx->pc = 0x2074C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2074C4u;
    // 0x2074c8: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BC750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BC750u, 0x2074C4u, 0x2074CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2074CCu;
label_2074cc:
    // 0x2074cc: 0x8f8490fc  lw          $a0, -0x6F04($gp)
    ctx->pc = 0x2074ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938876)));
    // 0x2074d0: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x2074d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x2074d4: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2074d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2074d8: 0x810821  addu        $at, $a0, $at
    ctx->pc = 0x2074d8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
    // 0x2074dc: 0x8c23e2ec  lw          $v1, -0x1D14($at)
    ctx->pc = 0x2074dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294959852)));
    // 0x2074e0: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x2074e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x2074e4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2074e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2074e8: 0x810821  addu        $at, $a0, $at
    ctx->pc = 0x2074e8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
    // 0x2074ec: 0xac22e2ec  sw          $v0, -0x1D14($at)
    ctx->pc = 0x2074ecu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294959852), GPR_U32(ctx, 2));
    // 0x2074f0: 0x8f8290fc  lw          $v0, -0x6F04($gp)
    ctx->pc = 0x2074f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938876)));
    // 0x2074f4: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2074f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x2074f8: 0x3421e2ec  ori         $at, $at, 0xE2EC
    ctx->pc = 0x2074f8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)58092);
    // 0x2074fc: 0x411821  addu        $v1, $v0, $at
    ctx->pc = 0x2074fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x207500: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x207500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x207504: 0x28410191  slti        $at, $v0, 0x191
    ctx->pc = 0x207504u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)401) ? 1 : 0);
    // 0x207508: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x207508u;
    {
        const bool branch_taken_0x207508 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x207508) {
            ctx->pc = 0x207514u;
            goto label_207514;
        }
    }
    ctx->pc = 0x207510u;
    // 0x207510: 0x24020190  addiu       $v0, $zero, 0x190
    ctx->pc = 0x207510u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
label_207514:
    // 0x207514: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x207514u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x207518: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x207518u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x20751c: 0x8f8490fc  lw          $a0, -0x6F04($gp)
    ctx->pc = 0x20751cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938876)));
    // 0x207520: 0x3421e2ec  ori         $at, $at, 0xE2EC
    ctx->pc = 0x207520u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)58092);
    // 0x207524: 0x3c0251eb  lui         $v0, 0x51EB
    ctx->pc = 0x207524u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20971 << 16));
    // 0x207528: 0x3443851f  ori         $v1, $v0, 0x851F
    ctx->pc = 0x207528u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34079);
    // 0x20752c: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x20752cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x207530: 0x3447e2f0  ori         $a3, $v0, 0xE2F0
    ctx->pc = 0x207530u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)58096);
    // 0x207534: 0x813021  addu        $a2, $a0, $at
    ctx->pc = 0x207534u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
    // 0x207538: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x207538u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x20753c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x20753cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x207540: 0x3421e2f0  ori         $at, $at, 0xE2F0
    ctx->pc = 0x207540u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)58096);
    // 0x207544: 0x41100  sll         $v0, $a0, 4
    ctx->pc = 0x207544u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x207548: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x207548u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x20754c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x20754cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x207550: 0x620018  mult        $zero, $v1, $v0
    ctx->pc = 0x207550u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x207554: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x207554u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x207558: 0x0  nop
    ctx->pc = 0x207558u;
    // NOP
    // 0x20755c: 0x1010  mfhi        $v0
    ctx->pc = 0x20755cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x207560: 0x211c3  sra         $v0, $v0, 7
    ctx->pc = 0x207560u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 7));
    // 0x207564: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x207564u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x207568: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x207568u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x20756c: 0x8f8390fc  lw          $v1, -0x6F04($gp)
    ctx->pc = 0x20756cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938876)));
    // 0x207570: 0x8fa20034  lw          $v0, 0x34($sp)
    ctx->pc = 0x207570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x207574: 0x672021  addu        $a0, $v1, $a3
    ctx->pc = 0x207574u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x207578: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x207578u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x20757c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x20757cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x207580: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x207580u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x207584: 0x8f8290fc  lw          $v0, -0x6F04($gp)
    ctx->pc = 0x207584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938876)));
    // 0x207588: 0x411821  addu        $v1, $v0, $at
    ctx->pc = 0x207588u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x20758c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x20758cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x207590: 0x28410191  slti        $at, $v0, 0x191
    ctx->pc = 0x207590u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)401) ? 1 : 0);
    // 0x207594: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x207594u;
    {
        const bool branch_taken_0x207594 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x207598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207594u;
        // 0x207598: 0x24050190  addiu       $a1, $zero, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207594) {
            ctx->pc = 0x2075A0u;
            goto label_2075a0;
        }
    }
    ctx->pc = 0x20759Cu;
    // 0x20759c: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x20759cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2075a0:
    // 0x2075a0: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x2075a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x2075a4: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2075a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x2075a8: 0x8f8490fc  lw          $a0, -0x6F04($gp)
    ctx->pc = 0x2075a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938876)));
    // 0x2075ac: 0x3421e2f0  ori         $at, $at, 0xE2F0
    ctx->pc = 0x2075acu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)58096);
    // 0x2075b0: 0x3c0251eb  lui         $v0, 0x51EB
    ctx->pc = 0x2075b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20971 << 16));
    // 0x2075b4: 0x3443851f  ori         $v1, $v0, 0x851F
    ctx->pc = 0x2075b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34079);
    // 0x2075b8: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x2075b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x2075bc: 0x3446e2f4  ori         $a2, $v0, 0xE2F4
    ctx->pc = 0x2075bcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)58100);
    // 0x2075c0: 0x812821  addu        $a1, $a0, $at
    ctx->pc = 0x2075c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
    // 0x2075c4: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x2075c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2075c8: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2075c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x2075cc: 0x3421e2f4  ori         $at, $at, 0xE2F4
    ctx->pc = 0x2075ccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)58100);
    // 0x2075d0: 0x41100  sll         $v0, $a0, 4
    ctx->pc = 0x2075d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x2075d4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2075d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2075d8: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2075d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2075dc: 0x620018  mult        $zero, $v1, $v0
    ctx->pc = 0x2075dcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x2075e0: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x2075e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x2075e4: 0x0  nop
    ctx->pc = 0x2075e4u;
    // NOP
    // 0x2075e8: 0x1010  mfhi        $v0
    ctx->pc = 0x2075e8u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x2075ec: 0x211c3  sra         $v0, $v0, 7
    ctx->pc = 0x2075ecu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 7));
    // 0x2075f0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2075f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2075f4: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x2075f4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x2075f8: 0x8f8390fc  lw          $v1, -0x6F04($gp)
    ctx->pc = 0x2075f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938876)));
    // 0x2075fc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2075fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x207600: 0x662021  addu        $a0, $v1, $a2
    ctx->pc = 0x207600u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x207604: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x207604u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x207608: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x207608u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x20760c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x20760cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x207610: 0x8f8290fc  lw          $v0, -0x6F04($gp)
    ctx->pc = 0x207610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938876)));
    // 0x207614: 0x411821  addu        $v1, $v0, $at
    ctx->pc = 0x207614u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x207618: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x207618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x20761c: 0x284100fb  slti        $at, $v0, 0xFB
    ctx->pc = 0x20761cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)251) ? 1 : 0);
    // 0x207620: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x207620u;
    {
        const bool branch_taken_0x207620 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x207620) {
            ctx->pc = 0x20762Cu;
            goto label_20762c;
        }
    }
    ctx->pc = 0x207628u;
    // 0x207628: 0x240200fa  addiu       $v0, $zero, 0xFA
    ctx->pc = 0x207628u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 250));
label_20762c:
    // 0x20762c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x20762cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x207630: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x207630u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x207634: 0x8f8490fc  lw          $a0, -0x6F04($gp)
    ctx->pc = 0x207634u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938876)));
    // 0x207638: 0x3421e2f4  ori         $at, $at, 0xE2F4
    ctx->pc = 0x207638u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)58100);
    // 0x20763c: 0x3c021062  lui         $v0, 0x1062
    ctx->pc = 0x20763cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4194 << 16));
    // 0x207640: 0x34434dd3  ori         $v1, $v0, 0x4DD3
    ctx->pc = 0x207640u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)19923);
    // 0x207644: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x207644u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x207648: 0x3447e2f8  ori         $a3, $v0, 0xE2F8
    ctx->pc = 0x207648u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)58104);
    // 0x20764c: 0x813021  addu        $a2, $a0, $at
    ctx->pc = 0x20764cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
    // 0x207650: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x207650u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x207654: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x207654u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x207658: 0x3421e2f8  ori         $at, $at, 0xE2F8
    ctx->pc = 0x207658u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)58104);
    // 0x20765c: 0x41100  sll         $v0, $a0, 4
    ctx->pc = 0x20765cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x207660: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x207660u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x207664: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x207664u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x207668: 0x620018  mult        $zero, $v1, $v0
    ctx->pc = 0x207668u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x20766c: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x20766cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x207670: 0x0  nop
    ctx->pc = 0x207670u;
    // NOP
    // 0x207674: 0x1010  mfhi        $v0
    ctx->pc = 0x207674u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x207678: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x207678u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x20767c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x20767cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x207680: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x207680u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x207684: 0x8f8390fc  lw          $v1, -0x6F04($gp)
    ctx->pc = 0x207684u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938876)));
    // 0x207688: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x207688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x20768c: 0x672021  addu        $a0, $v1, $a3
    ctx->pc = 0x20768cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x207690: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x207690u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x207694: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x207694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x207698: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x207698u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x20769c: 0x8f8290fc  lw          $v0, -0x6F04($gp)
    ctx->pc = 0x20769cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938876)));
    // 0x2076a0: 0x411821  addu        $v1, $v0, $at
    ctx->pc = 0x2076a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x2076a4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2076a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2076a8: 0x284100fb  slti        $at, $v0, 0xFB
    ctx->pc = 0x2076a8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)251) ? 1 : 0);
    // 0x2076ac: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x2076ACu;
    {
        const bool branch_taken_0x2076ac = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x2076B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2076ACu;
        // 0x2076b0: 0x240500fa  addiu       $a1, $zero, 0xFA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 250));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2076ac) {
            ctx->pc = 0x2076B8u;
            goto label_2076b8;
        }
    }
    ctx->pc = 0x2076B4u;
    // 0x2076b4: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x2076b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2076b8:
    // 0x2076b8: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x2076b8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x2076bc: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2076bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x2076c0: 0x8f8690fc  lw          $a2, -0x6F04($gp)
    ctx->pc = 0x2076c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938876)));
    // 0x2076c4: 0x3421e2f8  ori         $at, $at, 0xE2F8
    ctx->pc = 0x2076c4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)58104);
    // 0x2076c8: 0x3c021062  lui         $v0, 0x1062
    ctx->pc = 0x2076c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4194 << 16));
    // 0x2076cc: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x2076ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
    // 0x2076d0: 0x34454dd3  ori         $a1, $v0, 0x4DD3
    ctx->pc = 0x2076d0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)19923);
    // 0x2076d4: 0x24635370  addiu       $v1, $v1, 0x5370
    ctx->pc = 0x2076d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 21360));
    // 0x2076d8: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x2076d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x2076dc: 0x3448e300  ori         $t0, $v0, 0xE300
    ctx->pc = 0x2076dcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)58112);
    // 0x2076e0: 0xc13821  addu        $a3, $a2, $at
    ctx->pc = 0x2076e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 1)));
    // 0x2076e4: 0x8ce60000  lw          $a2, 0x0($a3)
    ctx->pc = 0x2076e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2076e8: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x2076e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x2076ec: 0x61100  sll         $v0, $a2, 4
    ctx->pc = 0x2076ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x2076f0: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x2076f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2076f4: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2076f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2076f8: 0xa20018  mult        $zero, $a1, $v0
    ctx->pc = 0x2076f8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x2076fc: 0x22fc2  srl         $a1, $v0, 31
    ctx->pc = 0x2076fcu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x207700: 0x0  nop
    ctx->pc = 0x207700u;
    // NOP
    // 0x207704: 0x1010  mfhi        $v0
    ctx->pc = 0x207704u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x207708: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x207708u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x20770c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x20770cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x207710: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x207710u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x207714: 0x92050066  lbu         $a1, 0x66($s0)
    ctx->pc = 0x207714u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 102)));
    // 0x207718: 0x8f8290fc  lw          $v0, -0x6F04($gp)
    ctx->pc = 0x207718u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938876)));
    // 0x20771c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x20771cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x207720: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x207720u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x207724: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x207724u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x207728: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x207728u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x20772c: 0xac23e2fc  sw          $v1, -0x1D04($at)
    ctx->pc = 0x20772cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294959868), GPR_U32(ctx, 3));
    // 0x207730: 0x8f8290fc  lw          $v0, -0x6F04($gp)
    ctx->pc = 0x207730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938876)));
    // 0x207734: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x207734u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x207738: 0x92030077  lbu         $v1, 0x77($s0)
    ctx->pc = 0x207738u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 119)));
    // 0x20773c: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x20773cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x207740: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x207740u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x207744: 0x8f8290fc  lw          $v0, -0x6F04($gp)
    ctx->pc = 0x207744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938876)));
    // 0x207748: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x207748u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x20774c: 0x8c25e300  lw          $a1, -0x1D00($at)
    ctx->pc = 0x20774cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294959872)));
    // 0x207750: 0xc056968  jal         func_15A5A0
    ctx->pc = 0x207750u;
    SET_GPR_U32(ctx, 31, 0x207758u);
    ctx->pc = 0x207754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x207750u;
    // 0x207754: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15A5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15A5A0u, 0x207750u, 0x207758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207758u;
label_207758:
    // 0x207758: 0x8f8390fc  lw          $v1, -0x6F04($gp)
    ctx->pc = 0x207758u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938876)));
    // 0x20775c: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x20775cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x207760: 0x92040069  lbu         $a0, 0x69($s0)
    ctx->pc = 0x207760u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 105)));
    // 0x207764: 0x610821  addu        $at, $v1, $at
    ctx->pc = 0x207764u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
    // 0x207768: 0xac24e304  sw          $a0, -0x1CFC($at)
    ctx->pc = 0x207768u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294959876), GPR_U32(ctx, 4));
    // 0x20776c: 0x8f8390fc  lw          $v1, -0x6F04($gp)
    ctx->pc = 0x20776cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938876)));
    // 0x207770: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x207770u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x207774: 0x92040071  lbu         $a0, 0x71($s0)
    ctx->pc = 0x207774u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 113)));
    // 0x207778: 0x610821  addu        $at, $v1, $at
    ctx->pc = 0x207778u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
    // 0x20777c: 0xac24e314  sw          $a0, -0x1CEC($at)
    ctx->pc = 0x20777cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294959892), GPR_U32(ctx, 4));
    // 0x207780: 0x8f8390fc  lw          $v1, -0x6F04($gp)
    ctx->pc = 0x207780u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938876)));
    // 0x207784: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x207784u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x207788: 0x92040073  lbu         $a0, 0x73($s0)
    ctx->pc = 0x207788u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 115)));
    // 0x20778c: 0x610821  addu        $at, $v1, $at
    ctx->pc = 0x20778cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
    // 0x207790: 0xac24e318  sw          $a0, -0x1CE8($at)
    ctx->pc = 0x207790u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294959896), GPR_U32(ctx, 4));
    // 0x207794: 0x8f8390fc  lw          $v1, -0x6F04($gp)
    ctx->pc = 0x207794u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938876)));
    // 0x207798: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x207798u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x20779c: 0x92040074  lbu         $a0, 0x74($s0)
    ctx->pc = 0x20779cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 116)));
    // 0x2077a0: 0x610821  addu        $at, $v1, $at
    ctx->pc = 0x2077a0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
    // 0x2077a4: 0xac24e31c  sw          $a0, -0x1CE4($at)
    ctx->pc = 0x2077a4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294959900), GPR_U32(ctx, 4));
    // 0x2077a8: 0x8f8390fc  lw          $v1, -0x6F04($gp)
    ctx->pc = 0x2077a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938876)));
    // 0x2077ac: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x2077acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x2077b0: 0x92040075  lbu         $a0, 0x75($s0)
    ctx->pc = 0x2077b0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 117)));
    // 0x2077b4: 0x610821  addu        $at, $v1, $at
    ctx->pc = 0x2077b4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
    // 0x2077b8: 0xac24e320  sw          $a0, -0x1CE0($at)
    ctx->pc = 0x2077b8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294959904), GPR_U32(ctx, 4));
    // 0x2077bc: 0x8f8390fc  lw          $v1, -0x6F04($gp)
    ctx->pc = 0x2077bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938876)));
    // 0x2077c0: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x2077c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x2077c4: 0x9204006b  lbu         $a0, 0x6B($s0)
    ctx->pc = 0x2077c4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 107)));
    // 0x2077c8: 0x610821  addu        $at, $v1, $at
    ctx->pc = 0x2077c8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
    // 0x2077cc: 0xac24e308  sw          $a0, -0x1CF8($at)
    ctx->pc = 0x2077ccu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294959880), GPR_U32(ctx, 4));
    // 0x2077d0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2077d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->pc = 0x2077d4u;
}
