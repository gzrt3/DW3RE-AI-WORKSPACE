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

// Function: entry_0015a9c0
// Address: 0x15a9c0 - 0x15aa1c
void entry_0015a9c0_0x15a9c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015a9c0_0x15a9c0");
#endif

    ctx->pc = 0x15a9c0u;

    // 0x15a9c0: 0x2403000d  addiu       $v1, $zero, 0xD
    ctx->pc = 0x15a9c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x15a9c4: 0x8c244970  lw          $a0, 0x4970($at)
    ctx->pc = 0x15a9c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 18800)));
    // 0x15a9c8: 0x1083001c  beq         $a0, $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x15A9C8u;
    {
        const bool branch_taken_0x15a9c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x15A9CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A9C8u;
        // 0x15a9cc: 0x24030026  addiu       $v1, $zero, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a9c8) {
            ctx->pc = 0x15AA3Cu;
            return;
        }
    }
    ctx->pc = 0x15A9D0u;
    // 0x15a9d0: 0x1083001a  beq         $a0, $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x15A9D0u;
    {
        const bool branch_taken_0x15a9d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x15a9d0) {
            ctx->pc = 0x15AA3Cu;
            return;
        }
    }
    ctx->pc = 0x15A9D8u;
    // 0x15a9d8: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x15a9d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x15a9dc: 0x10830015  beq         $a0, $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x15A9DCu;
    {
        const bool branch_taken_0x15a9dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x15A9E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A9DCu;
        // 0x15a9e0: 0x24030013  addiu       $v1, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a9dc) {
            ctx->pc = 0x15AA34u;
            return;
        }
    }
    ctx->pc = 0x15A9E4u;
    // 0x15a9e4: 0x10830011  beq         $a0, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x15A9E4u;
    {
        const bool branch_taken_0x15a9e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x15a9e4) {
            ctx->pc = 0x15AA2Cu;
            return;
        }
    }
    ctx->pc = 0x15A9ECu;
    // 0x15a9ec: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x15a9ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x15a9f0: 0x1083000e  beq         $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x15A9F0u;
    {
        const bool branch_taken_0x15a9f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x15A9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A9F0u;
        // 0x15a9f4: 0x24030005  addiu       $v1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a9f0) {
            ctx->pc = 0x15AA2Cu;
            return;
        }
    }
    ctx->pc = 0x15A9F8u;
    // 0x15a9f8: 0x1083000a  beq         $a0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x15A9F8u;
    {
        const bool branch_taken_0x15a9f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x15a9f8) {
            ctx->pc = 0x15AA24u;
            return;
        }
    }
    ctx->pc = 0x15AA00u;
    // 0x15aa00: 0x24030016  addiu       $v1, $zero, 0x16
    ctx->pc = 0x15aa00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x15aa04: 0x10830007  beq         $a0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x15AA04u;
    {
        const bool branch_taken_0x15aa04 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x15AA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AA04u;
        // 0x15aa08: 0x24030022  addiu       $v1, $zero, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15aa04) {
            ctx->pc = 0x15AA24u;
            return;
        }
    }
    ctx->pc = 0x15AA0Cu;
    // 0x15aa0c: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x15AA0Cu;
    {
        const bool branch_taken_0x15aa0c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x15aa0c) {
            ctx->pc = 0x15AA1Cu;
            return;
        }
    }
    ctx->pc = 0x15AA14u;
    // 0x15aa14: 0x10000053  b           . + 4 + (0x53 << 2)
    ctx->pc = 0x15AA14u;
    {
        const bool branch_taken_0x15aa14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15aa14) {
            ctx->pc = 0x15AB64u;
            return;
        }
    }
    ctx->pc = 0x15AA1Cu;
}
