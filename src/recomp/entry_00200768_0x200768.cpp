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

// Function: entry_00200768
// Address: 0x200768 - 0x2007a0
void entry_00200768_0x200768(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00200768_0x200768");
#endif

    ctx->pc = 0x200768u;

    // 0x200768: 0x90a7005e  lbu         $a3, 0x5E($a1)
    ctx->pc = 0x200768u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 94)));
    // 0x20076c: 0x10ea000c  beq         $a3, $t2, . + 4 + (0xC << 2)
    ctx->pc = 0x20076Cu;
    {
        const bool branch_taken_0x20076c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 10));
        ctx->pc = 0x200770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20076Cu;
        // 0x200770: 0x1245821  addu        $t3, $t1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20076c) {
            ctx->pc = 0x2007A0u;
            return;
        }
    }
    ctx->pc = 0x200774u;
    // 0x200774: 0xc42821  addu        $a1, $a2, $a0
    ctx->pc = 0x200774u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x200778: 0xad670000  sw          $a3, 0x0($t3)
    ctx->pc = 0x200778u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 7));
    // 0x20077c: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x20077cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x200780: 0x8d670000  lw          $a3, 0x0($t3)
    ctx->pc = 0x200780u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x200784: 0x73900  sll         $a3, $a3, 4
    ctx->pc = 0x200784u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x200788: 0x1073821  addu        $a3, $t0, $a3
    ctx->pc = 0x200788u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x20078c: 0x90e70008  lbu         $a3, 0x8($a3)
    ctx->pc = 0x20078cu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x200790: 0xaca70000  sw          $a3, 0x0($a1)
    ctx->pc = 0x200790u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 7));
    // 0x200794: 0x8f8590cc  lw          $a1, -0x6F34($gp)
    ctx->pc = 0x200794u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938828)));
    // 0x200798: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x200798u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x20079c: 0xaf8590cc  sw          $a1, -0x6F34($gp)
    ctx->pc = 0x20079cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938828), GPR_U32(ctx, 5));
    ctx->pc = 0x2007a0u;
}
