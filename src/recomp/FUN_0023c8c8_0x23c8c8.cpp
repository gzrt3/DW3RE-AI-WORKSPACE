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

// Function: FUN_0023c8c8
// Address: 0x23c8c8 - 0x23c924
void FUN_0023c8c8_0x23c8c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0023c8c8_0x23c8c8");
#endif

    switch (ctx->pc) {
        case 0x23c8ecu: goto label_23c8ec;
        default: break;
    }

    ctx->pc = 0x23c8c8u;

    // 0x23c8c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x23c8c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x23c8cc: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x23c8ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23c8d0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23c8d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x23c8d4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x23c8d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23c8d8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x23c8d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x23c8dc: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x23c8dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23c8e0: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x23c8e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x23c8e4: 0xc08f0e6  jal         func_23C398
    ctx->pc = 0x23C8E4u;
    SET_GPR_U32(ctx, 31, 0x23C8ECu);
    ctx->pc = 0x23C8E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C8E4u;
    // 0x23c8e8: 0x8605000e  lh          $a1, 0xE($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23C398u, 0x23C8E4u, 0x23C8ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C8ECu;
label_23c8ec:
    // 0x23c8ec: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x23c8ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x23c8f0: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x23c8f0u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x23c8f4: 0x4800006  bltz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x23C8F4u;
    {
        const bool branch_taken_0x23c8f4 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x23C8F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C8F4u;
        // 0x23c8f8: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c8f4) {
            ctx->pc = 0x23C910u;
            goto label_23c910;
        }
    }
    ctx->pc = 0x23C8FCu;
    // 0x23c8fc: 0x8e030050  lw          $v1, 0x50($s0)
    ctx->pc = 0x23c8fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x23c900: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x23c900u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x23c904: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x23C904u;
    {
        const bool branch_taken_0x23c904 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C904u;
        // 0x23c908: 0xae030050  sw          $v1, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c904) {
            ctx->pc = 0x23C91Cu;
            goto label_23c91c;
        }
    }
    ctx->pc = 0x23C90Cu;
    // 0x23c90c: 0x0  nop
    ctx->pc = 0x23c90cu;
    // NOP
label_23c910:
    // 0x23c910: 0x9603000c  lhu         $v1, 0xC($s0)
    ctx->pc = 0x23c910u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x23c914: 0x3063efff  andi        $v1, $v1, 0xEFFF
    ctx->pc = 0x23c914u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)61439);
    // 0x23c918: 0xa603000c  sh          $v1, 0xC($s0)
    ctx->pc = 0x23c918u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 3));
label_23c91c:
    // 0x23c91c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23c91cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23c920: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x23c920u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    ctx->pc = 0x23c924u;
}
