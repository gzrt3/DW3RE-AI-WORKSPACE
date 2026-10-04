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

// Function: FUN_001f6490
// Address: 0x1f6490 - 0x1f64d8
void FUN_001f6490_0x1f6490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001f6490_0x1f6490");
#endif

    switch (ctx->pc) {
        case 0x1f64bcu: goto label_1f64bc;
        case 0x1f64d4u: goto label_1f64d4;
        default: break;
    }

    ctx->pc = 0x1f6490u;

    // 0x1f6490: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1f6490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1f6494: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x1f6494u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x1f6498: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1f6498u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1f649c: 0x3c01002a  lui         $at, 0x2A
    ctx->pc = 0x1f649cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)42 << 16));
    // 0x1f64a0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1f64a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1f64a4: 0x34450800  ori         $a1, $v0, 0x800
    ctx->pc = 0x1f64a4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2048);
    // 0x1f64a8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1f64a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1f64ac: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1f64acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f64b0: 0x8c308c10  lw          $s0, -0x73F0($at)
    ctx->pc = 0x1f64b0u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x298C10u));
    // 0x1f64b4: 0xc070080  jal         func_1C0200
    ctx->pc = 0x1F64B4u;
    SET_GPR_U32(ctx, 31, 0x1F64BCu);
    ctx->pc = 0x1F64B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F64B4u;
    // 0x1f64b8: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0200u, 0x1F64B4u, 0x1F64BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F64BCu;
label_1f64bc:
    // 0x1f64bc: 0x111980  sll         $v1, $s1, 6
    ctx->pc = 0x1f64bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 6));
    // 0x1f64c0: 0x24050041  addiu       $a1, $zero, 0x41
    ctx->pc = 0x1f64c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x1f64c4: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x1f64c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1f64c8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1f64c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f64cc: 0xc041744  jal         func_105D10
    ctx->pc = 0x1F64CCu;
    SET_GPR_U32(ctx, 31, 0x1F64D4u);
    ctx->pc = 0x1F64D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F64CCu;
    // 0x1f64d0: 0x702021  addu        $a0, $v1, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105D10u, 0x1F64CCu, 0x1F64D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F64D4u;
label_1f64d4:
    // 0x1f64d4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1f64d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->pc = 0x1f64d8u;
}
