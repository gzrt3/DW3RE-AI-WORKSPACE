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

// Function: FUN_00152f90
// Address: 0x152f90 - 0x152fe4
void FUN_00152f90_0x152f90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00152f90_0x152f90");
#endif

    switch (ctx->pc) {
        case 0x152fb0u: goto label_152fb0;
        case 0x152fbcu: goto label_152fbc;
        default: break;
    }

    ctx->pc = 0x152f90u;

    // 0x152f90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x152f90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x152f94: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x152f94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x152f98: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x152f98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x152f9c: 0x90a30232  lbu         $v1, 0x232($a1)
    ctx->pc = 0x152f9cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 562)));
    // 0x152fa0: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x152FA0u;
    {
        const bool branch_taken_0x152fa0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x152FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152FA0u;
        // 0x152fa4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152fa0) {
            ctx->pc = 0x152FC4u;
            goto label_152fc4;
        }
    }
    ctx->pc = 0x152FA8u;
    // 0x152fa8: 0xc0439cc  jal         func_10E730
    ctx->pc = 0x152FA8u;
    SET_GPR_U32(ctx, 31, 0x152FB0u);
    ctx->pc = 0x152FACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152FA8u;
    // 0x152fac: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E730u, 0x152FA8u, 0x152FB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152FB0u;
label_152fb0:
    // 0x152fb0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x152fb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152fb4: 0xc04396c  jal         func_10E5B0
    ctx->pc = 0x152FB4u;
    SET_GPR_U32(ctx, 31, 0x152FBCu);
    ctx->pc = 0x152FB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152FB4u;
    // 0x152fb8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E5B0u, 0x152FB4u, 0x152FBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152FBCu;
label_152fbc:
    // 0x152fbc: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x152FBCu;
    {
        const bool branch_taken_0x152fbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x152FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152FBCu;
        // 0x152fc0: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152fbc) {
            ctx->pc = 0x152FE4u;
            return;
        }
    }
    ctx->pc = 0x152FC4u;
label_152fc4:
    // 0x152fc4: 0x90a3024a  lbu         $v1, 0x24A($a1)
    ctx->pc = 0x152fc4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 586)));
    // 0x152fc8: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x152fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x152fcc: 0x286100fb  slti        $at, $v1, 0xFB
    ctx->pc = 0x152fccu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)251) ? 1 : 0);
    // 0x152fd0: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x152FD0u;
    {
        const bool branch_taken_0x152fd0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x152fd0) {
            ctx->pc = 0x152FDCu;
            goto label_152fdc;
        }
    }
    ctx->pc = 0x152FD8u;
    // 0x152fd8: 0x240300fa  addiu       $v1, $zero, 0xFA
    ctx->pc = 0x152fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 250));
label_152fdc:
    // 0x152fdc: 0xa0a3024a  sb          $v1, 0x24A($a1)
    ctx->pc = 0x152fdcu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 586), (uint8_t)GPR_U32(ctx, 3));
    // 0x152fe0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x152fe0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->pc = 0x152fe4u;
}
