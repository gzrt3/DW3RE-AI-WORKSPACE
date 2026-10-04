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

// Function: entry_001967e4
// Address: 0x1967e4 - 0x196810
void entry_001967e4_0x1967e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001967e4_0x1967e4");
#endif

    ctx->pc = 0x1967e4u;

    // 0x1967e4: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x1967e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x1967e8: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1967E8u;
    {
        const bool branch_taken_0x1967e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1967ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1967E8u;
        // 0x1967ec: 0x90870002  lbu         $a3, 0x2($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1967e8) {
            ctx->pc = 0x196810u;
            return;
        }
    }
    ctx->pc = 0x1967F0u;
    // 0x1967f0: 0x310c3  sra         $v0, $v1, 3
    ctx->pc = 0x1967f0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 3));
    // 0x1967f4: 0x61a00  sll         $v1, $a2, 8
    ctx->pc = 0x1967f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
    // 0x1967f8: 0x23400  sll         $a2, $v0, 16
    ctx->pc = 0x1967f8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1967fc: 0xc31825  or          $v1, $a2, $v1
    ctx->pc = 0x1967fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x196800: 0x24820003  addiu       $v0, $a0, 0x3
    ctx->pc = 0x196800u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 3));
    // 0x196804: 0xe31825  or          $v1, $a3, $v1
    ctx->pc = 0x196804u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x196808: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x196808u;
    {
        const bool branch_taken_0x196808 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19680Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196808u;
        // 0x19680c: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196808) {
            ctx->pc = 0x196838u;
            return;
        }
    }
    ctx->pc = 0x196810u;
}
