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

// Function: entry_0016e184
// Address: 0x16e184 - 0x16e1d4
void entry_0016e184_0x16e184(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016e184_0x16e184");
#endif

    switch (ctx->pc) {
        case 0x16e18cu: goto label_16e18c;
        default: break;
    }

    ctx->pc = 0x16e184u;

    // 0x16e184: 0xc05aef0  jal         func_16BBC0
    ctx->pc = 0x16E184u;
    SET_GPR_U32(ctx, 31, 0x16E18Cu);
    ctx->pc = 0x16BBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16BBC0u, 0x16E184u, 0x16E18Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E18Cu;
label_16e18c:
    // 0x16e18c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x16e18cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x16e190: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x16E190u;
    {
        const bool branch_taken_0x16e190 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16e190) {
            ctx->pc = 0x16E1D4u;
            return;
        }
    }
    ctx->pc = 0x16E198u;
    // 0x16e198: 0x8f828178  lw          $v0, -0x7E88($gp)
    ctx->pc = 0x16e198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934904)));
    // 0x16e19c: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x16E19Cu;
    {
        const bool branch_taken_0x16e19c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16E1A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E19Cu;
        // 0x16e1a0: 0xaf808180  sw          $zero, -0x7E80($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294934912), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e19c) {
            ctx->pc = 0x16E1DCu;
            return;
        }
    }
    ctx->pc = 0x16E1A4u;
    // 0x16e1a4: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x16e1a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
    // 0x16e1a8: 0x2402ffdf  addiu       $v0, $zero, -0x21
    ctx->pc = 0x16e1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967263));
    // 0x16e1ac: 0x8c231eb0  lw          $v1, 0x1EB0($at)
    ctx->pc = 0x16e1acu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x281EB0u));
    // 0x16e1b0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x16e1b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x16e1b4: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x16e1b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
    // 0x16e1b8: 0xac221eb0  sw          $v0, 0x1EB0($at)
    ctx->pc = 0x16e1b8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x281EB0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x281EB0u, _value); } while (0);
    // 0x16e1bc: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x16e1bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
    // 0x16e1c0: 0x8c221eb0  lw          $v0, 0x1EB0($at)
    ctx->pc = 0x16e1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x281EB0u));
    // 0x16e1c4: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x16e1c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x16e1c8: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x16e1c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
    // 0x16e1cc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x16E1CCu;
    {
        const bool branch_taken_0x16e1cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16E1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E1CCu;
        // 0x16e1d0: 0xac221eb0  sw          $v0, 0x1EB0($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 7856), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e1cc) {
            ctx->pc = 0x16E1DCu;
            return;
        }
    }
    ctx->pc = 0x16E1D4u;
}
