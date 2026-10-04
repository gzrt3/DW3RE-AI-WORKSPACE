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

// Function: entry_00175498
// Address: 0x175498 - 0x1754d4
void entry_00175498_0x175498(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00175498_0x175498");
#endif

    ctx->pc = 0x175498u;

    // 0x175498: 0x10a30044  beq         $a1, $v1, . + 4 + (0x44 << 2)
    ctx->pc = 0x175498u;
    {
        const bool branch_taken_0x175498 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x17549Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175498u;
        // 0x17549c: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175498) {
            ctx->pc = 0x1755ACu;
            return;
        }
    }
    ctx->pc = 0x1754A0u;
    // 0x1754a0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1754a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1754a4: 0x10a30031  beq         $a1, $v1, . + 4 + (0x31 << 2)
    ctx->pc = 0x1754A4u;
    {
        const bool branch_taken_0x1754a4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x1754A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1754A4u;
        // 0x1754a8: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1754a4) {
            ctx->pc = 0x17556Cu;
            return;
        }
    }
    ctx->pc = 0x1754ACu;
    // 0x1754ac: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1754acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1754b0: 0x10a6001f  beq         $a1, $a2, . + 4 + (0x1F << 2)
    ctx->pc = 0x1754B0u;
    {
        const bool branch_taken_0x1754b0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 6));
        ctx->pc = 0x1754B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1754B0u;
        // 0x1754b4: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1754b0) {
            ctx->pc = 0x175530u;
            return;
        }
    }
    ctx->pc = 0x1754B8u;
    // 0x1754b8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1754b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1754bc: 0x10a3000d  beq         $a1, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x1754BCu;
    {
        const bool branch_taken_0x1754bc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x1754C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1754BCu;
        // 0x1754c0: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1754bc) {
            ctx->pc = 0x1754F4u;
            return;
        }
    }
    ctx->pc = 0x1754C4u;
    // 0x1754c4: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1754C4u;
    {
        const bool branch_taken_0x1754c4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1754C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1754C4u;
        // 0x1754c8: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1754c4) {
            ctx->pc = 0x1754D4u;
            return;
        }
    }
    ctx->pc = 0x1754CCu;
    // 0x1754cc: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x1754CCu;
    {
        const bool branch_taken_0x1754cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1754D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1754CCu;
        // 0x1754d0: 0x240703e8  addiu       $a3, $zero, 0x3E8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1754cc) {
            ctx->pc = 0x1755E4u;
            return;
        }
    }
    ctx->pc = 0x1754D4u;
}
