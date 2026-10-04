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

// Function: FUN_00127520
// Address: 0x127520 - 0x1278e0
void FUN_00127520_0x127520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00127520_0x127520");
#endif

    ctx->pc = 0x127520u;

    // 0x127520: 0x8f83863c  lw          $v1, -0x79C4($gp)
    ctx->pc = 0x127520u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936124)));
    // 0x127524: 0x1060006e  beqz        $v1, . + 4 + (0x6E << 2)
    ctx->pc = 0x127524u;
    {
        const bool branch_taken_0x127524 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x127528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127524u;
        // 0x127528: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127524) {
            ctx->pc = 0x1276E0u;
            goto label_1276e0;
        }
    }
    ctx->pc = 0x12752Cu;
    // 0x12752c: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x12752cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x127530: 0x9023490d  lbu         $v1, 0x490D($at)
    ctx->pc = 0x127530u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x33490Du));
    // 0x127534: 0x2c610017  sltiu       $at, $v1, 0x17
    ctx->pc = 0x127534u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)23) ? 1 : 0);
    // 0x127538: 0x10200062  beqz        $at, . + 4 + (0x62 << 2)
    ctx->pc = 0x127538u;
    {
        const bool branch_taken_0x127538 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x12753Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127538u;
        // 0x12753c: 0x3c04002c  lui         $a0, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)44 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127538) {
            ctx->pc = 0x1276C4u;
            goto label_1276c4;
        }
    }
    ctx->pc = 0x127540u;
    // 0x127540: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x127540u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x127544: 0x248454f0  addiu       $a0, $a0, 0x54F0
    ctx->pc = 0x127544u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21744));
    // 0x127548: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x127548u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x12754c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x12754cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x127550: 0x600008  jr          $v1
    ctx->pc = 0x127550u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x127558u: goto label_127558;
            case 0x127574u: goto label_127574;
            case 0x127590u: goto label_127590;
            case 0x1275ACu: goto label_1275ac;
            case 0x1275C8u: goto label_1275c8;
            case 0x1275E4u: goto label_1275e4;
            case 0x127600u: goto label_127600;
            case 0x12761Cu: goto label_12761c;
            case 0x127638u: goto label_127638;
            case 0x127654u: goto label_127654;
            case 0x127670u: goto label_127670;
            case 0x12768Cu: goto label_12768c;
            case 0x1276A8u: goto label_1276a8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x127550u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x127558u;
label_127558:
    // 0x127558: 0x24030050  addiu       $v1, $zero, 0x50
    ctx->pc = 0x127558u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x12755c: 0x24040055  addiu       $a0, $zero, 0x55
    ctx->pc = 0x12755cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 85));
    // 0x127560: 0xa38384f4  sb          $v1, -0x7B0C($gp)
    ctx->pc = 0x127560u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294935796), (uint8_t)GPR_U32(ctx, 3));
    // 0x127564: 0x24030069  addiu       $v1, $zero, 0x69
    ctx->pc = 0x127564u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 105));
    // 0x127568: 0xa38484f0  sb          $a0, -0x7B10($gp)
    ctx->pc = 0x127568u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294935792), (uint8_t)GPR_U32(ctx, 4));
    // 0x12756c: 0x100000dc  b           . + 4 + (0xDC << 2)
    ctx->pc = 0x12756Cu;
    {
        const bool branch_taken_0x12756c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x127570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12756Cu;
        // 0x127570: 0xa38384ec  sb          $v1, -0x7B14($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294935788), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12756c) {
            ctx->pc = 0x1278E0u;
            return;
        }
    }
    ctx->pc = 0x127574u;
label_127574:
    // 0x127574: 0x24030089  addiu       $v1, $zero, 0x89
    ctx->pc = 0x127574u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 137));
    // 0x127578: 0x2404007c  addiu       $a0, $zero, 0x7C
    ctx->pc = 0x127578u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 124));
    // 0x12757c: 0xa38384f4  sb          $v1, -0x7B0C($gp)
    ctx->pc = 0x12757cu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294935796), (uint8_t)GPR_U32(ctx, 3));
    // 0x127580: 0x2403005d  addiu       $v1, $zero, 0x5D
    ctx->pc = 0x127580u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 93));
    // 0x127584: 0xa38484f0  sb          $a0, -0x7B10($gp)
    ctx->pc = 0x127584u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294935792), (uint8_t)GPR_U32(ctx, 4));
    // 0x127588: 0x100000d5  b           . + 4 + (0xD5 << 2)
    ctx->pc = 0x127588u;
    {
        const bool branch_taken_0x127588 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12758Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127588u;
        // 0x12758c: 0xa38384ec  sb          $v1, -0x7B14($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294935788), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127588) {
            ctx->pc = 0x1278E0u;
            return;
        }
    }
    ctx->pc = 0x127590u;
