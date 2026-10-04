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

// Function: FUN_0017a700
// Address: 0x17a700 - 0x17a740
void FUN_0017a700_0x17a700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0017a700_0x17a700");
#endif

    switch (ctx->pc) {
        case 0x17a728u: goto label_17a728;
        case 0x17a734u: goto label_17a734;
        default: break;
    }

    ctx->pc = 0x17a700u;

    // 0x17a700: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x17a700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x17a704: 0x3c023b03  lui         $v0, 0x3B03
    ctx->pc = 0x17a704u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15107 << 16));
    // 0x17a708: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x17a708u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x17a70c: 0x3442126f  ori         $v0, $v0, 0x126F
    ctx->pc = 0x17a70cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4719);
    // 0x17a710: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17a710u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x17a714: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x17a714u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x17a718: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x17a718u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a71c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x17a71cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x17a720: 0xc066e14  jal         func_19B850
    ctx->pc = 0x17A720u;
    SET_GPR_U32(ctx, 31, 0x17A728u);
    ctx->pc = 0x17A724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A720u;
    // 0x17a724: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B850u, 0x17A720u, 0x17A728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A728u;
label_17a728:
    // 0x17a728: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x17a728u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x17a72c: 0xc066e38  jal         func_19B8E0
    ctx->pc = 0x17A72Cu;
    SET_GPR_U32(ctx, 31, 0x17A734u);
    ctx->pc = 0x17A730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A72Cu;
    // 0x17a730: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B8E0u, 0x17A72Cu, 0x17A734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A734u;
label_17a734:
    // 0x17a734: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x17a734u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17a738: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x17a738u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17a73c: 0x0  nop
    ctx->pc = 0x17a73cu;
    // NOP
    ctx->pc = 0x17a740u;
}
