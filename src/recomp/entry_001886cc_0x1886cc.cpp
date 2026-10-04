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

// Function: entry_001886cc
// Address: 0x1886cc - 0x188704
void entry_001886cc_0x1886cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001886cc_0x1886cc");
#endif

    ctx->pc = 0x1886ccu;

    // 0x1886cc: 0x86230224  lh          $v1, 0x224($s1)
    ctx->pc = 0x1886ccu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 548)));
    // 0x1886d0: 0x18600054  blez        $v1, . + 4 + (0x54 << 2)
    ctx->pc = 0x1886D0u;
    {
        const bool branch_taken_0x1886d0 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x1886D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1886D0u;
        // 0x1886d4: 0x2464fff8  addiu       $a0, $v1, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1886d0) {
            ctx->pc = 0x188824u;
            return;
        }
    }
    ctx->pc = 0x1886D8u;
    // 0x1886d8: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x1886d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x1886dc: 0xa6240224  sh          $a0, 0x224($s1)
    ctx->pc = 0x1886dcu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 548), (uint16_t)GPR_U32(ctx, 4));
    // 0x1886e0: 0x34644000  ori         $a0, $v1, 0x4000
    ctx->pc = 0x1886e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x1886e4: 0x8e230194  lw          $v1, 0x194($s1)
    ctx->pc = 0x1886e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 404)));
    // 0x1886e8: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1886e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1886ec: 0xae230194  sw          $v1, 0x194($s1)
    ctx->pc = 0x1886ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 404), GPR_U32(ctx, 3));
    // 0x1886f0: 0x8623003c  lh          $v1, 0x3C($s1)
    ctx->pc = 0x1886f0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 60)));
    // 0x1886f4: 0x28630096  slti        $v1, $v1, 0x96
    ctx->pc = 0x1886f4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)150) ? 1 : 0);
    // 0x1886f8: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1886F8u;
    {
        const bool branch_taken_0x1886f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1886FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1886F8u;
        // 0x1886fc: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1886f8) {
            ctx->pc = 0x188704u;
            return;
        }
    }
    ctx->pc = 0x188700u;
    // 0x188700: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x188700u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x188704u;
}