label_127590:
    // 0x127590: 0x24030050  addiu       $v1, $zero, 0x50
    ctx->pc = 0x127590u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x127594: 0x24040055  addiu       $a0, $zero, 0x55
    ctx->pc = 0x127594u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 85));
    // 0x127598: 0xa38384f4  sb          $v1, -0x7B0C($gp)
    ctx->pc = 0x127598u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294935796), (uint8_t)GPR_U32(ctx, 3));
    // 0x12759c: 0x2403005f  addiu       $v1, $zero, 0x5F
    ctx->pc = 0x12759cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 95));
    // 0x1275a0: 0xa38484f0  sb          $a0, -0x7B10($gp)
    ctx->pc = 0x1275a0u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294935792), (uint8_t)GPR_U32(ctx, 4));
    // 0x1275a4: 0x100000ce  b           . + 4 + (0xCE << 2)
    ctx->pc = 0x1275A4u;
    {
        const bool branch_taken_0x1275a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1275A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1275A4u;
        // 0x1275a8: 0xa38384ec  sb          $v1, -0x7B14($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294935788), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1275a4) {
            ctx->pc = 0x1278E0u;
            return;
        }
    }
    ctx->pc = 0x1275ACu;
label_1275ac:
    // 0x1275ac: 0x24030097  addiu       $v1, $zero, 0x97
    ctx->pc = 0x1275acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 151));
    // 0x1275b0: 0x2404008b  addiu       $a0, $zero, 0x8B
    ctx->pc = 0x1275b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 139));
    // 0x1275b4: 0xa38384f4  sb          $v1, -0x7B0C($gp)
    ctx->pc = 0x1275b4u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294935796), (uint8_t)GPR_U32(ctx, 3));
    // 0x1275b8: 0x24030076  addiu       $v1, $zero, 0x76
    ctx->pc = 0x1275b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 118));
    // 0x1275bc: 0xa38484f0  sb          $a0, -0x7B10($gp)
    ctx->pc = 0x1275bcu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294935792), (uint8_t)GPR_U32(ctx, 4));
    // 0x1275c0: 0x100000c7  b           . + 4 + (0xC7 << 2)
    ctx->pc = 0x1275C0u;
    {
        const bool branch_taken_0x1275c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1275C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1275C0u;
        // 0x1275c4: 0xa38384ec  sb          $v1, -0x7B14($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294935788), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1275c0) {
            ctx->pc = 0x1278E0u;
            return;
        }
    }
    ctx->pc = 0x1275C8u;
label_1275c8:
    // 0x1275c8: 0x240300cf  addiu       $v1, $zero, 0xCF
    ctx->pc = 0x1275c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 207));
    // 0x1275cc: 0x240400c0  addiu       $a0, $zero, 0xC0
    ctx->pc = 0x1275ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x1275d0: 0xa38384f4  sb          $v1, -0x7B0C($gp)
    ctx->pc = 0x1275d0u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294935796), (uint8_t)GPR_U32(ctx, 3));
    // 0x1275d4: 0x24030099  addiu       $v1, $zero, 0x99
    ctx->pc = 0x1275d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 153));
    // 0x1275d8: 0xa38484f0  sb          $a0, -0x7B10($gp)
    ctx->pc = 0x1275d8u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294935792), (uint8_t)GPR_U32(ctx, 4));
    // 0x1275dc: 0x100000c0  b           . + 4 + (0xC0 << 2)
    ctx->pc = 0x1275DCu;
    {
        const bool branch_taken_0x1275dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1275E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1275DCu;
        // 0x1275e0: 0xa38384ec  sb          $v1, -0x7B14($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294935788), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1275dc) {
            ctx->pc = 0x1278E0u;
            return;
        }
    }
    ctx->pc = 0x1275E4u;
label_1275e4:
    // 0x1275e4: 0x240300a0  addiu       $v1, $zero, 0xA0
    ctx->pc = 0x1275e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    // 0x1275e8: 0x2404008d  addiu       $a0, $zero, 0x8D
    ctx->pc = 0x1275e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 141));
    // 0x1275ec: 0xa38384f4  sb          $v1, -0x7B0C($gp)
    ctx->pc = 0x1275ecu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294935796), (uint8_t)GPR_U32(ctx, 3));
    // 0x1275f0: 0x2403006d  addiu       $v1, $zero, 0x6D
    ctx->pc = 0x1275f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 109));
    // 0x1275f4: 0xa38484f0  sb          $a0, -0x7B10($gp)
    ctx->pc = 0x1275f4u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294935792), (uint8_t)GPR_U32(ctx, 4));
    // 0x1275f8: 0x100000b9  b           . + 4 + (0xB9 << 2)
    ctx->pc = 0x1275F8u;
    {
        const bool branch_taken_0x1275f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1275FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1275F8u;
        // 0x1275fc: 0xa38384ec  sb          $v1, -0x7B14($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294935788), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1275f8) {
            ctx->pc = 0x1278E0u;
            return;
        }
    }
    ctx->pc = 0x127600u;
