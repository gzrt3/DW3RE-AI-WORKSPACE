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

// Function: entry_00134ad8
// Address: 0x134ad8 - 0x134b40
void entry_00134ad8_0x134ad8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00134ad8_0x134ad8");
#endif

    switch (ctx->pc) {
        case 0x134aecu: goto label_134aec;
        case 0x134afcu: goto label_134afc;
        case 0x134b10u: goto label_134b10;
        case 0x134b24u: goto label_134b24;
        default: break;
    }

    ctx->pc = 0x134ad8u;

    // 0x134ad8: 0x3c040031  lui         $a0, 0x31
    ctx->pc = 0x134ad8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49 << 16));
    // 0x134adc: 0x2484a3f0  addiu       $a0, $a0, -0x5C10
    ctx->pc = 0x134adcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943728));
    // 0x134ae0: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x134ae0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x134ae4: 0xc04cf10  jal         func_133C40
    ctx->pc = 0x134AE4u;
    SET_GPR_U32(ctx, 31, 0x134AECu);
    ctx->pc = 0x134AE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134AE4u;
    // 0x134ae8: 0x27a6005c  addiu       $a2, $sp, 0x5C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    ctx->in_delay_slot = false;
    ctx->pc = 0x133C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x133C40u, 0x134AE4u, 0x134AECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134AECu;
label_134aec:
    // 0x134aec: 0xc7b4005c  lwc1        $f20, 0x5C($sp)
    ctx->pc = 0x134aecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x134af0: 0x3c040031  lui         $a0, 0x31
    ctx->pc = 0x134af0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49 << 16));
    // 0x134af4: 0xc066e44  jal         func_19B910
    ctx->pc = 0x134AF4u;
    SET_GPR_U32(ctx, 31, 0x134AFCu);
    ctx->pc = 0x134AF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134AF4u;
    // 0x134af8: 0x2484a460  addiu       $a0, $a0, -0x5BA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B910u, 0x134AF4u, 0x134AFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134AFCu;
label_134afc:
    // 0x134afc: 0x3c040031  lui         $a0, 0x31
    ctx->pc = 0x134afcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49 << 16));
    // 0x134b00: 0x2484a460  addiu       $a0, $a0, -0x5BA0
    ctx->pc = 0x134b00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943840));
    // 0x134b04: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x134b04u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x134b08: 0xc066ec0  jal         func_19BB00
    ctx->pc = 0x134B08u;
    SET_GPR_U32(ctx, 31, 0x134B10u);
    ctx->pc = 0x134B0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134B08u;
    // 0x134b0c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BB00u, 0x134B08u, 0x134B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134B10u;
label_134b10:
    // 0x134b10: 0x3c040031  lui         $a0, 0x31
    ctx->pc = 0x134b10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49 << 16));
    // 0x134b14: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x134b14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x134b18: 0x2484a460  addiu       $a0, $a0, -0x5BA0
    ctx->pc = 0x134b18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943840));
    // 0x134b1c: 0xc066e1a  jal         func_19B868
    ctx->pc = 0x134B1Cu;
    SET_GPR_U32(ctx, 31, 0x134B24u);
    ctx->pc = 0x134B20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134B1Cu;
    // 0x134b20: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B868u, 0x134B1Cu, 0x134B24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134B24u;
label_134b24:
    // 0x134b24: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x134b24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x134b28: 0x8c23a3e0  lw          $v1, -0x5C20($at)
    ctx->pc = 0x134b28u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x30A3E0u));
    // 0x134b2c: 0xe79484f8  swc1        $f20, -0x7B08($gp)
    ctx->pc = 0x134b2cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294935800), bits); }
    // 0x134b30: 0x34630400  ori         $v1, $v1, 0x400
    ctx->pc = 0x134b30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1024);
    // 0x134b34: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x134b34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x134b38: 0x100000c1  b           . + 4 + (0xC1 << 2)
    ctx->pc = 0x134B38u;
    {
        const bool branch_taken_0x134b38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x134B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134B38u;
        // 0x134b3c: 0xac23a3e0  sw          $v1, -0x5C20($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294943712), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134b38) {
            ctx->pc = 0x134E40u;
            return;
        }
    }
    ctx->pc = 0x134B40u;
}
