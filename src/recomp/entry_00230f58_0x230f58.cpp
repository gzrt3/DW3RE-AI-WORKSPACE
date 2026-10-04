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

// Function: entry_00230f58
// Address: 0x230f58 - 0x230fbc
void entry_00230f58_0x230f58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00230f58_0x230f58");
#endif

    switch (ctx->pc) {
        case 0x230f68u: goto label_230f68;
        case 0x230f80u: goto label_230f80;
        case 0x230f98u: goto label_230f98;
        case 0x230fa8u: goto label_230fa8;
        default: break;
    }

    ctx->pc = 0x230f58u;

    // 0x230f58: 0x3c010009  lui         $at, 0x9
    ctx->pc = 0x230f58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)9 << 16));
    // 0x230f5c: 0x34211210  ori         $at, $at, 0x1210
    ctx->pc = 0x230f5cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4624);
    // 0x230f60: 0xc08c86e  jal         func_2321B8
    ctx->pc = 0x230F60u;
    SET_GPR_U32(ctx, 31, 0x230F68u);
    ctx->pc = 0x230F64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230F60u;
    // 0x230f64: 0x242021  addu        $a0, $at, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2321B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2321B8u, 0x230F60u, 0x230F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230F68u;
label_230f68:
    // 0x230f68: 0x16e00014  bnez        $s7, . + 4 + (0x14 << 2)
    ctx->pc = 0x230F68u;
    {
        const bool branch_taken_0x230f68 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        ctx->pc = 0x230F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230F68u;
        // 0x230f6c: 0x8f8482d0  lw          $a0, -0x7D30($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935248)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230f68) {
            ctx->pc = 0x230FBCu;
            return;
        }
    }
    ctx->pc = 0x230F70u;
    // 0x230f70: 0x3c010009  lui         $at, 0x9
    ctx->pc = 0x230f70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)9 << 16));
    // 0x230f74: 0x34211210  ori         $at, $at, 0x1210
    ctx->pc = 0x230f74u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4624);
    // 0x230f78: 0xc08c864  jal         func_232190
    ctx->pc = 0x230F78u;
    SET_GPR_U32(ctx, 31, 0x230F80u);
    ctx->pc = 0x230F7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230F78u;
    // 0x230f7c: 0x242021  addu        $a0, $at, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x232190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232190u, 0x230F78u, 0x230F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230F80u;
label_230f80:
    // 0x230f80: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x230F80u;
    {
        const bool branch_taken_0x230f80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x230F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230F80u;
        // 0x230f84: 0x8f8482d0  lw          $a0, -0x7D30($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935248)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230f80) {
            ctx->pc = 0x230FBCu;
            return;
        }
    }
    ctx->pc = 0x230F88u;
    // 0x230f88: 0x3c010009  lui         $at, 0x9
    ctx->pc = 0x230f88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)9 << 16));
    // 0x230f8c: 0x34211144  ori         $at, $at, 0x1144
    ctx->pc = 0x230f8cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4420);
    // 0x230f90: 0xc08cf6c  jal         func_233DB0
    ctx->pc = 0x230F90u;
    SET_GPR_U32(ctx, 31, 0x230F98u);
    ctx->pc = 0x230F94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230F90u;
    // 0x230f94: 0x242021  addu        $a0, $at, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x233DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x233DB0u, 0x230F90u, 0x230F98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230F98u;
label_230f98:
    // 0x230f98: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x230F98u;
    {
        const bool branch_taken_0x230f98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x230F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230F98u;
        // 0x230f9c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230f98) {
            ctx->pc = 0x230FBCu;
            return;
        }
    }
    ctx->pc = 0x230FA0u;
    // 0x230fa0: 0xc08d0d4  jal         func_234350
    ctx->pc = 0x230FA0u;
    SET_GPR_U32(ctx, 31, 0x230FA8u);
    ctx->pc = 0x230FA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230FA0u;
    // 0x230fa4: 0x24170001  addiu       $s7, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x234350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x234350u, 0x230FA0u, 0x230FA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230FA8u;
label_230fa8:
    // 0x230fa8: 0x8f8482d0  lw          $a0, -0x7D30($gp)
    ctx->pc = 0x230fa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935248)));
    // 0x230fac: 0x3c010009  lui         $at, 0x9
    ctx->pc = 0x230facu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)9 << 16));
    // 0x230fb0: 0x34211210  ori         $at, $at, 0x1210
    ctx->pc = 0x230fb0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4624);
    // 0x230fb4: 0xc08c7c6  jal         func_231F18
    ctx->pc = 0x230FB4u;
    SET_GPR_U32(ctx, 31, 0x230FBCu);
    ctx->pc = 0x230FB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230FB4u;
    // 0x230fb8: 0x242021  addu        $a0, $at, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231F18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231F18u, 0x230FB4u, 0x230FBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230FBCu;
}
