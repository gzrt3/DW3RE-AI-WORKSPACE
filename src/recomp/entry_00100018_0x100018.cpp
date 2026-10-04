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

// Function: entry_00100018
// Address: 0x100018 - 0x100094
void entry_00100018_0x100018(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00100018_0x100018");
#endif

    switch (ctx->pc) {
        case 0x100068u: goto label_100068;
        case 0x100084u: goto label_100084;
        case 0x10008cu: goto label_10008c;
        default: break;
    }

    ctx->pc = 0x100018u;

label_100018:
    // 0x100018: 0x7c400000  sq          $zero, 0x0($v0)
    ctx->pc = 0x100018u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 0));
    // 0x10001c: 0x0  nop
    ctx->pc = 0x10001cu;
    // NOP
    // 0x100020: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x100020u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x100024: 0x0  nop
    ctx->pc = 0x100024u;
    // NOP
    // 0x100028: 0x0  nop
    ctx->pc = 0x100028u;
    // NOP
    // 0x10002c: 0x1420fffa  bnez        $at, . + 4 + (-0x6 << 2)
    ctx->pc = 0x10002Cu;
    {
        const bool branch_taken_0x10002c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x100030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10002Cu;
        // 0x100030: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10002c) {
            ctx->pc = 0x100018u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_100018;
        }
    }
    ctx->pc = 0x100034u;
    // 0x100034: 0x3c04002e  lui         $a0, 0x2E
    ctx->pc = 0x100034u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)46 << 16));
    // 0x100038: 0x3c050200  lui         $a1, 0x200
    ctx->pc = 0x100038u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)512 << 16));
    // 0x10003c: 0x3c060001  lui         $a2, 0x1
    ctx->pc = 0x10003cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)1 << 16));
    // 0x100040: 0x3c07002d  lui         $a3, 0x2D
    ctx->pc = 0x100040u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)45 << 16));
    // 0x100044: 0x3c080010  lui         $t0, 0x10
    ctx->pc = 0x100044u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16 << 16));
    // 0x100048: 0x24848170  addiu       $a0, $a0, -0x7E90
    ctx->pc = 0x100048u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934896));
    // 0x10004c: 0x24a58000  addiu       $a1, $a1, -0x8000
    ctx->pc = 0x10004cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934528));
    // 0x100050: 0x24c68000  addiu       $a2, $a2, -0x8000
    ctx->pc = 0x100050u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294934528));
    // 0x100054: 0x24e71900  addiu       $a3, $a3, 0x1900
    ctx->pc = 0x100054u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 6400));
    // 0x100058: 0x250800c0  addiu       $t0, $t0, 0xC0
    ctx->pc = 0x100058u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 192));
    // 0x10005c: 0x80e025  move        $gp, $a0
    ctx->pc = 0x10005cu;
    SET_GPR_U64(ctx, 28, GPR_U64(ctx, 4) | GPR_U64(ctx, 0));
    // 0x100060: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x100060u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x100064: 0xc  syscall     0
    ctx->pc = 0x100064u;
    ctx->pc = 0x100068u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_100068:
    // 0x100068: 0x40e825  move        $sp, $v0
    ctx->pc = 0x100068u;
    SET_GPR_U64(ctx, 29, GPR_U64(ctx, 2) | GPR_U64(ctx, 0));
    // 0x10006c: 0x3c0401ff  lui         $a0, 0x1FF
    ctx->pc = 0x10006cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)511 << 16));
    // 0x100070: 0x3c050000  lui         $a1, 0x0
    ctx->pc = 0x100070u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)0 << 16));
    // 0x100074: 0x24847000  addiu       $a0, $a0, 0x7000
    ctx->pc = 0x100074u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28672));
    // 0x100078: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x100078u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x10007c: 0x2403003d  addiu       $v1, $zero, 0x3D
    ctx->pc = 0x10007cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
    // 0x100080: 0xc  syscall     0
    ctx->pc = 0x100080u;
    ctx->pc = 0x100084u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_100084:
    // 0x100084: 0xc06b5ba  jal         func_1AD6E8
    ctx->pc = 0x100084u;
    SET_GPR_U32(ctx, 31, 0x10008Cu);
    ctx->pc = 0x1AD6E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD6E8u, 0x100084u, 0x10008Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10008Cu;
label_10008c:
    // 0x10008c: 0xc0692a8  jal         func_1A4AA0
    ctx->pc = 0x10008Cu;
    SET_GPR_U32(ctx, 31, 0x100094u);
    ctx->pc = 0x100090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10008Cu;
    // 0x100090: 0x2025  move        $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4AA0u, 0x10008Cu, 0x100094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100094u;
}
