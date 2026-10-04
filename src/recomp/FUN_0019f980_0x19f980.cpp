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

// Function: FUN_0019f980
// Address: 0x19f980 - 0x19fa84
void FUN_0019f980_0x19f980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0019f980_0x19f980");
#endif

    switch (ctx->pc) {
        case 0x19f9c0u: goto label_19f9c0;
        case 0x19f9c8u: goto label_19f9c8;
        case 0x19f9d4u: goto label_19f9d4;
        case 0x19fa18u: goto label_19fa18;
        case 0x19fa28u: goto label_19fa28;
        case 0x19fa38u: goto label_19fa38;
        case 0x19fa50u: goto label_19fa50;
        default: break;
    }

    ctx->pc = 0x19f980u;

    // 0x19f980: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x19f980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x19f984: 0xffb60080  sd          $s6, 0x80($sp)
    ctx->pc = 0x19f984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 22));
    // 0x19f988: 0xffb50070  sd          $s5, 0x70($sp)
    ctx->pc = 0x19f988u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 21));
    // 0x19f98c: 0x24160005  addiu       $s6, $zero, 0x5
    ctx->pc = 0x19f98cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x19f990: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x19f990u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x19f994: 0x241501b3  addiu       $s5, $zero, 0x1B3
    ctx->pc = 0x19f994u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 435));
    // 0x19f998: 0xffb30050  sd          $s3, 0x50($sp)
    ctx->pc = 0x19f998u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
    // 0x19f99c: 0x24140100  addiu       $s4, $zero, 0x100
    ctx->pc = 0x19f99cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x19f9a0: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x19f9a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x19f9a4: 0x241301b7  addiu       $s3, $zero, 0x1B7
    ctx->pc = 0x19f9a4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 439));
    // 0x19f9a8: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x19f9a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x19f9ac: 0x241201b8  addiu       $s2, $zero, 0x1B8
    ctx->pc = 0x19f9acu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 440));
    // 0x19f9b0: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x19f9b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x19f9b4: 0x2411ffff  addiu       $s1, $zero, -0x1
    ctx->pc = 0x19f9b4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x19f9b8: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x19f9b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x19f9bc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19f9bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_19f9c0:
    // 0x19f9c0: 0xc067e26  jal         func_19F898
    ctx->pc = 0x19F9C0u;
    SET_GPR_U32(ctx, 31, 0x19F9C8u);
    ctx->pc = 0x19F9C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F9C0u;
    // 0x19f9c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F898u, 0x19F9C0u, 0x19F9C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F9C8u;
label_19f9c8:
    // 0x19f9c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19f9c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f9cc: 0xc067dd2  jal         func_19F748
    ctx->pc = 0x19F9CCu;
    SET_GPR_U32(ctx, 31, 0x19F9D4u);
    ctx->pc = 0x19F9D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F9CCu;
    // 0x19f9d0: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F748u, 0x19F9CCu, 0x19F9D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F9D4u;
label_19f9d4:
    // 0x19f9d4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x19f9d4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f9d8: 0x1075000d  beq         $v1, $s5, . + 4 + (0xD << 2)
    ctx->pc = 0x19F9D8u;
    {
        const bool branch_taken_0x19f9d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 21));
        ctx->pc = 0x19F9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F9D8u;
        // 0x19f9dc: 0x2c6201b4  sltiu       $v0, $v1, 0x1B4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)436) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f9d8) {
            ctx->pc = 0x19FA10u;
            goto label_19fa10;
        }
    }
    ctx->pc = 0x19F9E0u;
    // 0x19f9e0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x19F9E0u;
    {
        const bool branch_taken_0x19f9e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19f9e0) {
            ctx->pc = 0x19F9F8u;
            goto label_19f9f8;
        }
    }
    ctx->pc = 0x19F9E8u;
    // 0x19f9e8: 0x10740011  beq         $v1, $s4, . + 4 + (0x11 << 2)
    ctx->pc = 0x19F9E8u;
    {
        const bool branch_taken_0x19f9e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 20));
        if (branch_taken_0x19f9e8) {
            ctx->pc = 0x19FA30u;
            goto label_19fa30;
        }
    }
    ctx->pc = 0x19F9F0u;
    // 0x19f9f0: 0x1000fff3  b           . + 4 + (-0xD << 2)
    ctx->pc = 0x19F9F0u;
    {
        const bool branch_taken_0x19f9f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19f9f0) {
            ctx->pc = 0x19F9C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19f9c0;
        }
    }
    ctx->pc = 0x19F9F8u;
