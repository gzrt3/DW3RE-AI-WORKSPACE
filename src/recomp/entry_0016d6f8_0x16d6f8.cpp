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

// Function: entry_0016d6f8
// Address: 0x16d6f8 - 0x16d758
void entry_0016d6f8_0x16d6f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016d6f8_0x16d6f8");
#endif

    switch (ctx->pc) {
        case 0x16d730u: goto label_16d730;
        default: break;
    }

    ctx->pc = 0x16d6f8u;

    // 0x16d6f8: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x16d6f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
    // 0x16d6fc: 0x8c241eb0  lw          $a0, 0x1EB0($at)
    ctx->pc = 0x16d6fcu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x281EB0u));
    // 0x16d700: 0x30830008  andi        $v1, $a0, 0x8
    ctx->pc = 0x16d700u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)8);
    // 0x16d704: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x16D704u;
    {
        const bool branch_taken_0x16d704 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x16d704) {
            ctx->pc = 0x16D758u;
            return;
        }
    }
    ctx->pc = 0x16D70Cu;
    // 0x16d70c: 0x30830003  andi        $v1, $a0, 0x3
    ctx->pc = 0x16d70cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
    // 0x16d710: 0x14600011  bnez        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x16D710u;
    {
        const bool branch_taken_0x16d710 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x16d710) {
            ctx->pc = 0x16D758u;
            return;
        }
    }
    ctx->pc = 0x16D718u;
    // 0x16d718: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x16d718u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
    // 0x16d71c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16d71cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d720: 0x8c251ebc  lw          $a1, 0x1EBC($at)
    ctx->pc = 0x16d720u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x281EBCu));
    // 0x16d724: 0x24063fff  addiu       $a2, $zero, 0x3FFF
    ctx->pc = 0x16d724u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16383));
    // 0x16d728: 0xc08d950  jal         func_236540
    ctx->pc = 0x16D728u;
    SET_GPR_U32(ctx, 31, 0x16D730u);
    ctx->pc = 0x16D72Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D728u;
    // 0x16d72c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236540u, 0x16D728u, 0x16D730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D730u;
label_16d730:
    // 0x16d730: 0x4400009  bltz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x16D730u;
    {
        const bool branch_taken_0x16d730 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x16d730) {
            ctx->pc = 0x16D758u;
            return;
        }
    }
    ctx->pc = 0x16D738u;
    // 0x16d738: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x16d738u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
    // 0x16d73c: 0x2402fff7  addiu       $v0, $zero, -0x9
    ctx->pc = 0x16d73cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x16d740: 0x8c231eb0  lw          $v1, 0x1EB0($at)
    ctx->pc = 0x16d740u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x281EB0u));
    // 0x16d744: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x16d744u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16d748: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x16d748u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x16d74c: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x16d74cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
    // 0x16d750: 0xc08d7f6  jal         func_235FD8
    ctx->pc = 0x16D750u;
    SET_GPR_U32(ctx, 31, 0x16D758u);
    ctx->pc = 0x16D754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D750u;
    // 0x16d754: 0xac221eb0  sw          $v0, 0x1EB0($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 7856), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235FD8u, 0x16D750u, 0x16D758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D758u;
}
