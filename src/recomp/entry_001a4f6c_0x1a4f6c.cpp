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

// Function: entry_001a4f6c
// Address: 0x1a4f6c - 0x1a4fa8
void entry_001a4f6c_0x1a4f6c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a4f6c_0x1a4f6c");
#endif

    switch (ctx->pc) {
        case 0x1a4f78u: goto label_1a4f78;
        case 0x1a4f8cu: goto label_1a4f8c;
        default: break;
    }

    ctx->pc = 0x1a4f6cu;

    // 0x1a4f6c: 0x8e425b54  lw          $v0, 0x5B54($s2)
    ctx->pc = 0x1a4f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 23380)));
    // 0x1a4f70: 0xc069200  jal         func_1A4800
    ctx->pc = 0x1A4F70u;
    SET_GPR_U32(ctx, 31, 0x1A4F78u);
    ctx->pc = 0x1A4F74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4F70u;
    // 0x1a4f74: 0x448021  addu        $s0, $v0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4800u, 0x1A4F70u, 0x1A4F78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4F78u;
label_1a4f78:
    // 0x1a4f78: 0x50102b  sltu        $v0, $v0, $s0
    ctx->pc = 0x1a4f78u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x1a4f7c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1A4F7Cu;
    {
        const bool branch_taken_0x1a4f7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4F7Cu;
        // 0x1a4f80: 0x8e425b54  lw          $v0, 0x5B54($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 23380)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4f7c) {
            ctx->pc = 0x1A4FA8u;
            return;
        }
    }
    ctx->pc = 0x1A4F84u;
    // 0x1a4f84: 0xc08e1ce  jal         func_238738
    ctx->pc = 0x1A4F84u;
    SET_GPR_U32(ctx, 31, 0x1A4F8Cu);
    ctx->pc = 0x238738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238738u, 0x1A4F84u, 0x1A4F8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4F8Cu;
label_1a4f8c:
    // 0x1a4f8c: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x1a4f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1a4f90: 0x12200002  beqz        $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1A4F90u;
    {
        const bool branch_taken_0x1a4f90 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4F90u;
        // 0x1a4f94: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4f90) {
            ctx->pc = 0x1A4F9Cu;
            goto label_1a4f9c;
        }
    }
    ctx->pc = 0x1A4F98u;
    // 0x1a4f98: 0x42000038  ei
    ctx->pc = 0x1a4f98u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
label_1a4f9c:
    // 0x1a4f9c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1a4f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1a4fa0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1A4FA0u;
    {
        const bool branch_taken_0x1a4fa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4FA0u;
        // 0x1a4fa4: 0x3442ffff  ori         $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4fa0) {
            ctx->pc = 0x1A4FB4u;
            return;
        }
    }
    ctx->pc = 0x1A4FA8u;
}
