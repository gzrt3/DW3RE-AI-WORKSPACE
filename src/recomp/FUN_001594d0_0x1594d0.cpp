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

// Function: FUN_001594d0
// Address: 0x1594d0 - 0x159598
void FUN_001594d0_0x1594d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001594d0_0x1594d0");
#endif

    ctx->pc = 0x1594d0u;

    // 0x1594d0: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x1594d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1594d4: 0x3c070033  lui         $a3, 0x33
    ctx->pc = 0x1594d4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)51 << 16));
    // 0x1594d8: 0x644821  addu        $t1, $v1, $a0
    ctx->pc = 0x1594d8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1594dc: 0x24e71300  addiu       $a3, $a3, 0x1300
    ctx->pc = 0x1594dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4864));
    // 0x1594e0: 0x94080  sll         $t0, $t1, 2
    ctx->pc = 0x1594e0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x1594e4: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x1594e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x1594e8: 0x1094023  subu        $t0, $t0, $t1
    ctx->pc = 0x1594e8u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x1594ec: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1594ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1594f0: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x1594f0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x1594f4: 0x32980  sll         $a1, $v1, 6
    ctx->pc = 0x1594f4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x1594f8: 0xe81821  addu        $v1, $a3, $t0
    ctx->pc = 0x1594f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x1594fc: 0x24630000  addiu       $v1, $v1, 0x0
    ctx->pc = 0x1594fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 0));
    // 0x159500: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x159500u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x159504: 0x90650222  lbu         $a1, 0x222($v1)
    ctx->pc = 0x159504u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 546)));
    // 0x159508: 0x14a00023  bnez        $a1, . + 4 + (0x23 << 2)
    ctx->pc = 0x159508u;
    {
        const bool branch_taken_0x159508 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x159508) {
            ctx->pc = 0x159598u;
            return;
        }
    }
    ctx->pc = 0x159510u;
    // 0x159510: 0x42a00  sll         $a1, $a0, 8
    ctx->pc = 0x159510u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x159514: 0x90690220  lbu         $t1, 0x220($v1)
    ctx->pc = 0x159514u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 544)));
    // 0x159518: 0xa44023  subu        $t0, $a1, $a0
    ctx->pc = 0x159518u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x15951c: 0x838c0  sll         $a3, $t0, 3
    ctx->pc = 0x15951cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x159520: 0x3c05002f  lui         $a1, 0x2F
    ctx->pc = 0x159520u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)47 << 16));
    // 0x159524: 0x1073821  addu        $a3, $t0, $a3
    ctx->pc = 0x159524u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x159528: 0x24a52570  addiu       $a1, $a1, 0x2570
    ctx->pc = 0x159528u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9584));
    // 0x15952c: 0x738c0  sll         $a3, $a3, 3
    ctx->pc = 0x15952cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x159530: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x159530u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x159534: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x159534u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x159538: 0x938c0  sll         $a3, $t1, 3
    ctx->pc = 0x159538u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
    // 0x15953c: 0x24a50000  addiu       $a1, $a1, 0x0
    ctx->pc = 0x15953cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 0));
    // 0x159540: 0xe93821  addu        $a3, $a3, $t1
    ctx->pc = 0x159540u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x159544: 0x738c0  sll         $a3, $a3, 3
    ctx->pc = 0x159544u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x159548: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x159548u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x15954c: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x15954cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x159550: 0x90a70015  lbu         $a3, 0x15($a1)
    ctx->pc = 0x159550u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 21)));
    // 0x159554: 0x10e40010  beq         $a3, $a0, . + 4 + (0x10 << 2)
    ctx->pc = 0x159554u;
    {
        const bool branch_taken_0x159554 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 4));
        ctx->pc = 0x159558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159554u;
        // 0x159558: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159554) {
            ctx->pc = 0x159598u;
            return;
        }
    }
    ctx->pc = 0x15955Cu;
    // 0x15955c: 0x10e5000e  beq         $a3, $a1, . + 4 + (0xE << 2)
    ctx->pc = 0x15955Cu;
    {
        const bool branch_taken_0x15955c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 5));
        ctx->pc = 0x159560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15955Cu;
        // 0x159560: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15955c) {
            ctx->pc = 0x159598u;
            return;
        }
    }
    ctx->pc = 0x159564u;
    // 0x159564: 0x10e4000c  beq         $a3, $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x159564u;
    {
        const bool branch_taken_0x159564 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 4));
        if (branch_taken_0x159564) {
            ctx->pc = 0x159598u;
            return;
        }
    }
    ctx->pc = 0x15956Cu;
    // 0x15956c: 0xa4660230  sh          $a2, 0x230($v1)
    ctx->pc = 0x15956cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 560), (uint16_t)GPR_U32(ctx, 6));
    // 0x159570: 0x84640230  lh          $a0, 0x230($v1)
    ctx->pc = 0x159570u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 560)));
    // 0x159574: 0x28810384  slti        $at, $a0, 0x384
    ctx->pc = 0x159574u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)900) ? 1 : 0);
    // 0x159578: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x159578u;
    {
        const bool branch_taken_0x159578 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x159578) {
            ctx->pc = 0x15958Cu;
            goto label_15958c;
        }
    }
    ctx->pc = 0x159580u;
    // 0x159580: 0x24040383  addiu       $a0, $zero, 0x383
    ctx->pc = 0x159580u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 899));
    // 0x159584: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x159584u;
    {
        const bool branch_taken_0x159584 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x159588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159584u;
        // 0x159588: 0xa4640230  sh          $a0, 0x230($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 560), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159584) {
            ctx->pc = 0x159598u;
            return;
        }
    }
    ctx->pc = 0x15958Cu;
label_15958c:
    // 0x15958c: 0x1c800002  bgtz        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x15958Cu;
    {
        const bool branch_taken_0x15958c = (GPR_S32(ctx, 4) > 0);
        if (branch_taken_0x15958c) {
            ctx->pc = 0x159598u;
            return;
        }
    }
    ctx->pc = 0x159594u;
    // 0x159594: 0xa4650230  sh          $a1, 0x230($v1)
    ctx->pc = 0x159594u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 560), (uint16_t)GPR_U32(ctx, 5));
    ctx->pc = 0x159598u;
}
