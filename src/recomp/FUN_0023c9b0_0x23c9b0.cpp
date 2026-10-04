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

// Function: FUN_0023c9b0
// Address: 0x23c9b0 - 0x23ca0c
void FUN_0023c9b0_0x23c9b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0023c9b0_0x23c9b0");
#endif

    switch (ctx->pc) {
        case 0x23c9d4u: goto label_23c9d4;
        default: break;
    }

    ctx->pc = 0x23c9b0u;

    // 0x23c9b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x23c9b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x23c9b4: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x23c9b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23c9b8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23c9b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x23c9bc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x23c9bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23c9c0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x23c9c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x23c9c4: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x23c9c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23c9c8: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x23c9c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x23c9cc: 0xc08e550  jal         func_239540
    ctx->pc = 0x23C9CCu;
    SET_GPR_U32(ctx, 31, 0x23C9D4u);
    ctx->pc = 0x23C9D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C9CCu;
    // 0x23c9d0: 0x8605000e  lh          $a1, 0xE($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x239540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x239540u, 0x23C9CCu, 0x23C9D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C9D4u;
label_23c9d4:
    // 0x23c9d4: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x23c9d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x23c9d8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x23c9d8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23c9dc: 0x3283c  dsll32      $a1, $v1, 0
    ctx->pc = 0x23c9dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
    // 0x23c9e0: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x23c9e0u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x23c9e4: 0x14640004  bne         $v1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x23C9E4u;
    {
        const bool branch_taken_0x23c9e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x23C9E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C9E4u;
        // 0x23c9e8: 0x9603000c  lhu         $v1, 0xC($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c9e4) {
            ctx->pc = 0x23C9F8u;
            goto label_23c9f8;
        }
    }
    ctx->pc = 0x23C9ECu;
    // 0x23c9ec: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x23C9ECu;
    {
        const bool branch_taken_0x23c9ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C9F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C9ECu;
        // 0x23c9f0: 0x3063efff  andi        $v1, $v1, 0xEFFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)61439);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c9ec) {
            ctx->pc = 0x23CA00u;
            goto label_23ca00;
        }
    }
    ctx->pc = 0x23C9F4u;
    // 0x23c9f4: 0x0  nop
    ctx->pc = 0x23c9f4u;
    // NOP
label_23c9f8:
    // 0x23c9f8: 0xae050050  sw          $a1, 0x50($s0)
    ctx->pc = 0x23c9f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 5));
    // 0x23c9fc: 0x34631000  ori         $v1, $v1, 0x1000
    ctx->pc = 0x23c9fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4096);
label_23ca00:
    // 0x23ca00: 0xa603000c  sh          $v1, 0xC($s0)
    ctx->pc = 0x23ca00u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x23ca04: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23ca04u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23ca08: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x23ca08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    ctx->pc = 0x23ca0cu;
}