label_19f9f8:
    // 0x19f9f8: 0x1073001a  beq         $v1, $s3, . + 4 + (0x1A << 2)
    ctx->pc = 0x19F9F8u;
    {
        const bool branch_taken_0x19f9f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 19));
        ctx->pc = 0x19F9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F9F8u;
        // 0x19f9fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f9f8) {
            ctx->pc = 0x19FA64u;
            goto label_19fa64;
        }
    }
    ctx->pc = 0x19FA00u;
    // 0x19fa00: 0x10720007  beq         $v1, $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x19FA00u;
    {
        const bool branch_taken_0x19fa00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 18));
        if (branch_taken_0x19fa00) {
            ctx->pc = 0x19FA20u;
            goto label_19fa20;
        }
    }
    ctx->pc = 0x19FA08u;
    // 0x19fa08: 0x1000ffed  b           . + 4 + (-0x13 << 2)
    ctx->pc = 0x19FA08u;
    {
        const bool branch_taken_0x19fa08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19fa08) {
            ctx->pc = 0x19F9C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19f9c0;
        }
    }
    ctx->pc = 0x19FA10u;
label_19fa10:
    // 0x19fa10: 0xc068d86  jal         func_1A3618
    ctx->pc = 0x19FA10u;
    SET_GPR_U32(ctx, 31, 0x19FA18u);
    ctx->pc = 0x19FA14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19FA10u;
    // 0x19fa14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A3618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3618u, 0x19FA10u, 0x19FA18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19FA18u;
label_19fa18:
    // 0x19fa18: 0x1000ffe9  b           . + 4 + (-0x17 << 2)
    ctx->pc = 0x19FA18u;
    {
        const bool branch_taken_0x19fa18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19fa18) {
            ctx->pc = 0x19F9C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19f9c0;
        }
    }
    ctx->pc = 0x19FA20u;
label_19fa20:
    // 0x19fa20: 0xc067fcc  jal         func_19FF30
    ctx->pc = 0x19FA20u;
    SET_GPR_U32(ctx, 31, 0x19FA28u);
    ctx->pc = 0x19FA24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19FA20u;
    // 0x19fa24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FF30u, 0x19FA20u, 0x19FA28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19FA28u;
label_19fa28:
    // 0x19fa28: 0x1000ffe5  b           . + 4 + (-0x1B << 2)
    ctx->pc = 0x19FA28u;
    {
        const bool branch_taken_0x19fa28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19fa28) {
            ctx->pc = 0x19F9C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19f9c0;
        }
    }
    ctx->pc = 0x19FA30u;
label_19fa30:
    // 0x19fa30: 0xc067ea4  jal         func_19FA90
    ctx->pc = 0x19FA30u;
    SET_GPR_U32(ctx, 31, 0x19FA38u);
    ctx->pc = 0x19FA34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19FA30u;
    // 0x19fa34: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FA90u, 0x19FA30u, 0x19FA38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19FA38u;
label_19fa38:
    // 0x19fa38: 0x8e040858  lw          $a0, 0x858($s0)
    ctx->pc = 0x19fa38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2136)));
    // 0x19fa3c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x19fa3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19fa40: 0xafb60000  sw          $s6, 0x0($sp)
    ctx->pc = 0x19fa40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 22));
    // 0x19fa44: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x19fa44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x19fa48: 0xc068b12  jal         func_1A2C48
    ctx->pc = 0x19FA48u;
    SET_GPR_U32(ctx, 31, 0x19FA50u);
    ctx->pc = 0x19FA4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19FA48u;
    // 0x19fa4c: 0xffb10008  sd          $s1, 0x8($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2C48u, 0x19FA48u, 0x19FA50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19FA50u;
label_19fa50:
    // 0x19fa50: 0xdfa20010  ld          $v0, 0x10($sp)
    ctx->pc = 0x19fa50u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19fa54: 0xdfa30008  ld          $v1, 0x8($sp)
    ctx->pc = 0x19fa54u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x19fa58: 0xfe020830  sd          $v0, 0x830($s0)
    ctx->pc = 0x19fa58u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 2096), GPR_U64(ctx, 2));
    // 0x19fa5c: 0xfe030828  sd          $v1, 0x828($s0)
    ctx->pc = 0x19fa5cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 2088), GPR_U64(ctx, 3));
    // 0x19fa60: 0x8e020150  lw          $v0, 0x150($s0)
    ctx->pc = 0x19fa60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
label_19fa64:
    // 0x19fa64: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x19fa64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x19fa68: 0xdfb60080  ld          $s6, 0x80($sp)
    ctx->pc = 0x19fa68u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x19fa6c: 0xdfb50070  ld          $s5, 0x70($sp)
    ctx->pc = 0x19fa6cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x19fa70: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x19fa70u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x19fa74: 0xdfb30050  ld          $s3, 0x50($sp)
    ctx->pc = 0x19fa74u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x19fa78: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x19fa78u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19fa7c: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x19fa7cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19fa80: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x19fa80u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->pc = 0x19fa84u;
}
