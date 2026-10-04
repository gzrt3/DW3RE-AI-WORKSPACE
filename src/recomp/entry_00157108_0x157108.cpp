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

// Function: entry_00157108
// Address: 0x157108 - 0x157134
void entry_00157108_0x157108(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00157108_0x157108");
#endif

    ctx->pc = 0x157108u;

label_157108:
    // 0x157108: 0x90e90000  lbu         $t1, 0x0($a3)
    ctx->pc = 0x157108u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x15710c: 0x10c6821  addu        $t5, $t0, $t4
    ctx->pc = 0x15710cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 12)));
    // 0x157110: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x157110u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x157114: 0x29450022  slti        $a1, $t2, 0x22
    ctx->pc = 0x157114u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)34) ? 1 : 0);
    // 0x157118: 0x258c0030  addiu       $t4, $t4, 0x30
    ctx->pc = 0x157118u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 48));
    // 0x15711c: 0xada90190  sw          $t1, 0x190($t5)
    ctx->pc = 0x15711cu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 400), GPR_U32(ctx, 9));
    // 0x157120: 0x90e90001  lbu         $t1, 0x1($a3)
    ctx->pc = 0x157120u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 1)));
    // 0x157124: 0xada90194  sw          $t1, 0x194($t5)
    ctx->pc = 0x157124u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 404), GPR_U32(ctx, 9));
    // 0x157128: 0x90e90002  lbu         $t1, 0x2($a3)
    ctx->pc = 0x157128u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 2)));
    // 0x15712c: 0x14a0fff6  bnez        $a1, . + 4 + (-0xA << 2)
    ctx->pc = 0x15712Cu;
    {
        const bool branch_taken_0x15712c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x157130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15712Cu;
        // 0x157130: 0xada90198  sw          $t1, 0x198($t5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 13), 408), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15712c) {
            ctx->pc = 0x157108u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_157108;
        }
    }
    ctx->pc = 0x157134u;
}
