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

// Function: FUN_0016fec0
// Address: 0x16fec0 - 0x16ff7c
void FUN_0016fec0_0x16fec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0016fec0_0x16fec0");
#endif

    switch (ctx->pc) {
        case 0x16ff5cu: goto label_16ff5c;
        case 0x16ff74u: goto label_16ff74;
        default: break;
    }

    ctx->pc = 0x16fec0u;

    // 0x16fec0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x16fec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16fec4: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x16fec4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
    // 0x16fec8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x16fec8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x16fecc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x16feccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16fed0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x16fed0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x16fed4: 0xac201ed8  sw          $zero, 0x1ED8($at)
    ctx->pc = 0x16fed4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x281ED8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x281ED8u, _value); } while (0);
    // 0x16fed8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x16fed8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16fedc: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x16fedcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
    // 0x16fee0: 0xaf828184  sw          $v0, -0x7E7C($gp)
    ctx->pc = 0x16fee0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934916), GPR_U32(ctx, 2));
    // 0x16fee4: 0xac201edc  sw          $zero, 0x1EDC($at)
    ctx->pc = 0x16fee4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x281EDCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x281EDCu, _value); } while (0);
    // 0x16fee8: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x16fee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x16feec: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x16feecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
    // 0x16fef0: 0xa38281c8  sb          $v0, -0x7E38($gp)
    ctx->pc = 0x16fef0u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294934984), (uint8_t)GPR_U32(ctx, 2));
    // 0x16fef4: 0xac201ee0  sw          $zero, 0x1EE0($at)
    ctx->pc = 0x16fef4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x281EE0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x281EE0u, _value); } while (0);
    // 0x16fef8: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x16fef8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x16fefc: 0xa38281c9  sb          $v0, -0x7E37($gp)
    ctx->pc = 0x16fefcu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294934985), (uint8_t)GPR_U32(ctx, 2));
    // 0x16ff00: 0x9024490d  lbu         $a0, 0x490D($at)
    ctx->pc = 0x16ff00u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)FAST_READ8(0x33490Du));
    // 0x16ff04: 0xaf808728  sw          $zero, -0x78D8($gp)
    ctx->pc = 0x16ff04u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936360), GPR_U32(ctx, 0));
    // 0x16ff08: 0xaf8086fc  sw          $zero, -0x7904($gp)
    ctx->pc = 0x16ff08u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936316), GPR_U32(ctx, 0));
    // 0x16ff0c: 0xaf808700  sw          $zero, -0x7900($gp)
    ctx->pc = 0x16ff0cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936320), GPR_U32(ctx, 0));
    // 0x16ff10: 0xaf808704  sw          $zero, -0x78FC($gp)
    ctx->pc = 0x16ff10u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936324), GPR_U32(ctx, 0));
    // 0x16ff14: 0xaf808708  sw          $zero, -0x78F8($gp)
    ctx->pc = 0x16ff14u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936328), GPR_U32(ctx, 0));
    // 0x16ff18: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x16ff18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x16ff1c: 0xaf848714  sw          $a0, -0x78EC($gp)
    ctx->pc = 0x16ff1cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936340), GPR_U32(ctx, 4));
    // 0x16ff20: 0x8c234970  lw          $v1, 0x4970($at)
    ctx->pc = 0x16ff20u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x334970u));
    // 0x16ff24: 0xaf80870c  sw          $zero, -0x78F4($gp)
    ctx->pc = 0x16ff24u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936332), GPR_U32(ctx, 0));
    // 0x16ff28: 0xa3808188  sb          $zero, -0x7E78($gp)
    ctx->pc = 0x16ff28u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294934920), (uint8_t)GPR_U32(ctx, 0));
    // 0x16ff2c: 0xaf808190  sw          $zero, -0x7E70($gp)
    ctx->pc = 0x16ff2cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934928), GPR_U32(ctx, 0));
    // 0x16ff30: 0xaf808198  sw          $zero, -0x7E68($gp)
    ctx->pc = 0x16ff30u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934936), GPR_U32(ctx, 0));
    // 0x16ff34: 0xaf8081a0  sw          $zero, -0x7E60($gp)
    ctx->pc = 0x16ff34u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934944), GPR_U32(ctx, 0));
    // 0x16ff38: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x16ff38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x16ff3c: 0xaf8381c0  sw          $v1, -0x7E40($gp)
    ctx->pc = 0x16ff3cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934976), GPR_U32(ctx, 3));
    // 0x16ff40: 0x8c224a00  lw          $v0, 0x4A00($at)
    ctx->pc = 0x16ff40u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x334A00u));
    // 0x16ff44: 0xa3808189  sb          $zero, -0x7E77($gp)
    ctx->pc = 0x16ff44u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294934921), (uint8_t)GPR_U32(ctx, 0));
    // 0x16ff48: 0xaf808194  sw          $zero, -0x7E6C($gp)
    ctx->pc = 0x16ff48u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934932), GPR_U32(ctx, 0));
    // 0x16ff4c: 0xaf80819c  sw          $zero, -0x7E64($gp)
    ctx->pc = 0x16ff4cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934940), GPR_U32(ctx, 0));
    // 0x16ff50: 0xaf8081a4  sw          $zero, -0x7E5C($gp)
    ctx->pc = 0x16ff50u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934948), GPR_U32(ctx, 0));
    // 0x16ff54: 0xc05be08  jal         func_16F820
    ctx->pc = 0x16FF54u;
    SET_GPR_U32(ctx, 31, 0x16FF5Cu);
    ctx->pc = 0x16FF58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16FF54u;
    // 0x16ff58: 0xaf8281c4  sw          $v0, -0x7E3C($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934980), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F820u, 0x16FF54u, 0x16FF5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16FF5Cu;
label_16ff5c:
    // 0x16ff5c: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x16FF5Cu;
    {
        const bool branch_taken_0x16ff5c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x16FF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FF5Cu;
        // 0x16ff60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ff5c) {
            ctx->pc = 0x16FF6Cu;
            goto label_16ff6c;
        }
    }
    ctx->pc = 0x16FF64u;
    // 0x16ff64: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x16FF64u;
    {
        const bool branch_taken_0x16ff64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16FF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FF64u;
        // 0x16ff68: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ff64) {
            ctx->pc = 0x16FF78u;
            goto label_16ff78;
        }
    }
    ctx->pc = 0x16FF6Cu;
label_16ff6c:
    // 0x16ff6c: 0xc05bd78  jal         func_16F5E0
    ctx->pc = 0x16FF6Cu;
    SET_GPR_U32(ctx, 31, 0x16FF74u);
    ctx->pc = 0x16F5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F5E0u, 0x16FF6Cu, 0x16FF74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16FF74u;
label_16ff74:
    // 0x16ff74: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x16ff74u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16ff78:
    // 0x16ff78: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x16ff78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->pc = 0x16ff7cu;
}
