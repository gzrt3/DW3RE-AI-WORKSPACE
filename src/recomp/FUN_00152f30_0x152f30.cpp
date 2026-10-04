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

// Function: FUN_00152f30
// Address: 0x152f30 - 0x152f84
void FUN_00152f30_0x152f30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00152f30_0x152f30");
#endif

    switch (ctx->pc) {
        case 0x152f50u: goto label_152f50;
        case 0x152f5cu: goto label_152f5c;
        default: break;
    }

    ctx->pc = 0x152f30u;

    // 0x152f30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x152f30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x152f34: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x152f34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x152f38: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x152f38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x152f3c: 0x90a30232  lbu         $v1, 0x232($a1)
    ctx->pc = 0x152f3cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 562)));
    // 0x152f40: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x152F40u;
    {
        const bool branch_taken_0x152f40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x152F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152F40u;
        // 0x152f44: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152f40) {
            ctx->pc = 0x152F64u;
            goto label_152f64;
        }
    }
    ctx->pc = 0x152F48u;
    // 0x152f48: 0xc0439cc  jal         func_10E730
    ctx->pc = 0x152F48u;
    SET_GPR_U32(ctx, 31, 0x152F50u);
    ctx->pc = 0x152F4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152F48u;
    // 0x152f4c: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E730u, 0x152F48u, 0x152F50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152F50u;
label_152f50:
    // 0x152f50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x152f50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152f54: 0xc04390c  jal         func_10E430
    ctx->pc = 0x152F54u;
    SET_GPR_U32(ctx, 31, 0x152F5Cu);
    ctx->pc = 0x152F58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152F54u;
    // 0x152f58: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E430u, 0x152F54u, 0x152F5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152F5Cu;
label_152f5c:
    // 0x152f5c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x152F5Cu;
    {
        const bool branch_taken_0x152f5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x152F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152F5Cu;
        // 0x152f60: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152f5c) {
            ctx->pc = 0x152F84u;
            return;
        }
    }
    ctx->pc = 0x152F64u;
label_152f64:
    // 0x152f64: 0x90a3024b  lbu         $v1, 0x24B($a1)
    ctx->pc = 0x152f64u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 587)));
    // 0x152f68: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x152f68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x152f6c: 0x286100fb  slti        $at, $v1, 0xFB
    ctx->pc = 0x152f6cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)251) ? 1 : 0);
    // 0x152f70: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x152F70u;
    {
        const bool branch_taken_0x152f70 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x152f70) {
            ctx->pc = 0x152F7Cu;
            goto label_152f7c;
        }
    }
    ctx->pc = 0x152F78u;
    // 0x152f78: 0x240300fa  addiu       $v1, $zero, 0xFA
    ctx->pc = 0x152f78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 250));
label_152f7c:
    // 0x152f7c: 0xa0a3024b  sb          $v1, 0x24B($a1)
    ctx->pc = 0x152f7cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 587), (uint8_t)GPR_U32(ctx, 3));
    // 0x152f80: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x152f80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->pc = 0x152f84u;
}
