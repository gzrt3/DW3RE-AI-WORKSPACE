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

// Function: FUN_001a40c8
// Address: 0x1a40c8 - 0x1a4128
void FUN_001a40c8_0x1a40c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001a40c8_0x1a40c8");
#endif

    switch (ctx->pc) {
        case 0x1a40f0u: goto label_1a40f0;
        default: break;
    }

    ctx->pc = 0x1a40c8u;

    // 0x1a40c8: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A40C8u;
    {
        const bool branch_taken_0x1a40c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A40CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A40C8u;
        // 0x1a40cc: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a40c8) {
            ctx->pc = 0x1A40E4u;
            goto label_1a40e4;
        }
    }
    ctx->pc = 0x1A40D0u;
    // 0x1a40d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a40d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a40d4: 0x1082000f  beq         $a0, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1A40D4u;
    {
        const bool branch_taken_0x1a40d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A40D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A40D4u;
        // 0x1a40d8: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a40d4) {
            ctx->pc = 0x1A4114u;
            goto label_1a4114;
        }
    }
    ctx->pc = 0x1A40DCu;
    // 0x1a40dc: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1A40DCu;
    {
        const bool branch_taken_0x1a40dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a40dc) {
            ctx->pc = 0x1A4128u;
            return;
        }
    }
    ctx->pc = 0x1A40E4u;
label_1a40e4:
    // 0x1a40e4: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1a40e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1a40e8: 0x34632010  ori         $v1, $v1, 0x2010
    ctx->pc = 0x1a40e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8208);
    // 0x1a40ec: 0x0  nop
    ctx->pc = 0x1a40ecu;
    // NOP
label_1a40f0:
    // 0x1a40f0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1a40f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a40f4: 0x0  nop
    ctx->pc = 0x1a40f4u;
    // NOP
    // 0x1a40f8: 0x0  nop
    ctx->pc = 0x1a40f8u;
    // NOP
    // 0x1a40fc: 0x0  nop
    ctx->pc = 0x1a40fcu;
    // NOP
    // 0x1a4100: 0x0  nop
    ctx->pc = 0x1a4100u;
    // NOP
    // 0x1a4104: 0x440fffa  bltz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1A4104u;
    {
        const bool branch_taken_0x1a4104 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1a4104) {
            ctx->pc = 0x1A40F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a40f0;
        }
    }
    ctx->pc = 0x1A410Cu;
    // 0x1a410c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1A410Cu;
    {
        const bool branch_taken_0x1a410c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A410Cu;
        // 0x1a4110: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a410c) {
            ctx->pc = 0x1A4124u;
            goto label_1a4124;
        }
    }
    ctx->pc = 0x1A4114u;
label_1a4114:
    // 0x1a4114: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1a4114u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1a4118: 0x34422010  ori         $v0, $v0, 0x2010
    ctx->pc = 0x1a4118u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8208);
    // 0x1a411c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1a411cu;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x10002010u));
    // 0x1a4120: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x1a4120u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
label_1a4124:
    // 0x1a4124: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1a4124u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1a4128u;
}
