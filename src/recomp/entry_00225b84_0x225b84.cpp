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

// Function: entry_00225b84
// Address: 0x225b84 - 0x225be0
void entry_00225b84_0x225b84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00225b84_0x225b84");
#endif

    ctx->pc = 0x225b84u;

    // 0x225b84: 0x90830022  lbu         $v1, 0x22($a0)
    ctx->pc = 0x225b84u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 34)));
    // 0x225b88: 0x5243c  dsll32      $a0, $a1, 16
    ctx->pc = 0x225b88u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) << (32 + 16));
    // 0x225b8c: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x225b8cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x225b90: 0x41103  sra         $v0, $a0, 4
    ctx->pc = 0x225b90u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 4), 4));
    // 0x225b94: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x225b94u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x225b98: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x225B98u;
    {
        const bool branch_taken_0x225b98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x225b98) {
            ctx->pc = 0x225BE0u;
            return;
        }
    }
    ctx->pc = 0x225BA0u;
    // 0x225ba0: 0x62c3c  dsll32      $a1, $a2, 16
    ctx->pc = 0x225ba0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) << (32 + 16));
    // 0x225ba4: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x225ba4u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x225ba8: 0x51103  sra         $v0, $a1, 4
    ctx->pc = 0x225ba8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 5), 4));
    // 0x225bac: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x225bacu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x225bb0: 0x1420000b  bnez        $at, . + 4 + (0xB << 2)
    ctx->pc = 0x225BB0u;
    {
        const bool branch_taken_0x225bb0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x225bb0) {
            ctx->pc = 0x225BE0u;
            return;
        }
    }
    ctx->pc = 0x225BB8u;
    // 0x225bb8: 0x3082000f  andi        $v0, $a0, 0xF
    ctx->pc = 0x225bb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
    // 0x225bbc: 0xe2102a  slt         $v0, $a3, $v0
    ctx->pc = 0x225bbcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x225bc0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x225BC0u;
    {
        const bool branch_taken_0x225bc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x225bc0) {
            ctx->pc = 0x225BE0u;
            return;
        }
    }
    ctx->pc = 0x225BC8u;
    // 0x225bc8: 0x30a2000f  andi        $v0, $a1, 0xF
    ctx->pc = 0x225bc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)15);
    // 0x225bcc: 0x47082a  slt         $at, $v0, $a3
    ctx->pc = 0x225bccu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x225bd0: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x225BD0u;
    {
        const bool branch_taken_0x225bd0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x225bd0) {
            ctx->pc = 0x225BE0u;
            return;
        }
    }
    ctx->pc = 0x225BD8u;
    // 0x225bd8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x225BD8u;
    {
        const bool branch_taken_0x225bd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x225BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225BD8u;
        // 0x225bdc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225bd8) {
            ctx->pc = 0x225BE4u;
            return;
        }
    }
    ctx->pc = 0x225BE0u;
}
