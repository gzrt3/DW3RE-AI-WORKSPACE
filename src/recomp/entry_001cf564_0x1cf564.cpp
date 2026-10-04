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

// Function: entry_001cf564
// Address: 0x1cf564 - 0x1cf5c0
void entry_001cf564_0x1cf564(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cf564_0x1cf564");
#endif

    switch (ctx->pc) {
        case 0x1cf590u: goto label_1cf590;
        default: break;
    }

    ctx->pc = 0x1cf564u;

    // 0x1cf564: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1cf564u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x1cf568: 0x8c233ffc  lw          $v1, 0x3FFC($at)
    ctx->pc = 0x1cf568u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
    // 0x1cf56c: 0x24421e00  addiu       $v0, $v0, 0x1E00
    ctx->pc = 0x1cf56cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7680));
    // 0x1cf570: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1cf570u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf574: 0x2406013a  addiu       $a2, $zero, 0x13A
    ctx->pc = 0x1cf574u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 314));
    // 0x1cf578: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1cf578u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf57c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1cf57cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf580: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1cf580u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf584: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x1cf584u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x1cf588: 0xc066c72  jal         func_19B1C8
    ctx->pc = 0x1CF588u;
    SET_GPR_U32(ctx, 31, 0x1CF590u);
    ctx->pc = 0x1CF58Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF588u;
    // 0x1cf58c: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x1CF588u, 0x1CF590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF590u;
label_1cf590:
    // 0x1cf590: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x1cf590u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1cf594: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x1cf594u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1cf598: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1cf598u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1cf59c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1cf59cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1cf5a0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1cf5a0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1cf5a4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1cf5a4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1cf5a8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1cf5a8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1cf5ac: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1cf5acu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1cf5b0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1cf5b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cf5b4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1cf5b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cf5b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1CF5B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CF5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF5B8u;
        // 0x1cf5bc: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CF5B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CF5C0u;
}
