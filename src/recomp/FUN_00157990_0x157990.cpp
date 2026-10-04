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

// Function: FUN_00157990
// Address: 0x157990 - 0x157a1c
void FUN_00157990_0x157990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00157990_0x157990");
#endif

    switch (ctx->pc) {
        case 0x157a10u: goto label_157a10;
        default: break;
    }

    ctx->pc = 0x157990u;

    // 0x157990: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x157990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x157994: 0x3c01002a  lui         $at, 0x2A
    ctx->pc = 0x157994u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)42 << 16));
    // 0x157998: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x157998u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x15799c: 0x8c22c9b0  lw          $v0, -0x3650($at)
    ctx->pc = 0x15799cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x29C9B0u));
    // 0x1579a0: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1579A0u;
    {
        const bool branch_taken_0x1579a0 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1579A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1579A0u;
        // 0x1579a4: 0x3043000f  andi        $v1, $v0, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1579a0) {
            ctx->pc = 0x1579B4u;
            goto label_1579b4;
        }
    }
    ctx->pc = 0x1579A8u;
    // 0x1579a8: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1579A8u;
    {
        const bool branch_taken_0x1579a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1579a8) {
            ctx->pc = 0x1579B4u;
            goto label_1579b4;
        }
    }
    ctx->pc = 0x1579B0u;
    // 0x1579b0: 0x2463fff0  addiu       $v1, $v1, -0x10
    ctx->pc = 0x1579b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967280));
label_1579b4:
    // 0x1579b4: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1579B4u;
    {
        const bool branch_taken_0x1579b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1579B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1579B4u;
        // 0x1579b8: 0x3203c  dsll32      $a0, $v1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1579b4) {
            ctx->pc = 0x1579D4u;
            goto label_1579d4;
        }
    }
    ctx->pc = 0x1579BCu;
    // 0x1579bc: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x1579bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1579c0: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1579c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1579c4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1579C4u;
    {
        const bool branch_taken_0x1579c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1579C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1579C4u;
        // 0x1579c8: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1579c4) {
            ctx->pc = 0x1579D8u;
            goto label_1579d8;
        }
    }
    ctx->pc = 0x1579CCu;
    // 0x1579cc: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1579CCu;
    {
        const bool branch_taken_0x1579cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1579D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1579CCu;
        // 0x1579d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1579cc) {
            ctx->pc = 0x157A18u;
            goto label_157a18;
        }
    }
    ctx->pc = 0x1579D4u;
label_1579d4:
    // 0x1579d4: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x1579d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_1579d8:
    // 0x1579d8: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x1579d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1579dc: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x1579dcu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x1579e0: 0x41138  dsll        $v0, $a0, 4
    ctx->pc = 0x1579e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << 4);
    // 0x1579e4: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1579e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1579e8: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x1579e8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x1579ec: 0x44102d  daddu       $v0, $v0, $a0
    ctx->pc = 0x1579ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 4));
    // 0x1579f0: 0x83282d  daddu       $a1, $a0, $v1
    ctx->pc = 0x1579f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 3));
    // 0x1579f4: 0x21138  dsll        $v0, $v0, 4
    ctx->pc = 0x1579f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 4);
    // 0x1579f8: 0x44182d  daddu       $v1, $v0, $a0
    ctx->pc = 0x1579f8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 4));
    // 0x1579fc: 0x310f8  dsll        $v0, $v1, 3
    ctx->pc = 0x1579fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << 3);
    // 0x157a00: 0x62102d  daddu       $v0, $v1, $v0
    ctx->pc = 0x157a00u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 2));
    // 0x157a04: 0x210b8  dsll        $v0, $v0, 2
    ctx->pc = 0x157a04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 2);
    // 0x157a08: 0xc06d554  jal         func_1B5550
    ctx->pc = 0x157A08u;
    SET_GPR_U32(ctx, 31, 0x157A10u);
    ctx->pc = 0x157A0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157A08u;
    // 0x157a0c: 0x44202d  daddu       $a0, $v0, $a0 (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B5550u, 0x157A08u, 0x157A10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157A10u;
label_157a10:
    // 0x157a10: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x157a10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x157a14: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x157a14u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_157a18:
    // 0x157a18: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x157a18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x157a1cu;
}