label_127600:
    // 0x127600: 0x24030046  addiu       $v1, $zero, 0x46
    ctx->pc = 0x127600u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    // 0x127604: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x127604u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x127608: 0xa38384f4  sb          $v1, -0x7B0C($gp)
    ctx->pc = 0x127608u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294935796), (uint8_t)GPR_U32(ctx, 3));
    // 0x12760c: 0x24030037  addiu       $v1, $zero, 0x37
    ctx->pc = 0x12760cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x127610: 0xa38484f0  sb          $a0, -0x7B10($gp)
    ctx->pc = 0x127610u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294935792), (uint8_t)GPR_U32(ctx, 4));
    // 0x127614: 0x100000b2  b           . + 4 + (0xB2 << 2)
    ctx->pc = 0x127614u;
    {
        const bool branch_taken_0x127614 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x127618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127614u;
        // 0x127618: 0xa38384ec  sb          $v1, -0x7B14($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294935788), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127614) {
            ctx->pc = 0x1278E0u;
            return;
        }
    }
    ctx->pc = 0x12761Cu;
label_12761c:
    // 0x12761c: 0x240300c3  addiu       $v1, $zero, 0xC3
    ctx->pc = 0x12761cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 195));
    // 0x127620: 0x240400bb  addiu       $a0, $zero, 0xBB
    ctx->pc = 0x127620u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 187));
    // 0x127624: 0xa38384f4  sb          $v1, -0x7B0C($gp)
    ctx->pc = 0x127624u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294935796), (uint8_t)GPR_U32(ctx, 3));
    // 0x127628: 0x240300a6  addiu       $v1, $zero, 0xA6
    ctx->pc = 0x127628u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 166));
    // 0x12762c: 0xa38484f0  sb          $a0, -0x7B10($gp)
    ctx->pc = 0x12762cu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294935792), (uint8_t)GPR_U32(ctx, 4));
    // 0x127630: 0x100000ab  b           . + 4 + (0xAB << 2)
    ctx->pc = 0x127630u;
    {
        const bool branch_taken_0x127630 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x127634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127630u;
        // 0x127634: 0xa38384ec  sb          $v1, -0x7B14($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294935788), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127630) {
            ctx->pc = 0x1278E0u;
            return;
        }
    }
    ctx->pc = 0x127638u;
label_127638:
    // 0x127638: 0x24030084  addiu       $v1, $zero, 0x84
    ctx->pc = 0x127638u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
    // 0x12763c: 0x24040064  addiu       $a0, $zero, 0x64
    ctx->pc = 0x12763cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x127640: 0xa38384f4  sb          $v1, -0x7B0C($gp)
    ctx->pc = 0x127640u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294935796), (uint8_t)GPR_U32(ctx, 3));
    // 0x127644: 0x24030056  addiu       $v1, $zero, 0x56
    ctx->pc = 0x127644u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 86));
    // 0x127648: 0xa38484f0  sb          $a0, -0x7B10($gp)
    ctx->pc = 0x127648u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294935792), (uint8_t)GPR_U32(ctx, 4));
    // 0x12764c: 0x100000a4  b           . + 4 + (0xA4 << 2)
    ctx->pc = 0x12764Cu;
    {
        const bool branch_taken_0x12764c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x127650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12764Cu;
        // 0x127650: 0xa38384ec  sb          $v1, -0x7B14($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294935788), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12764c) {
            ctx->pc = 0x1278E0u;
            return;
        }
    }
    ctx->pc = 0x127654u;
label_127654:
    // 0x127654: 0x240300bc  addiu       $v1, $zero, 0xBC
    ctx->pc = 0x127654u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 188));
    // 0x127658: 0x240400b0  addiu       $a0, $zero, 0xB0
    ctx->pc = 0x127658u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
    // 0x12765c: 0xa38384f4  sb          $v1, -0x7B0C($gp)
    ctx->pc = 0x12765cu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294935796), (uint8_t)GPR_U32(ctx, 3));
    // 0x127660: 0x240300b5  addiu       $v1, $zero, 0xB5
    ctx->pc = 0x127660u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 181));
    // 0x127664: 0xa38484f0  sb          $a0, -0x7B10($gp)
    ctx->pc = 0x127664u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294935792), (uint8_t)GPR_U32(ctx, 4));
    // 0x127668: 0x1000009d  b           . + 4 + (0x9D << 2)
    ctx->pc = 0x127668u;
    {
        const bool branch_taken_0x127668 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12766Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127668u;
        // 0x12766c: 0xa38384ec  sb          $v1, -0x7B14($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294935788), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127668) {
            ctx->pc = 0x1278E0u;
            return;
        }
    }
    ctx->pc = 0x127670u;
label_127670:
    // 0x127670: 0x24030045  addiu       $v1, $zero, 0x45
    ctx->pc = 0x127670u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
    // 0x127674: 0x24040041  addiu       $a0, $zero, 0x41
    ctx->pc = 0x127674u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x127678: 0xa38384f4  sb          $v1, -0x7B0C($gp)
    ctx->pc = 0x127678u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294935796), (uint8_t)GPR_U32(ctx, 3));
    // 0x12767c: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x12767cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x127680: 0xa38484f0  sb          $a0, -0x7B10($gp)
    ctx->pc = 0x127680u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294935792), (uint8_t)GPR_U32(ctx, 4));
    // 0x127684: 0x10000096  b           . + 4 + (0x96 << 2)
    ctx->pc = 0x127684u;
    {
        const bool branch_taken_0x127684 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x127688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127684u;
        // 0x127688: 0xa38384ec  sb          $v1, -0x7B14($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294935788), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127684) {
            ctx->pc = 0x1278E0u;
            return;
        }
    }
    ctx->pc = 0x12768Cu;
