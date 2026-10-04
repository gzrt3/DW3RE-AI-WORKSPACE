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

// Function: entry_00167848
// Address: 0x167848 - 0x16787c
void entry_00167848_0x167848(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00167848_0x167848");
#endif

    ctx->pc = 0x167848u;

    // 0x167848: 0x9205004c  lbu         $a1, 0x4C($s0)
    ctx->pc = 0x167848u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x16784c: 0x8f8386b8  lw          $v1, -0x7948($gp)
    ctx->pc = 0x16784cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936248)));
    // 0x167850: 0x30a4001f  andi        $a0, $a1, 0x1F
    ctx->pc = 0x167850u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)31);
    // 0x167854: 0x831806  srlv        $v1, $v1, $a0
    ctx->pc = 0x167854u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), GPR_U32(ctx, 4) & 0x1F));
    // 0x167858: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x167858u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x16785c: 0x10600049  beqz        $v1, . + 4 + (0x49 << 2)
    ctx->pc = 0x16785Cu;
    {
        const bool branch_taken_0x16785c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x167860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16785Cu;
        // 0x167860: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16785c) {
            ctx->pc = 0x167984u;
            return;
        }
    }
    ctx->pc = 0x167864u;
    // 0x167864: 0x2403003f  addiu       $v1, $zero, 0x3F
    ctx->pc = 0x167864u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x167868: 0x9024490c  lbu         $a0, 0x490C($at)
    ctx->pc = 0x167868u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18700)));
    // 0x16786c: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x16786Cu;
    {
        const bool branch_taken_0x16786c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x167870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16786Cu;
        // 0x167870: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16786c) {
            ctx->pc = 0x16787Cu;
            return;
        }
    }
    ctx->pc = 0x167874u;
    // 0x167874: 0x10a3000d  beq         $a1, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x167874u;
    {
        const bool branch_taken_0x167874 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x167874) {
            ctx->pc = 0x1678ACu;
            return;
        }
    }
    ctx->pc = 0x16787Cu;
}
