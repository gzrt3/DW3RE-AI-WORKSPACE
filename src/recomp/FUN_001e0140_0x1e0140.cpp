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

// Function: FUN_001e0140
// Address: 0x1e0140 - 0x1e01ac
void FUN_001e0140_0x1e0140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001e0140_0x1e0140");
#endif

    switch (ctx->pc) {
        case 0x1e016cu: goto label_1e016c;
        case 0x1e0190u: goto label_1e0190;
        default: break;
    }

    ctx->pc = 0x1e0140u;

    // 0x1e0140: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e0140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e0144: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x1e0144u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
    // 0x1e0148: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e0148u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1e014c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1e014cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1e0150: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e0150u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e0154: 0x2442b6c0  addiu       $v0, $v0, -0x4940
    ctx->pc = 0x1e0154u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948544));
    // 0x1e0158: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x1e0158u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e015c: 0x24050280  addiu       $a1, $zero, 0x280
    ctx->pc = 0x1e015cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
    // 0x1e0160: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1e0160u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1e0164: 0xc0550d0  jal         func_154340
    ctx->pc = 0x1E0164u;
    SET_GPR_U32(ctx, 31, 0x1E016Cu);
    ctx->pc = 0x1E0168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E0164u;
    // 0x1e0168: 0x2406000e  addiu       $a2, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x154340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154340u, 0x1E0164u, 0x1E016Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E016Cu;
label_1e016c:
    // 0x1e016c: 0x24030268  addiu       $v1, $zero, 0x268
    ctx->pc = 0x1e016cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 616));
    // 0x1e0170: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x1e0170u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x1e0174: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x1e0174u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1e0178: 0x624023  subu        $t0, $v1, $v0
    ctx->pc = 0x1e0178u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1e017c: 0x24060280  addiu       $a2, $zero, 0x280
    ctx->pc = 0x1e017cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
    // 0x1e0180: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x1e0180u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0184: 0x2409019a  addiu       $t1, $zero, 0x19A
    ctx->pc = 0x1e0184u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 410));
    // 0x1e0188: 0xc054e5c  jal         func_153970
    ctx->pc = 0x1E0188u;
    SET_GPR_U32(ctx, 31, 0x1E0190u);
    ctx->pc = 0x1E018Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E0188u;
    // 0x1e018c: 0x340affe0  ori         $t2, $zero, 0xFFE0 (Delay Slot)
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65504);
    ctx->in_delay_slot = false;
    ctx->pc = 0x153970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153970u, 0x1E0188u, 0x1E0190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0190u;
label_1e0190:
    // 0x1e0190: 0x8e080000  lw          $t0, 0x0($s0)
    ctx->pc = 0x1e0190u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1e0194: 0x3c04004b  lui         $a0, 0x4B
    ctx->pc = 0x1e0194u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)75 << 16));
    // 0x1e0198: 0x24840680  addiu       $a0, $a0, 0x680
    ctx->pc = 0x1e0198u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1664));
    // 0x1e019c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e019cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e01a0: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x1e01a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1e01a4: 0xc054e74  jal         func_1539D0
    ctx->pc = 0x1E01A4u;
    SET_GPR_U32(ctx, 31, 0x1E01ACu);
    ctx->pc = 0x1E01A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E01A4u;
    // 0x1e01a8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1539D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1539D0u, 0x1E01A4u, 0x1E01ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E01ACu;
}
