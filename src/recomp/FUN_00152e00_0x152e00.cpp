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

// Function: FUN_00152e00
// Address: 0x152e00 - 0x152e60
void FUN_00152e00_0x152e00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00152e00_0x152e00");
#endif

    switch (ctx->pc) {
        case 0x152e44u: goto label_152e44;
        case 0x152e50u: goto label_152e50;
        case 0x152e5cu: goto label_152e5c;
        default: break;
    }

    ctx->pc = 0x152e00u;

    // 0x152e00: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x152e00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x152e04: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x152e04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x152e08: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x152e08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x152e0c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x152e0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x152e10: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x152e10u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152e14: 0x90a20232  lbu         $v0, 0x232($a1)
    ctx->pc = 0x152e14u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 562)));
    // 0x152e18: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x152E18u;
    {
        const bool branch_taken_0x152e18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x152E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152E18u;
        // 0x152e1c: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152e18) {
            ctx->pc = 0x152E50u;
            goto label_152e50;
        }
    }
    ctx->pc = 0x152E20u;
    // 0x152e20: 0xde030270  ld          $v1, 0x270($s0)
    ctx->pc = 0x152e20u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 624)));
    // 0x152e24: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x152e24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x152e28: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x152e28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x152e2c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x152E2Cu;
    {
        const bool branch_taken_0x152e2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x152E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152E2Cu;
        // 0x152e30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152e2c) {
            ctx->pc = 0x152E3Cu;
            goto label_152e3c;
        }
    }
    ctx->pc = 0x152E34u;
    // 0x152e34: 0x92020282  lbu         $v0, 0x282($s0)
    ctx->pc = 0x152e34u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 642)));
    // 0x152e38: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x152e38u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_152e3c:
    // 0x152e3c: 0xc0439cc  jal         func_10E730
    ctx->pc = 0x152E3Cu;
    SET_GPR_U32(ctx, 31, 0x152E44u);
    ctx->pc = 0x10E730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E730u, 0x152E3Cu, 0x152E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152E44u;
label_152e44:
    // 0x152e44: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x152e44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152e48: 0xc043884  jal         func_10E210
    ctx->pc = 0x152E48u;
    SET_GPR_U32(ctx, 31, 0x152E50u);
    ctx->pc = 0x152E4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152E48u;
    // 0x152e4c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E210u, 0x152E48u, 0x152E50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152E50u;
label_152e50:
    // 0x152e50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x152e50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152e54: 0xc050fe8  jal         func_143FA0
    ctx->pc = 0x152E54u;
    SET_GPR_U32(ctx, 31, 0x152E5Cu);
    ctx->pc = 0x152E58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152E54u;
    // 0x152e58: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143FA0u, 0x152E54u, 0x152E5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152E5Cu;
label_152e5c:
    // 0x152e5c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x152e5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->pc = 0x152e60u;
}
