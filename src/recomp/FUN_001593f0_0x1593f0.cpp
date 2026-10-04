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

// Function: FUN_001593f0
// Address: 0x1593f0 - 0x1594c4
void FUN_001593f0_0x1593f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001593f0_0x1593f0");
#endif

    ctx->pc = 0x1593f0u;

    // 0x1593f0: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x1593f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1593f4: 0x3c070033  lui         $a3, 0x33
    ctx->pc = 0x1593f4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)51 << 16));
    // 0x1593f8: 0x644821  addu        $t1, $v1, $a0
    ctx->pc = 0x1593f8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1593fc: 0x24e71300  addiu       $a3, $a3, 0x1300
    ctx->pc = 0x1593fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4864));
    // 0x159400: 0x94080  sll         $t0, $t1, 2
    ctx->pc = 0x159400u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x159404: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x159404u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x159408: 0x1094023  subu        $t0, $t0, $t1
    ctx->pc = 0x159408u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x15940c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x15940cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x159410: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x159410u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x159414: 0x32980  sll         $a1, $v1, 6
    ctx->pc = 0x159414u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x159418: 0xe81821  addu        $v1, $a3, $t0
    ctx->pc = 0x159418u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x15941c: 0x24630000  addiu       $v1, $v1, 0x0
    ctx->pc = 0x15941cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 0));
    // 0x159420: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x159420u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x159424: 0x90670222  lbu         $a3, 0x222($v1)
    ctx->pc = 0x159424u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 546)));
    // 0x159428: 0x14e00026  bnez        $a3, . + 4 + (0x26 << 2)
    ctx->pc = 0x159428u;
    {
        const bool branch_taken_0x159428 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x159428) {
            ctx->pc = 0x1594C4u;
            return;
        }
    }
    ctx->pc = 0x159430u;
    // 0x159430: 0x84650232  lh          $a1, 0x232($v1)
    ctx->pc = 0x159430u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 562)));
    // 0x159434: 0x14e00023  bnez        $a3, . + 4 + (0x23 << 2)
    ctx->pc = 0x159434u;
    {
        const bool branch_taken_0x159434 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x159438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159434u;
        // 0x159438: 0xa64821  addu        $t1, $a1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159434) {
            ctx->pc = 0x1594C4u;
            return;
        }
    }
    ctx->pc = 0x15943Cu;
    // 0x15943c: 0x42a00  sll         $a1, $a0, 8
    ctx->pc = 0x15943cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x159440: 0x90680220  lbu         $t0, 0x220($v1)
    ctx->pc = 0x159440u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 544)));
    // 0x159444: 0xa43823  subu        $a3, $a1, $a0
    ctx->pc = 0x159444u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x159448: 0x730c0  sll         $a2, $a3, 3
    ctx->pc = 0x159448u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x15944c: 0x3c05002f  lui         $a1, 0x2F
    ctx->pc = 0x15944cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)47 << 16));
    // 0x159450: 0xe63021  addu        $a2, $a3, $a2
    ctx->pc = 0x159450u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x159454: 0x24a52570  addiu       $a1, $a1, 0x2570
    ctx->pc = 0x159454u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9584));
    // 0x159458: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x159458u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x15945c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x15945cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x159460: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x159460u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x159464: 0x830c0  sll         $a2, $t0, 3
    ctx->pc = 0x159464u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x159468: 0x24a50000  addiu       $a1, $a1, 0x0
    ctx->pc = 0x159468u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 0));
    // 0x15946c: 0xc83021  addu        $a2, $a2, $t0
    ctx->pc = 0x15946cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x159470: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x159470u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x159474: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x159474u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x159478: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x159478u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x15947c: 0x90a60015  lbu         $a2, 0x15($a1)
    ctx->pc = 0x15947cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 21)));
    // 0x159480: 0x10c40010  beq         $a2, $a0, . + 4 + (0x10 << 2)
    ctx->pc = 0x159480u;
    {
        const bool branch_taken_0x159480 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 4));
        ctx->pc = 0x159484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159480u;
        // 0x159484: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159480) {
            ctx->pc = 0x1594C4u;
            return;
        }
    }
    ctx->pc = 0x159488u;
    // 0x159488: 0x10c5000e  beq         $a2, $a1, . + 4 + (0xE << 2)
    ctx->pc = 0x159488u;
    {
        const bool branch_taken_0x159488 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        ctx->pc = 0x15948Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159488u;
        // 0x15948c: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159488) {
            ctx->pc = 0x1594C4u;
            return;
        }
    }
    ctx->pc = 0x159490u;
    // 0x159490: 0x10c4000c  beq         $a2, $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x159490u;
    {
        const bool branch_taken_0x159490 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 4));
        if (branch_taken_0x159490) {
            ctx->pc = 0x1594C4u;
            return;
        }
    }
    ctx->pc = 0x159498u;
    // 0x159498: 0xa4690230  sh          $t1, 0x230($v1)
    ctx->pc = 0x159498u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 560), (uint16_t)GPR_U32(ctx, 9));
    // 0x15949c: 0x84640230  lh          $a0, 0x230($v1)
    ctx->pc = 0x15949cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 560)));
    // 0x1594a0: 0x28810384  slti        $at, $a0, 0x384
    ctx->pc = 0x1594a0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)900) ? 1 : 0);
    // 0x1594a4: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x1594A4u;
    {
        const bool branch_taken_0x1594a4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1594a4) {
            ctx->pc = 0x1594B8u;
            goto label_1594b8;
        }
    }
    ctx->pc = 0x1594ACu;
    // 0x1594ac: 0x24040383  addiu       $a0, $zero, 0x383
    ctx->pc = 0x1594acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 899));
    // 0x1594b0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1594B0u;
    {
        const bool branch_taken_0x1594b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1594B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1594B0u;
        // 0x1594b4: 0xa4640230  sh          $a0, 0x230($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 560), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1594b0) {
            ctx->pc = 0x1594C4u;
            return;
        }
    }
    ctx->pc = 0x1594B8u;
label_1594b8:
    // 0x1594b8: 0x1c800002  bgtz        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1594B8u;
    {
        const bool branch_taken_0x1594b8 = (GPR_S32(ctx, 4) > 0);
        if (branch_taken_0x1594b8) {
            ctx->pc = 0x1594C4u;
            return;
        }
    }
    ctx->pc = 0x1594C0u;
    // 0x1594c0: 0xa4650230  sh          $a1, 0x230($v1)
    ctx->pc = 0x1594c0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 560), (uint16_t)GPR_U32(ctx, 5));
    ctx->pc = 0x1594c4u;
}
