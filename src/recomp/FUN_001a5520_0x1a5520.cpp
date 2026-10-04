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

// Function: FUN_001a5520
// Address: 0x1a5520 - 0x1a5568
void FUN_001a5520_0x1a5520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001a5520_0x1a5520");
#endif

    ctx->pc = 0x1a5520u;

    // 0x1a5520: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1a5520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1a5524: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1a5524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1a5528: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1a5528u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a552c: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x1a552cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x1a5530: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x1a5530u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x1a5534: 0x3c160037  lui         $s6, 0x37
    ctx->pc = 0x1a5534u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)55 << 16));
    // 0x1a5538: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x1a5538u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x1a553c: 0x3c15002d  lui         $s5, 0x2D
    ctx->pc = 0x1a553cu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)45 << 16));
    // 0x1a5540: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x1a5540u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x1a5544: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x1a5544u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a5548: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1a5548u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1a554c: 0x24130002  addiu       $s3, $zero, 0x2
    ctx->pc = 0x1a554cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a5550: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a5550u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a5554: 0x26320008  addiu       $s2, $s1, 0x8
    ctx->pc = 0x1a5554u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x1a5558: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x1a5558u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x1a555c: 0x26300009  addiu       $s0, $s1, 0x9
    ctx->pc = 0x1a555cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 9));
    // 0x1a5560: 0xc069218  jal         func_1A4860
    ctx->pc = 0x1A5560u;
    SET_GPR_U32(ctx, 31, 0x1A5568u);
    ctx->pc = 0x1A5564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5560u;
    // 0x1a5564: 0x8ec40ec0  lw          $a0, 0xEC0($s6) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 3776)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4860u, 0x1A5560u, 0x1A5568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5568u;
}
