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

// Function: entry_00214e48
// Address: 0x214e48 - 0x214eb0
void entry_00214e48_0x214e48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00214e48_0x214e48");
#endif

    switch (ctx->pc) {
        case 0x214e54u: goto label_214e54;
        case 0x214e7cu: goto label_214e7c;
        default: break;
    }

    ctx->pc = 0x214e48u;

label_214e48:
    // 0x214e48: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x214e48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214e4c: 0xc0602c8  jal         func_180B20
    ctx->pc = 0x214E4Cu;
    SET_GPR_U32(ctx, 31, 0x214E54u);
    ctx->pc = 0x214E50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214E4Cu;
    // 0x214e50: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x180B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180B20u, 0x214E4Cu, 0x214E54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214E54u;
label_214e54:
    // 0x214e54: 0x112c3c  dsll32      $a1, $s1, 16
    ctx->pc = 0x214e54u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) << (32 + 16));
    // 0x214e58: 0x14343c  dsll32      $a2, $s4, 16
    ctx->pc = 0x214e58u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 20) << (32 + 16));
    // 0x214e5c: 0x26630150  addiu       $v1, $s3, 0x150
    ctx->pc = 0x214e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 336));
    // 0x214e60: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x214e60u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x214e64: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x214e64u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x214e68: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x214e68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214e6c: 0x2034021  addu        $t0, $s0, $v1
    ctx->pc = 0x214e6cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x214e70: 0x24070007  addiu       $a3, $zero, 0x7
    ctx->pc = 0x214e70u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x214e74: 0xc0603d4  jal         func_180F50
    ctx->pc = 0x214E74u;
    SET_GPR_U32(ctx, 31, 0x214E7Cu);
    ctx->pc = 0x214E78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214E74u;
    // 0x214e78: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x180F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180F50u, 0x214E74u, 0x214E7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214E7Cu;
label_214e7c:
    // 0x214e7c: 0x3c030059  lui         $v1, 0x59
    ctx->pc = 0x214e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)89 << 16));
    // 0x214e80: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x214e80u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x214e84: 0x246382b0  addiu       $v1, $v1, -0x7D50
    ctx->pc = 0x214e84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294935216));
    // 0x214e88: 0x26310100  addiu       $s1, $s1, 0x100
    ctx->pc = 0x214e88u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
    // 0x214e8c: 0x751821  addu        $v1, $v1, $s5
    ctx->pc = 0x214e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    // 0x214e90: 0x24640000  addiu       $a0, $v1, 0x0
    ctx->pc = 0x214e90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 0));
    // 0x214e94: 0x922021  addu        $a0, $a0, $s2
    ctx->pc = 0x214e94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    // 0x214e98: 0x2a030002  slti        $v1, $s0, 0x2
    ctx->pc = 0x214e98u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x214e9c: 0xfc820000  sd          $v0, 0x0($a0)
    ctx->pc = 0x214e9cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 2));
    // 0x214ea0: 0x1460ffe9  bnez        $v1, . + 4 + (-0x17 << 2)
    ctx->pc = 0x214EA0u;
    {
        const bool branch_taken_0x214ea0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x214EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214EA0u;
        // 0x214ea4: 0x26520008  addiu       $s2, $s2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214ea0) {
            ctx->pc = 0x214E48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_214e48;
        }
    }
    ctx->pc = 0x214EA8u;
    // 0x214ea8: 0xc070038  jal         func_1C00E0
    ctx->pc = 0x214EA8u;
    SET_GPR_U32(ctx, 31, 0x214EB0u);
    ctx->pc = 0x214EACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214EA8u;
    // 0x214eac: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C00E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C00E0u, 0x214EA8u, 0x214EB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214EB0u;
}
