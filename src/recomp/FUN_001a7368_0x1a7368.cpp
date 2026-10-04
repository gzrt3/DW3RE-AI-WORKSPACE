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

// Function: FUN_001a7368
// Address: 0x1a7368 - 0x1a73b8
void FUN_001a7368_0x1a7368(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001a7368_0x1a7368");
#endif

    ctx->pc = 0x1a7368u;

    // 0x1a7368: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a7368u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a736c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1a736cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1a7370: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1a7370u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1a7374: 0x3442000a  ori         $v0, $v0, 0xA
    ctx->pc = 0x1a7374u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)10);
    // 0x1a7378: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1a7378u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1a737c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1a737cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7380: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a7380u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a7384: 0x8e230020  lw          $v1, 0x20($s1)
    ctx->pc = 0x1a7384u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x1a7388: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1A7388u;
    {
        const bool branch_taken_0x1a7388 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A738Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7388u;
        // 0x1a738c: 0x43102b  sltu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7388) {
            ctx->pc = 0x1A73B0u;
            goto label_1a73b0;
        }
    }
    ctx->pc = 0x1A7390u;
    // 0x1a7390: 0x54400015  bnel        $v0, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x1A7390u;
    {
        const bool branch_taken_0x1a7390 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a7390) {
            ctx->pc = 0x1A7394u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A7390u;
            // 0x1a7394: 0x8e30001c  lw          $s0, 0x1C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A73E8u;
            return;
        }
    }
    ctx->pc = 0x1A7398u;
    // 0x1a7398: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1a7398u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1a739c: 0x34420009  ori         $v0, $v0, 0x9
    ctx->pc = 0x1a739cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9);
    // 0x1a73a0: 0x5062000b  beql        $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1A73A0u;
    {
        const bool branch_taken_0x1a73a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1a73a0) {
            ctx->pc = 0x1A73A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A73A0u;
            // 0x1a73a4: 0x8e220024  lw          $v0, 0x24($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A73D0u;
            return;
        }
    }
    ctx->pc = 0x1A73A8u;
    // 0x1a73a8: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1A73A8u;
    {
        const bool branch_taken_0x1a73a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A73ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A73A8u;
        // 0x1a73ac: 0x8e30001c  lw          $s0, 0x1C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a73a8) {
            ctx->pc = 0x1A73E8u;
            return;
        }
    }
    ctx->pc = 0x1A73B0u;
label_1a73b0:
    // 0x1a73b0: 0x8e30001c  lw          $s0, 0x1C($s1)
    ctx->pc = 0x1a73b0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x1a73b4: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x1a73b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    ctx->pc = 0x1a73b8u;
}
