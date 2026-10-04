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

// Function: entry_00115f30
// Address: 0x115f30 - 0x115f64
void entry_00115f30_0x115f30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00115f30_0x115f30");
#endif

    ctx->pc = 0x115f30u;

    // 0x115f30: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x115f30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x115f34: 0x1483000b  bne         $a0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x115F34u;
    {
        const bool branch_taken_0x115f34 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x115F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115F34u;
        // 0x115f38: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115f34) {
            ctx->pc = 0x115F64u;
            return;
        }
    }
    ctx->pc = 0x115F3Cu;
    // 0x115f3c: 0xa22001a1  sb          $zero, 0x1A1($s1)
    ctx->pc = 0x115f3cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 417), (uint8_t)GPR_U32(ctx, 0));
    // 0x115f40: 0x3c034140  lui         $v1, 0x4140
    ctx->pc = 0x115f40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16704 << 16));
    // 0x115f44: 0xae2301e4  sw          $v1, 0x1E4($s1)
    ctx->pc = 0x115f44u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 484), GPR_U32(ctx, 3));
    // 0x115f48: 0x3c044100  lui         $a0, 0x4100
    ctx->pc = 0x115f48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16640 << 16));
    // 0x115f4c: 0x3c100031  lui         $s0, 0x31
    ctx->pc = 0x115f4cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)49 << 16));
    // 0x115f50: 0x3c034160  lui         $v1, 0x4160
    ctx->pc = 0x115f50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16736 << 16));
    // 0x115f54: 0xae2401e8  sw          $a0, 0x1E8($s1)
    ctx->pc = 0x115f54u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 488), GPR_U32(ctx, 4));
    // 0x115f58: 0x2610a4a0  addiu       $s0, $s0, -0x5B60
    ctx->pc = 0x115f58u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294943904));
    // 0x115f5c: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x115F5Cu;
    {
        const bool branch_taken_0x115f5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x115F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115F5Cu;
        // 0x115f60: 0xae2301ec  sw          $v1, 0x1EC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 492), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115f5c) {
            ctx->pc = 0x11600Cu;
            return;
        }
    }
    ctx->pc = 0x115F64u;
}
