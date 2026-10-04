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

// Function: FUN_00173f80
// Address: 0x173f80 - 0x174030
void FUN_00173f80_0x173f80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00173f80_0x173f80");
#endif

    switch (ctx->pc) {
        case 0x173fa4u: goto label_173fa4;
        case 0x173ff8u: goto label_173ff8;
        case 0x174008u: goto label_174008;
        case 0x174024u: goto label_174024;
        case 0x17402cu: goto label_17402c;
        default: break;
    }

    ctx->pc = 0x173f80u;

    // 0x173f80: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x173f80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x173f84: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x173f84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
    // 0x173f88: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x173f88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x173f8c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x173f8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173f90: 0xa42051f6  sh          $zero, 0x51F6($at)
    ctx->pc = 0x173f90u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3651F6u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x3651F6u, _value); } while (0);
    // 0x173f94: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x173f94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173f98: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x173f98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
    // 0x173f9c: 0xc058d08  jal         func_163420
    ctx->pc = 0x173F9Cu;
    SET_GPR_U32(ctx, 31, 0x173FA4u);
    ctx->pc = 0x173FA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173F9Cu;
    // 0x173fa0: 0xa42051f4  sh          $zero, 0x51F4($at) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 1), 20980), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x163420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163420u, 0x173F9Cu, 0x173FA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173FA4u;
label_173fa4:
    // 0x173fa4: 0x8f828748  lw          $v0, -0x78B8($gp)
    ctx->pc = 0x173fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936392)));
    // 0x173fa8: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x173FA8u;
    {
        const bool branch_taken_0x173fa8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x173FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173FA8u;
        // 0x173fac: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173fa8) {
            ctx->pc = 0x174000u;
            goto label_174000;
        }
    }
    ctx->pc = 0x173FB0u;
    // 0x173fb0: 0x3c05002f  lui         $a1, 0x2F
    ctx->pc = 0x173fb0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)47 << 16));
    // 0x173fb4: 0x8c264974  lw          $a2, 0x4974($at)
    ctx->pc = 0x173fb4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 18804)));
    // 0x173fb8: 0x24a52570  addiu       $a1, $a1, 0x2570
    ctx->pc = 0x173fb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9584));
    // 0x173fbc: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x173fbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x173fc0: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x173fc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x173fc4: 0x61200  sll         $v0, $a2, 8
    ctx->pc = 0x173fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
    // 0x173fc8: 0x8c23496c  lw          $v1, 0x496C($at)
    ctx->pc = 0x173fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 18796)));
    // 0x173fcc: 0x463023  subu        $a2, $v0, $a2
    ctx->pc = 0x173fccu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x173fd0: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x173fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x173fd4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x173fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x173fd8: 0x618c0  sll         $v1, $a2, 3
    ctx->pc = 0x173fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x173fdc: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x173fdcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x173fe0: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x173fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x173fe4: 0x610c0  sll         $v0, $a2, 3
    ctx->pc = 0x173fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x173fe8: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x173fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x173fec: 0x24420000  addiu       $v0, $v0, 0x0
    ctx->pc = 0x173fecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
    // 0x173ff0: 0xc05da58  jal         func_176960
    ctx->pc = 0x173FF0u;
    SET_GPR_U32(ctx, 31, 0x173FF8u);
    ctx->pc = 0x173FF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173FF0u;
    // 0x173ff4: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x176960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176960u, 0x173FF0u, 0x173FF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173FF8u;
label_173ff8:
    // 0x173ff8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x173FF8u;
    {
        const bool branch_taken_0x173ff8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x173ff8) {
            ctx->pc = 0x174008u;
            goto label_174008;
        }
    }
    ctx->pc = 0x174000u;
label_174000:
    // 0x174000: 0xc04df94  jal         func_137E50
    ctx->pc = 0x174000u;
    SET_GPR_U32(ctx, 31, 0x174008u);
    ctx->pc = 0x137E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x137E50u, 0x174000u, 0x174008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174008u;
label_174008:
    // 0x174008: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x174008u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x17400c: 0x2402002f  addiu       $v0, $zero, 0x2F
    ctx->pc = 0x17400cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x174010: 0x9023490c  lbu         $v1, 0x490C($at)
    ctx->pc = 0x174010u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x33490Cu));
    // 0x174014: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x174014u;
    {
        const bool branch_taken_0x174014 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x174014) {
            ctx->pc = 0x174024u;
            goto label_174024;
        }
    }
    ctx->pc = 0x17401Cu;
    // 0x17401c: 0xc08a608  jal         func_229820
    ctx->pc = 0x17401Cu;
    SET_GPR_U32(ctx, 31, 0x174024u);
    ctx->pc = 0x229820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229820u, 0x17401Cu, 0x174024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174024u;
label_174024:
    // 0x174024: 0xc04bee0  jal         func_12FB80
    ctx->pc = 0x174024u;
    SET_GPR_U32(ctx, 31, 0x17402Cu);
    ctx->pc = 0x12FB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12FB80u, 0x174024u, 0x17402Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17402Cu;
label_17402c:
    // 0x17402c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17402cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x174030u;
}
