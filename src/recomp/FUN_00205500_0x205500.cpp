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

// Function: FUN_00205500
// Address: 0x205500 - 0x2055f0
void FUN_00205500_0x205500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00205500_0x205500");
#endif

    ctx->pc = 0x205500u;

    // 0x205500: 0x8f8490f8  lw          $a0, -0x6F08($gp)
    ctx->pc = 0x205500u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938872)));
    // 0x205504: 0x1080003a  beqz        $a0, . + 4 + (0x3A << 2)
    ctx->pc = 0x205504u;
    {
        const bool branch_taken_0x205504 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x205504) {
            ctx->pc = 0x2055F0u;
            return;
        }
    }
    ctx->pc = 0x20550Cu;
    // 0x20550c: 0x8c832484  lw          $v1, 0x2484($a0)
    ctx->pc = 0x20550cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 9348)));
    // 0x205510: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x205510u;
    {
        const bool branch_taken_0x205510 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x205510) {
            ctx->pc = 0x20553Cu;
            goto label_20553c;
        }
    }
    ctx->pc = 0x205518u;
    // 0x205518: 0x8c83248c  lw          $v1, 0x248C($a0)
    ctx->pc = 0x205518u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 9356)));
    // 0x20551c: 0x2485248c  addiu       $a1, $a0, 0x248C
    ctx->pc = 0x20551cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 9356));
    // 0x205520: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x205520u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x205524: 0x4810004  bgez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x205524u;
    {
        const bool branch_taken_0x205524 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x205528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205524u;
        // 0x205528: 0x3083003f  andi        $v1, $a0, 0x3F (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)63);
        ctx->in_delay_slot = false;
        if (branch_taken_0x205524) {
            ctx->pc = 0x205538u;
            goto label_205538;
        }
    }
    ctx->pc = 0x20552Cu;
    // 0x20552c: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x20552Cu;
    {
        const bool branch_taken_0x20552c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x20552c) {
            ctx->pc = 0x205538u;
            goto label_205538;
        }
    }
    ctx->pc = 0x205534u;
    // 0x205534: 0x2463ffc0  addiu       $v1, $v1, -0x40
    ctx->pc = 0x205534u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967232));
label_205538:
    // 0x205538: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x205538u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_20553c:
    // 0x20553c: 0x8f8590f8  lw          $a1, -0x6F08($gp)
    ctx->pc = 0x20553cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938872)));
    // 0x205540: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x205540u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x205544: 0x8ca42480  lw          $a0, 0x2480($a1)
    ctx->pc = 0x205544u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 9344)));
    // 0x205548: 0x14830015  bne         $a0, $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x205548u;
    {
        const bool branch_taken_0x205548 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x20554Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205548u;
        // 0x20554c: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205548) {
            ctx->pc = 0x2055A0u;
            goto label_2055a0;
        }
    }
    ctx->pc = 0x205550u;
    // 0x205550: 0x8ca42484  lw          $a0, 0x2484($a1)
    ctx->pc = 0x205550u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 9348)));
    // 0x205554: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x205554u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x205558: 0x2881000c  slti        $at, $a0, 0xC
    ctx->pc = 0x205558u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x20555c: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x20555Cu;
    {
        const bool branch_taken_0x20555c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x205560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20555Cu;
        // 0x205560: 0xaca32484  sw          $v1, 0x2484($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 9348), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20555c) {
            ctx->pc = 0x205578u;
            goto label_205578;
        }
    }
    ctx->pc = 0x205564u;
    // 0x205564: 0x8f8490f8  lw          $a0, -0x6F08($gp)
    ctx->pc = 0x205564u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938872)));
    // 0x205568: 0x8c852484  lw          $a1, 0x2484($a0)
    ctx->pc = 0x205568u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 9348)));
    // 0x20556c: 0x24a30001  addiu       $v1, $a1, 0x1
    ctx->pc = 0x20556cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x205570: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x205570u;
    {
        const bool branch_taken_0x205570 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x205574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205570u;
        // 0x205574: 0xac832484  sw          $v1, 0x2484($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 9348), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205570) {
            ctx->pc = 0x20557Cu;
            goto label_20557c;
        }
    }
    ctx->pc = 0x205578u;
