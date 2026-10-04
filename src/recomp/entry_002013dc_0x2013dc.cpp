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

// Function: entry_002013dc
// Address: 0x2013dc - 0x201430
void entry_002013dc_0x2013dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002013dc_0x2013dc");
#endif

    ctx->pc = 0x2013dcu;

    // 0x2013dc: 0x10200029  beqz        $at, . + 4 + (0x29 << 2)
    ctx->pc = 0x2013DCu;
    {
        const bool branch_taken_0x2013dc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2013E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2013DCu;
        // 0x2013e0: 0x3c03002a  lui         $v1, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2013dc) {
            ctx->pc = 0x201484u;
            return;
        }
    }
    ctx->pc = 0x2013E4u;
    // 0x2013e4: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2013e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x2013e8: 0x92040  sll         $a0, $t1, 1
    ctx->pc = 0x2013e8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
    // 0x2013ec: 0x2463c990  addiu       $v1, $v1, -0x3670
    ctx->pc = 0x2013ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953360));
    // 0x2013f0: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x2013f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2013f4: 0x34214a18  ori         $at, $at, 0x4A18
    ctx->pc = 0x2013f4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)18968);
    // 0x2013f8: 0x813821  addu        $a3, $a0, $at
    ctx->pc = 0x2013f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
    // 0x2013fc: 0x3c030029  lui         $v1, 0x29
    ctx->pc = 0x2013fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
    // 0x201400: 0x90e40000  lbu         $a0, 0x0($a3)
    ctx->pc = 0x201400u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x201404: 0x2463a4b0  addiu       $v1, $v1, -0x5B50
    ctx->pc = 0x201404u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943920));
    // 0x201408: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x201408u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x20140c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x20140cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x201410: 0xdc660000  ld          $a2, 0x0($v1)
    ctx->pc = 0x201410u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x201414: 0x30c30008  andi        $v1, $a2, 0x8
    ctx->pc = 0x201414u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)8);
    // 0x201418: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x201418u;
    {
        const bool branch_taken_0x201418 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x201418) {
            ctx->pc = 0x201430u;
            return;
        }
    }
    ctx->pc = 0x201420u;
    // 0x201420: 0x90e40001  lbu         $a0, 0x1($a3)
    ctx->pc = 0x201420u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 1)));
    // 0x201424: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x201424u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x201428: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x201428u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x20142c: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x20142cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    ctx->pc = 0x201430u;
}
