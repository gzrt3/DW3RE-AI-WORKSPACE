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

// Function: entry_00135a58
// Address: 0x135a58 - 0x135ab0
void entry_00135a58_0x135a58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00135a58_0x135a58");
#endif

    switch (ctx->pc) {
        case 0x135a8cu: goto label_135a8c;
        case 0x135a94u: goto label_135a94;
        default: break;
    }

    ctx->pc = 0x135a58u;

label_135a58:
    // 0x135a58: 0x0  nop
    ctx->pc = 0x135a58u;
    // NOP
    // 0x135a5c: 0x651021  addu        $v0, $v1, $a1
    ctx->pc = 0x135a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x135a60: 0xac400514  sw          $zero, 0x514($v0)
    ctx->pc = 0x135a60u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1300), GPR_U32(ctx, 0));
    // 0x135a64: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x135a64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x135a68: 0x28820005  slti        $v0, $a0, 0x5
    ctx->pc = 0x135a68u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x135a6c: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x135a6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x135a70: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x135A70u;
    {
        const bool branch_taken_0x135a70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x135a70) {
            ctx->pc = 0x135A58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_135a58;
        }
    }
    ctx->pc = 0x135A78u;
    // 0x135a78: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x135a78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x135a7c: 0x9022490d  lbu         $v0, 0x490D($at)
    ctx->pc = 0x135a7cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x33490Du));
    // 0x135a80: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x135a80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x135a84: 0xc04d6e0  jal         func_135B80
    ctx->pc = 0x135A84u;
    SET_GPR_U32(ctx, 31, 0x135A8Cu);
    ctx->pc = 0x135A88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135A84u;
    // 0x135a88: 0xa022a402  sb          $v0, -0x5BFE($at) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294943746), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135B80u, 0x135A84u, 0x135A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135A8Cu;
label_135a8c:
    // 0x135a8c: 0xc04e1bc  jal         func_1386F0
    ctx->pc = 0x135A8Cu;
    SET_GPR_U32(ctx, 31, 0x135A94u);
    ctx->pc = 0x135A90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135A8Cu;
    // 0x135a90: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1386F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1386F0u, 0x135A8Cu, 0x135A94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135A94u;
label_135a94:
    // 0x135a94: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x135a94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x135a98: 0xa0209fc0  sb          $zero, -0x6040($at)
    ctx->pc = 0x135a98u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x309FC0u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x309FC0u, _value); } while (0);
    // 0x135a9c: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x135a9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x135aa0: 0xa0209fc1  sb          $zero, -0x603F($at)
    ctx->pc = 0x135aa0u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x309FC1u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x309FC1u, _value); } while (0);
    // 0x135aa4: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x135aa4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x135aa8: 0xa0209fc2  sb          $zero, -0x603E($at)
    ctx->pc = 0x135aa8u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x309FC2u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x309FC2u, _value); } while (0);
    // 0x135aac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x135aacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x135ab0u;
}
