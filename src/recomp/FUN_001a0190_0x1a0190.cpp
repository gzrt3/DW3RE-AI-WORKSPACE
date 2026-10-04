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

// Function: FUN_001a0190
// Address: 0x1a0190 - 0x1a0220
void FUN_001a0190_0x1a0190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001a0190_0x1a0190");
#endif

    switch (ctx->pc) {
        case 0x1a01a8u: goto label_1a01a8;
        case 0x1a01b4u: goto label_1a01b4;
        case 0x1a01c0u: goto label_1a01c0;
        case 0x1a01ccu: goto label_1a01cc;
        case 0x1a01d8u: goto label_1a01d8;
        case 0x1a01e4u: goto label_1a01e4;
        case 0x1a01f0u: goto label_1a01f0;
        case 0x1a01fcu: goto label_1a01fc;
        case 0x1a0208u: goto label_1a0208;
        default: break;
    }

    ctx->pc = 0x1a0190u;

    // 0x1a0190: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a0190u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a0194: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1a0194u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a0198: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a0198u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a019c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a019cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1a01a0: 0xc067dd2  jal         func_19F748
    ctx->pc = 0x1A01A0u;
    SET_GPR_U32(ctx, 31, 0x1A01A8u);
    ctx->pc = 0x1A01A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A01A0u;
    // 0x1a01a4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F748u, 0x1A01A0u, 0x1A01A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A01A8u;
label_1a01a8:
    // 0x1a01a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a01a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a01ac: 0xc067dd2  jal         func_19F748
    ctx->pc = 0x1A01ACu;
    SET_GPR_U32(ctx, 31, 0x1A01B4u);
    ctx->pc = 0x1A01B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A01ACu;
    // 0x1a01b0: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F748u, 0x1A01ACu, 0x1A01B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A01B4u;
label_1a01b4:
    // 0x1a01b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a01b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a01b8: 0xc067dd2  jal         func_19F748
    ctx->pc = 0x1A01B8u;
    SET_GPR_U32(ctx, 31, 0x1A01C0u);
    ctx->pc = 0x1A01BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A01B8u;
    // 0x1a01bc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F748u, 0x1A01B8u, 0x1A01C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A01C0u;
label_1a01c0:
    // 0x1a01c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a01c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a01c4: 0xc067dd2  jal         func_19F748
    ctx->pc = 0x1A01C4u;
    SET_GPR_U32(ctx, 31, 0x1A01CCu);
    ctx->pc = 0x1A01C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A01C4u;
    // 0x1a01c8: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F748u, 0x1A01C4u, 0x1A01CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A01CCu;
label_1a01cc:
    // 0x1a01cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a01ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a01d0: 0xc067dd2  jal         func_19F748
    ctx->pc = 0x1A01D0u;
    SET_GPR_U32(ctx, 31, 0x1A01D8u);
    ctx->pc = 0x1A01D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A01D0u;
    // 0x1a01d4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F748u, 0x1A01D0u, 0x1A01D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A01D8u;
label_1a01d8:
    // 0x1a01d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a01d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a01dc: 0xc067dd2  jal         func_19F748
    ctx->pc = 0x1A01DCu;
    SET_GPR_U32(ctx, 31, 0x1A01E4u);
    ctx->pc = 0x1A01E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A01DCu;
    // 0x1a01e0: 0x24050014  addiu       $a1, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F748u, 0x1A01DCu, 0x1A01E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A01E4u;
label_1a01e4:
    // 0x1a01e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a01e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a01e8: 0xc067dd2  jal         func_19F748
    ctx->pc = 0x1A01E8u;
    SET_GPR_U32(ctx, 31, 0x1A01F0u);
    ctx->pc = 0x1A01ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A01E8u;
    // 0x1a01ec: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F748u, 0x1A01E8u, 0x1A01F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A01F0u;
label_1a01f0:
    // 0x1a01f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a01f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a01f4: 0xc067dd2  jal         func_19F748
    ctx->pc = 0x1A01F4u;
    SET_GPR_U32(ctx, 31, 0x1A01FCu);
    ctx->pc = 0x1A01F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A01F4u;
    // 0x1a01f8: 0x24050016  addiu       $a1, $zero, 0x16 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F748u, 0x1A01F4u, 0x1A01FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A01FCu;
label_1a01fc:
    // 0x1a01fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a01fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0200: 0xc067dd2  jal         func_19F748
    ctx->pc = 0x1A0200u;
    SET_GPR_U32(ctx, 31, 0x1A0208u);
    ctx->pc = 0x1A0204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0200u;
    // 0x1a0204: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F748u, 0x1A0200u, 0x1A0208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0208u;
label_1a0208:
    // 0x1a0208: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a0208u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a020c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a020cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a0210: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a0210u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a0214: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x1a0214u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x1a0218: 0x8067dd2  j           func_19F748
    ctx->pc = 0x1A0218u;
    ctx->pc = 0x1A021Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0218u;
    // 0x1a021c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F748u;
    FUN_0019f748_0x19f748(rdram, ctx, runtime); return;
    ctx->pc = 0x1A0220u;
}