label_12768c:
    // 0x12768c: 0x240300af  addiu       $v1, $zero, 0xAF
    ctx->pc = 0x12768cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 175));
    // 0x127690: 0x2404009e  addiu       $a0, $zero, 0x9E
    ctx->pc = 0x127690u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 158));
    // 0x127694: 0xa38384f4  sb          $v1, -0x7B0C($gp)
    ctx->pc = 0x127694u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294935796), (uint8_t)GPR_U32(ctx, 3));
    // 0x127698: 0x2403007a  addiu       $v1, $zero, 0x7A
    ctx->pc = 0x127698u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 122));
    // 0x12769c: 0xa38484f0  sb          $a0, -0x7B10($gp)
    ctx->pc = 0x12769cu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294935792), (uint8_t)GPR_U32(ctx, 4));
    // 0x1276a0: 0x1000008f  b           . + 4 + (0x8F << 2)
    ctx->pc = 0x1276A0u;
    {
        const bool branch_taken_0x1276a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1276A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1276A0u;
        // 0x1276a4: 0xa38384ec  sb          $v1, -0x7B14($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294935788), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1276a0) {
            ctx->pc = 0x1278E0u;
            return;
        }
    }
    ctx->pc = 0x1276A8u;
label_1276a8:
    // 0x1276a8: 0x240300af  addiu       $v1, $zero, 0xAF
    ctx->pc = 0x1276a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 175));
    // 0x1276ac: 0x2404009b  addiu       $a0, $zero, 0x9B
    ctx->pc = 0x1276acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 155));
    // 0x1276b0: 0xa38384f4  sb          $v1, -0x7B0C($gp)
    ctx->pc = 0x1276b0u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294935796), (uint8_t)GPR_U32(ctx, 3));
    // 0x1276b4: 0x24030075  addiu       $v1, $zero, 0x75
    ctx->pc = 0x1276b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 117));
    // 0x1276b8: 0xa38484f0  sb          $a0, -0x7B10($gp)
    ctx->pc = 0x1276b8u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294935792), (uint8_t)GPR_U32(ctx, 4));
    // 0x1276bc: 0x10000088  b           . + 4 + (0x88 << 2)
    ctx->pc = 0x1276BCu;
    {
        const bool branch_taken_0x1276bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1276C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1276BCu;
        // 0x1276c0: 0xa38384ec  sb          $v1, -0x7B14($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294935788), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1276bc) {
            ctx->pc = 0x1278E0u;
            return;
        }
    }
    ctx->pc = 0x1276C4u;
label_1276c4:
    // 0x1276c4: 0x240300a6  addiu       $v1, $zero, 0xA6
    ctx->pc = 0x1276c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 166));
    // 0x1276c8: 0x24040099  addiu       $a0, $zero, 0x99
    ctx->pc = 0x1276c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 153));
    // 0x1276cc: 0xa38384f4  sb          $v1, -0x7B0C($gp)
    ctx->pc = 0x1276ccu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294935796), (uint8_t)GPR_U32(ctx, 3));
    // 0x1276d0: 0x24030086  addiu       $v1, $zero, 0x86
    ctx->pc = 0x1276d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 134));
    // 0x1276d4: 0xa38484f0  sb          $a0, -0x7B10($gp)
    ctx->pc = 0x1276d4u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294935792), (uint8_t)GPR_U32(ctx, 4));
    // 0x1276d8: 0x10000081  b           . + 4 + (0x81 << 2)
    ctx->pc = 0x1276D8u;
    {
        const bool branch_taken_0x1276d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1276DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1276D8u;
        // 0x1276dc: 0xa38384ec  sb          $v1, -0x7B14($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294935788), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1276d8) {
            ctx->pc = 0x1278E0u;
            return;
        }
    }
    ctx->pc = 0x1276E0u;
