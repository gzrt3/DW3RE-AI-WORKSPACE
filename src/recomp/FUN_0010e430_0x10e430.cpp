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

// Function: FUN_0010e430
// Address: 0x10e430 - 0x10e510
void FUN_0010e430_0x10e430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0010e430_0x10e430");
#endif

    ctx->pc = 0x10e430u;

    // 0x10e430: 0x8f8884e0  lw          $t0, -0x7B20($gp)
    ctx->pc = 0x10e430u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935776)));
    // 0x10e434: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x10e434u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x10e438: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x10e438u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x10e43c: 0x53040  sll         $a2, $a1, 1
    ctx->pc = 0x10e43cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x10e440: 0x35100  sll         $t2, $v1, 4
    ctx->pc = 0x10e440u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x10e444: 0xc53021  addu        $a2, $a2, $a1
    ctx->pc = 0x10e444u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x10e448: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x10e448u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x10e44c: 0x64900  sll         $t1, $a2, 4
    ctx->pc = 0x10e44cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x10e450: 0x24634974  addiu       $v1, $v1, 0x4974
    ctx->pc = 0x10e450u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 18804));
    // 0x10e454: 0x3c070030  lui         $a3, 0x30
    ctx->pc = 0x10e454u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)48 << 16));
    // 0x10e458: 0x6a2821  addu        $a1, $v1, $t2
    ctx->pc = 0x10e458u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x10e45c: 0x24e7b4e0  addiu       $a3, $a3, -0x4B20
    ctx->pc = 0x10e45cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294948064));
    // 0x10e460: 0x25060d80  addiu       $a2, $t0, 0xD80
    ctx->pc = 0x10e460u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), 3456));
    // 0x10e464: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x10e464u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x10e468: 0x8ca80000  lw          $t0, 0x0($a1)
    ctx->pc = 0x10e468u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x10e46c: 0x2463496c  addiu       $v1, $v1, 0x496C
    ctx->pc = 0x10e46cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 18796));
    // 0x10e470: 0xc92821  addu        $a1, $a2, $t1
    ctx->pc = 0x10e470u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
    // 0x10e474: 0x6a3021  addu        $a2, $v1, $t2
    ctx->pc = 0x10e474u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x10e478: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x10e478u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x10e47c: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x10e47cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
    // 0x10e480: 0x24a54929  addiu       $a1, $a1, 0x4929
    ctx->pc = 0x10e480u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18729));
    // 0x10e484: 0xaa5821  addu        $t3, $a1, $t2
    ctx->pc = 0x10e484u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 10)));
    // 0x10e488: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x10e488u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x10e48c: 0x91690000  lbu         $t1, 0x0($t3)
    ctx->pc = 0x10e48cu;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x10e490: 0x83200  sll         $a2, $t0, 8
    ctx->pc = 0x10e490u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x10e494: 0xc83023  subu        $a2, $a2, $t0
    ctx->pc = 0x10e494u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x10e498: 0x1242021  addu        $a0, $t1, $a0
    ctx->pc = 0x10e498u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
    // 0x10e49c: 0x63140  sll         $a2, $a2, 5
    ctx->pc = 0x10e49cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
    // 0x10e4a0: 0x28810097  slti        $at, $a0, 0x97
    ctx->pc = 0x10e4a0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)151) ? 1 : 0);
    // 0x10e4a4: 0xe63821  addu        $a3, $a3, $a2
    ctx->pc = 0x10e4a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x10e4a8: 0x53140  sll         $a2, $a1, 5
    ctx->pc = 0x10e4a8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x10e4ac: 0x24e50000  addiu       $a1, $a3, 0x0
    ctx->pc = 0x10e4acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 0));
    // 0x10e4b0: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x10E4B0u;
    {
        const bool branch_taken_0x10e4b0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x10E4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E4B0u;
        // 0x10e4b4: 0xa65021  addu        $t2, $a1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e4b0) {
            ctx->pc = 0x10E4BCu;
            goto label_10e4bc;
        }
    }
    ctx->pc = 0x10E4B8u;
    // 0x10e4b8: 0x24040096  addiu       $a0, $zero, 0x96
    ctx->pc = 0x10e4b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 150));
label_10e4bc:
    // 0x10e4bc: 0xa1640000  sb          $a0, 0x0($t3)
    ctx->pc = 0x10e4bcu;
    WRITE8(ADD32(GPR_U32(ctx, 11), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x10e4c0: 0xa144000f  sb          $a0, 0xF($t2)
    ctx->pc = 0x10e4c0u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 15), (uint8_t)GPR_U32(ctx, 4));
    // 0x10e4c4: 0x91640000  lbu         $a0, 0x0($t3)
    ctx->pc = 0x10e4c4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x10e4c8: 0x9065024b  lbu         $a1, 0x24B($v1)
    ctx->pc = 0x10e4c8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 587)));
    // 0x10e4cc: 0x892023  subu        $a0, $a0, $t1
    ctx->pc = 0x10e4ccu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x10e4d0: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x10e4d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x10e4d4: 0x28a100fb  slti        $at, $a1, 0xFB
    ctx->pc = 0x10e4d4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)251) ? 1 : 0);
    // 0x10e4d8: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x10E4D8u;
    {
        const bool branch_taken_0x10e4d8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x10e4d8) {
            ctx->pc = 0x10E4E4u;
            goto label_10e4e4;
        }
    }
    ctx->pc = 0x10E4E0u;
    // 0x10e4e0: 0x240500fa  addiu       $a1, $zero, 0xFA
    ctx->pc = 0x10e4e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 250));
label_10e4e4:
    // 0x10e4e4: 0xa065024b  sb          $a1, 0x24B($v1)
    ctx->pc = 0x10e4e4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 587), (uint8_t)GPR_U32(ctx, 5));
    // 0x10e4e8: 0x3c070025  lui         $a3, 0x25
    ctx->pc = 0x10e4e8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)37 << 16));
    // 0x10e4ec: 0x9549000a  lhu         $t1, 0xA($t2)
    ctx->pc = 0x10e4ecu;
    SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 10)));
    // 0x10e4f0: 0x3c0551eb  lui         $a1, 0x51EB
    ctx->pc = 0x10e4f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)20971 << 16));
    // 0x10e4f4: 0x34a6851f  ori         $a2, $a1, 0x851F
    ctx->pc = 0x10e4f4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)34079);
    // 0x10e4f8: 0x24e73b87  addiu       $a3, $a3, 0x3B87
    ctx->pc = 0x10e4f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 15239));
    // 0x10e4fc: 0x9065024d  lbu         $a1, 0x24D($v1)
    ctx->pc = 0x10e4fcu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 589)));
    // 0x10e500: 0x94100  sll         $t0, $t1, 4
    ctx->pc = 0x10e500u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
    // 0x10e504: 0x1094023  subu        $t0, $t0, $t1
    ctx->pc = 0x10e504u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x10e508: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x10e508u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x10e50c: 0x90e70000  lbu         $a3, 0x0($a3)
    ctx->pc = 0x10e50cu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    ctx->pc = 0x10e510u;
}
