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

// Function: entry_00212488
// Address: 0x212488 - 0x2124f8
void entry_00212488_0x212488(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00212488_0x212488");
#endif

    switch (ctx->pc) {
        case 0x2124b0u: goto label_2124b0;
        case 0x2124f0u: goto label_2124f0;
        default: break;
    }

    ctx->pc = 0x212488u;

    // 0x212488: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x212488u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x21248c: 0x861818  mult        $v1, $a0, $a2
    ctx->pc = 0x21248cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x212490: 0x2442c990  addiu       $v0, $v0, -0x3670
    ctx->pc = 0x212490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953360));
    // 0x212494: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x212494u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x212498: 0x342130f0  ori         $at, $at, 0x30F0
    ctx->pc = 0x212498u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)12528);
    // 0x21249c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x21249cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2124a0: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x2124a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x2124a4: 0x24847560  addiu       $a0, $a0, 0x7560
    ctx->pc = 0x2124a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30048));
    // 0x2124a8: 0xc08e93e  jal         func_23A4F8
    ctx->pc = 0x2124A8u;
    SET_GPR_U32(ctx, 31, 0x2124B0u);
    ctx->pc = 0x2124ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2124A8u;
    // 0x2124ac: 0x412821  addu        $a1, $v0, $at (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A4F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A4F8u, 0x2124A8u, 0x2124B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2124B0u;
label_2124b0:
    // 0x2124b0: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x2124b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x2124b4: 0x90237702  lbu         $v1, 0x7702($at)
    ctx->pc = 0x2124b4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x587702u));
    // 0x2124b8: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x2124b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x2124bc: 0x90227703  lbu         $v0, 0x7703($at)
    ctx->pc = 0x2124bcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x587703u));
    // 0x2124c0: 0x3c01002a  lui         $at, 0x2A
    ctx->pc = 0x2124c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)42 << 16));
    // 0x2124c4: 0xac23caec  sw          $v1, -0x3514($at)
    ctx->pc = 0x2124c4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x29CAECu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x29CAECu, _value); } while (0);
    // 0x2124c8: 0x3c01002a  lui         $at, 0x2A
    ctx->pc = 0x2124c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)42 << 16));
    // 0x2124cc: 0xac22caf0  sw          $v0, -0x3510($at)
    ctx->pc = 0x2124ccu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x29CAF0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x29CAF0u, _value); } while (0);
    // 0x2124d0: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x2124d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x2124d4: 0x24050029  addiu       $a1, $zero, 0x29
    ctx->pc = 0x2124d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
    // 0x2124d8: 0x90247560  lbu         $a0, 0x7560($at)
    ctx->pc = 0x2124d8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)FAST_READ8(0x587560u));
    // 0x2124dc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2124dcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2124e0: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x2124e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x2124e4: 0x90267701  lbu         $a2, 0x7701($at)
    ctx->pc = 0x2124e4u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)FAST_READ8(0x587701u));
    // 0x2124e8: 0xc056690  jal         func_159A40
    ctx->pc = 0x2124E8u;
    SET_GPR_U32(ctx, 31, 0x2124F0u);
    ctx->pc = 0x2124ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2124E8u;
    // 0x2124ec: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x159A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x159A40u, 0x2124E8u, 0x2124F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2124F0u;
label_2124f0:
    // 0x2124f0: 0x10000057  b           . + 4 + (0x57 << 2)
    ctx->pc = 0x2124F0u;
    {
        const bool branch_taken_0x2124f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2124f0) {
            ctx->pc = 0x212650u;
            return;
        }
    }
    ctx->pc = 0x2124F8u;
}