label_1276e0:
    // 0x1276e0: 0x9023490d  lbu         $v1, 0x490D($at)
    ctx->pc = 0x1276e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18701)));
    // 0x1276e4: 0x2c610017  sltiu       $at, $v1, 0x17
    ctx->pc = 0x1276e4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)23) ? 1 : 0);
    // 0x1276e8: 0x10200077  beqz        $at, . + 4 + (0x77 << 2)
    ctx->pc = 0x1276E8u;
    {
        const bool branch_taken_0x1276e8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1276ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1276E8u;
        // 0x1276ec: 0x3c04002c  lui         $a0, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)44 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1276e8) {
            ctx->pc = 0x1278C8u;
            goto label_1278c8;
        }
    }
    ctx->pc = 0x1276F0u;
    // 0x1276f0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1276f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1276f4: 0x24845490  addiu       $a0, $a0, 0x5490
    ctx->pc = 0x1276f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21648));
    // 0x1276f8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1276f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1276fc: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1276fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x127700: 0x600008  jr          $v1
    ctx->pc = 0x127700u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x127708u: goto label_127708;
            case 0x127724u: goto label_127724;
            case 0x127740u: goto label_127740;
            case 0x12775Cu: goto label_12775c;
            case 0x127778u: goto label_127778;
            case 0x127794u: goto label_127794;
            case 0x1277B0u: goto label_1277b0;
            case 0x1277CCu: goto label_1277cc;
            case 0x1277E8u: goto label_1277e8;
            case 0x127804u: goto label_127804;
            case 0x127820u: goto label_127820;
            case 0x12783Cu: goto label_12783c;
            case 0x127858u: goto label_127858;
            case 0x127874u: goto label_127874;
            case 0x127890u: goto label_127890;
            case 0x1278ACu: goto label_1278ac;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x127700u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x127708u;
label_127708:
    // 0x127708: 0x240300cf  addiu       $v1, $zero, 0xCF
    ctx->pc = 0x127708u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 207));
    // 0x12770c: 0x240400c0  addiu       $a0, $zero, 0xC0
    ctx->pc = 0x12770cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x127710: 0xa38384f4  sb          $v1, -0x7B0C($gp)
    ctx->pc = 0x127710u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294935796), (uint8_t)GPR_U32(ctx, 3));
    // 0x127714: 0x24030099  addiu       $v1, $zero, 0x99
    ctx->pc = 0x127714u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 153));
    // 0x127718: 0xa38484f0  sb          $a0, -0x7B10($gp)
    ctx->pc = 0x127718u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294935792), (uint8_t)GPR_U32(ctx, 4));
    // 0x12771c: 0x10000070  b           . + 4 + (0x70 << 2)
    ctx->pc = 0x12771Cu;
    {
        const bool branch_taken_0x12771c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x127720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12771Cu;
        // 0x127720: 0xa38384ec  sb          $v1, -0x7B14($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294935788), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12771c) {
            ctx->pc = 0x1278E0u;
            return;
        }
    }
    ctx->pc = 0x127724u;
label_127724:
    // 0x127724: 0x240300a0  addiu       $v1, $zero, 0xA0
    ctx->pc = 0x127724u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    // 0x127728: 0x2404008d  addiu       $a0, $zero, 0x8D
    ctx->pc = 0x127728u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 141));
    // 0x12772c: 0xa38384f4  sb          $v1, -0x7B0C($gp)
    ctx->pc = 0x12772cu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294935796), (uint8_t)GPR_U32(ctx, 3));
    // 0x127730: 0x2403006d  addiu       $v1, $zero, 0x6D
    ctx->pc = 0x127730u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 109));
    // 0x127734: 0xa38484f0  sb          $a0, -0x7B10($gp)
    ctx->pc = 0x127734u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294935792), (uint8_t)GPR_U32(ctx, 4));
    // 0x127738: 0x10000069  b           . + 4 + (0x69 << 2)
    ctx->pc = 0x127738u;
    {
        const bool branch_taken_0x127738 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12773Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127738u;
        // 0x12773c: 0xa38384ec  sb          $v1, -0x7B14($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294935788), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127738) {
            ctx->pc = 0x1278E0u;
            return;
        }
    }
    ctx->pc = 0x127740u;
label_127740:
    // 0x127740: 0x240300c3  addiu       $v1, $zero, 0xC3
    ctx->pc = 0x127740u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 195));
    // 0x127744: 0x240400bb  addiu       $a0, $zero, 0xBB
    ctx->pc = 0x127744u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 187));
    // 0x127748: 0xa38384f4  sb          $v1, -0x7B0C($gp)
    ctx->pc = 0x127748u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294935796), (uint8_t)GPR_U32(ctx, 3));
    // 0x12774c: 0x240300a6  addiu       $v1, $zero, 0xA6
    ctx->pc = 0x12774cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 166));
    // 0x127750: 0xa38484f0  sb          $a0, -0x7B10($gp)
    ctx->pc = 0x127750u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294935792), (uint8_t)GPR_U32(ctx, 4));
    // 0x127754: 0x10000062  b           . + 4 + (0x62 << 2)
    ctx->pc = 0x127754u;
    {
        const bool branch_taken_0x127754 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x127758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127754u;
        // 0x127758: 0xa38384ec  sb          $v1, -0x7B14($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294935788), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127754) {
            ctx->pc = 0x1278E0u;
            return;
        }
    }
    ctx->pc = 0x12775Cu;
