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

// Function: entry_00201308
// Address: 0x201308 - 0x20134c
void entry_00201308_0x201308(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00201308_0x201308");
#endif

    ctx->pc = 0x201308u;

    // 0x201308: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x201308u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x20130c: 0xec5821  addu        $t3, $a3, $t4
    ctx->pc = 0x20130cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 12)));
    // 0x201310: 0x34214a30  ori         $at, $at, 0x4A30
    ctx->pc = 0x201310u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)18992);
    // 0x201314: 0x1615821  addu        $t3, $t3, $at
    ctx->pc = 0x201314u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 1)));
    // 0x201318: 0x916d0000  lbu         $t5, 0x0($t3)
    ctx->pc = 0x201318u;
    SET_GPR_ZE32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x20131c: 0x11a60023  beq         $t5, $a2, . + 4 + (0x23 << 2)
    ctx->pc = 0x20131Cu;
    {
        const bool branch_taken_0x20131c = (GPR_U64(ctx, 13) == GPR_U64(ctx, 6));
        if (branch_taken_0x20131c) {
            ctx->pc = 0x2013ACu;
            return;
        }
    }
    ctx->pc = 0x201324u;
    // 0x201324: 0xd6900  sll         $t5, $t5, 4
    ctx->pc = 0x201324u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 13), 4));
    // 0x201328: 0x6d6821  addu        $t5, $v1, $t5
    ctx->pc = 0x201328u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 13)));
    // 0x20132c: 0xddaf0000  ld          $t7, 0x0($t5)
    ctx->pc = 0x20132cu;
    SET_GPR_U64(ctx, 15, READ64(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x201330: 0x31ed0008  andi        $t5, $t7, 0x8
    ctx->pc = 0x201330u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)8);
    // 0x201334: 0x11a00005  beqz        $t5, . + 4 + (0x5 << 2)
    ctx->pc = 0x201334u;
    {
        const bool branch_taken_0x201334 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        if (branch_taken_0x201334) {
            ctx->pc = 0x20134Cu;
            return;
        }
    }
    ctx->pc = 0x20133Cu;
    // 0x20133c: 0x916e0001  lbu         $t6, 0x1($t3)
    ctx->pc = 0x20133cu;
    SET_GPR_ZE32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 1)));
    // 0x201340: 0x8cad0000  lw          $t5, 0x0($a1)
    ctx->pc = 0x201340u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x201344: 0x1ae6821  addu        $t5, $t5, $t6
    ctx->pc = 0x201344u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 14)));
    // 0x201348: 0xacad0000  sw          $t5, 0x0($a1)
    ctx->pc = 0x201348u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 13));
    ctx->pc = 0x20134cu;
}
