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

// Function: entry_00151030
// Address: 0x151030 - 0x1510c4
void entry_00151030_0x151030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00151030_0x151030");
#endif

    switch (ctx->pc) {
        case 0x1510c0u: goto label_1510c0;
        default: break;
    }

    ctx->pc = 0x151030u;

    // 0x151030: 0x8603020a  lh          $v1, 0x20A($s0)
    ctx->pc = 0x151030u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 522)));
    // 0x151034: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x151034u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x151038: 0x14620022  bne         $v1, $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x151038u;
    {
        const bool branch_taken_0x151038 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x15103Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151038u;
        // 0x15103c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151038) {
            ctx->pc = 0x1510C4u;
            return;
        }
    }
    ctx->pc = 0x151040u;
    // 0x151040: 0xc6000044  lwc1        $f0, 0x44($s0)
    ctx->pc = 0x151040u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x151044: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x151044u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x151048: 0x34430fdb  ori         $v1, $v0, 0xFDB
    ctx->pc = 0x151048u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x15104c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x15104cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x151050: 0x0  nop
    ctx->pc = 0x151050u;
    // NOP
    // 0x151054: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x151054u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x151058: 0x46016036  c.le.s      $f12, $f1
    ctx->pc = 0x151058u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15105c: 0x0  nop
    ctx->pc = 0x15105cu;
    // NOP
    // 0x151060: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x151060u;
    {
        const bool branch_taken_0x151060 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x151064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151060u;
        // 0x151064: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151060) {
            ctx->pc = 0x15106Cu;
            goto label_15106c;
        }
    }
    ctx->pc = 0x151068u;
    // 0x151068: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x151068u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15106c:
    // 0x15106c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x15106Cu;
    {
        const bool branch_taken_0x15106c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15106c) {
            ctx->pc = 0x151088u;
            goto label_151088;
        }
    }
    ctx->pc = 0x151074u;
    // 0x151074: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x151074u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x151078: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x151078u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x15107c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15107cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x151080: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x151080u;
    {
        const bool branch_taken_0x151080 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x151084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151080u;
        // 0x151084: 0x46006301  sub.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x151080) {
            ctx->pc = 0x1510B8u;
            goto label_1510b8;
        }
    }
    ctx->pc = 0x151088u;
label_151088:
    // 0x151088: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x151088u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
    // 0x15108c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x15108cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x151090: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x151090u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x151094: 0x0  nop
    ctx->pc = 0x151094u;
    // NOP
    // 0x151098: 0x46006036  c.le.s      $f12, $f0
    ctx->pc = 0x151098u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15109c: 0x0  nop
    ctx->pc = 0x15109cu;
    // NOP
    // 0x1510a0: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x1510A0u;
    {
        const bool branch_taken_0x1510a0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1510A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1510A0u;
        // 0x1510a4: 0x3c0240c9  lui         $v0, 0x40C9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1510a0) {
            ctx->pc = 0x1510B8u;
            goto label_1510b8;
        }
    }
    ctx->pc = 0x1510A8u;
    // 0x1510a8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1510a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1510ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1510acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1510b0: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x1510B0u;
    {
        const bool branch_taken_0x1510b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1510B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1510B0u;
        // 0x1510b4: 0x460c0300  add.s       $f12, $f0, $f12 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1510b0) {
            ctx->pc = 0x1510B8u;
            goto label_1510b8;
        }
    }
    ctx->pc = 0x1510B8u;
label_1510b8:
    // 0x1510b8: 0xc08c2ec  jal         func_230BB0
    ctx->pc = 0x1510B8u;
    SET_GPR_U32(ctx, 31, 0x1510C0u);
    ctx->pc = 0x230BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230BB0u, 0x1510B8u, 0x1510C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1510C0u;
label_1510c0:
    // 0x1510c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1510c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1510c4u;
}
