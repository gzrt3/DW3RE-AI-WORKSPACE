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

// Function: entry_00136858
// Address: 0x136858 - 0x13689c
void entry_00136858_0x136858(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00136858_0x136858");
#endif

    ctx->pc = 0x136858u;

    // 0x136858: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x136858u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x13685c: 0x8c25a3e0  lw          $a1, -0x5C20($at)
    ctx->pc = 0x13685cu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x30A3E0u));
    // 0x136860: 0x30a30008  andi        $v1, $a1, 0x8
    ctx->pc = 0x136860u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)8);
    // 0x136864: 0x1060002e  beqz        $v1, . + 4 + (0x2E << 2)
    ctx->pc = 0x136864u;
    {
        const bool branch_taken_0x136864 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x136868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136864u;
        // 0x136868: 0x3c010031  lui         $at, 0x31 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136864) {
            ctx->pc = 0x136920u;
            return;
        }
    }
    ctx->pc = 0x13686Cu;
    // 0x13686c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x13686cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x136870: 0x9024a3eb  lbu         $a0, -0x5C15($at)
    ctx->pc = 0x136870u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294943723)));
    // 0x136874: 0x1083002a  beq         $a0, $v1, . + 4 + (0x2A << 2)
    ctx->pc = 0x136874u;
    {
        const bool branch_taken_0x136874 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x136878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136874u;
        // 0x136878: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136874) {
            ctx->pc = 0x136920u;
            return;
        }
    }
    ctx->pc = 0x13687Cu;
    // 0x13687c: 0x10830021  beq         $a0, $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x13687Cu;
    {
        const bool branch_taken_0x13687c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x13687c) {
            ctx->pc = 0x136904u;
            return;
        }
    }
    ctx->pc = 0x136884u;
    // 0x136884: 0x10800010  beqz        $a0, . + 4 + (0x10 << 2)
    ctx->pc = 0x136884u;
    {
        const bool branch_taken_0x136884 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x136888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136884u;
        // 0x136888: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136884) {
            ctx->pc = 0x1368C8u;
            return;
        }
    }
    ctx->pc = 0x13688Cu;
    // 0x13688c: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x13688Cu;
    {
        const bool branch_taken_0x13688c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x13688c) {
            ctx->pc = 0x13689Cu;
            return;
        }
    }
    ctx->pc = 0x136894u;
    // 0x136894: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x136894u;
    {
        const bool branch_taken_0x136894 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x136898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136894u;
        // 0x136898: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136894) {
            ctx->pc = 0x136924u;
            return;
        }
    }
    ctx->pc = 0x13689Cu;
}
