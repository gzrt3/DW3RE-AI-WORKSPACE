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

// Function: FUN_00238a70
// Address: 0x238a70 - 0x238af4
void FUN_00238a70_0x238a70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00238a70_0x238a70");
#endif

    switch (ctx->pc) {
        case 0x238ab0u: goto label_238ab0;
        case 0x238ac4u: goto label_238ac4;
        case 0x238ad8u: goto label_238ad8;
        default: break;
    }

    ctx->pc = 0x238a70u;

    // 0x238a70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x238a70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x238a74: 0x3c020024  lui         $v0, 0x24
    ctx->pc = 0x238a74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
    // 0x238a78: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x238a78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x238a7c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x238a7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238a80: 0x24428a30  addiu       $v0, $v0, -0x75D0
    ctx->pc = 0x238a80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937136));
    // 0x238a84: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x238a84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x238a88: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x238a88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x238a8c: 0x261101e4  addiu       $s1, $s0, 0x1E4
    ctx->pc = 0x238a8cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 484));
    // 0x238a90: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x238a90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x238a94: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x238a94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238a98: 0xae02003c  sw          $v0, 0x3C($s0)
    ctx->pc = 0x238a98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
    // 0x238a9c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x238a9cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238aa0: 0xae030038  sw          $v1, 0x38($s0)
    ctx->pc = 0x238aa0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 3));
    // 0x238aa4: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x238aa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x238aa8: 0xc08e218  jal         func_238860
    ctx->pc = 0x238AA8u;
    SET_GPR_U32(ctx, 31, 0x238AB0u);
    ctx->pc = 0x238AACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238AA8u;
    // 0x238aac: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238860u, 0x238AA8u, 0x238AB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238AB0u;
label_238ab0:
    // 0x238ab0: 0x2604023c  addiu       $a0, $s0, 0x23C
    ctx->pc = 0x238ab0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 572));
    // 0x238ab4: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x238ab4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238ab8: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x238ab8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x238abc: 0xc08e218  jal         func_238860
    ctx->pc = 0x238ABCu;
    SET_GPR_U32(ctx, 31, 0x238AC4u);
    ctx->pc = 0x238AC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238ABCu;
    // 0x238ac0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238860u, 0x238ABCu, 0x238AC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238AC4u;
label_238ac4:
    // 0x238ac4: 0x26040294  addiu       $a0, $s0, 0x294
    ctx->pc = 0x238ac4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 660));
    // 0x238ac8: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x238ac8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238acc: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x238accu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x238ad0: 0xc08e218  jal         func_238860
    ctx->pc = 0x238AD0u;
    SET_GPR_U32(ctx, 31, 0x238AD8u);
    ctx->pc = 0x238AD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238AD0u;
    // 0x238ad4: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238860u, 0x238AD0u, 0x238AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238AD8u;
label_238ad8:
    // 0x238ad8: 0xae0001d8  sw          $zero, 0x1D8($s0)
    ctx->pc = 0x238ad8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 472), GPR_U32(ctx, 0));
    // 0x238adc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x238adcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x238ae0: 0xae1101e0  sw          $s1, 0x1E0($s0)
    ctx->pc = 0x238ae0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 480), GPR_U32(ctx, 17));
    // 0x238ae4: 0xae0201dc  sw          $v0, 0x1DC($s0)
    ctx->pc = 0x238ae4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 476), GPR_U32(ctx, 2));
    // 0x238ae8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x238ae8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x238aec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x238aecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x238af0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x238af0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->pc = 0x238af4u;
}
