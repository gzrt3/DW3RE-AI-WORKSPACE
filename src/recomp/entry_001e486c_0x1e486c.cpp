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

// Function: entry_001e486c
// Address: 0x1e486c - 0x1e490c
void entry_001e486c_0x1e486c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e486c_0x1e486c");
#endif

    ctx->pc = 0x1e486cu;

    // 0x1e486c: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x1e486cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1e4870: 0x10200031  beqz        $at, . + 4 + (0x31 << 2)
    ctx->pc = 0x1E4870u;
    {
        const bool branch_taken_0x1e4870 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e4870) {
            ctx->pc = 0x1E4938u;
            return;
        }
    }
    ctx->pc = 0x1E4878u;
    // 0x1e4878: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x1e4878u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
    // 0x1e487c: 0x33080  sll         $a2, $v1, 2
    ctx->pc = 0x1e487cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1e4880: 0x2442b7b0  addiu       $v0, $v0, -0x4850
    ctx->pc = 0x1e4880u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948784));
    // 0x1e4884: 0x461821  addu        $v1, $v0, $a2
    ctx->pc = 0x1e4884u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1e4888: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x1e4888u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
    // 0x1e488c: 0x84670000  lh          $a3, 0x0($v1)
    ctx->pc = 0x1e488cu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e4890: 0x2442b7b2  addiu       $v0, $v0, -0x484E
    ctx->pc = 0x1e4890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948786));
    // 0x1e4894: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x1e4894u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1e4898: 0x84480000  lh          $t0, 0x0($v0)
    ctx->pc = 0x1e4898u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e489c: 0x24060064  addiu       $a2, $zero, 0x64
    ctx->pc = 0x1e489cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x1e48a0: 0x24e3ffe0  addiu       $v1, $a3, -0x20
    ctx->pc = 0x1e48a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967264));
    // 0x1e48a4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1e48a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1e48a8: 0x24e20020  addiu       $v0, $a3, 0x20
    ctx->pc = 0x1e48a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
    // 0x1e48ac: 0x24676c00  addiu       $a3, $v1, 0x6C00
    ctx->pc = 0x1e48acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 27648));
    // 0x1e48b0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1e48b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1e48b4: 0x24436c00  addiu       $v1, $v0, 0x6C00
    ctx->pc = 0x1e48b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 27648));
    // 0x1e48b8: 0xa4a71990  sh          $a3, 0x1990($a1)
    ctx->pc = 0x1e48b8u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 6544), (uint16_t)GPR_U32(ctx, 7));
    // 0x1e48bc: 0x2502ffe0  addiu       $v0, $t0, -0x20
    ctx->pc = 0x1e48bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967264));
    // 0x1e48c0: 0x238c0  sll         $a3, $v0, 3
    ctx->pc = 0x1e48c0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1e48c4: 0x24e77900  addiu       $a3, $a3, 0x7900
    ctx->pc = 0x1e48c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 30976));
    // 0x1e48c8: 0x25020020  addiu       $v0, $t0, 0x20
    ctx->pc = 0x1e48c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 32));
    // 0x1e48cc: 0xa4a71992  sh          $a3, 0x1992($a1)
    ctx->pc = 0x1e48ccu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 6546), (uint16_t)GPR_U32(ctx, 7));
    // 0x1e48d0: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1e48d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1e48d4: 0xaca61994  sw          $a2, 0x1994($a1)
    ctx->pc = 0x1e48d4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 6548), GPR_U32(ctx, 6));
    // 0x1e48d8: 0x24427900  addiu       $v0, $v0, 0x7900
    ctx->pc = 0x1e48d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
    // 0x1e48dc: 0xa4a319a0  sh          $v1, 0x19A0($a1)
    ctx->pc = 0x1e48dcu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 6560), (uint16_t)GPR_U32(ctx, 3));
    // 0x1e48e0: 0xa4a219a2  sh          $v0, 0x19A2($a1)
    ctx->pc = 0x1e48e0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 6562), (uint16_t)GPR_U32(ctx, 2));
    // 0x1e48e4: 0xaca619a4  sw          $a2, 0x19A4($a1)
    ctx->pc = 0x1e48e4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 6564), GPR_U32(ctx, 6));
    // 0x1e48e8: 0x8f838d80  lw          $v1, -0x7280($gp)
    ctx->pc = 0x1e48e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937984)));
    // 0x1e48ec: 0x28610020  slti        $at, $v1, 0x20
    ctx->pc = 0x1e48ecu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x1e48f0: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x1E48F0u;
    {
        const bool branch_taken_0x1e48f0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E48F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E48F0u;
        // 0x1e48f4: 0x24020040  addiu       $v0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e48f0) {
            ctx->pc = 0x1E4914u;
            return;
        }
    }
    ctx->pc = 0x1E48F8u;
    // 0x1e48f8: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x1e48f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x1e48fc: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E48FCu;
    {
        const bool branch_taken_0x1e48fc = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1E4900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E48FCu;
        // 0x1e4900: 0x31143  sra         $v0, $v1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e48fc) {
            ctx->pc = 0x1E490Cu;
            return;
        }
    }
    ctx->pc = 0x1E4904u;
    // 0x1e4904: 0x2462001f  addiu       $v0, $v1, 0x1F
    ctx->pc = 0x1e4904u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 31));
    // 0x1e4908: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x1e4908u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
    ctx->pc = 0x1e490cu;
}
