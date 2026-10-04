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

// Function: entry_0015aa74
// Address: 0x15aa74 - 0x15aad0
void entry_0015aa74_0x15aa74(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015aa74_0x15aa74");
#endif

    ctx->pc = 0x15aa74u;

    // 0x15aa74: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x15aa74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x15aa78: 0x8c244970  lw          $a0, 0x4970($at)
    ctx->pc = 0x15aa78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 18800)));
    // 0x15aa7c: 0x1083001c  beq         $a0, $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x15AA7Cu;
    {
        const bool branch_taken_0x15aa7c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x15AA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AA7Cu;
        // 0x15aa80: 0x24030021  addiu       $v1, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15aa7c) {
            ctx->pc = 0x15AAF0u;
            return;
        }
    }
    ctx->pc = 0x15AA84u;
    // 0x15aa84: 0x10830018  beq         $a0, $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x15AA84u;
    {
        const bool branch_taken_0x15aa84 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x15aa84) {
            ctx->pc = 0x15AAE8u;
            return;
        }
    }
    ctx->pc = 0x15AA8Cu;
    // 0x15aa8c: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x15aa8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x15aa90: 0x10830013  beq         $a0, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x15AA90u;
    {
        const bool branch_taken_0x15aa90 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x15AA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AA90u;
        // 0x15aa94: 0x24030015  addiu       $v1, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15aa90) {
            ctx->pc = 0x15AAE0u;
            return;
        }
    }
    ctx->pc = 0x15AA98u;
    // 0x15aa98: 0x10830011  beq         $a0, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x15AA98u;
    {
        const bool branch_taken_0x15aa98 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x15aa98) {
            ctx->pc = 0x15AAE0u;
            return;
        }
    }
    ctx->pc = 0x15AAA0u;
    // 0x15aaa0: 0x2403001a  addiu       $v1, $zero, 0x1A
    ctx->pc = 0x15aaa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x15aaa4: 0x1083000c  beq         $a0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x15AAA4u;
    {
        const bool branch_taken_0x15aaa4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x15AAA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AAA4u;
        // 0x15aaa8: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15aaa4) {
            ctx->pc = 0x15AAD8u;
            return;
        }
    }
    ctx->pc = 0x15AAACu;
    // 0x15aaac: 0x1083000a  beq         $a0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x15AAACu;
    {
        const bool branch_taken_0x15aaac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x15aaac) {
            ctx->pc = 0x15AAD8u;
            return;
        }
    }
    ctx->pc = 0x15AAB4u;
    // 0x15aab4: 0x2403000d  addiu       $v1, $zero, 0xD
    ctx->pc = 0x15aab4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x15aab8: 0x10830005  beq         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x15AAB8u;
    {
        const bool branch_taken_0x15aab8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x15AABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AAB8u;
        // 0x15aabc: 0x24030008  addiu       $v1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15aab8) {
            ctx->pc = 0x15AAD0u;
            return;
        }
    }
    ctx->pc = 0x15AAC0u;
    // 0x15aac0: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x15AAC0u;
    {
        const bool branch_taken_0x15aac0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x15aac0) {
            ctx->pc = 0x15AAD0u;
            return;
        }
    }
    ctx->pc = 0x15AAC8u;
    // 0x15aac8: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x15AAC8u;
    {
        const bool branch_taken_0x15aac8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15aac8) {
            ctx->pc = 0x15AB64u;
            return;
        }
    }
    ctx->pc = 0x15AAD0u;
}
