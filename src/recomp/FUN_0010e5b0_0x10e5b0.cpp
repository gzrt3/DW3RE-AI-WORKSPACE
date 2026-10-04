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

// Function: FUN_0010e5b0
// Address: 0x10e5b0 - 0x10e690
void FUN_0010e5b0_0x10e5b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0010e5b0_0x10e5b0");
#endif

    ctx->pc = 0x10e5b0u;

    // 0x10e5b0: 0x8f8884e0  lw          $t0, -0x7B20($gp)
    ctx->pc = 0x10e5b0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935776)));
    // 0x10e5b4: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x10e5b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x10e5b8: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x10e5b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x10e5bc: 0x53040  sll         $a2, $a1, 1
    ctx->pc = 0x10e5bcu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x10e5c0: 0x35100  sll         $t2, $v1, 4
    ctx->pc = 0x10e5c0u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x10e5c4: 0xc53021  addu        $a2, $a2, $a1
    ctx->pc = 0x10e5c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x10e5c8: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x10e5c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x10e5cc: 0x64900  sll         $t1, $a2, 4
    ctx->pc = 0x10e5ccu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x10e5d0: 0x24634974  addiu       $v1, $v1, 0x4974
    ctx->pc = 0x10e5d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 18804));
    // 0x10e5d4: 0x3c070030  lui         $a3, 0x30
    ctx->pc = 0x10e5d4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)48 << 16));
    // 0x10e5d8: 0x6a2821  addu        $a1, $v1, $t2
    ctx->pc = 0x10e5d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x10e5dc: 0x24e7b4e0  addiu       $a3, $a3, -0x4B20
    ctx->pc = 0x10e5dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294948064));
    // 0x10e5e0: 0x25060d80  addiu       $a2, $t0, 0xD80
    ctx->pc = 0x10e5e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), 3456));
    // 0x10e5e4: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x10e5e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x10e5e8: 0x8ca80000  lw          $t0, 0x0($a1)
    ctx->pc = 0x10e5e8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x10e5ec: 0x2463496c  addiu       $v1, $v1, 0x496C
    ctx->pc = 0x10e5ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 18796));
    // 0x10e5f0: 0xc92821  addu        $a1, $a2, $t1
    ctx->pc = 0x10e5f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
    // 0x10e5f4: 0x6a3021  addu        $a2, $v1, $t2
    ctx->pc = 0x10e5f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x10e5f8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x10e5f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x10e5fc: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x10e5fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
    // 0x10e600: 0x24a54928  addiu       $a1, $a1, 0x4928
    ctx->pc = 0x10e600u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18728));
    // 0x10e604: 0xaa5821  addu        $t3, $a1, $t2
    ctx->pc = 0x10e604u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 10)));
    // 0x10e608: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x10e608u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x10e60c: 0x91690000  lbu         $t1, 0x0($t3)
    ctx->pc = 0x10e60cu;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x10e610: 0x83200  sll         $a2, $t0, 8
    ctx->pc = 0x10e610u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x10e614: 0xc83023  subu        $a2, $a2, $t0
    ctx->pc = 0x10e614u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x10e618: 0x1242021  addu        $a0, $t1, $a0
    ctx->pc = 0x10e618u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
    // 0x10e61c: 0x63140  sll         $a2, $a2, 5
    ctx->pc = 0x10e61cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
    // 0x10e620: 0x28810097  slti        $at, $a0, 0x97
    ctx->pc = 0x10e620u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)151) ? 1 : 0);
    // 0x10e624: 0xe63821  addu        $a3, $a3, $a2
    ctx->pc = 0x10e624u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x10e628: 0x53140  sll         $a2, $a1, 5
    ctx->pc = 0x10e628u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x10e62c: 0x24e50000  addiu       $a1, $a3, 0x0
    ctx->pc = 0x10e62cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 0));
    // 0x10e630: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x10E630u;
    {
        const bool branch_taken_0x10e630 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x10E634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E630u;
        // 0x10e634: 0xa65021  addu        $t2, $a1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e630) {
            ctx->pc = 0x10E63Cu;
            goto label_10e63c;
        }
    }
    ctx->pc = 0x10E638u;
    // 0x10e638: 0x24040096  addiu       $a0, $zero, 0x96
    ctx->pc = 0x10e638u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 150));
label_10e63c:
    // 0x10e63c: 0xa1640000  sb          $a0, 0x0($t3)
    ctx->pc = 0x10e63cu;
    WRITE8(ADD32(GPR_U32(ctx, 11), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x10e640: 0xa144000e  sb          $a0, 0xE($t2)
    ctx->pc = 0x10e640u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 14), (uint8_t)GPR_U32(ctx, 4));
    // 0x10e644: 0x91640000  lbu         $a0, 0x0($t3)
    ctx->pc = 0x10e644u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x10e648: 0x9065024a  lbu         $a1, 0x24A($v1)
    ctx->pc = 0x10e648u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 586)));
    // 0x10e64c: 0x892023  subu        $a0, $a0, $t1
    ctx->pc = 0x10e64cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x10e650: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x10e650u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x10e654: 0x28a100fb  slti        $at, $a1, 0xFB
    ctx->pc = 0x10e654u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)251) ? 1 : 0);
    // 0x10e658: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x10E658u;
    {
        const bool branch_taken_0x10e658 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x10e658) {
            ctx->pc = 0x10E664u;
            goto label_10e664;
        }
    }
    ctx->pc = 0x10E660u;
    // 0x10e660: 0x240500fa  addiu       $a1, $zero, 0xFA
    ctx->pc = 0x10e660u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 250));
label_10e664:
    // 0x10e664: 0xa065024a  sb          $a1, 0x24A($v1)
    ctx->pc = 0x10e664u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 586), (uint8_t)GPR_U32(ctx, 5));
    // 0x10e668: 0x3c070025  lui         $a3, 0x25
    ctx->pc = 0x10e668u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)37 << 16));
    // 0x10e66c: 0x9549000a  lhu         $t1, 0xA($t2)
    ctx->pc = 0x10e66cu;
    SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 10)));
    // 0x10e670: 0x3c0551eb  lui         $a1, 0x51EB
    ctx->pc = 0x10e670u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)20971 << 16));
    // 0x10e674: 0x34a6851f  ori         $a2, $a1, 0x851F
    ctx->pc = 0x10e674u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)34079);
    // 0x10e678: 0x24e73b86  addiu       $a3, $a3, 0x3B86
    ctx->pc = 0x10e678u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 15238));
    // 0x10e67c: 0x9065024c  lbu         $a1, 0x24C($v1)
    ctx->pc = 0x10e67cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 588)));
    // 0x10e680: 0x94100  sll         $t0, $t1, 4
    ctx->pc = 0x10e680u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
    // 0x10e684: 0x1094023  subu        $t0, $t0, $t1
    ctx->pc = 0x10e684u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x10e688: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x10e688u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x10e68c: 0x90e70000  lbu         $a3, 0x0($a3)
    ctx->pc = 0x10e68cu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    ctx->pc = 0x10e690u;
}
