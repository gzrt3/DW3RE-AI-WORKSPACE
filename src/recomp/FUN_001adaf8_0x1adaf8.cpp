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

// Function: FUN_001adaf8
// Address: 0x1adaf8 - 0x1adb44
void FUN_001adaf8_0x1adaf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001adaf8_0x1adaf8");
#endif

    switch (ctx->pc) {
        case 0x1adb1cu: goto label_1adb1c;
        case 0x1adb24u: goto label_1adb24;
        default: break;
    }

    ctx->pc = 0x1adaf8u;

    // 0x1adaf8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1adaf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1adafc: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1adafcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1adb00: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1adb00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1adb04: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1adb04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1adb08: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1adb08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1adb0c: 0x3c04002d  lui         $a0, 0x2D
    ctx->pc = 0x1adb0cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
    // 0x1adb10: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1adb10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1adb14: 0xc06b63e  jal         func_1AD8F8
    ctx->pc = 0x1ADB14u;
    SET_GPR_U32(ctx, 31, 0x1ADB1Cu);
    ctx->pc = 0x1ADB18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ADB14u;
    // 0x1adb18: 0x2484a7f0  addiu       $a0, $a0, -0x5810 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944752));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD8F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD8F8u, 0x1ADB14u, 0x1ADB1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ADB1Cu;
label_1adb1c:
    // 0x1adb1c: 0xc06b684  jal         func_1ADA10
    ctx->pc = 0x1ADB1Cu;
    SET_GPR_U32(ctx, 31, 0x1ADB24u);
    ctx->pc = 0x1ADA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ADA10u, 0x1ADB1Cu, 0x1ADB24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ADB24u;
label_1adb24:
    // 0x1adb24: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x1adb24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
    // 0x1adb28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1adb28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1adb2c: 0x8c455f98  lw          $a1, 0x5F98($v0)
    ctx->pc = 0x1adb2cu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x285F98u));
    // 0x1adb30: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1adb30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1adb34: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1adb34u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1adb38: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x1adb38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x1adb3c: 0x8069310  j           func_1A4C40
    ctx->pc = 0x1ADB3Cu;
    ctx->pc = 0x1ADB40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ADB3Cu;
    // 0x1adb40: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4C40u;
    FUN_001a4c40_0x1a4c40(rdram, ctx, runtime); return;
    ctx->pc = 0x1ADB44u;
}
