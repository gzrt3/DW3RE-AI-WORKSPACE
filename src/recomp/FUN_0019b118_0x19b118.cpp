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

// Function: FUN_0019b118
// Address: 0x19b118 - 0x19b168
void FUN_0019b118_0x19b118(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0019b118_0x19b118");
#endif

    switch (ctx->pc) {
        case 0x19b128u: goto label_19b128;
        default: break;
    }

    ctx->pc = 0x19b118u;

    // 0x19b118: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x19b118u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x19b11c: 0x30a2000c  andi        $v0, $a1, 0xC
    ctx->pc = 0x19b11cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)12);
    // 0x19b120: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x19B120u;
    {
        const bool branch_taken_0x19b120 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B120u;
        // 0x19b124: 0x8c860008  lw          $a2, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b120) {
            ctx->pc = 0x19B144u;
            goto label_19b144;
        }
    }
    ctx->pc = 0x19B128u;
label_19b128:
    // 0x19b128: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x19b128u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x19b12c: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x19b12cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x19b130: 0x30a2000c  andi        $v0, $a1, 0xC
    ctx->pc = 0x19b130u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)12);
    // 0x19b134: 0x0  nop
    ctx->pc = 0x19b134u;
    // NOP
    // 0x19b138: 0x0  nop
    ctx->pc = 0x19b138u;
    // NOP
    // 0x19b13c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x19B13Cu;
    {
        const bool branch_taken_0x19b13c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19b13c) {
            ctx->pc = 0x19B128u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19b128;
        }
    }
    ctx->pc = 0x19B144u;
label_19b144:
    // 0x19b144: 0x10c00006  beqz        $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x19B144u;
    {
        const bool branch_taken_0x19b144 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B144u;
        // 0x19b148: 0xa61023  subu        $v0, $a1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b144) {
            ctx->pc = 0x19B160u;
            goto label_19b160;
        }
    }
    ctx->pc = 0x19B14Cu;
    // 0x19b14c: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x19b14cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x19b150: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x19b150u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x19b154: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x19b154u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x19b158: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x19b158u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x19b15c: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x19b15cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
label_19b160:
    // 0x19b160: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x19b160u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x19b164: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x19b164u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x19b168u;
}