label_12775c:
    // 0x12775c: 0x24030097  addiu       $v1, $zero, 0x97
    ctx->pc = 0x12775cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 151));
    // 0x127760: 0x2404008b  addiu       $a0, $zero, 0x8B
    ctx->pc = 0x127760u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 139));
    // 0x127764: 0xa38384f4  sb          $v1, -0x7B0C($gp)
    ctx->pc = 0x127764u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294935796), (uint8_t)GPR_U32(ctx, 3));
    // 0x127768: 0x24030076  addiu       $v1, $zero, 0x76
    ctx->pc = 0x127768u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 118));
    // 0x12776c: 0xa38484f0  sb          $a0, -0x7B10($gp)
    ctx->pc = 0x12776cu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294935792), (uint8_t)GPR_U32(ctx, 4));
    // 0x127770: 0x1000005b  b           . + 4 + (0x5B << 2)
    ctx->pc = 0x127770u;
    {
        const bool branch_taken_0x127770 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x127774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127770u;
        // 0x127774: 0xa38384ec  sb          $v1, -0x7B14($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294935788), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127770) {
            ctx->pc = 0x1278E0u;
            return;
        }
    }
    ctx->pc = 0x127778u;
label_127778:
    // 0x127778: 0x24030050  addiu       $v1, $zero, 0x50
    ctx->pc = 0x127778u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x12777c: 0x24040055  addiu       $a0, $zero, 0x55
    ctx->pc = 0x12777cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 85));
    // 0x127780: 0xa38384f4  sb          $v1, -0x7B0C($gp)
    ctx->pc = 0x127780u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294935796), (uint8_t)GPR_U32(ctx, 3));
    // 0x127784: 0x24030069  addiu       $v1, $zero, 0x69
    ctx->pc = 0x127784u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 105));
    // 0x127788: 0xa38484f0  sb          $a0, -0x7B10($gp)
    ctx->pc = 0x127788u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294935792), (uint8_t)GPR_U32(ctx, 4));
    // 0x12778c: 0x10000054  b           . + 4 + (0x54 << 2)
    ctx->pc = 0x12778Cu;
    {
        const bool branch_taken_0x12778c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x127790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12778Cu;
        // 0x127790: 0xa38384ec  sb          $v1, -0x7B14($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294935788), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12778c) {
            ctx->pc = 0x1278E0u;
            return;
        }
    }
    ctx->pc = 0x127794u;
label_127794:
    // 0x127794: 0x24030046  addiu       $v1, $zero, 0x46
    ctx->pc = 0x127794u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    // 0x127798: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x127798u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x12779c: 0xa38384f4  sb          $v1, -0x7B0C($gp)
    ctx->pc = 0x12779cu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294935796), (uint8_t)GPR_U32(ctx, 3));
    // 0x1277a0: 0x24030037  addiu       $v1, $zero, 0x37
    ctx->pc = 0x1277a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x1277a4: 0xa38484f0  sb          $a0, -0x7B10($gp)
    ctx->pc = 0x1277a4u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294935792), (uint8_t)GPR_U32(ctx, 4));
    // 0x1277a8: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x1277A8u;
    {
        const bool branch_taken_0x1277a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1277ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1277A8u;
        // 0x1277ac: 0xa38384ec  sb          $v1, -0x7B14($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294935788), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1277a8) {
            ctx->pc = 0x1278E0u;
            return;
        }
    }
    ctx->pc = 0x1277B0u;
label_1277b0:
    // 0x1277b0: 0x24030084  addiu       $v1, $zero, 0x84
    ctx->pc = 0x1277b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
    // 0x1277b4: 0x24040064  addiu       $a0, $zero, 0x64
    ctx->pc = 0x1277b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x1277b8: 0xa38384f4  sb          $v1, -0x7B0C($gp)
    ctx->pc = 0x1277b8u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294935796), (uint8_t)GPR_U32(ctx, 3));
    // 0x1277bc: 0x24030056  addiu       $v1, $zero, 0x56
    ctx->pc = 0x1277bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 86));
    // 0x1277c0: 0xa38484f0  sb          $a0, -0x7B10($gp)
    ctx->pc = 0x1277c0u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294935792), (uint8_t)GPR_U32(ctx, 4));
    // 0x1277c4: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x1277C4u;
    {
        const bool branch_taken_0x1277c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1277C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1277C4u;
        // 0x1277c8: 0xa38384ec  sb          $v1, -0x7B14($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294935788), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1277c4) {
            ctx->pc = 0x1278E0u;
            return;
        }
    }
    ctx->pc = 0x1277CCu;
label_1277cc:
    // 0x1277cc: 0x240300cf  addiu       $v1, $zero, 0xCF
    ctx->pc = 0x1277ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 207));
    // 0x1277d0: 0x240400c0  addiu       $a0, $zero, 0xC0
    ctx->pc = 0x1277d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x1277d4: 0xa38384f4  sb          $v1, -0x7B0C($gp)
    ctx->pc = 0x1277d4u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294935796), (uint8_t)GPR_U32(ctx, 3));
    // 0x1277d8: 0x240300a1  addiu       $v1, $zero, 0xA1
    ctx->pc = 0x1277d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 161));
    // 0x1277dc: 0xa38484f0  sb          $a0, -0x7B10($gp)
    ctx->pc = 0x1277dcu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294935792), (uint8_t)GPR_U32(ctx, 4));
    // 0x1277e0: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x1277E0u;
    {
        const bool branch_taken_0x1277e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1277E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1277E0u;
        // 0x1277e4: 0xa38384ec  sb          $v1, -0x7B14($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294935788), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1277e0) {
            ctx->pc = 0x1278E0u;
            return;
        }
    }
    ctx->pc = 0x1277E8u;
