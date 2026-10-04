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

// Function: entry_0016d898
// Address: 0x16d898 - 0x16d8d0
void entry_0016d898_0x16d898(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016d898_0x16d898");
#endif

    switch (ctx->pc) {
        case 0x16d8b4u: goto label_16d8b4;
        default: break;
    }

    ctx->pc = 0x16d898u;

    // 0x16d898: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x16d898u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
    // 0x16d89c: 0x8c231eb0  lw          $v1, 0x1EB0($at)
    ctx->pc = 0x16d89cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x281EB0u));
    // 0x16d8a0: 0x30630020  andi        $v1, $v1, 0x20
    ctx->pc = 0x16d8a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x16d8a4: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x16D8A4u;
    {
        const bool branch_taken_0x16d8a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x16D8A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D8A4u;
        // 0x16d8a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d8a4) {
            ctx->pc = 0x16D8D0u;
            return;
        }
    }
    ctx->pc = 0x16D8ACu;
    // 0x16d8ac: 0xc08d9b0  jal         func_2366C0
    ctx->pc = 0x16D8ACu;
    SET_GPR_U32(ctx, 31, 0x16D8B4u);
    ctx->pc = 0x2366C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2366C0u, 0x16D8ACu, 0x16D8B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D8B4u;
label_16d8b4:
    // 0x16d8b4: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x16D8B4u;
    {
        const bool branch_taken_0x16d8b4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x16D8B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D8B4u;
        // 0x16d8b8: 0x3c010028  lui         $at, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d8b4) {
            ctx->pc = 0x16D8D0u;
            return;
        }
    }
    ctx->pc = 0x16D8BCu;
    // 0x16d8bc: 0x2403ffdf  addiu       $v1, $zero, -0x21
    ctx->pc = 0x16d8bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967263));
    // 0x16d8c0: 0x8c241eb0  lw          $a0, 0x1EB0($at)
    ctx->pc = 0x16d8c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7856)));
    // 0x16d8c4: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x16d8c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x16d8c8: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x16d8c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
    // 0x16d8cc: 0xac231eb0  sw          $v1, 0x1EB0($at)
    ctx->pc = 0x16d8ccu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x281EB0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x281EB0u, _value); } while (0);
    ctx->pc = 0x16d8d0u;
}
