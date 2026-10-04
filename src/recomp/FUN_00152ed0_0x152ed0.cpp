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

// Function: FUN_00152ed0
// Address: 0x152ed0 - 0x152f24
void FUN_00152ed0_0x152ed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00152ed0_0x152ed0");
#endif

    switch (ctx->pc) {
        case 0x152ef0u: goto label_152ef0;
        case 0x152efcu: goto label_152efc;
        default: break;
    }

    ctx->pc = 0x152ed0u;

    // 0x152ed0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x152ed0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x152ed4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x152ed4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x152ed8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x152ed8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x152edc: 0x90a30232  lbu         $v1, 0x232($a1)
    ctx->pc = 0x152edcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 562)));
    // 0x152ee0: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x152EE0u;
    {
        const bool branch_taken_0x152ee0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x152EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152EE0u;
        // 0x152ee4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152ee0) {
            ctx->pc = 0x152F04u;
            goto label_152f04;
        }
    }
    ctx->pc = 0x152EE8u;
    // 0x152ee8: 0xc0439cc  jal         func_10E730
    ctx->pc = 0x152EE8u;
    SET_GPR_U32(ctx, 31, 0x152EF0u);
    ctx->pc = 0x152EECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152EE8u;
    // 0x152eec: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E730u, 0x152EE8u, 0x152EF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152EF0u;
label_152ef0:
    // 0x152ef0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x152ef0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152ef4: 0xc0438dc  jal         func_10E370
    ctx->pc = 0x152EF4u;
    SET_GPR_U32(ctx, 31, 0x152EFCu);
    ctx->pc = 0x152EF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152EF4u;
    // 0x152ef8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E370u, 0x152EF4u, 0x152EFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152EFCu;
label_152efc:
    // 0x152efc: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x152EFCu;
    {
        const bool branch_taken_0x152efc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x152F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152EFCu;
        // 0x152f00: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152efc) {
            ctx->pc = 0x152F24u;
            return;
        }
    }
    ctx->pc = 0x152F04u;
label_152f04:
    // 0x152f04: 0x84a30220  lh          $v1, 0x220($a1)
    ctx->pc = 0x152f04u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 544)));
    // 0x152f08: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x152f08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x152f0c: 0x28610191  slti        $at, $v1, 0x191
    ctx->pc = 0x152f0cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)401) ? 1 : 0);
    // 0x152f10: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x152F10u;
    {
        const bool branch_taken_0x152f10 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x152f10) {
            ctx->pc = 0x152F1Cu;
            goto label_152f1c;
        }
    }
    ctx->pc = 0x152F18u;
    // 0x152f18: 0x24030190  addiu       $v1, $zero, 0x190
    ctx->pc = 0x152f18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
label_152f1c:
    // 0x152f1c: 0xa4a30220  sh          $v1, 0x220($a1)
    ctx->pc = 0x152f1cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 544), (uint16_t)GPR_U32(ctx, 3));
    // 0x152f20: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x152f20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->pc = 0x152f24u;
}
