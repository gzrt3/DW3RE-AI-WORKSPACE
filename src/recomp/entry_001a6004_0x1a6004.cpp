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

// Function: entry_001a6004
// Address: 0x1a6004 - 0x1a6040
void entry_001a6004_0x1a6004(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a6004_0x1a6004");
#endif

    ctx->pc = 0x1a6004u;

    // 0x1a6004: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x1a6004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1a6008: 0x1602000d  bne         $s0, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1A6008u;
    {
        const bool branch_taken_0x1a6008 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x1A600Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6008u;
        // 0x1a600c: 0x264216c0  addiu       $v0, $s2, 0x16C0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 5824));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6008) {
            ctx->pc = 0x1A6040u;
            return;
        }
    }
    ctx->pc = 0x1A6010u;
    // 0x1a6010: 0x264416c0  addiu       $a0, $s2, 0x16C0
    ctx->pc = 0x1a6010u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 5824));
    // 0x1a6014: 0xae205b60  sw          $zero, 0x5B60($s1)
    ctx->pc = 0x1a6014u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 23392), GPR_U32(ctx, 0));
    // 0x1a6018: 0xa41021  addu        $v0, $a1, $a0
    ctx->pc = 0x1a6018u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1a601c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1a601cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a6020: 0xa0500000  sb          $s0, 0x0($v0)
    ctx->pc = 0x1a6020u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 16));
    // 0x1a6024: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1a6024u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6028: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1a6028u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a602c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1a602cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a6030: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a6030u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a6034: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x1a6034u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a6038: 0x806968e  j           func_1A5A38
    ctx->pc = 0x1A6038u;
    ctx->pc = 0x1A603Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6038u;
    // 0x1a603c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5A38u;
    FUN_001a5a38_0x1a5a38(rdram, ctx, runtime); return;
    ctx->pc = 0x1A6040u;
}
