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

// Function: entry_0017652c
// Address: 0x17652c - 0x17656c
void entry_0017652c_0x17652c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017652c_0x17652c");
#endif

    ctx->pc = 0x17652cu;

    // 0x17652c: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x17652cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x176530: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x176530u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x176534: 0x9024490c  lbu         $a0, 0x490C($at)
    ctx->pc = 0x176534u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)FAST_READ8(0x33490Cu));
    // 0x176538: 0x1483000e  bne         $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x176538u;
    {
        const bool branch_taken_0x176538 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x17653Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176538u;
        // 0x17653c: 0x24030041  addiu       $v1, $zero, 0x41 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176538) {
            ctx->pc = 0x176574u;
            return;
        }
    }
    ctx->pc = 0x176540u;
    // 0x176540: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x176540u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x176544: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x176544u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x176548: 0x90a40012  lbu         $a0, 0x12($a1)
    ctx->pc = 0x176548u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 18)));
    // 0x17654c: 0x14830017  bne         $a0, $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x17654Cu;
    {
        const bool branch_taken_0x17654c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x17654c) {
            ctx->pc = 0x1765ACu;
            return;
        }
    }
    ctx->pc = 0x176554u;
    // 0x176554: 0x90a40015  lbu         $a0, 0x15($a1)
    ctx->pc = 0x176554u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 21)));
    // 0x176558: 0x10830004  beq         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x176558u;
    {
        const bool branch_taken_0x176558 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x17655Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176558u;
        // 0x17655c: 0x24a60015  addiu       $a2, $a1, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176558) {
            ctx->pc = 0x17656Cu;
            return;
        }
    }
    ctx->pc = 0x176560u;
    // 0x176560: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x176560u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x176564: 0x14830011  bne         $a0, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x176564u;
    {
        const bool branch_taken_0x176564 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x176564) {
            ctx->pc = 0x1765ACu;
            return;
        }
    }
    ctx->pc = 0x17656Cu;
}