label_1277e8:
    // 0x1277e8: 0x24030045  addiu       $v1, $zero, 0x45
    ctx->pc = 0x1277e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
    // 0x1277ec: 0x24040041  addiu       $a0, $zero, 0x41
    ctx->pc = 0x1277ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x1277f0: 0xa38384f4  sb          $v1, -0x7B0C($gp)
    ctx->pc = 0x1277f0u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294935796), (uint8_t)GPR_U32(ctx, 3));
    // 0x1277f4: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x1277f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x1277f8: 0xa38484f0  sb          $a0, -0x7B10($gp)
    ctx->pc = 0x1277f8u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294935792), (uint8_t)GPR_U32(ctx, 4));
    // 0x1277fc: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x1277FCu;
    {
        const bool branch_taken_0x1277fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x127800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1277FCu;
        // 0x127800: 0xa38384ec  sb          $v1, -0x7B14($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294935788), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1277fc) {
            ctx->pc = 0x1278E0u;
            return;
        }
    }
    ctx->pc = 0x127804u;
label_127804:
    // 0x127804: 0x240300af  addiu       $v1, $zero, 0xAF
    ctx->pc = 0x127804u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 175));
    // 0x127808: 0x2404009e  addiu       $a0, $zero, 0x9E
    ctx->pc = 0x127808u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 158));
    // 0x12780c: 0xa38384f4  sb          $v1, -0x7B0C($gp)
    ctx->pc = 0x12780cu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294935796), (uint8_t)GPR_U32(ctx, 3));
    // 0x127810: 0x2403007a  addiu       $v1, $zero, 0x7A
    ctx->pc = 0x127810u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 122));
    // 0x127814: 0xa38484f0  sb          $a0, -0x7B10($gp)
    ctx->pc = 0x127814u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294935792), (uint8_t)GPR_U32(ctx, 4));
    // 0x127818: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x127818u;
    {
        const bool branch_taken_0x127818 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12781Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127818u;
        // 0x12781c: 0xa38384ec  sb          $v1, -0x7B14($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294935788), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127818) {
            ctx->pc = 0x1278E0u;
            return;
        }
    }
    ctx->pc = 0x127820u;
label_127820:
    // 0x127820: 0x24030097  addiu       $v1, $zero, 0x97
    ctx->pc = 0x127820u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 151));
    // 0x127824: 0x2404008b  addiu       $a0, $zero, 0x8B
    ctx->pc = 0x127824u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 139));
    // 0x127828: 0xa38384f4  sb          $v1, -0x7B0C($gp)
    ctx->pc = 0x127828u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294935796), (uint8_t)GPR_U32(ctx, 3));
    // 0x12782c: 0x24030081  addiu       $v1, $zero, 0x81
    ctx->pc = 0x12782cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 129));
    // 0x127830: 0xa38484f0  sb          $a0, -0x7B10($gp)
    ctx->pc = 0x127830u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294935792), (uint8_t)GPR_U32(ctx, 4));
    // 0x127834: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x127834u;
    {
        const bool branch_taken_0x127834 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x127838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127834u;
        // 0x127838: 0xa38384ec  sb          $v1, -0x7B14($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294935788), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127834) {
            ctx->pc = 0x1278E0u;
            return;
        }
    }
    ctx->pc = 0x12783Cu;
label_12783c:
    // 0x12783c: 0x24030097  addiu       $v1, $zero, 0x97
    ctx->pc = 0x12783cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 151));
    // 0x127840: 0x2404008b  addiu       $a0, $zero, 0x8B
    ctx->pc = 0x127840u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 139));
    // 0x127844: 0xa38384f4  sb          $v1, -0x7B0C($gp)
    ctx->pc = 0x127844u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294935796), (uint8_t)GPR_U32(ctx, 3));
    // 0x127848: 0x2403006c  addiu       $v1, $zero, 0x6C
    ctx->pc = 0x127848u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
    // 0x12784c: 0xa38484f0  sb          $a0, -0x7B10($gp)
    ctx->pc = 0x12784cu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294935792), (uint8_t)GPR_U32(ctx, 4));
    // 0x127850: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x127850u;
    {
        const bool branch_taken_0x127850 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x127854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127850u;
        // 0x127854: 0xa38384ec  sb          $v1, -0x7B14($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294935788), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127850) {
            ctx->pc = 0x1278E0u;
            return;
        }
    }
    ctx->pc = 0x127858u;
