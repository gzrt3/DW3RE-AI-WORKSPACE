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

// Function: FUN_001303a0
// Address: 0x1303a0 - 0x130400
void FUN_001303a0_0x1303a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001303a0_0x1303a0");
#endif

    switch (ctx->pc) {
        case 0x1303f0u: goto label_1303f0;
        default: break;
    }

    ctx->pc = 0x1303a0u;

    // 0x1303a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1303a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1303a4: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x1303a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x1303a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1303a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1303ac: 0x8c25a3e0  lw          $a1, -0x5C20($at)
    ctx->pc = 0x1303acu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x30A3E0u));
    // 0x1303b0: 0x30a30008  andi        $v1, $a1, 0x8
    ctx->pc = 0x1303b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)8);
    // 0x1303b4: 0x14600011  bnez        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x1303B4u;
    {
        const bool branch_taken_0x1303b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1303b4) {
            ctx->pc = 0x1303FCu;
            goto label_1303fc;
        }
    }
    ctx->pc = 0x1303BCu;
    // 0x1303bc: 0x84830006  lh          $v1, 0x6($a0)
    ctx->pc = 0x1303bcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x1303c0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1303c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1303c4: 0x14660004  bne         $v1, $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x1303C4u;
    {
        const bool branch_taken_0x1303c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        ctx->pc = 0x1303C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1303C4u;
        // 0x1303c8: 0x34a30008  ori         $v1, $a1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1303c4) {
            ctx->pc = 0x1303D8u;
            goto label_1303d8;
        }
    }
    ctx->pc = 0x1303CCu;
    // 0x1303cc: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x1303ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x1303d0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1303D0u;
    {
        const bool branch_taken_0x1303d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1303D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1303D0u;
        // 0x1303d4: 0xac23a3e0  sw          $v1, -0x5C20($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294943712), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1303d0) {
            ctx->pc = 0x1303FCu;
            goto label_1303fc;
        }
    }
    ctx->pc = 0x1303D8u;
label_1303d8:
    // 0x1303d8: 0x84820002  lh          $v0, 0x2($a0)
    ctx->pc = 0x1303d8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x1303dc: 0x84830004  lh          $v1, 0x4($a0)
    ctx->pc = 0x1303dcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1303e0: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1303e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1303e4: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x1303e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1303e8: 0xc04e188  jal         func_138620
    ctx->pc = 0x1303E8u;
    SET_GPR_U32(ctx, 31, 0x1303F0u);
    ctx->pc = 0x1303ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1303E8u;
    // 0x1303ec: 0x2c450001  sltiu       $a1, $v0, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x138620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138620u, 0x1303E8u, 0x1303F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1303F0u;
label_1303f0:
    // 0x1303f0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1303f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1303f4: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x1303f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x1303f8: 0xa023a3eb  sb          $v1, -0x5C15($at)
    ctx->pc = 0x1303f8u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x30A3EBu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x30A3EBu, _value); } while (0);
label_1303fc:
    // 0x1303fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1303fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x130400u;
}
