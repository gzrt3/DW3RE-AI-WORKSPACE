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

// Function: entry_00225aa4
// Address: 0x225aa4 - 0x225b04
void entry_00225aa4_0x225aa4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00225aa4_0x225aa4");
#endif

    ctx->pc = 0x225aa4u;

    // 0x225aa4: 0x90830022  lbu         $v1, 0x22($a0)
    ctx->pc = 0x225aa4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 34)));
    // 0x225aa8: 0x53c3c  dsll32      $a3, $a1, 16
    ctx->pc = 0x225aa8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) << (32 + 16));
    // 0x225aac: 0x73c3f  dsra32      $a3, $a3, 16
    ctx->pc = 0x225aacu;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 16));
    // 0x225ab0: 0x71103  sra         $v0, $a3, 4
    ctx->pc = 0x225ab0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 7), 4));
    // 0x225ab4: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x225ab4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x225ab8: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x225AB8u;
    {
        const bool branch_taken_0x225ab8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x225ab8) {
            ctx->pc = 0x225B04u;
            return;
        }
    }
    ctx->pc = 0x225AC0u;
    // 0x225ac0: 0x6443c  dsll32      $t0, $a2, 16
    ctx->pc = 0x225ac0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 6) << (32 + 16));
    // 0x225ac4: 0x8443f  dsra32      $t0, $t0, 16
    ctx->pc = 0x225ac4u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 16));
    // 0x225ac8: 0x81103  sra         $v0, $t0, 4
    ctx->pc = 0x225ac8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 8), 4));
    // 0x225acc: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x225accu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x225ad0: 0x1420000c  bnez        $at, . + 4 + (0xC << 2)
    ctx->pc = 0x225AD0u;
    {
        const bool branch_taken_0x225ad0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x225ad0) {
            ctx->pc = 0x225B04u;
            return;
        }
    }
    ctx->pc = 0x225AD8u;
    // 0x225ad8: 0x90830023  lbu         $v1, 0x23($a0)
    ctx->pc = 0x225ad8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 35)));
    // 0x225adc: 0x30e2000f  andi        $v0, $a3, 0xF
    ctx->pc = 0x225adcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)15);
    // 0x225ae0: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x225ae0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x225ae4: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x225AE4u;
    {
        const bool branch_taken_0x225ae4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x225ae4) {
            ctx->pc = 0x225B04u;
            return;
        }
    }
    ctx->pc = 0x225AECu;
    // 0x225aec: 0x3102000f  andi        $v0, $t0, 0xF
    ctx->pc = 0x225aecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)15);
    // 0x225af0: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x225af0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x225af4: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x225AF4u;
    {
        const bool branch_taken_0x225af4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x225af4) {
            ctx->pc = 0x225B04u;
            return;
        }
    }
    ctx->pc = 0x225AFCu;
    // 0x225afc: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x225AFCu;
    {
        const bool branch_taken_0x225afc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x225B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225AFCu;
        // 0x225b00: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225afc) {
            ctx->pc = 0x225BE4u;
            return;
        }
    }
    ctx->pc = 0x225B04u;
}