label_127858:
    // 0x127858: 0x24030089  addiu       $v1, $zero, 0x89
    ctx->pc = 0x127858u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 137));
    // 0x12785c: 0x2404007c  addiu       $a0, $zero, 0x7C
    ctx->pc = 0x12785cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 124));
    // 0x127860: 0xa38384f4  sb          $v1, -0x7B0C($gp)
    ctx->pc = 0x127860u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294935796), (uint8_t)GPR_U32(ctx, 3));
    // 0x127864: 0x2403005d  addiu       $v1, $zero, 0x5D
    ctx->pc = 0x127864u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 93));
    // 0x127868: 0xa38484f0  sb          $a0, -0x7B10($gp)
    ctx->pc = 0x127868u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294935792), (uint8_t)GPR_U32(ctx, 4));
    // 0x12786c: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x12786Cu;
    {
        const bool branch_taken_0x12786c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x127870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12786Cu;
        // 0x127870: 0xa38384ec  sb          $v1, -0x7B14($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294935788), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12786c) {
            ctx->pc = 0x1278E0u;
            return;
        }
    }
    ctx->pc = 0x127874u;
label_127874:
    // 0x127874: 0x24030050  addiu       $v1, $zero, 0x50
    ctx->pc = 0x127874u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x127878: 0x24040055  addiu       $a0, $zero, 0x55
    ctx->pc = 0x127878u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 85));
    // 0x12787c: 0xa38384f4  sb          $v1, -0x7B0C($gp)
    ctx->pc = 0x12787cu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294935796), (uint8_t)GPR_U32(ctx, 3));
    // 0x127880: 0x2403005f  addiu       $v1, $zero, 0x5F
    ctx->pc = 0x127880u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 95));
    // 0x127884: 0xa38484f0  sb          $a0, -0x7B10($gp)
    ctx->pc = 0x127884u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294935792), (uint8_t)GPR_U32(ctx, 4));
    // 0x127888: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x127888u;
    {
        const bool branch_taken_0x127888 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12788Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127888u;
        // 0x12788c: 0xa38384ec  sb          $v1, -0x7B14($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294935788), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127888) {
            ctx->pc = 0x1278E0u;
            return;
        }
    }
    ctx->pc = 0x127890u;
label_127890:
    // 0x127890: 0x240300af  addiu       $v1, $zero, 0xAF
    ctx->pc = 0x127890u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 175));
    // 0x127894: 0x2404009b  addiu       $a0, $zero, 0x9B
    ctx->pc = 0x127894u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 155));
    // 0x127898: 0xa38384f4  sb          $v1, -0x7B0C($gp)
    ctx->pc = 0x127898u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294935796), (uint8_t)GPR_U32(ctx, 3));
    // 0x12789c: 0x24030075  addiu       $v1, $zero, 0x75
    ctx->pc = 0x12789cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 117));
    // 0x1278a0: 0xa38484f0  sb          $a0, -0x7B10($gp)
    ctx->pc = 0x1278a0u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294935792), (uint8_t)GPR_U32(ctx, 4));
    // 0x1278a4: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1278A4u;
    {
        const bool branch_taken_0x1278a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1278A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1278A4u;
        // 0x1278a8: 0xa38384ec  sb          $v1, -0x7B14($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294935788), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1278a4) {
            ctx->pc = 0x1278E0u;
            return;
        }
    }
    ctx->pc = 0x1278ACu;
label_1278ac:
    // 0x1278ac: 0x240300bc  addiu       $v1, $zero, 0xBC
    ctx->pc = 0x1278acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 188));
    // 0x1278b0: 0x240400b0  addiu       $a0, $zero, 0xB0
    ctx->pc = 0x1278b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
    // 0x1278b4: 0xa38384f4  sb          $v1, -0x7B0C($gp)
    ctx->pc = 0x1278b4u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294935796), (uint8_t)GPR_U32(ctx, 3));
    // 0x1278b8: 0x240300b5  addiu       $v1, $zero, 0xB5
    ctx->pc = 0x1278b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 181));
    // 0x1278bc: 0xa38484f0  sb          $a0, -0x7B10($gp)
    ctx->pc = 0x1278bcu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294935792), (uint8_t)GPR_U32(ctx, 4));
    // 0x1278c0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1278C0u;
    {
        const bool branch_taken_0x1278c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1278C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1278C0u;
        // 0x1278c4: 0xa38384ec  sb          $v1, -0x7B14($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294935788), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1278c0) {
            ctx->pc = 0x1278E0u;
            return;
        }
    }
    ctx->pc = 0x1278C8u;
label_1278c8:
    // 0x1278c8: 0x240300a6  addiu       $v1, $zero, 0xA6
    ctx->pc = 0x1278c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 166));
    // 0x1278cc: 0x24040099  addiu       $a0, $zero, 0x99
    ctx->pc = 0x1278ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 153));
    // 0x1278d0: 0xa38384f4  sb          $v1, -0x7B0C($gp)
    ctx->pc = 0x1278d0u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294935796), (uint8_t)GPR_U32(ctx, 3));
    // 0x1278d4: 0x24030086  addiu       $v1, $zero, 0x86
    ctx->pc = 0x1278d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 134));
    // 0x1278d8: 0xa38484f0  sb          $a0, -0x7B10($gp)
    ctx->pc = 0x1278d8u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294935792), (uint8_t)GPR_U32(ctx, 4));
    // 0x1278dc: 0xa38384ec  sb          $v1, -0x7B14($gp)
    ctx->pc = 0x1278dcu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294935788), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x1278e0u;
}
