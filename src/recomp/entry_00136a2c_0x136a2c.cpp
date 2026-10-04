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

// Function: entry_00136a2c
// Address: 0x136a2c - 0x136a74
void entry_00136a2c_0x136a2c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00136a2c_0x136a2c");
#endif

    switch (ctx->pc) {
        case 0x136a5cu: goto label_136a5c;
        case 0x136a6cu: goto label_136a6c;
        default: break;
    }

    ctx->pc = 0x136a2cu;

    // 0x136a2c: 0x90229fc0  lbu         $v0, -0x6040($at)
    ctx->pc = 0x136a2cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294942656)));
    // 0x136a30: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x136a30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x136a34: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x136a34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x136a38: 0xa0229fc0  sb          $v0, -0x6040($at)
    ctx->pc = 0x136a38u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x309FC0u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x309FC0u, _value); } while (0);
    // 0x136a3c: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x136a3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x136a40: 0x90229fc0  lbu         $v0, -0x6040($at)
    ctx->pc = 0x136a40u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x309FC0u));
    // 0x136a44: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x136A44u;
    {
        const bool branch_taken_0x136a44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x136a44) {
            ctx->pc = 0x136A74u;
            return;
        }
    }
    ctx->pc = 0x136A4Cu;
    // 0x136a4c: 0x8f828590  lw          $v0, -0x7A70($gp)
    ctx->pc = 0x136a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
    // 0x136a50: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x136a50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
    // 0x136a54: 0xc04d44c  jal         func_135130
    ctx->pc = 0x136A54u;
    SET_GPR_U32(ctx, 31, 0x136A5Cu);
    ctx->pc = 0x136A58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136A54u;
    // 0x136a58: 0xaf828590  sw          $v0, -0x7A70($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935952), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135130u, 0x136A54u, 0x136A5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136A5Cu;
label_136a5c:
    // 0x136a5c: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x136a5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x136a60: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x136a60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136a64: 0xc04e178  jal         func_1385E0
    ctx->pc = 0x136A64u;
    SET_GPR_U32(ctx, 31, 0x136A6Cu);
    ctx->pc = 0x136A68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136A64u;
    // 0x136a68: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1385E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1385E0u, 0x136A64u, 0x136A6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136A6Cu;
label_136a6c:
    // 0x136a6c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x136A6Cu;
    {
        const bool branch_taken_0x136a6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x136a6c) {
            ctx->pc = 0x136A90u;
            return;
        }
    }
    ctx->pc = 0x136A74u;
}
