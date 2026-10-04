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

// Function: FUN_00181cc0
// Address: 0x181cc0 - 0x181d40
void FUN_00181cc0_0x181cc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00181cc0_0x181cc0");
#endif

    switch (ctx->pc) {
        case 0x181ce0u: goto label_181ce0;
        case 0x181ce8u: goto label_181ce8;
        case 0x181cf4u: goto label_181cf4;
        case 0x181d04u: goto label_181d04;
        case 0x181d10u: goto label_181d10;
        case 0x181d20u: goto label_181d20;
        default: break;
    }

    ctx->pc = 0x181cc0u;

    // 0x181cc0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x181cc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x181cc4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x181cc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x181cc8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x181cc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x181ccc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x181cccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181cd0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x181cd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x181cd4: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x181cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x181cd8: 0xc066580  jal         func_199600
    ctx->pc = 0x181CD8u;
    SET_GPR_U32(ctx, 31, 0x181CE0u);
    ctx->pc = 0x181CDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x181CD8u;
    // 0x181cdc: 0x24849810  addiu       $a0, $a0, -0x67F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x199600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x199600u, 0x181CD8u, 0x181CE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x181CE0u;
label_181ce0:
    // 0x181ce0: 0xc0692a8  jal         func_1A4AA0
    ctx->pc = 0x181CE0u;
    SET_GPR_U32(ctx, 31, 0x181CE8u);
    ctx->pc = 0x181CE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x181CE0u;
    // 0x181ce4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4AA0u, 0x181CE0u, 0x181CE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x181CE8u;
label_181ce8:
    // 0x181ce8: 0x8f9087e4  lw          $s0, -0x781C($gp)
    ctx->pc = 0x181ce8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936548)));
    // 0x181cec: 0xc06029c  jal         func_180A70
    ctx->pc = 0x181CECu;
    SET_GPR_U32(ctx, 31, 0x181CF4u);
    ctx->pc = 0x181CF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x181CECu;
    // 0x181cf0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x180A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180A70u, 0x181CECu, 0x181CF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x181CF4u;
label_181cf4:
    // 0x181cf4: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x181cf4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x181cf8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x181cf8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181cfc: 0xc066630  jal         func_1998C0
    ctx->pc = 0x181CFCu;
    SET_GPR_U32(ctx, 31, 0x181D04u);
    ctx->pc = 0x181D00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x181CFCu;
    // 0x181d00: 0x24849810  addiu       $a0, $a0, -0x67F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1998C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1998C0u, 0x181CFCu, 0x181D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x181D04u;
label_181d04:
    // 0x181d04: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x181d04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181d08: 0xc066440  jal         func_199100
    ctx->pc = 0x181D08u;
    SET_GPR_U32(ctx, 31, 0x181D10u);
    ctx->pc = 0x181D0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x181D08u;
    // 0x181d0c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x199100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x199100u, 0x181D08u, 0x181D10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x181D10u;
label_181d10:
    // 0x181d10: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x181D10u;
    {
        const bool branch_taken_0x181d10 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x181D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181D10u;
        // 0x181d14: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181d10) {
            ctx->pc = 0x181D20u;
            goto label_181d20;
        }
    }
    ctx->pc = 0x181D18u;
    // 0x181d18: 0xc06029c  jal         func_180A70
    ctx->pc = 0x181D18u;
    SET_GPR_U32(ctx, 31, 0x181D20u);
    ctx->pc = 0x180A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180A70u, 0x181D18u, 0x181D20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x181D20u;
label_181d20:
    // 0x181d20: 0x8f8687a4  lw          $a2, -0x785C($gp)
    ctx->pc = 0x181d20u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936484)));
    // 0x181d24: 0x2403ffbf  addiu       $v1, $zero, -0x41
    ctx->pc = 0x181d24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
    // 0x181d28: 0x64040040  daddiu      $a0, $zero, 0x40
    ctx->pc = 0x181d28u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)64);
    // 0x181d2c: 0x90c50000  lbu         $a1, 0x0($a2)
    ctx->pc = 0x181d2cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x181d30: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x181d30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x181d34: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x181d34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x181d38: 0xa0c30000  sb          $v1, 0x0($a2)
    ctx->pc = 0x181d38u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x181d3c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x181d3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->pc = 0x181d40u;
}
