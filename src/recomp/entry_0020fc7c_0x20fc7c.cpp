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

// Function: entry_0020fc7c
// Address: 0x20fc7c - 0x20fcf4
void entry_0020fc7c_0x20fc7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020fc7c_0x20fc7c");
#endif

    ctx->pc = 0x20fc7cu;

label_20fc7c:
    // 0x20fc7c: 0x0  nop
    ctx->pc = 0x20fc7cu;
    // NOP
    // 0x20fc80: 0x825814  dsllv       $t3, $v0, $a0
    ctx->pc = 0x20fc80u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
    // 0x20fc84: 0xab2825  or          $a1, $a1, $t3
    ctx->pc = 0x20fc84u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 11));
    // 0x20fc88: 0x248b0001  addiu       $t3, $a0, 0x1
    ctx->pc = 0x20fc88u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x20fc8c: 0x1626014  dsllv       $t4, $v0, $t3
    ctx->pc = 0x20fc8cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 2) << (GPR_U32(ctx, 11) & 0x3F));
    // 0x20fc90: 0x248b0002  addiu       $t3, $a0, 0x2
    ctx->pc = 0x20fc90u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x20fc94: 0xac2825  or          $a1, $a1, $t4
    ctx->pc = 0x20fc94u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 12));
    // 0x20fc98: 0x1625814  dsllv       $t3, $v0, $t3
    ctx->pc = 0x20fc98u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 2) << (GPR_U32(ctx, 11) & 0x3F));
    // 0x20fc9c: 0xab2825  or          $a1, $a1, $t3
    ctx->pc = 0x20fc9cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 11));
    // 0x20fca0: 0x248b0003  addiu       $t3, $a0, 0x3
    ctx->pc = 0x20fca0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 4), 3));
    // 0x20fca4: 0x1626014  dsllv       $t4, $v0, $t3
    ctx->pc = 0x20fca4u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 2) << (GPR_U32(ctx, 11) & 0x3F));
    // 0x20fca8: 0x248b0004  addiu       $t3, $a0, 0x4
    ctx->pc = 0x20fca8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x20fcac: 0xac2825  or          $a1, $a1, $t4
    ctx->pc = 0x20fcacu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 12));
    // 0x20fcb0: 0x1625814  dsllv       $t3, $v0, $t3
    ctx->pc = 0x20fcb0u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 2) << (GPR_U32(ctx, 11) & 0x3F));
    // 0x20fcb4: 0xab2825  or          $a1, $a1, $t3
    ctx->pc = 0x20fcb4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 11));
    // 0x20fcb8: 0x248b0005  addiu       $t3, $a0, 0x5
    ctx->pc = 0x20fcb8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 4), 5));
    // 0x20fcbc: 0x1626014  dsllv       $t4, $v0, $t3
    ctx->pc = 0x20fcbcu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 2) << (GPR_U32(ctx, 11) & 0x3F));
    // 0x20fcc0: 0x248b0006  addiu       $t3, $a0, 0x6
    ctx->pc = 0x20fcc0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 4), 6));
    // 0x20fcc4: 0xac2825  or          $a1, $a1, $t4
    ctx->pc = 0x20fcc4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 12));
    // 0x20fcc8: 0x1625814  dsllv       $t3, $v0, $t3
    ctx->pc = 0x20fcc8u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 2) << (GPR_U32(ctx, 11) & 0x3F));
    // 0x20fccc: 0xab2825  or          $a1, $a1, $t3
    ctx->pc = 0x20fcccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 11));
    // 0x20fcd0: 0x248b0007  addiu       $t3, $a0, 0x7
    ctx->pc = 0x20fcd0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 4), 7));
    // 0x20fcd4: 0x1625814  dsllv       $t3, $v0, $t3
    ctx->pc = 0x20fcd4u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 2) << (GPR_U32(ctx, 11) & 0x3F));
    // 0x20fcd8: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x20fcd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x20fcdc: 0xab2825  or          $a1, $a1, $t3
    ctx->pc = 0x20fcdcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 11));
    // 0x20fce0: 0x288b0011  slti        $t3, $a0, 0x11
    ctx->pc = 0x20fce0u;
    SET_GPR_U64(ctx, 11, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x20fce4: 0x1560ffe5  bnez        $t3, . + 4 + (-0x1B << 2)
    ctx->pc = 0x20FCE4u;
    {
        const bool branch_taken_0x20fce4 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        ctx->pc = 0x20FCE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FCE4u;
        // 0x20fce8: 0x28810019  slti        $at, $a0, 0x19 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)25) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20fce4) {
            ctx->pc = 0x20FC7Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20fc7c;
        }
    }
    ctx->pc = 0x20FCECu;
    // 0x20fcec: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x20FCECu;
    {
        const bool branch_taken_0x20fcec = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x20fcec) {
            ctx->pc = 0x20FD14u;
            return;
        }
    }
    ctx->pc = 0x20FCF4u;
}
