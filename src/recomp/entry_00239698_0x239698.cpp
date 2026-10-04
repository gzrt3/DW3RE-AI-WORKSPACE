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

// Function: entry_00239698
// Address: 0x239698 - 0x2396dc
void entry_00239698_0x239698(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00239698_0x239698");
#endif

    switch (ctx->pc) {
        case 0x2396c8u: goto label_2396c8;
        default: break;
    }

    ctx->pc = 0x239698u;

    // 0x239698: 0x3c030024  lui         $v1, 0x24
    ctx->pc = 0x239698u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)36 << 16));
    // 0x23969c: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x23969cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x2396a0: 0x24638a30  addiu       $v1, $v1, -0x75D0
    ctx->pc = 0x2396a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294937136));
    // 0x2396a4: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x2396a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x2396a8: 0xae050010  sw          $a1, 0x10($s0)
    ctx->pc = 0x2396a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 5));
    // 0x2396ac: 0xac83003c  sw          $v1, 0x3C($a0)
    ctx->pc = 0x2396acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 3));
    // 0x2396b0: 0xa602000c  sh          $v0, 0xC($s0)
    ctx->pc = 0x2396b0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x2396b4: 0xae110014  sw          $s1, 0x14($s0)
    ctx->pc = 0x2396b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 17));
    // 0x2396b8: 0x12400008  beqz        $s2, . + 4 + (0x8 << 2)
    ctx->pc = 0x2396B8u;
    {
        const bool branch_taken_0x2396b8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2396BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2396B8u;
        // 0x2396bc: 0xae050000  sw          $a1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2396b8) {
            ctx->pc = 0x2396DCu;
            return;
        }
    }
    ctx->pc = 0x2396C0u;
    // 0x2396c0: 0xc0693f4  jal         func_1A4FD0
    ctx->pc = 0x2396C0u;
    SET_GPR_U32(ctx, 31, 0x2396C8u);
    ctx->pc = 0x2396C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2396C0u;
    // 0x2396c4: 0x8604000e  lh          $a0, 0xE($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4FD0u, 0x2396C0u, 0x2396C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2396C8u;
label_2396c8:
    // 0x2396c8: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2396C8u;
    {
        const bool branch_taken_0x2396c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2396c8) {
            ctx->pc = 0x2396CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2396C8u;
            // 0x2396cc: 0xdfb00070  ld          $s0, 0x70($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2396E0u;
            return;
        }
    }
    ctx->pc = 0x2396D0u;
    // 0x2396d0: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x2396d0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2396d4: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x2396d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x2396d8: 0xa602000c  sh          $v0, 0xC($s0)
    ctx->pc = 0x2396d8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
    ctx->pc = 0x2396dcu;
}
