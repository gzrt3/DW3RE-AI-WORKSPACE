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

// Function: FUN_001c8ab0
// Address: 0x1c8ab0 - 0x1c8b20
void FUN_001c8ab0_0x1c8ab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001c8ab0_0x1c8ab0");
#endif

    switch (ctx->pc) {
        case 0x1c8adcu: goto label_1c8adc;
        case 0x1c8aecu: goto label_1c8aec;
        case 0x1c8b0cu: goto label_1c8b0c;
        default: break;
    }

    ctx->pc = 0x1c8ab0u;

    // 0x1c8ab0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c8ab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1c8ab4: 0x3c010029  lui         $at, 0x29
    ctx->pc = 0x1c8ab4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)41 << 16));
    // 0x1c8ab8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1c8ab8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1c8abc: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x1c8abcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1c8ac0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1c8ac0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1c8ac4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c8ac4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1c8ac8: 0x8c306980  lw          $s0, 0x6980($at)
    ctx->pc = 0x1c8ac8u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x296980u));
    // 0x1c8acc: 0x3c010029  lui         $at, 0x29
    ctx->pc = 0x1c8accu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)41 << 16));
    // 0x1c8ad0: 0x8c316984  lw          $s1, 0x6984($at)
    ctx->pc = 0x1c8ad0u;
    SET_GPR_S32(ctx, 17, (int32_t)FAST_READ32(0x296984u));
    // 0x1c8ad4: 0xc070080  jal         func_1C0200
    ctx->pc = 0x1C8AD4u;
    SET_GPR_U32(ctx, 31, 0x1C8ADCu);
    ctx->pc = 0x1C8AD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8AD4u;
    // 0x1c8ad8: 0x112ac0  sll         $a1, $s1, 11 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 17), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0200u, 0x1C8AD4u, 0x1C8ADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8ADCu;
label_1c8adc:
    // 0x1c8adc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c8adcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8ae0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1c8ae0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8ae4: 0xc041744  jal         func_105D10
    ctx->pc = 0x1C8AE4u;
    SET_GPR_U32(ctx, 31, 0x1C8AECu);
    ctx->pc = 0x1C8AE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8AE4u;
    // 0x1c8ae8: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105D10u, 0x1C8AE4u, 0x1C8AECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8AECu;
label_1c8aec:
    // 0x1c8aec: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1c8aecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8af0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c8af0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8af4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c8af4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8af8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1c8af8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8afc: 0x24070017  addiu       $a3, $zero, 0x17
    ctx->pc = 0x1c8afcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x1c8b00: 0x240800a8  addiu       $t0, $zero, 0xA8
    ctx->pc = 0x1c8b00u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 168));
    // 0x1c8b04: 0xc0603d4  jal         func_180F50
    ctx->pc = 0x1C8B04u;
    SET_GPR_U32(ctx, 31, 0x1C8B0Cu);
    ctx->pc = 0x1C8B08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8B04u;
    // 0x1c8b08: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x180F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180F50u, 0x1C8B04u, 0x1C8B0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8B0Cu;
label_1c8b0c:
    // 0x1c8b0c: 0xff828a80  sd          $v0, -0x7580($gp)
    ctx->pc = 0x1c8b0cu;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294937216), GPR_U64(ctx, 2));
    // 0x1c8b10: 0x24040017  addiu       $a0, $zero, 0x17
    ctx->pc = 0x1c8b10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x1c8b14: 0x240500a9  addiu       $a1, $zero, 0xA9
    ctx->pc = 0x1c8b14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 169));
    // 0x1c8b18: 0xc060578  jal         func_1815E0
    ctx->pc = 0x1C8B18u;
    SET_GPR_U32(ctx, 31, 0x1C8B20u);
    ctx->pc = 0x1C8B1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8B18u;
    // 0x1c8b1c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1815E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1815E0u, 0x1C8B18u, 0x1C8B20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8B20u;
}
