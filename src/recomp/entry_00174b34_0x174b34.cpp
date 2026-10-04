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

// Function: entry_00174b34
// Address: 0x174b34 - 0x174b88
void entry_00174b34_0x174b34(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00174b34_0x174b34");
#endif

    ctx->pc = 0x174b34u;

    // 0x174b34: 0x1460004a  bnez        $v1, . + 4 + (0x4A << 2)
    ctx->pc = 0x174B34u;
    {
        const bool branch_taken_0x174b34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x174b34) {
            ctx->pc = 0x174C60u;
            return;
        }
    }
    ctx->pc = 0x174B3Cu;
    // 0x174b3c: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x174b3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x174b40: 0x28a20021  slti        $v0, $a1, 0x21
    ctx->pc = 0x174b40u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)33) ? 1 : 0);
    // 0x174b44: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x174B44u;
    {
        const bool branch_taken_0x174b44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x174B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174B44u;
        // 0x174b48: 0x28a20017  slti        $v0, $a1, 0x17 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)23) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x174b44) {
            ctx->pc = 0x174BB0u;
            return;
        }
    }
    ctx->pc = 0x174B4Cu;
    // 0x174b4c: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x174b4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x174b50: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x174b50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x174b54: 0x24423b82  addiu       $v0, $v0, 0x3B82
    ctx->pc = 0x174b54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15234));
    // 0x174b58: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x174b58u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x174b5c: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x174b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x174b60: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x174b60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x174b64: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x174b64u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x174b68: 0x28620029  slti        $v0, $v1, 0x29
    ctx->pc = 0x174b68u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)41) ? 1 : 0);
    // 0x174b6c: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x174B6Cu;
    {
        const bool branch_taken_0x174b6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x174b6c) {
            ctx->pc = 0x174B9Cu;
            return;
        }
    }
    ctx->pc = 0x174B74u;
    // 0x174b74: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x174B74u;
    {
        const bool branch_taken_0x174b74 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x174B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174B74u;
        // 0x174b78: 0x30620003  andi        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x174b74) {
            ctx->pc = 0x174B88u;
            return;
        }
    }
    ctx->pc = 0x174B7Cu;
    // 0x174b7c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x174B7Cu;
    {
        const bool branch_taken_0x174b7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x174B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174B7Cu;
        // 0x174b80: 0x2444003d  addiu       $a0, $v0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 61));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174b7c) {
            ctx->pc = 0x174B8Cu;
            return;
        }
    }
    ctx->pc = 0x174B84u;
    // 0x174b84: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x174b84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    ctx->pc = 0x174b88u;
}
