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

// Function: FUN_001a4f20
// Address: 0x1a4f20 - 0x1a4fc4
void FUN_001a4f20_0x1a4f20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001a4f20_0x1a4f20");
#endif

    switch (ctx->pc) {
        case 0x1a4f48u: goto label_1a4f48;
        case 0x1a4f78u: goto label_1a4f78;
        case 0x1a4f8cu: goto label_1a4f8c;
        default: break;
    }

    ctx->pc = 0x1a4f20u;

    // 0x1a4f20: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1a4f20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1a4f24: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1a4f24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1a4f28: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1a4f28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1a4f2c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1a4f2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1a4f30: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a4f30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a4f34: 0x40116000  mfc0        $s1, Status
    ctx->pc = 0x1a4f34u;
    SET_GPR_S32(ctx, 17, (int32_t)ctx->cop0_status);
    // 0x1a4f38: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x1a4f38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x1a4f3c: 0x2228824  and         $s1, $s1, $v0
    ctx->pc = 0x1a4f3cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & GPR_U64(ctx, 2));
    // 0x1a4f40: 0x1220000a  beqz        $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x1A4F40u;
    {
        const bool branch_taken_0x1a4f40 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4F40u;
        // 0x1a4f44: 0x3c120028  lui         $s2, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)40 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4f40) {
            ctx->pc = 0x1A4F6Cu;
            goto label_1a4f6c;
        }
    }
    ctx->pc = 0x1A4F48u;
label_1a4f48:
    // 0x1a4f48: 0x42000039  di
    ctx->pc = 0x1a4f48u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x1a4f4c: 0x40f  sync.p
    ctx->pc = 0x1a4f4cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x1a4f50: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x1a4f50u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x1a4f54: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x1a4f54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x1a4f58: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1a4f58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1a4f5c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1A4F5Cu;
    {
        const bool branch_taken_0x1a4f5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a4f5c) {
            ctx->pc = 0x1A4F48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a4f48;
        }
    }
    ctx->pc = 0x1A4F64u;
    // 0x1a4f64: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1A4F64u;
    {
        const bool branch_taken_0x1a4f64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4F64u;
        // 0x1a4f68: 0x8e425b54  lw          $v0, 0x5B54($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 23380)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4f64) {
            ctx->pc = 0x1A4F70u;
            goto label_1a4f70;
        }
    }
    ctx->pc = 0x1A4F6Cu;
label_1a4f6c:
    // 0x1a4f6c: 0x8e425b54  lw          $v0, 0x5B54($s2)
    ctx->pc = 0x1a4f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 23380)));
label_1a4f70:
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
            goto label_1a4fa8;
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
            goto label_1a4fb4;
        }
    }
    ctx->pc = 0x1A4FA8u;
label_1a4fa8:
    // 0x1a4fa8: 0x12200002  beqz        $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1A4FA8u;
    {
        const bool branch_taken_0x1a4fa8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4FA8u;
        // 0x1a4fac: 0xae505b54  sw          $s0, 0x5B54($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 23380), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4fa8) {
            ctx->pc = 0x1A4FB4u;
            goto label_1a4fb4;
        }
    }
    ctx->pc = 0x1A4FB0u;
    // 0x1a4fb0: 0x42000038  ei
    ctx->pc = 0x1a4fb0u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
label_1a4fb4:
    // 0x1a4fb4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1a4fb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a4fb8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1a4fb8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a4fbc: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1a4fbcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a4fc0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a4fc0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x1a4fc4u;
}
