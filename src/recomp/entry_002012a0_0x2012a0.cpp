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

// Function: entry_002012a0
// Address: 0x2012a0 - 0x201308
void entry_002012a0_0x2012a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002012a0_0x2012a0");
#endif

    ctx->pc = 0x2012a0u;

    // 0x2012a0: 0x28e1000f  slti        $at, $a3, 0xF
    ctx->pc = 0x2012a0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)15) ? 1 : 0);
    // 0x2012a4: 0x10200046  beqz        $at, . + 4 + (0x46 << 2)
    ctx->pc = 0x2012A4u;
    {
        const bool branch_taken_0x2012a4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2012A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2012A4u;
        // 0x2012a8: 0x71840  sll         $v1, $a3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2012a4) {
            ctx->pc = 0x2013C0u;
            return;
        }
    }
    ctx->pc = 0x2012ACu;
    // 0x2012ac: 0x3c0a002b  lui         $t2, 0x2B
    ctx->pc = 0x2012acu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)43 << 16));
    // 0x2012b0: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x2012b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x2012b4: 0x3c060028  lui         $a2, 0x28
    ctx->pc = 0x2012b4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)40 << 16));
    // 0x2012b8: 0x358c0  sll         $t3, $v1, 3
    ctx->pc = 0x2012b8u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x2012bc: 0x254a13cb  addiu       $t2, $t2, 0x13CB
    ctx->pc = 0x2012bcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 5067));
    // 0x2012c0: 0x14b3821  addu        $a3, $t2, $t3
    ctx->pc = 0x2012c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 11)));
    // 0x2012c4: 0x24c65370  addiu       $a2, $a2, 0x5370
    ctx->pc = 0x2012c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 21360));
    // 0x2012c8: 0x90e70000  lbu         $a3, 0x0($a3)
    ctx->pc = 0x2012c8u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2012cc: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2012ccu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2012d0: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x2012d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2012d4: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x2012d4u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2012d8: 0x73980  sll         $a3, $a3, 6
    ctx->pc = 0x2012d8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 6));
    // 0x2012dc: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x2012dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x2012e0: 0x90c6003b  lbu         $a2, 0x3B($a2)
    ctx->pc = 0x2012e0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 59)));
    // 0x2012e4: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x2012e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x2012e8: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x2012e8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x2012ec: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x2012ecu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
    // 0x2012f0: 0x3c030029  lui         $v1, 0x29
    ctx->pc = 0x2012f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
    // 0x2012f4: 0x24c6c990  addiu       $a2, $a2, -0x3670
    ctx->pc = 0x2012f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294953360));
    // 0x2012f8: 0x2463a4b0  addiu       $v1, $v1, -0x5B50
    ctx->pc = 0x2012f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943920));
    // 0x2012fc: 0xcb3821  addu        $a3, $a2, $t3
    ctx->pc = 0x2012fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 11)));
    // 0x201300: 0x24060028  addiu       $a2, $zero, 0x28
    ctx->pc = 0x201300u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x201304: 0x24e70000  addiu       $a3, $a3, 0x0
    ctx->pc = 0x201304u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 0));
    ctx->pc = 0x201308u;
}
