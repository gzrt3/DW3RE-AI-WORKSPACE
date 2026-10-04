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

// Function: entry_0022fe08
// Address: 0x22fe08 - 0x22fe5c
void entry_0022fe08_0x22fe08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022fe08_0x22fe08");
#endif

    switch (ctx->pc) {
        case 0x22fe14u: goto label_22fe14;
        default: break;
    }

    ctx->pc = 0x22fe08u;

    // 0x22fe08: 0x3c050059  lui         $a1, 0x59
    ctx->pc = 0x22fe08u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
    // 0x22fe0c: 0xc045100  jal         func_114400
    ctx->pc = 0x22FE0Cu;
    SET_GPR_U32(ctx, 31, 0x22FE14u);
    ctx->pc = 0x22FE10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22FE0Cu;
    // 0x22fe10: 0x24a5a650  addiu       $a1, $a1, -0x59B0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x114400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114400u, 0x22FE0Cu, 0x22FE14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22FE14u;
label_22fe14:
    // 0x22fe14: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x22FE14u;
    {
        const bool branch_taken_0x22fe14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22fe14) {
            ctx->pc = 0x22FE5Cu;
            return;
        }
    }
    ctx->pc = 0x22FE1Cu;
    // 0x22fe1c: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x22fe1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
    // 0x22fe20: 0x3c060059  lui         $a2, 0x59
    ctx->pc = 0x22fe20u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)89 << 16));
    // 0x22fe24: 0xc422a650  lwc1        $f2, -0x59B0($at)
    ctx->pc = 0x22fe24u;
    { uint32_t bits = FAST_READ32(0x58A650u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x22fe28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22fe28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22fe2c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x22fe2cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x22fe30: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x22fe30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x22fe34: 0x24c6a760  addiu       $a2, $a2, -0x58A0
    ctx->pc = 0x22fe34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294944608));
    // 0x22fe38: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x22fe38u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x22fe3c: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x22fe3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
    // 0x22fe40: 0xc421aad0  lwc1        $f1, -0x5530($at)
    ctx->pc = 0x22fe40u;
    { uint32_t bits = FAST_READ32(0x58AAD0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22fe44: 0xe7a20020  swc1        $f2, 0x20($sp)
    ctx->pc = 0x22fe44u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x22fe48: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x22fe48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
    // 0x22fe4c: 0xc420a658  lwc1        $f0, -0x59A8($at)
    ctx->pc = 0x22fe4cu;
    { uint32_t bits = FAST_READ32(0x58A658u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22fe50: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x22fe50u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x22fe54: 0xc05ced8  jal         func_173B60
    ctx->pc = 0x22FE54u;
    SET_GPR_U32(ctx, 31, 0x22FE5Cu);
    ctx->pc = 0x22FE58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22FE54u;
    // 0x22fe58: 0xe7a00028  swc1        $f0, 0x28($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x173B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B60u, 0x22FE54u, 0x22FE5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22FE5Cu;
}
