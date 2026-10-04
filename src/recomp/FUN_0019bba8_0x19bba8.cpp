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

// Function: FUN_0019bba8
// Address: 0x19bba8 - 0x19bbf8
void FUN_0019bba8_0x19bba8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0019bba8_0x19bba8");
#endif

    switch (ctx->pc) {
        case 0x19bbc8u: goto label_19bbc8;
        case 0x19bbd8u: goto label_19bbd8;
        default: break;
    }

    ctx->pc = 0x19bba8u;

    // 0x19bba8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x19bba8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x19bbac: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x19bbacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x19bbb0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x19bbb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19bbb4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x19bbb4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19bbb8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x19bbb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x19bbbc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19bbbcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19bbc0: 0xc066e6c  jal         func_19B9B0
    ctx->pc = 0x19BBC0u;
    SET_GPR_U32(ctx, 31, 0x19BBC8u);
    ctx->pc = 0x19BBC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19BBC0u;
    // 0x19bbc4: 0xc62c0008  lwc1        $f12, 0x8($s1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B9B0u, 0x19BBC0u, 0x19BBC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19BBC8u;
label_19bbc8:
    // 0x19bbc8: 0xc62c0004  lwc1        $f12, 0x4($s1)
    ctx->pc = 0x19bbc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x19bbcc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19bbccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19bbd0: 0xc066ec0  jal         func_19BB00
    ctx->pc = 0x19BBD0u;
    SET_GPR_U32(ctx, 31, 0x19BBD8u);
    ctx->pc = 0x19BBD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19BBD0u;
    // 0x19bbd4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BB00u, 0x19BBD0u, 0x19BBD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19BBD8u;
label_19bbd8:
    // 0x19bbd8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19bbd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19bbdc: 0xc62c0000  lwc1        $f12, 0x0($s1)
    ctx->pc = 0x19bbdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x19bbe0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x19bbe0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19bbe4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x19bbe4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19bbe8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x19bbe8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19bbec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19bbecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19bbf0: 0x8066e96  j           func_19BA58
    ctx->pc = 0x19BBF0u;
    ctx->pc = 0x19BBF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19BBF0u;
    // 0x19bbf4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BA58u;
    FUN_0019ba58_0x19ba58(rdram, ctx, runtime); return;
    ctx->pc = 0x19BBF8u;
}
