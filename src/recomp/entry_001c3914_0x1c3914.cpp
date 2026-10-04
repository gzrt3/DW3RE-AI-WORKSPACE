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

// Function: entry_001c3914
// Address: 0x1c3914 - 0x1c3980
void entry_001c3914_0x1c3914(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c3914_0x1c3914");
#endif

    switch (ctx->pc) {
        case 0x1c3940u: goto label_1c3940;
        case 0x1c396cu: goto label_1c396c;
        default: break;
    }

    ctx->pc = 0x1c3914u;

    // 0x1c3914: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x1c3914u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
    // 0x1c3918: 0x1118c0  sll         $v1, $s1, 3
    ctx->pc = 0x1c3918u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x1c391c: 0x2442f900  addiu       $v0, $v0, -0x700
    ctx->pc = 0x1c391cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965504));
    // 0x1c3920: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c3920u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3924: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1c3924u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c3928: 0x24060048  addiu       $a2, $zero, 0x48
    ctx->pc = 0x1c3928u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1c392c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1c392cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c3930: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c3930u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3934: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c3934u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3938: 0xc066c72  jal         func_19B1C8
    ctx->pc = 0x1C3938u;
    SET_GPR_U32(ctx, 31, 0x1C3940u);
    ctx->pc = 0x1C393Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3938u;
    // 0x1c393c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x1C3938u, 0x1C3940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3940u;
label_1c3940:
    // 0x1c3940: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x1c3940u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
    // 0x1c3944: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x1c3944u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1c3948: 0x2442fad0  addiu       $v0, $v0, -0x530
    ctx->pc = 0x1c3948u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965968));
    // 0x1c394c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c394cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3950: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1c3950u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c3954: 0x24060148  addiu       $a2, $zero, 0x148
    ctx->pc = 0x1c3954u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 328));
    // 0x1c3958: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1c3958u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c395c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c395cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3960: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c3960u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3964: 0xc066c72  jal         func_19B1C8
    ctx->pc = 0x1C3964u;
    SET_GPR_U32(ctx, 31, 0x1C396Cu);
    ctx->pc = 0x1C3968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3964u;
    // 0x1c3968: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x1C3964u, 0x1C396Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C396Cu;
label_1c396c:
    // 0x1c396c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1c396cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c3970: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1c3970u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c3974: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c3974u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c3978: 0x3e00008  jr          $ra
    ctx->pc = 0x1C3978u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C397Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3978u;
        // 0x1c397c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C3978u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C3980u;
}
