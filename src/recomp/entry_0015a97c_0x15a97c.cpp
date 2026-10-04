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

// Function: entry_0015a97c
// Address: 0x15a97c - 0x15a9c0
void entry_0015a97c_0x15a97c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015a97c_0x15a97c");
#endif

    ctx->pc = 0x15a97cu;

    // 0x15a97c: 0x30c400ff  andi        $a0, $a2, 0xFF
    ctx->pc = 0x15a97cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x15a980: 0x24030064  addiu       $v1, $zero, 0x64
    ctx->pc = 0x15a980u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x15a984: 0x10830076  beq         $a0, $v1, . + 4 + (0x76 << 2)
    ctx->pc = 0x15A984u;
    {
        const bool branch_taken_0x15a984 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x15A988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A984u;
        // 0x15a988: 0x24030037  addiu       $v1, $zero, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a984) {
            ctx->pc = 0x15AB60u;
            return;
        }
    }
    ctx->pc = 0x15A98Cu;
    // 0x15a98c: 0x10830074  beq         $a0, $v1, . + 4 + (0x74 << 2)
    ctx->pc = 0x15A98Cu;
    {
        const bool branch_taken_0x15a98c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x15a98c) {
            ctx->pc = 0x15AB60u;
            return;
        }
    }
    ctx->pc = 0x15A994u;
    // 0x15a994: 0x2403002d  addiu       $v1, $zero, 0x2D
    ctx->pc = 0x15a994u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x15a998: 0x10830057  beq         $a0, $v1, . + 4 + (0x57 << 2)
    ctx->pc = 0x15A998u;
    {
        const bool branch_taken_0x15a998 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x15A99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A998u;
        // 0x15a99c: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a998) {
            ctx->pc = 0x15AAF8u;
            return;
        }
    }
    ctx->pc = 0x15A9A0u;
    // 0x15a9a0: 0x2403002c  addiu       $v1, $zero, 0x2C
    ctx->pc = 0x15a9a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x15a9a4: 0x10830033  beq         $a0, $v1, . + 4 + (0x33 << 2)
    ctx->pc = 0x15A9A4u;
    {
        const bool branch_taken_0x15a9a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x15A9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A9A4u;
        // 0x15a9a8: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a9a4) {
            ctx->pc = 0x15AA74u;
            return;
        }
    }
    ctx->pc = 0x15A9ACu;
    // 0x15a9ac: 0x2403002b  addiu       $v1, $zero, 0x2B
    ctx->pc = 0x15a9acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
    // 0x15a9b0: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x15A9B0u;
    {
        const bool branch_taken_0x15a9b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x15A9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A9B0u;
        // 0x15a9b4: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a9b0) {
            ctx->pc = 0x15A9C0u;
            return;
        }
    }
    ctx->pc = 0x15A9B8u;
    // 0x15a9b8: 0x1000006a  b           . + 4 + (0x6A << 2)
    ctx->pc = 0x15A9B8u;
    {
        const bool branch_taken_0x15a9b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15a9b8) {
            ctx->pc = 0x15AB64u;
            return;
        }
    }
    ctx->pc = 0x15A9C0u;
}