label_205578:
    // 0x205578: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x205578u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_20557c:
    // 0x20557c: 0x8f8390f8  lw          $v1, -0x6F08($gp)
    ctx->pc = 0x20557cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938872)));
    // 0x205580: 0xac652484  sw          $a1, 0x2484($v1)
    ctx->pc = 0x205580u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 9348), GPR_U32(ctx, 5));
    // 0x205584: 0x8f8490f8  lw          $a0, -0x6F08($gp)
    ctx->pc = 0x205584u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938872)));
    // 0x205588: 0x8c832484  lw          $v1, 0x2484($a0)
    ctx->pc = 0x205588u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 9348)));
    // 0x20558c: 0x2863000c  slti        $v1, $v1, 0xC
    ctx->pc = 0x20558cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x205590: 0x14600017  bnez        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x205590u;
    {
        const bool branch_taken_0x205590 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x205590) {
            ctx->pc = 0x2055F0u;
            return;
        }
    }
    ctx->pc = 0x205598u;
    // 0x205598: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x205598u;
    {
        const bool branch_taken_0x205598 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20559Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205598u;
        // 0x20559c: 0xac802480  sw          $zero, 0x2480($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 9344), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205598) {
            ctx->pc = 0x2055F0u;
            return;
        }
    }
    ctx->pc = 0x2055A0u;
label_2055a0:
    // 0x2055a0: 0x14830013  bne         $a0, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x2055A0u;
    {
        const bool branch_taken_0x2055a0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2055a0) {
            ctx->pc = 0x2055F0u;
            return;
        }
    }
    ctx->pc = 0x2055A8u;
    // 0x2055a8: 0x8ca42484  lw          $a0, 0x2484($a1)
    ctx->pc = 0x2055a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 9348)));
    // 0x2055ac: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x2055acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x2055b0: 0x4082a  slt         $at, $zero, $a0
    ctx->pc = 0x2055b0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2055b4: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x2055B4u;
    {
        const bool branch_taken_0x2055b4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2055B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2055B4u;
        // 0x2055b8: 0xaca32484  sw          $v1, 0x2484($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 9348), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2055b4) {
            ctx->pc = 0x2055D0u;
            goto label_2055d0;
        }
    }
    ctx->pc = 0x2055BCu;
    // 0x2055bc: 0x8f8490f8  lw          $a0, -0x6F08($gp)
    ctx->pc = 0x2055bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938872)));
    // 0x2055c0: 0x8c852484  lw          $a1, 0x2484($a0)
    ctx->pc = 0x2055c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 9348)));
    // 0x2055c4: 0x24a3ffff  addiu       $v1, $a1, -0x1
    ctx->pc = 0x2055c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x2055c8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2055C8u;
    {
        const bool branch_taken_0x2055c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2055CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2055C8u;
        // 0x2055cc: 0xac832484  sw          $v1, 0x2484($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 9348), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2055c8) {
            ctx->pc = 0x2055D4u;
            goto label_2055d4;
        }
    }
    ctx->pc = 0x2055D0u;
label_2055d0:
    // 0x2055d0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2055d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2055d4:
    // 0x2055d4: 0x8f8390f8  lw          $v1, -0x6F08($gp)
    ctx->pc = 0x2055d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938872)));
    // 0x2055d8: 0xac652484  sw          $a1, 0x2484($v1)
    ctx->pc = 0x2055d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 9348), GPR_U32(ctx, 5));
    // 0x2055dc: 0x8f8490f8  lw          $a0, -0x6F08($gp)
    ctx->pc = 0x2055dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938872)));
    // 0x2055e0: 0x8c832484  lw          $v1, 0x2484($a0)
    ctx->pc = 0x2055e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 9348)));
    // 0x2055e4: 0x1c600002  bgtz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2055E4u;
    {
        const bool branch_taken_0x2055e4 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x2055e4) {
            ctx->pc = 0x2055F0u;
            return;
        }
    }
    ctx->pc = 0x2055ECu;
    // 0x2055ec: 0xac802480  sw          $zero, 0x2480($a0)
    ctx->pc = 0x2055ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 9344), GPR_U32(ctx, 0));
    ctx->pc = 0x2055f0u;
}
