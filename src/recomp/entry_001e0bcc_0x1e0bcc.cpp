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

// Function: entry_001e0bcc
// Address: 0x1e0bcc - 0x1e0c18
void entry_001e0bcc_0x1e0bcc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e0bcc_0x1e0bcc");
#endif

    ctx->pc = 0x1e0bccu;

    // 0x1e0bcc: 0x0  nop
    ctx->pc = 0x1e0bccu;
    // NOP
    // 0x1e0bd0: 0xa64821  addu        $t1, $a1, $a2
    ctx->pc = 0x1e0bd0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1e0bd4: 0xa52e0160  sh          $t6, 0x160($t1)
    ctx->pc = 0x1e0bd4u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 352), (uint16_t)GPR_U32(ctx, 14));
    // 0x1e0bd8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1e0bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1e0bdc: 0xa52f0170  sh          $t7, 0x170($t1)
    ctx->pc = 0x1e0bdcu;
    WRITE16(ADD32(GPR_U32(ctx, 9), 368), (uint16_t)GPR_U32(ctx, 15));
    // 0x1e0be0: 0x28470010  slti        $a3, $v0, 0x10
    ctx->pc = 0x1e0be0u;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x1e0be4: 0xa1380150  sb          $t8, 0x150($t1)
    ctx->pc = 0x1e0be4u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 336), (uint8_t)GPR_U32(ctx, 24));
    // 0x1e0be8: 0x24c600a0  addiu       $a2, $a2, 0xA0
    ctx->pc = 0x1e0be8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 160));
    // 0x1e0bec: 0xa1380151  sb          $t8, 0x151($t1)
    ctx->pc = 0x1e0becu;
    WRITE8(ADD32(GPR_U32(ctx, 9), 337), (uint8_t)GPR_U32(ctx, 24));
    // 0x1e0bf0: 0xa1380152  sb          $t8, 0x152($t1)
    ctx->pc = 0x1e0bf0u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 338), (uint8_t)GPR_U32(ctx, 24));
    // 0x1e0bf4: 0xa1230153  sb          $v1, 0x153($t1)
    ctx->pc = 0x1e0bf4u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 339), (uint8_t)GPR_U32(ctx, 3));
    // 0x1e0bf8: 0x14e0ffb5  bnez        $a3, . + 4 + (-0x4B << 2)
    ctx->pc = 0x1E0BF8u;
    {
        const bool branch_taken_0x1e0bf8 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E0BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0BF8u;
        // 0x1e0bfc: 0xad280154  sw          $t0, 0x154($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 340), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0bf8) {
            ctx->pc = 0x1E0AD0u;
            return;
        }
    }
    ctx->pc = 0x1E0C00u;
    // 0x1e0c00: 0x8f828d20  lw          $v0, -0x72E0($gp)
    ctx->pc = 0x1e0c00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937888)));
    // 0x1e0c04: 0x28410010  slti        $at, $v0, 0x10
    ctx->pc = 0x1e0c04u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x1e0c08: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E0C08u;
    {
        const bool branch_taken_0x1e0c08 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0C08u;
        // 0x1e0c0c: 0x24a30ae0  addiu       $v1, $a1, 0xAE0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 2784));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0c08) {
            ctx->pc = 0x1E0C18u;
            return;
        }
    }
    ctx->pc = 0x1E0C10u;
    // 0x1e0c10: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1E0C10u;
    {
        const bool branch_taken_0x1e0c10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0C10u;
        // 0x1e0c14: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0c10) {
            ctx->pc = 0x1E0C1Cu;
            return;
        }
    }
    ctx->pc = 0x1E0C18u;
}
