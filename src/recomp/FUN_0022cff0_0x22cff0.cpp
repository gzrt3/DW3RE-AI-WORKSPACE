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

// Function: FUN_0022cff0
// Address: 0x22cff0 - 0x22d040
void FUN_0022cff0_0x22cff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0022cff0_0x22cff0");
#endif

    switch (ctx->pc) {
        case 0x22d00cu: goto label_22d00c;
        case 0x22d018u: goto label_22d018;
        case 0x22d024u: goto label_22d024;
        case 0x22d030u: goto label_22d030;
        case 0x22d03cu: goto label_22d03c;
        default: break;
    }

    ctx->pc = 0x22cff0u;

    // 0x22cff0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x22cff0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x22cff4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x22cff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x22cff8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x22cff8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x22cffc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x22cffcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22d000: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x22d000u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x22d004: 0xc08b414  jal         func_22D050
    ctx->pc = 0x22D004u;
    SET_GPR_U32(ctx, 31, 0x22D00Cu);
    ctx->pc = 0x22D008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22D004u;
    // 0x22d008: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D050u, 0x22D004u, 0x22D00Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D00Cu;
label_22d00c:
    // 0x22d00c: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x22d00cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x22d010: 0xc08b414  jal         func_22D050
    ctx->pc = 0x22D010u;
    SET_GPR_U32(ctx, 31, 0x22D018u);
    ctx->pc = 0x22D014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22D010u;
    // 0x22d014: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D050u, 0x22D010u, 0x22D018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D018u;
label_22d018:
    // 0x22d018: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x22d018u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x22d01c: 0xc08b414  jal         func_22D050
    ctx->pc = 0x22D01Cu;
    SET_GPR_U32(ctx, 31, 0x22D024u);
    ctx->pc = 0x22D020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22D01Cu;
    // 0x22d020: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D050u, 0x22D01Cu, 0x22D024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D024u;
label_22d024:
    // 0x22d024: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x22d024u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x22d028: 0xc08b414  jal         func_22D050
    ctx->pc = 0x22D028u;
    SET_GPR_U32(ctx, 31, 0x22D030u);
    ctx->pc = 0x22D02Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22D028u;
    // 0x22d02c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D050u, 0x22D028u, 0x22D030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D030u;
label_22d030:
    // 0x22d030: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x22d030u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22d034: 0xc08b414  jal         func_22D050
    ctx->pc = 0x22D034u;
    SET_GPR_U32(ctx, 31, 0x22D03Cu);
    ctx->pc = 0x22D038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22D034u;
    // 0x22d038: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D050u, 0x22D034u, 0x22D03Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D03Cu;
label_22d03c:
    // 0x22d03c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x22d03cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->pc = 0x22d040u;
}
