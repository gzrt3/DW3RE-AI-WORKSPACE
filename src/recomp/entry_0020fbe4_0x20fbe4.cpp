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

// Function: entry_0020fbe4
// Address: 0x20fbe4 - 0x20fc30
void entry_0020fbe4_0x20fbe4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020fbe4_0x20fbe4");
#endif

    ctx->pc = 0x20fbe4u;

    // 0x20fbe4: 0xa0e20000  sb          $v0, 0x0($a3)
    ctx->pc = 0x20fbe4u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x20fbe8: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x20fbe8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x20fbec: 0x91030001  lbu         $v1, 0x1($t0)
    ctx->pc = 0x20fbecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 1)));
    // 0x20fbf0: 0x29220019  slti        $v0, $t1, 0x19
    ctx->pc = 0x20fbf0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)25) ? 1 : 0);
    // 0x20fbf4: 0xa0e30001  sb          $v1, 0x1($a3)
    ctx->pc = 0x20fbf4u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x20fbf8: 0x25080002  addiu       $t0, $t0, 0x2
    ctx->pc = 0x20fbf8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 2));
    // 0x20fbfc: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x20FBFCu;
    {
        const bool branch_taken_0x20fbfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20FC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FBFCu;
        // 0x20fc00: 0x24e70002  addiu       $a3, $a3, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20fbfc) {
            ctx->pc = 0x20FBD4u;
            return;
        }
    }
    ctx->pc = 0x20FC04u;
    // 0x20fc04: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x20fc04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x20fc08: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x20fc08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x20fc0c: 0xc10821  addu        $at, $a2, $at
    ctx->pc = 0x20fc0cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 1)));
    // 0x20fc10: 0x902339dc  lbu         $v1, 0x39DC($at)
    ctx->pc = 0x20fc10u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 14812)));
    // 0x20fc14: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x20FC14u;
    {
        const bool branch_taken_0x20fc14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x20FC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FC14u;
        // 0x20fc18: 0x3c010001  lui         $at, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20fc14) {
            ctx->pc = 0x20FC30u;
            return;
        }
    }
    ctx->pc = 0x20FC1Cu;
    // 0x20fc1c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x20fc1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x20fc20: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x20fc20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x20fc24: 0xc10821  addu        $at, $a2, $at
    ctx->pc = 0x20fc24u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 1)));
    // 0x20fc28: 0xa02239dd  sb          $v0, 0x39DD($at)
    ctx->pc = 0x20fc28u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 14813), (uint8_t)GPR_U32(ctx, 2));
    // 0x20fc2c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x20fc2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    ctx->pc = 0x20fc30u;
}
