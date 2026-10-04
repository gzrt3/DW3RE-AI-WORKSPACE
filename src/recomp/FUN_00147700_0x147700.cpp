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

// Function: FUN_00147700
// Address: 0x147700 - 0x14775c
void FUN_00147700_0x147700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00147700_0x147700");
#endif

    switch (ctx->pc) {
        case 0x147738u: goto label_147738;
        case 0x147748u: goto label_147748;
        case 0x147758u: goto label_147758;
        default: break;
    }

    ctx->pc = 0x147700u;

    // 0x147700: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x147700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x147704: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x147704u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x147708: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x147708u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x14770c: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x14770cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x147710: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x147710u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x147714: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x147714u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x147718: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x147718u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x14771c: 0x244209e0  addiu       $v0, $v0, 0x9E0
    ctx->pc = 0x14771cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2528));
    // 0x147720: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x147720u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x147724: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x147724u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x147728: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x147728u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x14772c: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x14772cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x147730: 0xc064518  jal         func_191460
    ctx->pc = 0x147730u;
    SET_GPR_U32(ctx, 31, 0x147738u);
    ctx->pc = 0x147734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x147730u;
    // 0x147734: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x191460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191460u, 0x147730u, 0x147738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147738u;
label_147738:
    // 0x147738: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x147738u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x14773c: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x14773cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x147740: 0xc06450c  jal         func_191430
    ctx->pc = 0x147740u;
    SET_GPR_U32(ctx, 31, 0x147748u);
    ctx->pc = 0x147744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x147740u;
    // 0x147744: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x191430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191430u, 0x147740u, 0x147748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147748u;
label_147748:
    // 0x147748: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x147748u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x14774c: 0x8e060014  lw          $a2, 0x14($s0)
    ctx->pc = 0x14774cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x147750: 0xc064500  jal         func_191400
    ctx->pc = 0x147750u;
    SET_GPR_U32(ctx, 31, 0x147758u);
    ctx->pc = 0x147754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x147750u;
    // 0x147754: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x191400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191400u, 0x147750u, 0x147758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147758u;
label_147758:
    // 0x147758: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x147758u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->pc = 0x14775cu;
}
