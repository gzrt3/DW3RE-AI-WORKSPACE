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

// Function: entry_0010e9cc
// Address: 0x10e9cc - 0x10ea2c
void entry_0010e9cc_0x10e9cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010e9cc_0x10e9cc");
#endif

    switch (ctx->pc) {
        case 0x10e9d4u: goto label_10e9d4;
        case 0x10e9e0u: goto label_10e9e0;
        case 0x10e9ecu: goto label_10e9ec;
        case 0x10ea04u: goto label_10ea04;
        case 0x10ea0cu: goto label_10ea0c;
        case 0x10ea14u: goto label_10ea14;
        case 0x10ea1cu: goto label_10ea1c;
        case 0x10ea24u: goto label_10ea24;
        default: break;
    }

    ctx->pc = 0x10e9ccu;

    // 0x10e9cc: 0xc041738  jal         func_105CE0
    ctx->pc = 0x10E9CCu;
    SET_GPR_U32(ctx, 31, 0x10E9D4u);
    ctx->pc = 0x10E9D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E9CCu;
    // 0x10e9d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105CE0u, 0x10E9CCu, 0x10E9D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E9D4u;
label_10e9d4:
    // 0x10e9d4: 0x22ac0  sll         $a1, $v0, 11
    ctx->pc = 0x10e9d4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
    // 0x10e9d8: 0xc070080  jal         func_1C0200
    ctx->pc = 0x10E9D8u;
    SET_GPR_U32(ctx, 31, 0x10E9E0u);
    ctx->pc = 0x10E9DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E9D8u;
    // 0x10e9dc: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0200u, 0x10E9D8u, 0x10E9E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E9E0u;
label_10e9e0:
    // 0x10e9e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10e9e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10e9e4: 0xc0416e4  jal         func_105B90
    ctx->pc = 0x10E9E4u;
    SET_GPR_U32(ctx, 31, 0x10E9ECu);
    ctx->pc = 0x10E9E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E9E4u;
    // 0x10e9e8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105B90u, 0x10E9E4u, 0x10E9ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E9ECu;
label_10e9ec:
    // 0x10e9ec: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x10e9ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10e9f0: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x10e9f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x10e9f4: 0x2484f4c0  addiu       $a0, $a0, -0xB40
    ctx->pc = 0x10e9f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964416));
    // 0x10e9f8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x10e9f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10e9fc: 0xc08e93e  jal         func_23A4F8
    ctx->pc = 0x10E9FCu;
    SET_GPR_U32(ctx, 31, 0x10EA04u);
    ctx->pc = 0x10EA00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E9FCu;
    // 0x10ea00: 0x24061900  addiu       $a2, $zero, 0x1900 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6400));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A4F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A4F8u, 0x10E9FCu, 0x10EA04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10EA04u;
label_10ea04:
    // 0x10ea04: 0xc070038  jal         func_1C00E0
    ctx->pc = 0x10EA04u;
    SET_GPR_U32(ctx, 31, 0x10EA0Cu);
    ctx->pc = 0x10EA08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10EA04u;
    // 0x10ea08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C00E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C00E0u, 0x10EA04u, 0x10EA0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10EA0Cu;
label_10ea0c:
    // 0x10ea0c: 0xc04419c  jal         func_110670
    ctx->pc = 0x10EA0Cu;
    SET_GPR_U32(ctx, 31, 0x10EA14u);
    ctx->pc = 0x110670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110670u, 0x10EA0Cu, 0x10EA14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10EA14u;
label_10ea14:
    // 0x10ea14: 0xc09006c  jal         func_2401B0
    ctx->pc = 0x10EA14u;
    SET_GPR_U32(ctx, 31, 0x10EA1Cu);
    ctx->pc = 0x2401B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2401B0u, 0x10EA14u, 0x10EA1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10EA1Cu;
label_10ea1c:
    // 0x10ea1c: 0xc0443a0  jal         func_110E80
    ctx->pc = 0x10EA1Cu;
    SET_GPR_U32(ctx, 31, 0x10EA24u);
    ctx->pc = 0x110E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110E80u, 0x10EA1Cu, 0x10EA24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10EA24u;
label_10ea24:
    // 0x10ea24: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x10EA24u;
    {
        const bool branch_taken_0x10ea24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x10ea24) {
            ctx->pc = 0x10EAA0u;
            return;
        }
    }
    ctx->pc = 0x10EA2Cu;
}
