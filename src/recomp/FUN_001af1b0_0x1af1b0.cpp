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

// Function: FUN_001af1b0
// Address: 0x1af1b0 - 0x1af208
void FUN_001af1b0_0x1af1b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001af1b0_0x1af1b0");
#endif

    ctx->pc = 0x1af1b0u;

    // 0x1af1b0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1af1b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x1af1b4: 0xffbe0080  sd          $fp, 0x80($sp)
    ctx->pc = 0x1af1b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
    // 0x1af1b8: 0xffb70070  sd          $s7, 0x70($sp)
    ctx->pc = 0x1af1b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x1af1bc: 0x3c1e0028  lui         $fp, 0x28
    ctx->pc = 0x1af1bcu;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)40 << 16));
    // 0x1af1c0: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x1af1c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x1af1c4: 0x3c170028  lui         $s7, 0x28
    ctx->pc = 0x1af1c4u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)40 << 16));
    // 0x1af1c8: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x1af1c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x1af1cc: 0x3c160037  lui         $s6, 0x37
    ctx->pc = 0x1af1ccu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)55 << 16));
    // 0x1af1d0: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x1af1d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x1af1d4: 0x3c150028  lui         $s5, 0x28
    ctx->pc = 0x1af1d4u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)40 << 16));
    // 0x1af1d8: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x1af1d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x1af1dc: 0x3c14002d  lui         $s4, 0x2D
    ctx->pc = 0x1af1dcu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)45 << 16));
    // 0x1af1e0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1af1e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1af1e4: 0x3c130028  lui         $s3, 0x28
    ctx->pc = 0x1af1e4u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)40 << 16));
    // 0x1af1e8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1af1e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1af1ec: 0x3c120028  lui         $s2, 0x28
    ctx->pc = 0x1af1ecu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)40 << 16));
    // 0x1af1f0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1af1f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1af1f4: 0x3c110037  lui         $s1, 0x37
    ctx->pc = 0x1af1f4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)55 << 16));
    // 0x1af1f8: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1af1f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x1af1fc: 0x3c100028  lui         $s0, 0x28
    ctx->pc = 0x1af1fcu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)40 << 16));
    // 0x1af200: 0xc069218  jal         func_1A4860
    ctx->pc = 0x1AF200u;
    SET_GPR_U32(ctx, 31, 0x1AF208u);
    ctx->pc = 0x1AF204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF200u;
    // 0x1af204: 0x8fc472a0  lw          $a0, 0x72A0($fp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 29344)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4860u, 0x1AF200u, 0x1AF208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF208u;
}
